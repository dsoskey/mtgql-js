import { FilterNode, defaultCompare, Operator } from '../base'
import { printNode } from '../print'
import { Rarity } from '../../generated'
import { PrintingFilterTuple } from '../../types'

const rarityRank: Record<Rarity, number> = {
    common: 0,
    uncommon: 1,
    rare: 2,
    mythic: 3,
    special: 4,
    bonus: 5,
}
export const RARITY_ALIAS = {
    c: "common",
    common: "common",
    r: "rare",
    rare: "rare",
    u: "uncommon",
    uncommon: "uncommon",
    s: "special",
    special: "special",
    b: "bonus",
    bonus: "bonus",
}
export const RARITY_VALUES = [...Object.keys(rarityRank), ...Object.keys(rarityRank).map(it => it[0])];
export const rarityFilter =
  (operator: Operator, value: string) =>
    ({ printing }: PrintingFilterTuple) => defaultCompare(rarityRank[printing.rarity], operator, rarityRank[value])

export const rarityFilterNode = (operator: Operator, value: string): FilterNode =>
  printNode(['rarity'], rarityFilter(operator, value))
