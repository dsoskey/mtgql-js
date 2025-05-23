import { kroxaTitanOfDeathsHunger } from '../_testData/kroxaTitanOfDeathsHunger'
import { aetherbladeAgent } from '../_testData/aetherbladeAgent'
import { preordain } from '../_testData/preordain'
import { defaultRunner, searchNames } from '../_testData/_utils'
import { davrielsWithering } from '../_testData/davrielsWithering'
import { thoughtKnotSeer } from '../_testData/thoughtKnotSeer'

describe('color filters', function() {
  const corpus = [preordain, davrielsWithering, aetherbladeAgent, kroxaTitanOfDeathsHunger, thoughtKnotSeer]
  const queryRunner = defaultRunner(corpus);

  it('handles the default for :, >=', async () => {
    const result = await searchNames(queryRunner, "c>=b")
    const defaultResult = await searchNames(queryRunner, "c:b")

    expect(result).toEqual([aetherbladeAgent.name, davrielsWithering.name, kroxaTitanOfDeathsHunger.name])
    expect(defaultResult).toEqual(result)
  })

  it('handles =, including cards with any face that matches', async () => {
    const result = await searchNames(queryRunner, "c=b")

    expect(result).toEqual([aetherbladeAgent.name, davrielsWithering.name])
  })

  it('handles !=', async () => {
    const result = await searchNames(queryRunner, "c!=b")

    expect(result).toEqual([preordain.name, thoughtKnotSeer.name])
  })

  it('handles >', async () => {
    const result = await searchNames(queryRunner, "c>b")

    expect(result).toEqual([aetherbladeAgent.name, kroxaTitanOfDeathsHunger.name])
  })

  it('handles <', async () => {
    const result = await searchNames(queryRunner, "c<rakdos")

    expect(result).toEqual([aetherbladeAgent.name, davrielsWithering.name, thoughtKnotSeer.name])
  })

  it('handles <=', async () => {
    const result = await searchNames(queryRunner, "c<=rakdos")

    expect(result).toEqual([
      aetherbladeAgent.name,
      davrielsWithering.name,
      kroxaTitanOfDeathsHunger.name,
      thoughtKnotSeer.name
    ])
  })

  it('handles uppercase color characters', async () => {
    const result = await searchNames(queryRunner, "c=U")

    expect(result).toEqual([preordain.name])
  })

  it('handles colorless', async () => {
    const result = await searchNames(queryRunner, "c=c")
    const result2 = await searchNames(queryRunner, "c:c")

    expect(result).toEqual([thoughtKnotSeer.name])
    expect(result).toEqual(result2)
  })

  it('handles color count filters', async function () {
    const result = await searchNames(queryRunner, "c=2")

    expect(result).toEqual([aetherbladeAgent.name, kroxaTitanOfDeathsHunger.name])
  })
})