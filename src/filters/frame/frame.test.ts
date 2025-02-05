import { narcomoeba } from '../_testData/narcomoeba'
import { crystallineGiant } from '../_testData/crystallineGiant'
import { searchNames, defaultRunner } from '../_testData/_utils'

describe('frame filter', function() {
  const corpus = [narcomoeba, crystallineGiant]
  const queryRunner = defaultRunner(corpus);
  it("matches the card's frame exactly", async () => {
    const result = await searchNames(queryRunner, "frame:future");

    expect(result).toEqual([narcomoeba.name])
  })
})