import { defaultRunner, searchNames } from '../_testData/_utils'
import { animateLand } from '../_testData/animateLand'
import { kroxaTitanOfDeathsHunger } from '../_testData/kroxaTitanOfDeathsHunger'

describe('stamp filter', function() {
  const corpus = [kroxaTitanOfDeathsHunger, animateLand]
  const queryRunner = defaultRunner(corpus);

  it("gets parsed properly", async () => {
    const result = await searchNames(queryRunner, 'stamp:oval')

    expect(result).toEqual([kroxaTitanOfDeathsHunger.name])
  })
})