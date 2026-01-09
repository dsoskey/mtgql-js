import { Legality } from "../../generated"
import { NormedCard } from '../../types'
import { FilterNode } from '../base'
import { oracleNode } from '../oracle'

export const FORMATS = [
  "standard" , "future" , "historic" , "pioneer" , "modern" , "legacy" , "paupercommander" ,
  "pauper" ,"vintage" , "penny" , "commander" , "brawl" , "duel" , "oldschool" , "timeless",
  'premodern', 'predh', 'gladiator', 'oathbreaker', 'standardbrawl', 'alchemy',
]

export const formatMatch = (legality: Legality, value: string): FilterNode => oracleNode({
  filtersUsed: [Legality[legality]],
  filterFunc: (card: NormedCard) => card.legalities[value] === Legality[legality],
})
