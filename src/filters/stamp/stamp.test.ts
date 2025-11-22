import { defaultRunner, searchNames } from '../_testData/_utils'
import { animateLand } from '../_testData/animateLand'
import { kroxaTitanOfDeathsHungerOld } from '../_testData/kroxaTitanOfDeathsHunger'

describe('stamp filter', function() {
  const corpus = [kroxaTitanOfDeathsHungerOld, animateLand]
  const queryRunner = defaultRunner(corpus);

  it("gets parsed properly", async () => {
    const result = await searchNames(queryRunner, 'stamp:oval')

    expect(result).toEqual([kroxaTitanOfDeathsHungerOld.name])
  })
})