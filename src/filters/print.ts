import { Filter, FilterNode } from './base'
import { Card } from '../generated'
import {NormedCard, Printing, PrintingFilterTuple, SearchOptions} from '../types'
import maxBy from 'lodash/maxBy'
import minBy from 'lodash/minBy'
import {isDefaultPrinting} from "./is";

export const printNode = (
  filtersUsed: string[],
  printFilter: Filter<PrintingFilterTuple>,
): FilterNode => {
  return {
    filtersUsed,
    filterFunc: (card) => {
      for (const printing of card.printings) {
        if (printFilter({printing,card})) {
          return true
        }
      }
      return false
    },
    inverseFunc: (card) => {
      for (const printing of card.printings) {
        if (!printFilter({printing, card})) {
          return true;
        }
      }
      return false
    },
    printFilter,
  }
}

const showAllFilter = new Set([
  'date',
  'frame',
  'set',
  'setType',
  'usd',
  'eur',
  'tix',
  'language',
  'stamp',
  'watermark',
  'year',
])

export const PREFER_VALUES = [
    "oldest",
    "newest",
    "usd-low",
    "usd-high",
    "eur-low",
    "eur-high",
    "tix-low",
    "tix-high",
    "promo",
    "nondefault",
    "default",
]

export const findPrinting = (prefer?: string) =>
  (filterFunc: Filter<PrintingFilterTuple>) =>
    (card: NormedCard): Card[] => {
      const { printings, ...rest } = card

      const maybePrints = printings.filter(printing => filterFunc({ printing, card }))
      if (maybePrints.length) {
        let print;
        switch (prefer) {
          case "usd-low":
          case "usd-high":
          case "eur-low":
          case "eur-high":
          case "tix-low":
          case "tix-high": {
            const [field, dir] = prefer.split("-")
            const func = dir === "low" ? minBy : maxBy
            print = func(maybePrints, it => Number.parseFloat(it.prices[field]))
            break;
          }
          case "promo": {
            print = printings.find(it => it.promo) ?? maybePrints[0];
            break;
          }
          case "newest":
            print = maybePrints[maybePrints.length - 1];
            break;
          case "nondefault":
          case "atypical":
          case "abnormal":
          case "nontraditional":
            print = maybePrints.find(it => !isDefaultPrinting(it)) ?? maybePrints[0];
            break;
          case "default":
          case "typical":
          case "normal":
          case "traditional":
            print = maybePrints.find(it => isDefaultPrinting(it)) ?? maybePrints[0];
            break;
          case "oldest":
          default:
            print = maybePrints[0]
        }
        return [{
          ...rest,
          ...print,
        }]
      }
      return []
    }

export const allPrintings =
  (filterFunc: Filter<PrintingFilterTuple>) =>
    (card: NormedCard): Card[] => {
      const { printings, ...rest } = card
      const filteredPrints: Card[] = []
      for (const printing of printings) {
        if (filterFunc({ printing, card })) {
            // @ts-ignore
          filteredPrints.push({
            ...rest,
            ...printing,
          })
        }
      }

      return filteredPrints
    }

export const uniqueArts =
  (filterFunc: Filter<PrintingFilterTuple>) =>
    (card: NormedCard): Card[] => {
      const { printings, ...rest } = card
      const filteredPrints: Printing[] = []
      for (const printing of printings) {
        if (filterFunc({ printing, card })) {
          filteredPrints.push(printing)
        }
      }

      const foundArtIds: Set<string> = new Set<string>()
      const returnedPrints: Printing[] = []
      for (const print of filteredPrints) {
        if (print.illustration_id !== undefined && !foundArtIds.has(print.illustration_id)) {
          foundArtIds.add(print.illustration_id)
          returnedPrints.push(print)
        }
      }
      return returnedPrints.map((it) => ({
          ...rest,
          ...it,
      }))
    }


export const chooseFilterFunc = (filterNode: FilterNode, options?: SearchOptions) => {
  const { filtersUsed, printFilter } = filterNode
  const firstUnique = filtersUsed.find(filter => filter.startsWith('unique:')) ?? options?.unique;
  const firstPrefer = (filtersUsed.find(filter => filter.startsWith('prefer:')) ?? options?.prefer)
    ?.replace('prefer:', '') ?? undefined;
  if (firstUnique !== undefined) {
    const funcKey = firstUnique.replace('unique:', '')
    switch (funcKey) {
      case 'prints':
        return allPrintings(printFilter)
      case 'art':
        return uniqueArts(printFilter)
      case 'cards':
        return findPrinting(firstPrefer)(printFilter)
      default:
        throw Error(`unknown print filter function ${funcKey}`)
    }
  }
  return findPrinting(firstPrefer)(printFilter)
}