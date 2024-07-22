import { NormedCard } from '../../types'
import { defaultCompare, FilterNode, Operator } from '../base'
import { oracleNode } from '../oracle'

export const keywordMatch = (value: string): FilterNode => oracleNode({
  filtersUsed: ['keyword'],
  filterFunc:  (card: NormedCard) =>
    card.keywords.map((it) => it.toLowerCase()).includes(value.toLowerCase())
})

export const keywordCountMatch = (operator: Operator, count: number): FilterNode => oracleNode({
  filtersUsed: ['keywords'],
  filterFunc: (card: NormedCard) => defaultCompare(card.keywords.length, operator, count),
})