import { preordain } from '../_testData/preordain'
import { asymmetrySage } from '../_testData/asymmetrySage'
import { lagoHirvienteDeDarigaaz } from '../_testData/lagoHirvienteDeDarigaaz'
import { defaultRunner, searchNames } from '../_testData/_utils'
import { ftvDelverOfSecrets } from '../_testData/delverOfSecrets'
import { darkConfidant } from '../_testData/darkConfidant'
import { sldBerserk } from '../_testData/berserk'

describe('in filter', function() {
  const corpus = [preordain, asymmetrySage, lagoHirvienteDeDarigaaz];
  const queryRunner = defaultRunner(corpus);
  it('should show cards that were printed in a set', async function() {
    const result = await searchNames(queryRunner, "in:m11");

    expect(result).toEqual([preordain.name])
  })
  it('should show cards that were printed in a set_type', async function() {
    const result = await searchNames(queryRunner, "in:core");

    expect(result).toEqual([preordain.name])
  })
  it('should show cards that were printed in a game', async function() {
    const result = await searchNames(queryRunner, "in:arena");

    expect(result).toEqual([asymmetrySage.name])
  })
  it('should show cards that were printed in a language', async function() {
    const result = await searchNames(queryRunner, "in:es");

    expect(result).toEqual([lagoHirvienteDeDarigaaz.name])
  })
  it('should ignore cards that were printed at a rarity in a cursed set or set type', async () => {
    const runner = defaultRunner([darkConfidant, ftvDelverOfSecrets, sldBerserk]);
    const result = await searchNames(runner, "in:mythic");

    expect(result).toEqual([darkConfidant.name]);
  })
})