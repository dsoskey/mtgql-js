import { QueryRunner } from '../../queryRunner'
import { narcomoeba } from '../_testData/narcomoeba'
import { crystallineGiant } from '../_testData/crystallineGiant'
import {defaultDataProvider, defaultOptions, defaultRunner, names} from '../_testData/_utils'

describe('frame filter', function() {
  const corpus = [narcomoeba, crystallineGiant]
  const queryRunner = defaultRunner(corpus);
  it("matches the card's frame exactly", async () => {
    const result = names(await queryRunner.search("frame:future"))

    expect(result).toEqual([narcomoeba.name])
  })
})