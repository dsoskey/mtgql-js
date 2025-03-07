import {Parser} from 'nearley'
import {AstNode, NearlyError, normCardList, NormedCard, SearchOptions,} from './types'
import {Card} from './generated'
import {CachingFilterProvider, FilterProvider} from './filters'
import {chooseFilterFunc} from './filters/print'
import {SortFunctions, SortOrder} from './filters/order'
import sortBy from 'lodash/sortBy'
import {MQLParser} from './mql'
import {DataProvider} from './filters/dataProvider'
import {FilterNode} from './filters/base'

interface VennDiagram {
  cards: Card[]
  leftIds: Set<string>
  bothIds: Set<string>
  rightIds: Set<string>
}

type ParserProducer = () => Parser

export interface QueryRunnerParams<T> {
  corpus: T[]
  defaultOptions?: SearchOptions,
  dataProvider: DataProvider
  getParser?: ParserProducer
}

export class QueryRunner {
  private readonly corpus: NormedCard[]
  private readonly defaultOptions: SearchOptions
  private readonly getParser: ParserProducer

  private readonly filters: FilterProvider

  constructor({ corpus, defaultOptions, dataProvider, getParser }: QueryRunnerParams<NormedCard>) {
    this.corpus = corpus;
    this.filters = new CachingFilterProvider(dataProvider)
    this.getParser = getParser ?? MQLParser
    this.defaultOptions = defaultOptions ?? { order: 'name' }
  }

  static fromCardList({ corpus, ...rest }: QueryRunnerParams<Card>) {
    return new QueryRunner({
      corpus: normCardList(corpus),
      ...rest
    })
  }

  search = async (query: string, _options?: Partial<SearchOptions>): Promise<Card[]> => {
    const options: SearchOptions = { ...this.defaultOptions, ..._options }
    const func = QueryRunner.generateSearchFunction(this.corpus, this.filters, this.getParser)
    return func(query, options)
  }

  static parseFilterNode = async (getParser: ParserProducer, filters: FilterProvider, query: string): Promise<FilterNode> => {
    const parser = getParser();
    try {
      console.debug(`feeding ${query}`)
      parser.feed(query)
      console.debug(`parsed`)
      if (parser.results.length > 1) {
        console.debug(parser.results)
        const uniqueParses = new Set(parser.results.map(it => JSON.stringify(it)))
        if (uniqueParses.size > 1) {
          console.warn('ambiguous parse!')
          return Promise.reject({
            query,
            errorOffset: 0,
            message: "ambiguous parse! This indicates a bug in the parser, not in your search query.",
            type: "internal"
          })
        }
      } else if (parser.results.length === 1) {
        console.debug(parser.results[0])
      } else {
        const baseMessage = "Parser could not recognize your query."
        const endsWithOperator = /(!=|<>|<=|>=|[<>≥:=≤])$/.test(query)
        return Promise.reject({
          query,
          errorOffset: endsWithOperator ? query.length - 1 : 0,
          message: endsWithOperator
              ? `${baseMessage} The last search filter might need a corresponding value`
              : baseMessage,
          type: "syntax"
        })
      }
    } catch (error) {
      const { message, token } = error as NearlyError
      return Promise.reject({
        query,
        errorOffset: token?.offset ?? 0,
        message,
        type: "syntax"
      })
    }
    try {
      return await filters.visitNode(parser.results[0] as AstNode)
    } catch (error) {
      return Promise.reject({
        query,
        errorOffset: error.errorOffset ?? 0,
        message: error.message,
        type: "parse"
      })
    }
      // .mapErr(err => ({ ...err, query, type: "parse" }))
  }

  static generateSearchFunction = (
    corpus: NormedCard[],
    filters: FilterProvider,
    getParser: ParserProducer = MQLParser
  ) => async (
    query: string,
    options: SearchOptions
  ): Promise<Card[]> => {
    const node = await QueryRunner.parseFilterNode(getParser, filters, query);
    const { filtersUsed, filterFunc } = node;

    // filter normedCards
    const filtered: NormedCard[] = []
    try {
      for (const card of corpus) {
        if (filterFunc(card)) {
          filtered.push(card)
        }
      }

      const printFilterFunc = chooseFilterFunc(node)

      // filter prints
      const printFiltered: Card[] = filtered.flatMap(printFilterFunc)

      // sort
      const order: SortOrder = getOrder(filtersUsed, options)
      const sorted = sortBy(printFiltered, [...SortFunctions.bySortOrder(order), SortFunctions.byName]) as Card[]

      // direction
      const direction = getDirection(filtersUsed, options)
      if (direction === 'auto') {
        switch (order) {
          case 'rarity':
          case 'usd':
          case 'tix':
          case 'eur':
          case 'edhrec':
            sorted.reverse()
            break
          case 'released':
          default:
            break
        }
      } else if (direction === 'desc') {
        sorted.reverse()
      }

      // limit
      const limit = getLimit(filtersUsed);
      if (limit >= 0) {
        return sorted.slice(0, limit);
      }

      return sorted
    } catch (e) {
      console.error(e)
      return Promise.reject({
        query,
        type: "filter",
        errorOffset: 0, // how do i manage this??
        message: `Filter error: ${e.message}`,
      })
    }
  }

