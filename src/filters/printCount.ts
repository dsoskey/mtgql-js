import { defaultCompare, FilterNode, Operator } from './base'
import { oracleNode } from './oracle'

export const printCountFilter = (operator: Operator, count: number): FilterNode => {
  return oracleNode({
    filtersUsed: ['prints'],
    filterFunc: (card) => {
      return defaultCompare(card.printings.length, operator, count)
    }
  })
}

export const paperPrintCount = (operator: Operator, count: number) : FilterNode => {
  return oracleNode({
    filtersUsed: ['paperprints'],
    filterFunc: (card) => {
      return defaultCompare(card.printings.filter(it => !it.digital).length, operator, count)
    }
  })
}

export const setCountFilter = (operator: Operator, count: number): FilterNode => {
  return oracleNode({
    filtersUsed: ['sets'],
    filterFunc: (card) => {
      return defaultCompare(new Set(card.printings.map(it => it.set)).size, operator, count)
    }
  })
}

export const paperSetCount = (operator: Operator, count: number) : FilterNode => {
  return oracleNode({
    filtersUsed: ['papersets'],
    filterFunc: (card) => {
      return defaultCompare(new Set(card.printings.filter(it => !it.digital).map(it => it.set)).size, operator, count)
    }
  })
}