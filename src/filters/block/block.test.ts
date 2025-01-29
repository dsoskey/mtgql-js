import { defaultOptions, names } from '../_testData/_utils'
import { QueryRunner } from '../../queryRunner'
import { birdsOfParadise } from '../_testData/birdsOfParadise'
import { delverOfSecrets } from '../_testData/delverOfSecrets'
import { bloodCrypt } from '../_testData/bloodCrypt'
import { MemoryDataProvider } from '../dataProvider'

describe('block filter',
  function() {
    const corpus = [birdsOfParadise, delverOfSecrets, bloodCrypt]
    const blocks = [
      {
        block: 'innistrad',
        block_code: 'isd',
        set_codes: ['avr', 'tavr', 'pavr', 'tdka', 'dka', 'pdka', 'tisd', 'isd', 'pisd']
      }
    ]
    const dataProvider = new MemoryDataProvider({
      cubes: [], otags: [], atags: [], blocks, sets: [],
    })
    const queryRunner = QueryRunner.fromCardList({ corpus, defaultOptions, dataProvider })
    it('finds cards by their set\'s block code', async function() {
      const result = names(await queryRunner.search("block:isd"))

      expect(result).toEqual([delverOfSecrets.name])
    })
    it('finds cards by their set\'s block name', async function() {
      const result = names(await queryRunner.search("block:Innistrad"))

      expect(result).toEqual([delverOfSecrets.name])
    })
  })