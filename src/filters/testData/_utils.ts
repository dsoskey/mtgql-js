import { Result } from 'neverthrow'
import { Card } from 'scryfall-sdk'
import { MemoryDataProvider } from '../dataProvider'
import { QueryRunner } from '../../queryRunner'
import { SearchError, SearchOptions } from '../../types'

export const defaultOptions: SearchOptions = { order: 'name' }

export const defaultDataProvider = new MemoryDataProvider({
  cubes: [], atags: [], otags: [], blocks: [],
})

export const defaultRunner = (corpus: Card[]) =>
  new QueryRunner({ corpus, defaultOptions, dataProvider: defaultDataProvider })

export const names = (result: Result<Card[], SearchError>) =>
  result._unsafeUnwrap().map(it => it.name)