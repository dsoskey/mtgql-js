import { Legality } from "../../generated"
import { NormedCard } from '../../types'
import { FilterNode } from '../base'
import { oracleNode } from '../oracle'


export const formatMatch = (legality: Legality, value: string): FilterNode => oracleNode({
  filtersUsed: [Legality[legality]],
  filterFunc: (card: NormedCard) => card.legalities[value] === Legality[legality],
})