  static generateVennDiagram = (
    corpus: NormedCard[],
    filters: FilterProvider,
    getParser: ParserProducer = MQLParser
  ) => async (
    left: string, right: string,
    options: SearchOptions
  ): Promise<VennDiagram> => {
    const leftNode = await QueryRunner.parseFilterNode(getParser, filters, left)
    const rightNode = await QueryRunner.parseFilterNode(getParser, filters, right)

    const leftOracles: Set<string> = new Set()
    const rightOracles: Set<string> = new Set()
    const union: NormedCard[] = []

    try {
      for (const card of corpus) {
        const isLeft = leftNode.filterFunc(card)
        const isRight = rightNode.filterFunc(card)

        if (isLeft || isRight) {
          union.push(card)
        }
        if (isRight) {
          rightOracles.add(card.oracle_id)
        }
        if (isLeft) {
          leftOracles.add(card.oracle_id)
        }
      }

      const leftPrintFilter = chooseFilterFunc(leftNode)
      const rightPrintFilter = chooseFilterFunc(rightNode)

      const leftIds: Set<string> = new Set()
      const bothIds: Set<string> = new Set()
      const rightIds: Set<string> = new Set()
      const unionPrints: Card[] = []
      for (const card of union) {
        const matchedLeft  = leftPrintFilter(card)
        for (const c of matchedLeft) {
          if (leftOracles.has(c.oracle_id)) {
            unionPrints.push(c)
            leftIds.add(c.id)
          }
        }
        const matchedRight = rightPrintFilter(card)
        for (const c of matchedRight) {
          if (rightOracles.has(c.oracle_id)) {
            if (leftIds.has(c.id)) {
              bothIds.add(c.id)
              leftIds.delete(c.id)
            } else {
              unionPrints.push(c)
              rightIds.add(c.id)
            }
          }
        }
      }

      const combinedFiltersUsed = [...leftNode.filtersUsed, ...rightNode.filtersUsed]
      const order: SortOrder = getOrder(combinedFiltersUsed, options)
      const sorted = sortBy(unionPrints, [...SortFunctions.bySortOrder(order), SortFunctions.byName]) as Card[]

      // direction
      const direction = getDirection(combinedFiltersUsed, options)
      if (direction === 'auto') {
        switch (order) {
          case 'rarity':
          case 'usd':
          case 'tix':
          case 'eur':
          case 'edhrec':
            sorted.reverse()
            break
          case 'released':
          default:
            break
        }
      } else if (direction === 'desc') {
        sorted.reverse()
      }

      return { cards: sorted, leftIds, rightIds, bothIds }
    } catch (e) {
      console.error(e)
      return Promise.reject({
        query: `left: ${left}\nright: ${right}`,
        type: "venn",
        errorOffset: 0, // how do i manage this??
        message: `Filter error: ${e.message}`,
      })
    }
  }
}

function getOrder(filtersUsed: string[], options: SearchOptions): SortOrder {
  const sortFilter = filtersUsed.find(it => it.startsWith('order:'))
  if (sortFilter !== undefined) {
    return sortFilter.replace('order:', '') as SortOrder
  }
  return options.order
}

function getDirection(filtersUsed: string[], options: SearchOptions) {
  const dirFilter = filtersUsed.find(it => it.startsWith('direction:'))
  if (dirFilter !== undefined) {
    return dirFilter.replace("direction:", "")
  }
  return options.dir ?? 'auto'
}

function getLimit(filtersUsed: string[]) {
  const sortFilter = filtersUsed.find(it => it.startsWith('limit:'))
  if (sortFilter !== undefined) {
    const result = Math.abs(parseInt(sortFilter.replace("limit:", "")))
    return isNaN(result) ? -1 : result;
  }
  return -1
}