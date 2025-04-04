import { defaultRunner, searchNames } from '../_testData/_utils'
import { animateLand } from '../_testData/animateLand'
import { bloodCrypt } from '../_testData/bloodCrypt'

describe('watermark filter', function() {
  const corpus = [bloodCrypt, animateLand]
  const queryRunner = defaultRunner(corpus);

  ["wm", 'watermark'].forEach(filterKeyword => {
    it(`${filterKeyword} gets parsed properly`, async () => {
      const result = await searchNames(queryRunner, `${filterKeyword}:rakdos`)

      expect(result).toEqual([bloodCrypt.name])
    })
  })
})