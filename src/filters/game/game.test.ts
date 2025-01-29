import { asymmetrySage } from '../_testData/asymmetrySage'
import { barrysLand } from '../_testData/barrysLand'
import { zodiacDragonMtgo } from '../_testData/zodiacDragon'
import { defaultRunner, names } from '../_testData/_utils'

describe('game filter', function() {
  const corpus = [asymmetrySage, barrysLand, zodiacDragonMtgo]
  const queryRunner = defaultRunner(corpus)
  it("includes cards present in arena", async function() {
    const result = names(await queryRunner.search("game:arena"))

    expect(result.length).toEqual(1)
    expect(result[0]).toEqual(asymmetrySage.name)
  })
it("includes cards present in paper", async function() {
    const result = names(await queryRunner.search("game:paper"))

    expect(result.length).toEqual(1)
    expect(result[0]).toEqual(barrysLand.name)
  })
it("includes cards present in mtgo", async function() {
    const result = names(await queryRunner.search("game:mtgo"))

    expect(result.length).toEqual(1)
    expect(result[0]).toEqual(zodiacDragonMtgo.name)
  })
})