import {andNode, defaultOperation, FilterNode, identity, identityNode, notNode, orNode} from './base'
import {
  exactMatch,
  flavorTextCount,
  noReminderRegexMatch,
  noReminderTextMatch,
  oracleTextCount,
  regexMatch,
  textMatch
} from './text'
import { isVal } from './is'
import { devotionOperation } from './devotion'
import { combatToCombatNode, powTouTotalOperation } from './combat'
import { colorCount, colorMatch } from './color'
import { colorIdentityCount, colorIdentityMatch } from './identity'
import { producesMatch, producesMatchCount } from './produces'
import { keywordCountMatch, keywordMatch } from './keyword'
import { manaCostMatch } from './mana'
import { formatMatch } from './format'
import { inFilter } from './in'
import { rarityFilterNode } from './rarity'
import { watermarkFilter } from './watermark'
import { stampFilter } from './stamp'
import { languageNode } from './language'
import { gameNode } from './game'
import { flavorMatch, flavorRegex } from './flavor'
import { dateNode } from './date'
import { setNode, setTypeNode } from './set'
import { priceNode } from './price'
import { artistNode } from './artist'
import { frameNode } from './frame'
import { borderNode } from './border'
import { collectorNumberNode } from './collectorNumber'
import { oddEvenFilter } from './manavalue'
import { nameFilter } from './name'
import { paperPrintCount, paperSetCount, printCountFilter, setCountFilter } from './printCount'
import { oracleNode } from './oracle'
import { printNode } from './print'
import { DataProvider } from './dataProvider'
import { newFilter } from './new'
import { AstLeaf, AstNode, BinaryNode, Block, FilterType, noReminderText, NormedCard, UnaryNode } from '../types'
import {CardSet, Legality} from "../generated";
import {oracleIdNode, scryfallIdNode} from "./id";


export interface FilterProvider {
  visitNode: (leaf: AstNode) => Promise<FilterNode>
}

export class CachingFilterProvider implements FilterProvider {
  private readonly provider: DataProvider
  // should these be cached?
  // cubeId -> oracleId
  private readonly cubes: { [cubeId: string]: Set<string> }
  private getCubeOracles = async (key: string): Promise<Set<string>> => {
    if (this.cubes[key]) {
      return this.cubes[key]
    }
    const cube = await this.provider.getCube(key);
    if (cube === undefined){
      throw Error(`Couldn't find cube ${key}`)
    }
    const result = new Set(cube.cards?.map(it => it.oracle_id) ?? cube.oracle_ids ?? [])
    this.cubes[key] = result;
    return result
  }

  private getCubePrints = async (key: string): Promise<Set<string>> => {
    const cube = await this.provider.getCube(key);
    if (cube === undefined){
      throw Error(`Couldn't find cube ${key}`)
    }
    return new Set(cube.cards?.map(it => it.print_id) ?? cube.print_ids ?? [])
  }

  // otag -> oracleId
  private readonly otags: { [otag: string]: Set<string> }
  private getOtag = async (key: string): Promise<Set<string>> => {
    if (this.otags[key]) {
      return this.otags[key]
    }
    const otag= await this.provider.getOtag(key);

    if (otag === undefined){
     throw Error(`Couldn't find oracle tag ${key}`)
    }
    const result = new Set(otag.oracle_ids)
    this.otags[key] = result;
    return result
  }

  // atag -> id
  private readonly atags: { [atag: string]: Set<string> }
  private getAtag = async (key: string): Promise<Set<string>> => {
    if (this.atags[key]) {
      return this.atags[key]
    }
    const atag = await this.provider.getAtag(key);
    if (atag === undefined){
      throw Error(`Couldn't find illustration tag ${key}`)
    }
    const result = new Set(atag.illustration_ids)
    this.atags[key] = result;
    return result
  }

  private getBlock = async (key:string): Promise<Block> => {
    const block = await this.provider.getBlock(key)
    if (block === undefined) {
      throw Error(`Couldn't find block ${key}`)
    }
    return block
  }

