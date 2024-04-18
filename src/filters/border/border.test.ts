import { mirrex } from '../_testData/mirrex'
import { birdsOfParadise } from '../_testData/birdsOfParadise'
import { QueryRunner } from '../../queryRunner'
import { defaultDataProvider, defaultOptions, names } from '../_testData/_utils'

describe('border filter', function() {
  const corpus = [mirrex, birdsOfParadise]
  const queryRunner = new QueryRunner({ corpus, defaultOptions, dataProvider: defaultDataProvider });

  it("gets parsed properly", async () => {
    const result = names(await queryRunner.search('border:white'))

    expect(result).toEqual([birdsOfParadise.name])
  })
})