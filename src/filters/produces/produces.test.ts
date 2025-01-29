import { bloodCrypt } from '../_testData/bloodCrypt'
import { birdsOfParadise } from '../_testData/birdsOfParadise'
import { ramunapRuins } from '../_testData/ramunapRuins'
import { concordantCrossroads } from '../_testData/concordantCrossroads'
import { bojukaBog } from '../_testData/bojukaBog'
import { defaultRunner, names } from '../_testData/_utils'

const corpus = [bojukaBog, bloodCrypt, birdsOfParadise, ramunapRuins, concordantCrossroads]
const queryRunner = defaultRunner(corpus);
describe('produces filter', function() {
  describe('mana', function() {
    it("handles >= and :", async () => {
      const result = names(await queryRunner.search("produces:r"))
      const result2 = names(await queryRunner.search("produces>=r"))

      expect(result).toEqual(result2)
      expect(result).toEqual([birdsOfParadise.name, bloodCrypt.name, ramunapRuins.name])
    })

    it("handles =", async () => {
      const result = names(await queryRunner.search("produces=rc"))

      expect(result).toEqual([ramunapRuins.name])
    })

    it("handles !=", async () => {
      const result = names(await queryRunner.search("produces!=u"))

      expect(result).toEqual([birdsOfParadise.name, bloodCrypt.name, bojukaBog.name, ramunapRuins.name])
    })

    it("handles <", async () => {
      const result = names(await queryRunner.search("produces<jund"))

      expect(result).toEqual([bloodCrypt.name, bojukaBog.name])
    })

    it("handles <=", async () => {
      const result = names(await queryRunner.search("produces<=rakdos"))

      expect(result).toEqual([bloodCrypt.name,bojukaBog.name])
    })

    it("handles >", async () => {
      const result = names(await queryRunner.search("produces>b"))

      expect(result).toEqual([birdsOfParadise.name, bloodCrypt.name])

    })
  })
  describe('count', function() {
    it('handles counting the number of colors cards produce', async () => {
      const result = names(await queryRunner.search("produces=2"))

      expect(result).toEqual([bloodCrypt.name, ramunapRuins.name])
    })

    it('handles > comparisons for the number of colors cards produce', async () => {
      const result = names(await queryRunner.search("produces>1"))

      expect(result).toEqual([birdsOfParadise.name,bloodCrypt.name,ramunapRuins.name])
    })
  })
})