  private getSet = async (key:string): Promise<CardSet> => {
    const set = await this.provider.getSet(key)
    if (set === undefined) {
      throw Error(`Couldn't find set ${key}`)
    }
    return set
  }

  constructor(provider: DataProvider) {
    this.provider = provider
    this.cubes = {}
    this.otags = {}
    this.atags = {}
  }

  cubeOracleFilter = async (cubeKey: string): Promise<FilterNode> => {
    const ids = await this.getCubeOracles(cubeKey);
    return oracleNode({
      filtersUsed: ['cube'],
      filterFunc: (card: NormedCard) => ids.has(card.oracle_id)
    })
  }

  cubePrintFilter = async (cubeKey: string): Promise<FilterNode> => {
    const ids = await this.getCubePrints(cubeKey)
    return printNode(['newcube'], ({ printing }) => ids.has(printing.id))
  }

  otagFilter = async (key: string): Promise<FilterNode> => {
    const ids = await this.getOtag(key);
    return oracleNode({
      filtersUsed: ['otag'],
      filterFunc: (card: NormedCard) => ids.has(card.oracle_id)
    })
  }

  atagFilter = async (key: string): Promise<FilterNode> => {
    const ids = await this.getAtag(key);
    return printNode(
        ['atag'],
        ({ printing }) => {
          return ids.has(printing.illustration_id??"") ||
              printing.card_faces?.find(it => ids.has(it.illustration_id??"")) !== undefined
        }
    );
  }

  blockFilter = async (key: string): Promise<FilterNode> => {
    const block = await this.getBlock(key);
    return printNode(
        ['block'],
        ({ printing }) => block.set_codes.includes(printing.set)
    );
  }

  visitNode = async (node: AstNode): Promise<FilterNode> => {
    if (node.hasOwnProperty("filter")) {
      return this.getFilter(node as AstLeaf)
    } else {
      switch (node.operator) {
        case "negate": {
          const visited = await this.visitNode((node as UnaryNode).clause)
          return notNode(visited)
        }
        case "and": {
          const l = await this.visitNode((node as BinaryNode).left);
          const r = await this.visitNode((node as BinaryNode).right);
          return andNode(l, r)
        }
        case "or": {
          const l = await this.visitNode((node as BinaryNode).left);
          const r = await this.visitNode((node as BinaryNode).right);
          return orNode(l, r)
        }
      }
    }
    return Promise.reject({
      errorOffset: node.offset,
      message: `unknown branch node type ${node}. please report this bug below`
    })
  }

