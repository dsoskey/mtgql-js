import { QueryRunner } from '../../queryRunner'
import { phantomBeast } from '../_testData/phantomBeast'
import { kroxaTitanOfDeathsHunger } from '../_testData/kroxaTitanOfDeathsHunger'
import { delverOfSecrets } from '../_testData/delverOfSecrets'
import {defaultDataProvider, defaultOptions, defaultRunner, names} from '../_testData/_utils'
import { norinTheWary } from '../_testData/norinTheWary'
import { tarmogoyf } from '../_testData/tarmogoyf'
import { preordain } from '../_testData/preordain'

describe('combat filters', function() {
  const corpus = [
    phantomBeast,
    kroxaTitanOfDeathsHunger,
    norinTheWary,
    preordain,
  ]
  const queryRunner = defaultRunner(corpus)

  const dfcCorpus = [
    delverOfSecrets,
  ]
  const dfcQueryRunner = defaultRunner(dfcCorpus);
  describe('combatToCombatNode', function() {
    it('should handle pow number comparisons and dfcs', async () => {
      const result = names(await dfcQueryRunner.search("pow>2"))

      expect(result).toEqual([delverOfSecrets.name])
    })

    it('should handle tou number comparisons and dfcs', async () => {
      const result = names(await dfcQueryRunner.search("tou<2"))

      expect(result).toEqual([delverOfSecrets.name])
    })

    it('should handle pow>tou', async function() {
      const result = names(await queryRunner.search("pow>tou"))

      expect(result).toEqual([norinTheWary.name])
    })
    it('should handle pow=tou', async function() {
      const result = names(await queryRunner.search("pow=tou"))

      expect(result).toEqual([kroxaTitanOfDeathsHunger.name])
    })
    it('should handle pow<tou', async function() {
      const result = names(await queryRunner.search("pow<tou"))

      expect(result).toEqual([phantomBeast.name])
    })
    it('should handle pow>=tou', async function() {
      const result = names(await queryRunner.search("pow>=tou"))

      expect(result).toEqual([kroxaTitanOfDeathsHunger.name, norinTheWary.name])
    })
    it('should handle pow<=tou', async function() {
      const result = names(await queryRunner.search("pow<=tou"))

      expect(result).toEqual([kroxaTitanOfDeathsHunger.name, phantomBeast.name])
    })
    it('should handle pow!=tou', async function() {
      const result = names(await queryRunner.search("pow!=tou"))

      expect(result).toEqual([norinTheWary.name, phantomBeast.name])
    })

    it('should handle tou>pow', async function() {
      const result = names(await queryRunner.search("tou>pow"))

      expect(result).toEqual([phantomBeast.name])
    })
    it('should handle tou=pow', async function() {
      const result = names(await queryRunner.search("tou=pow"))

      expect(result).toEqual([kroxaTitanOfDeathsHunger.name])
    })
    it('should handle tou<pow', async function() {
      const result = names(await queryRunner.search("tou<pow"))

      expect(result).toEqual([norinTheWary.name])
    })
    it('should handle tou>=pow', async function() {
      const result = names(await queryRunner.search("tou>=pow"))

      expect(result).toEqual([kroxaTitanOfDeathsHunger.name, phantomBeast.name])
    })
    it('should handle tou<=pow', async function() {
      const result = names(await queryRunner.search("tou<=pow"))

      expect(result).toEqual([kroxaTitanOfDeathsHunger.name, norinTheWary.name])
    })

    it("should handle stars", async () => {
      const goyfQueryRunner = defaultRunner([tarmogoyf]);
      const result = names(await goyfQueryRunner.search('pow=0 name:tarmogoyf'))

      expect(result).toEqual([tarmogoyf.name])
    })
  })

  describe('powTouTotalOperation', function() {
    ["pt", "powtou"].forEach(filterKeyword => {
      it(`should handle ${filterKeyword}`, async () => {
        const result = names(await queryRunner.search(`${filterKeyword}>11`))

        expect(result).toEqual([kroxaTitanOfDeathsHunger.name])
      })
    })
  })
})