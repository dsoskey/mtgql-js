import { Result } from 'neverthrow'
import { Card } from '../../generated'
import { MemoryDataProvider } from '../dataProvider'
import { QueryRunner } from '../../queryRunner'
import { SearchError, SearchOptions } from '../../types'

export const defaultOptions: SearchOptions = { order: 'name' }

export const defaultDataProvider = new MemoryDataProvider({
  cubes: [], atags: [], otags: [], blocks: [], sets: []
})

export const defaultRunner = (corpus: Card[]) =>
  new QueryRunner({ corpus, defaultOptions, dataProvider: defaultDataProvider })

export const names = (result: Result<Card[], SearchError>) =>
  result._unsafeUnwrap().map(it => it.name)

export async function searchNames(runner: QueryRunner, query: string) {
  const result = await runner.search(query);
  return names(result);
}