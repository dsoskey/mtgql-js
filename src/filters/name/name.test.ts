import { eomerKingOfRohan } from '../_testData/eomerKingOfRohan'
import { defaultRunner, searchNames } from '../_testData/_utils'

describe('name filter', function() {
  it('should handle diacritics', async function() {
    const runner = defaultRunner([eomerKingOfRohan])
    const result = await searchNames(runner, "name:eomer")

    expect(result).toEqual([eomerKingOfRohan.name])
  })
})