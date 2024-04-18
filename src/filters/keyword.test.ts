import { kroxaTitanOfDeathsHunger } from './testData/kroxaTitanOfDeathsHunger'
import { asymmetrySage } from './testData/asymmetrySage'
import {defaultRunner, searchNames} from './testData/_utils'

describe('keyword filters', function() {
  const corpus = [kroxaTitanOfDeathsHunger, asymmetrySage]
  const queryRunner = defaultRunner(corpus)
  it("should match to any card with the keyword", async function() {
    const result = await searchNames(queryRunner, "keyword:escape")

    expect(result).toEqual([kroxaTitanOfDeathsHunger.name])
  })
})