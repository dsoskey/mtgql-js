import { barrysLand } from '../_testData/barrysLand'
import { delverOfSecrets } from '../_testData/delverOfSecrets'
import { defaultRunner, searchNames } from '../_testData/_utils'

describe('oddEvenFilter', function() {
  const queryRunner = defaultRunner([barrysLand, delverOfSecrets]);
  it('should handle filtering for evens', async function() {
    const result = await searchNames(queryRunner, "mv=even")

    expect(result).toEqual([barrysLand.name])
  })
  it('should handle filtering for odds', async function() {
    const result = await searchNames(queryRunner, "mv=odd")

    expect(result).toEqual([delverOfSecrets.name])
  })
})