  getFilter = async (leaf: AstLeaf): Promise<FilterNode> => {
    try {
      let promisedNode: Promise<FilterNode>
      switch (leaf.filter) {
        case FilterType.CmcInt:
          return oracleNode({
            filtersUsed: ["cmc"],
            filterFunc: defaultOperation("cmc", leaf.operator!, leaf.value)
          })
        case FilterType.CmcOddEven:
          return oddEvenFilter(leaf.value === "even")
        case FilterType.NameExact:
          return oracleNode({
            filtersUsed: ["exact"],
            filterFunc: exactMatch("name", leaf.value)
          });
        case FilterType.Name:
          return oracleNode({
            filtersUsed: ["name"],
            filterFunc: nameFilter(leaf.value)
          });
        case FilterType.NameRegex:
          return oracleNode({
            filtersUsed: ["name"],
            filterFunc: regexMatch('name', leaf.value)
          });
        case FilterType.ColorSet:
          return colorMatch(leaf.operator!, new Set(leaf.value))
        case FilterType.ColorInt:
          return colorCount(leaf.operator!, leaf.value)
        case FilterType.ColorIdentitySet:
          return colorIdentityMatch(leaf.operator!, new Set(leaf.value))
        case FilterType.ColorIdentityInt:
          return colorIdentityCount(leaf.operator!, leaf.value)
        case FilterType.Mana:
          return manaCostMatch(leaf.operator!, leaf.value)
        case FilterType.ManaRegex:
          return oracleNode({
            filtersUsed: ['mana-regex'],
            filterFunc: regexMatch("mana_cost", leaf.value)
          })
        case FilterType.Oracle:
          return oracleNode({
            filtersUsed: ["oracle"],
            filterFunc: noReminderTextMatch('oracle_text', leaf.value),
          })
        case FilterType.OracleRegex:
          return oracleNode({
            filtersUsed: ["oracle"],
            filterFunc: noReminderRegexMatch('oracle_text', leaf.value),
          })
        case FilterType.OracleCount:
          return oracleNode({
            filtersUsed: ["oracle"],
            filterFunc: oracleTextCount(leaf.operator!, leaf.value, noReminderText),
          })
        case FilterType.FullOracle:
          return oracleNode({
            filtersUsed: ["full-oracle"],
            filterFunc: textMatch('oracle_text', leaf.value),
          })
        case FilterType.FullOracleRegex:
          return oracleNode({
            filtersUsed: ["full-oracle"],
            filterFunc: regexMatch('oracle_text', leaf.value),
          })
        case FilterType.FullOracleCount:
          return oracleNode({
            filtersUsed: ["full-oracle"],
            filterFunc: oracleTextCount(leaf.operator!, leaf.value),
          })
        case FilterType.Keyword:
          return keywordMatch(leaf.value)
        case FilterType.KeywordCount:
          return keywordCountMatch(leaf.operator, leaf.value)
        case FilterType.Type:
          return oracleNode({
            filtersUsed: ["type"],
            filterFunc: textMatch('type_line', leaf.value),
          })
        case FilterType.TypeRegex:
          return oracleNode({
            filtersUsed: ["type-regex"],
            filterFunc: regexMatch('type_line', leaf.value),
          })
        case FilterType.Power:
          return combatToCombatNode('power', leaf.operator!, leaf.value)
        case FilterType.Tough:
          return combatToCombatNode('toughness', leaf.operator!, leaf.value)
        case FilterType.PowTou:
          return powTouTotalOperation(leaf.operator!, leaf.value)
        case FilterType.Loyalty:
          return combatToCombatNode('loyalty', leaf.operator!, leaf.value)
        case FilterType.Defense:
          return combatToCombatNode('defense', leaf.operator!, leaf.value)
        case FilterType.Layout:
          return oracleNode({
            filtersUsed: ["layout"],
            filterFunc: defaultOperation('layout', "=", leaf.value),
          })
        case FilterType.Format:
          return formatMatch(Legality.legal, leaf.value)
        case FilterType.Banned:
          return formatMatch(Legality.banned, leaf.value)
        case FilterType.Restricted:
          return formatMatch(Legality.restricted, leaf.value)
        case FilterType.Is:
          return isVal(leaf.value)
        case FilterType.Not:
          return notNode(isVal(leaf.value))
        case FilterType.PaperPrints:
          return paperPrintCount(leaf.operator!, leaf.value)
        case FilterType.Prints:
          return printCountFilter(leaf.operator!, leaf.value)
        case FilterType.Sets:
          return setCountFilter(leaf.operator!, leaf.value)
        case FilterType.PaperSets:
          return paperSetCount(leaf.operator!, leaf.value)
        case FilterType.In:
          return inFilter(leaf.value)
        case FilterType.ProducesSet:
          return oracleNode({
            filtersUsed: ["produces"],
            filterFunc: producesMatch(leaf.operator!, new Set(leaf.value)),
          })
        case FilterType.ProducesInt:
          return oracleNode({
            filtersUsed: ["produces"],
            filterFunc: producesMatchCount(leaf.operator!, leaf.value),
          })
        case FilterType.Devotion:
          return devotionOperation(leaf.operator!, leaf.value)
        case FilterType.Unique:
          return oracleNode({
            filtersUsed: [`unique:${leaf.value}`],
            filterFunc: identity(),
            inverseFunc: identity(),
          })
        case FilterType.Order:
          return oracleNode({
            filtersUsed: [`order:${leaf.value}`],
            filterFunc: identity(),
            inverseFunc: identity(),
          })
        case FilterType.Direction:
          return oracleNode({
            filtersUsed: [`direction:${leaf.value}`],
            filterFunc: identity(),
            inverseFunc: identity(),
          })
        case FilterType.Rarity:
          return rarityFilterNode(leaf.operator!, leaf.value)
        case FilterType.Set:
          return setNode(leaf.value)
        case FilterType.SetType:
          return setTypeNode(leaf.value)
        case FilterType.Artist:
          return artistNode(leaf.value)
        case FilterType.CollectorNumber:
          return collectorNumberNode(leaf.operator!, leaf.value)
        case FilterType.Border:
          return borderNode(leaf.value)
        case FilterType.Date: {
          const valueDate = new Date(leaf.value)
          if (isNaN(valueDate.getTime())) {
            try {
              const set = await this.getSet(leaf.value)
              if (set.released_at === undefined) {
                return Promise.reject({
                  errorOffset: leaf.offset,
                  message: `Set ${set.code} doesn't have a release date.\n\n${JSON.stringify(set, undefined, 2)}`
                })
              }
              return dateNode(leaf.operator!, set.released_at)
            } catch (e) {
              return Promise.reject({ ...e, message: `${leaf.value} must fit date format yyyy or yyyy-MM-dd`, errorOffset: leaf.offset })
            }
          }
          return dateNode(leaf.operator!, leaf.value)
        }
        case FilterType.Price:
          return priceNode(leaf.unit!, leaf.operator!, leaf.value)
        case FilterType.Frame:
          return frameNode(leaf.value)
        case FilterType.Flavor:
          return flavorMatch(leaf.value)
        case FilterType.FlavorRegex:
          return flavorRegex(leaf.value)
        case FilterType.FlavorCount:
          return printNode(["flavor-text"], flavorTextCount(leaf.operator!, leaf.value))
        case FilterType.Game:
          return gameNode(leaf.value)
        case FilterType.Language:
          return languageNode(leaf.value)
        case FilterType.Stamp:
          return stampFilter(leaf.value)
        case FilterType.Watermark:
          return watermarkFilter(leaf.value)
        case FilterType.CubeOracle:
            promisedNode = this.cubeOracleFilter(leaf.value)
            break;
        case FilterType.CubePrints:
            promisedNode = this.cubePrintFilter(leaf.value)
            break;
        case FilterType.OracleTag:
            promisedNode = this.otagFilter(leaf.value)
            break;
        case FilterType.IllustrationTag:
            promisedNode = this.atagFilter(leaf.value)
            break;
        case FilterType.Block:
            promisedNode = this.blockFilter(leaf.value)
            break;
        case FilterType.New:
          return newFilter(leaf.value)
        case FilterType.Prefer:
          return {
            ...identityNode(),
            filtersUsed: [`prefer:${leaf.value}`],
          }
        case FilterType.Collection:
          return oracleNode({
            filtersUsed: [`collection`],
            filterFunc: (card) => card.collectionId === leaf.value,
          })
        case FilterType.ScryfallId:
          return scryfallIdNode(leaf.value)
        case FilterType.OracleId:
          return oracleIdNode(leaf.value)
        case FilterType.Identity:
          return identityNode()
        case FilterType.Limit:
          return {
            ...identityNode(),
            filtersUsed: [`limit:${leaf.value}`]
          }
        case FilterType.Lore:
          const hasName = textMatch("name", leaf.value)
          const hasType = textMatch("type_line", leaf.value)
          const hasText = noReminderTextMatch("oracle_text", leaf.value)
          return printNode(['lore'], ({ printing, card }) =>
              hasName(card) || hasText(card) || hasType(card) ||
              printing.flavor_text?.includes(leaf.value) ||
              printing.flavor_name?.includes(leaf.value)
          )
      }
      // Unwrap promised FilterNodes to enrich errors with leaf.offset.
      return await promisedNode
    } catch (e) {
      e.errorOffset = leaf.offset
      throw e
    }
  }
}