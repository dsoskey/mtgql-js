import { kroxaTitanOfDeathsHungerOld } from '../_testData/kroxaTitanOfDeathsHunger'
import { asymmetrySage } from '../_testData/asymmetrySage'
import {defaultRunner, searchNames} from '../_testData/_utils'

describe('keyword filters', function() {
  const corpus = [kroxaTitanOfDeathsHungerOld, asymmetrySage]
  const queryRunner = defaultRunner(corpus)
  it("should match to any card with the keyword", async function() {
    const result = await searchNames(queryRunner, "keyword:escape")

    expect(result).toEqual([kroxaTitanOfDeathsHungerOld.name])
  })
})