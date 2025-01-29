import { mirrex } from '../_testData/mirrex'
import { animateLand } from '../_testData/animateLand'
import { defaultRunner, names } from '../_testData/_utils'

describe('artist filter', function() {
  const corpus = [mirrex, animateLand]
  const queryRunner = defaultRunner(corpus);

  ["a", 'artist'].forEach(filterKeyword => {
    it(`${filterKeyword} gets parsed properly`, async () => {
      const result = names(await queryRunner.search(`${filterKeyword}:"Rebecca Guay"`))

      expect(result).toEqual([animateLand.name])
    })

  })
})