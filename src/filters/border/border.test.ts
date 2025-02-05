import { mirrex } from '../_testData/mirrex'
import { birdsOfParadise } from '../_testData/birdsOfParadise'
import { defaultRunner, searchNames } from '../_testData/_utils'

describe('border filter', function() {
  const corpus = [mirrex, birdsOfParadise]
  const queryRunner = defaultRunner(corpus);

  it("gets parsed properly", async () => {
    const result = await searchNames(queryRunner, 'border:white')

    expect(result).toEqual([birdsOfParadise.name])
  })
})