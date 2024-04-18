import { mirrex } from '../_testData/mirrex'
import { animateLand } from '../_testData/animateLand'
import { QueryRunner } from '../../queryRunner'
import { defaultDataProvider, defaultOptions, names } from '../_testData/_utils'

describe('artist filter', function() {
  const corpus = [mirrex, animateLand]
  const queryRunner = new QueryRunner({ corpus, defaultOptions, dataProvider: defaultDataProvider });

  ["a", 'artist'].forEach(filterKeyword => {
    it(`${filterKeyword} gets parsed properly`, async () => {
      const result = names(await queryRunner.search(`${filterKeyword}:"Rebecca Guay"`))

      expect(result).toEqual([animateLand.name])
    })

  })
})