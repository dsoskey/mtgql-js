import { Card } from '../../generated'
import { MemoryDataProvider } from '../dataProvider'
import { QueryRunner } from '../../queryRunner'
import { SearchError, SearchOptions } from '../../types'

export const defaultOptions: SearchOptions = { order: 'name' }

export const defaultDataProvider = new MemoryDataProvider({
  cubes: [], atags: [], otags: [], blocks: [], sets: []
})

export const defaultRunner = (corpus: Card[]) =>
  QueryRunner.fromCardList({ corpus, defaultOptions, dataProvider: defaultDataProvider })

export const names = async (result: Promise<Card[]>) => {
  const rs = await result
  return rs.map(it => it.name);
}

export async function searchNames(runner: QueryRunner, query: string) {
  return names(runner.search(query));
}