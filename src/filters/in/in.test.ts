import { preordain } from '../_testData/preordain'
import { asymmetrySage } from '../_testData/asymmetrySage'
import { lagoHirvienteDeDarigaaz } from '../_testData/lagoHirvienteDeDarigaaz'
import { QueryRunner } from '../../queryRunner'
import { defaultDataProvider, defaultOptions, names } from '../_testData/_utils'
import { ftvDelverOfSecrets } from '../_testData/delverOfSecrets'
import { darkConfidant } from '../_testData/darkConfidant'
import { sldBerserk } from '../_testData/berserk'

describe('in filter', function() {
  const corpus = [preordain, asymmetrySage, lagoHirvienteDeDarigaaz];
  const queryRunner = new QueryRunner({ corpus, defaultOptions, dataProvider: defaultDataProvider })
  it('should show cards that were printed in a set', async function() {
    const result = names(await queryRunner.search("in:m11"))

    expect(result).toEqual([preordain.name])
  })
  it('should show cards that were printed in a set_type', async function() {
    const result = names(await queryRunner.search("in:core"))

    expect(result).toEqual([preordain.name])
  })
  it('should show cards that were printed in a game', async function() {
    const result = names(await queryRunner.search("in:arena"))

    expect(result).toEqual([asymmetrySage.name])
  })
  it('should show cards that were printed in a language', async function() {
    const result = names(await queryRunner.search("in:es"))

    expect(result).toEqual([lagoHirvienteDeDarigaaz.name])
  })
  it('should ignore cards that were printed at a rarity in a cursed set or set type', async () => {
    const runner = new QueryRunner({
      corpus: [darkConfidant, ftvDelverOfSecrets, sldBerserk],
      defaultOptions,
      dataProvider: defaultDataProvider,
    })
    const result = names(await runner.search("in:mythic"));

    expect(result).toEqual([darkConfidant.name]);
  })
})