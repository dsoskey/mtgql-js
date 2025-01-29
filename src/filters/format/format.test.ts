import { defaultRunner, names } from '../_testData/_utils'
import { preordain } from '../_testData/preordain'
import { delverOfSecrets } from '../_testData/delverOfSecrets'
import { emberethShieldbreaker } from '../_testData/emberethShieldbreaker'

describe('format filters', function() {
  const corpus = [preordain, delverOfSecrets, emberethShieldbreaker]
  const queryRunner = defaultRunner(corpus);
  it("handles banned cards", async function() {
    const result = names(await queryRunner.search("banned:modern"))

    expect(result).toEqual([preordain.name])
  })
  it("handles restricted cards", async function() {
    const result = names(await queryRunner.search("restricted:paupercommander"))

    expect(result).toEqual([emberethShieldbreaker.name])
  })
})