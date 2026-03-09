import { defaultRunner, searchNames } from '../_testData/_utils'
import { preordain } from '../_testData/preordain'
import { delverOfSecrets } from '../_testData/delverOfSecrets'
import { emberethShieldbreaker } from '../_testData/emberethShieldbreaker'
import {blackLotus} from "../_testData/blackLotus";
import {barrysLand} from "../_testData/barrysLand";

describe('format filters', function() {
  const corpus = [preordain, delverOfSecrets, emberethShieldbreaker]
  const queryRunner = defaultRunner(corpus);
  it("handles banned cards", async function() {
    const result = await searchNames(queryRunner, "banned:modern");

    expect(result).toEqual([preordain.name])
  })
  it("handles restricted cards", async function() {
    const result = await searchNames(queryRunner, "restricted:paupercommander");

    expect(result).toEqual([emberethShieldbreaker.name])
  });
  it('f: should consider restricted cards legal', async function() {
    const queryRunner = defaultRunner([preordain, blackLotus, barrysLand]);

    const result = await searchNames(queryRunner, "f:vintage");

    expect(result).toEqual([blackLotus.name, preordain.name])
  })
})