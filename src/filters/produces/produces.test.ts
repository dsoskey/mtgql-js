import { bloodCryptOld } from '../_testData/bloodCrypt'
import { birdsOfParadise } from '../_testData/birdsOfParadise'
import { ramunapRuins } from '../_testData/ramunapRuins'
import { concordantCrossroads } from '../_testData/concordantCrossroads'
import { bojukaBog } from '../_testData/bojukaBog'
import { defaultRunner, searchNames } from '../_testData/_utils'

const corpus = [bojukaBog, bloodCryptOld, birdsOfParadise, ramunapRuins, concordantCrossroads]
const queryRunner = defaultRunner(corpus);
describe('produces filter', function() {
  describe('mana', function() {
    it("handles >= and :", async () => {
      const result = await searchNames(queryRunner, "produces:r")
      const result2 = await searchNames(queryRunner, "produces>=r")

      expect(result).toEqual(result2)
      expect(result).toEqual([birdsOfParadise.name, bloodCryptOld.name, ramunapRuins.name])
    })

    it("handles =", async () => {
      const result = await searchNames(queryRunner, "produces=rc")

      expect(result).toEqual([ramunapRuins.name])
    })

    it("handles !=", async () => {
      const result = await searchNames(queryRunner, "produces!=u")

      expect(result).toEqual([birdsOfParadise.name, bloodCryptOld.name, bojukaBog.name, ramunapRuins.name])
    })

    it("handles <", async () => {
      const result = await searchNames(queryRunner, "produces<jund")

      expect(result).toEqual([bloodCryptOld.name, bojukaBog.name])
    })

    it("handles <=", async () => {
      const result = await searchNames(queryRunner, "produces<=rakdos")

      expect(result).toEqual([bloodCryptOld.name,bojukaBog.name])
    })

    it("handles >", async () => {
      const result = await searchNames(queryRunner, "produces>b")

      expect(result).toEqual([birdsOfParadise.name, bloodCryptOld.name])

    })
  })
  describe('count', function() {
    it('handles counting the number of colors cards produce', async () => {
      const result = await searchNames(queryRunner, "produces=2")

      expect(result).toEqual([bloodCryptOld.name, ramunapRuins.name])
    })

    it('handles > comparisons for the number of colors cards produce', async () => {
      const result = await searchNames(queryRunner, "produces>1")

      expect(result).toEqual([birdsOfParadise.name,bloodCryptOld.name,ramunapRuins.name])
    })
  })
})