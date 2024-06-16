import { ObjectValues } from '../types/common'
import {noReminderText, parsePowTou} from '../types'
import { Card, Rarity } from '../generated'

const SORT_ORDERS = {
  artist: 'artist',
  cmc: 'cmc',
  color: 'color',
  edhrec: 'edhrec',
  eur: 'eur',
  name: 'name',
  penny: 'penny',
  power: 'power',
  rarity: 'rarity',
  released: 'released',
  review: 'review',
  set: 'set',
  spoiled: 'spoiled',
  tix: 'tix',
  toughness: 'toughness',
  usd: 'usd',
  cube: 'cube',
  wc: "wc",
  fwc: "fwc",
} as const
export type SortOrder = ObjectValues<typeof SORT_ORDERS>

export class SortFunctions {
  private static colorOrder: { [key: string]: number } = {
    W: 0,
    U: 1,
    B: 2,
    R: 3,
    G: 4,
    UW: 5,
    BU: 6,
    BR: 7,
    GR: 8,
    GW: 9,
    BW: 10,
    RU: 11,
    BG: 12,
    RW: 13,
    GU: 14,
    BUW: 15,
    BRU: 16,
    BGR: 17,
    GRW: 18,
    GUW: 19,
    BRW: 20,
    GRU: 21,
    BGW: 22,
    RUW: 23,
    BGU: 24,
    BRUW: 25,
    BGRU: 26,
    BGRW: 27,
    GRUW: 28,
    BGUW: 29,
    BGRUW: 30,
    "": 31,
  }

  static bySortOrder(key: SortOrder): any[] {
    switch (key) {
      case 'name':
        return [SortFunctions.byName]
      case 'artist':
      case 'cmc':
        return [key]
      case 'set':
        return ['set', SortFunctions.byCollectorNumber]
      case 'spoiled':
        return [SortFunctions.bySpoiled]
      case 'released':
        return [SortFunctions.byReleased]
      case 'usd':
        return [SortFunctions.byUsd]
      case 'tix':
        return [SortFunctions.byTix]
      case 'eur':
        return [SortFunctions.byEur]
      case 'edhrec':
        return [SortFunctions.byEdhrecRank]
      case 'penny':
        return [SortFunctions.byPennyRank]
      case 'power':
      case 'toughness':
        return [SortFunctions.byPowTou(key)]
      case 'rarity':
        return [SortFunctions.byRarity]
      case 'color':
        return [SortFunctions.byColor]
      case 'review':
        return [SortFunctions.byColor, 'cmc']
      case "cube":
        return [SortFunctions.byColorId, SortFunctions.byColor, 'cmc', 'type']
      case "wc":
        return [SortFunctions.byWordCount]
      case "fwc":
        return [SortFunctions.byFullWordCount]
    }
  }

  static byCollectorNumber(card: Card) {
    return Number.parseInt(card.collector_number, 10)
  }

  static bySpoiled(card: Card) {
    return new Date(card.preview?.previewed_at ?? card.released_at)
  }

  static byReleased(card: Card) {
    return new Date(card.released_at)
  }

  static byName(card:Card) {
    return card.name.toLowerCase().replace(/( |\B|-)/g, "");
  }

  static byColor(card: Card) {
    const colors = Array.from(new Set(card.colors ?? card.card_faces.flatMap(face => face.colors ?? [])))
    const sorted = colors.sort().join('')
    return SortFunctions.colorOrder[sorted]
  }

  static byColorId(card: Card) {
    const colors = Array.from(new Set(card.color_identity))
    const sorted = colors.sort().join('')
    return SortFunctions.colorOrder[sorted]
  }

  static byRarity(card: Card) {
    return Rarity[card.rarity]
  }

  static byPowTou(key: 'power' | 'toughness') {
    return (card: Card) => parsePowTou(card[key])
  }

  static byPennyRank(card: Card) {
    return card.penny_rank ?? 0
  }

  static byEdhrecRank(card: Card) {
    return card.edhrec_rank ?? Number.MAX_VALUE
  }

  static byUsd(card: Card) {
    return Number.parseFloat(card.prices.usd ?? card.prices.usd_foil ?? card.prices.usd_etched ?? '0')
  }

  static byTix(card: Card) {
    return Number.parseFloat(card.prices.tix ?? '0')
  }

  static byEur(card: Card) {
    return Number.parseFloat(card.prices.eur ?? card.prices.eur_foil ?? '0')
  }

  static byWordCount(card: Card) {
    const getCount = (it: string | null | undefined) => {
      const transed = it??""
      return transed.length ? noReminderText(transed).split(/\s+/).length : 0
    }
    return countHelper(card, getCount)
  }

  static byFullWordCount(card: Card) {
    const getCount = (it: string | null | undefined) => {
      const transed = it??""
      return transed.length ? transed.split(/\s+/).length : 0
    }
    return countHelper(card, getCount)
  }

}

function countHelper(card:Card, getCount: (it?: string) => number) {
  let wordCount: number;
  if (card.oracle_text !== undefined) {
    wordCount = getCount(card.oracle_text)
  } else {
    wordCount = card.card_faces?.map(it => getCount(it.oracle_text)).reduce((l,r) => l+r)
  }
  return wordCount;
}