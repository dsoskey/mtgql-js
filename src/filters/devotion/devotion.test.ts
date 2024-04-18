import { arrogantBloodlord } from '../_testData/arrogantBloodlord'
import { aetherbladeAgent } from '../_testData/aetherbladeAgent'
import { davrielsWithering } from '../_testData/davrielsWithering'
import { crystallineGiant } from '../_testData/crystallineGiant'
import { necroimpotence } from '../_testData/necroimpotence'
import { lich } from '../_testData/lich'
import { QueryRunner } from '../../queryRunner'
import { defaultDataProvider, defaultOptions, names } from '../_testData/_utils'

describe('devotion filter', function() {
  const corpus = [arrogantBloodlord, aetherbladeAgent, davrielsWithering, crystallineGiant, necroimpotence, lich]
  const queryRunner = new QueryRunner({ corpus, defaultOptions, dataProvider: defaultDataProvider })

  it('ignores non-permanent cards', async () => {
    const result = names(await queryRunner.search("devotion<=b"))

    expect(result).toEqual([aetherbladeAgent.name, crystallineGiant.name])
  })

  it('handles =', async function() {
    const result = names(await queryRunner.search("devotion=bb"))

    expect(result).toEqual([arrogantBloodlord.name])
  })

  it('handles >=', async function() {
    const result = names(await queryRunner.search("devotion>=bb"))

    expect(result).toEqual([arrogantBloodlord.name, lich.name, necroimpotence.name])
  })

  it('handles <=', async function() {
    const result = names(await queryRunner.search("devotion<=bb"))

    expect(result).toEqual([aetherbladeAgent.name, arrogantBloodlord.name, crystallineGiant.name])
  })

  it('handles >', async function() {
    const result = names(await queryRunner.search("devotion>bb"))

    expect(result).toEqual([lich.name, necroimpotence.name])
  })

  it('handles <', async function() {
    const result = names(await queryRunner.search("devotion<bb"))

    expect(result).toEqual([aetherbladeAgent.name, crystallineGiant.name])
  })
})