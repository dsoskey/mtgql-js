import { defaultCompare, FilterNode, Operator } from '../base'
import { NormedCard } from '../../types'
import { oracleNode } from '../oracle'

export const COLOR_WORDS = [
  "white",
  "blue",
  "black",
  "red",
  "green",
  "azorius",
  "dimir",
  "rakdos",
  "gruul",
  "selesnya",
  "silverquill",
  "orzhov",
  "prismari",
  "izzet",
  "witherbloom",
  "golgari",
  "lorehold",
  "boros",
  "quandrix",
  "simic",
  "brokers",
  "bant",
  "obscura",
  "esper",
  "maestros",
  "grixis",
  "riveteers",
  "jund",
  "cabaretti",
  "naya",
  "savai",
  "dega",
  "mardu",
  "ketria",
  "ceta",
  "temur",
  "indatha",
  "necra",
  "abzan",
  "raugrin",
  "raka",
  "jeskai",
  "zagoth",
  "ana",
  "sultai",
  "chaos",
  "aggression",
  "altruism",
  "growth",
  "artifice",
  "rainbow",
  "fivecolor",
  "brown",
    "colorless"
]

export const colorMatch = (operator: Operator, value: Set<string>): FilterNode => oracleNode({
  filtersUsed: ['color'],
  filterFunc: (card: NormedCard) => {
      const faceMatchMap = [
        card.colors,
        card.color_indicator,
        ...card.card_faces?.map((it) => it.colors),
        ...card.card_faces?.map((it) => it.color_indicator),
      ]
        .filter((it) => it !== undefined)
        .map((colors) => colors.map((it) => it.toLowerCase()))
        .map((colors) => ({
          match: colors.filter((color) => value.has(color)),
          not: colors.filter((color) => !value.has(color)),
        }))
      switch (operator) {
        case '=':
          return (
            faceMatchMap.some(
              (it) => it.match.length === value.size && it.not.length === 0
            )
          )
        case '!=': // ????? This looks wrong
          return faceMatchMap.some((it) => it.match.length === 0)
        case '<':
          return (
            faceMatchMap.some(
              (it) => it.not.length === 0 && it.match.length < value.size
            )
          )
        case "≤":
        case '<=':
          return faceMatchMap.some(
            (it) => it.not.length === 0 && it.match.length <= value.size
          )
        case '>':
          return (
            faceMatchMap.some(
              (it) => it.not.length > 0 && it.match.length === value.size
            )
          )
        // Scryfall adapts ":" to the context. in this context it acts as >= for non-colorless color sets
        // For colorless, ":" acts as "="
        case ':':
          if (value.size === 0) {
            return faceMatchMap.some(
              (it) => it.match.length === value.size && it.not.length === 0
            )
          }
        case "≥":
        case '>=':
          return faceMatchMap.some((it) => it.match.length === value.size)
        case '<>':
          throw Error('<> is not a valid operator for color filter')
      }
    },
})

// c=1 takes ~5s
export const colorCount = (operator: Operator, count: number): FilterNode => oracleNode({
  filtersUsed: ['color-count'],
  filterFunc: (it) => {
    const colorSet: Set<String> = new Set(it.colors ?? [])
    for (const face of it.card_faces ?? []) {
      for (const color of (face.colors ?? [])) {
        colorSet.add(color)
      }
      for (const color of (face.color_indicator ?? [])) {
        colorSet.add(color)
      }
    }
    const colorCount = colorSet.size

    return defaultCompare(colorCount, operator, count)
  }
})