import { bloodCrypt } from '../_testData/bloodCrypt'
import { tarmogoyf } from '../_testData/tarmogoyf'
import { defaultRunner, names } from '../_testData/_utils'
import { asymmetrySage } from '../_testData/asymmetrySage'

describe('price filter', function() {
  const corpus = [asymmetrySage, bloodCrypt, tarmogoyf];
  const queryRunner = defaultRunner(corpus);
  describe('usd', function() {
    it(`< should work`, async function() {
      const result = names(await queryRunner.search("usd<15"))

      expect(result).toEqual([tarmogoyf.name])
    })

    it(`= should work`, async function() {
      const result = names(await queryRunner.search("usd=18.52"))

      expect(result).toEqual([bloodCrypt.name])
    })

    it(`!= should work`, async function() {
      const result = names(await queryRunner.search("usd!=18.52"))

      expect(result).toEqual([tarmogoyf.name])
    })

    it(`<= should work`, async function() {
      const result = names(await queryRunner.search("usd<=18.52"))

      expect(result).toEqual([bloodCrypt.name, tarmogoyf.name])
    })

    it(`> should work`, async function() {
      const result = names(await queryRunner.search("usd>15"))

      expect(result).toEqual([bloodCrypt.name])
    })

    it(`>= should work`, async function() {
      const result = names(await queryRunner.search("usd>=11.79"))

      expect(result).toEqual([bloodCrypt.name, tarmogoyf.name])
    })
  })

  describe('eur', function() {
    it(`< should work`, async function() {
      const result = names(await queryRunner.search("eur<15"))

      expect(result).toEqual([tarmogoyf.name])
    })

    it(`= should work`, async function() {
      const result = names(await queryRunner.search("eur=15.86"))

      expect(result).toEqual([bloodCrypt.name])
    })

    it(`!= should work`, async function() {
      const result = names(await queryRunner.search("eur!=15.86"))

      expect(result).toEqual([tarmogoyf.name])
    })

    it(`<= should work`, async function() {
      const result = names(await queryRunner.search("eur<=15.86"))

      expect(result).toEqual([bloodCrypt.name, tarmogoyf.name])
    })

    it(`> should work`, async function() {
      const result = names(await queryRunner.search("eur>15"))

      expect(result).toEqual([bloodCrypt.name])
    })

    it(`>= should work`, async function() {
      const result = names(await queryRunner.search("eur>=12.12"))

      expect(result).toEqual([bloodCrypt.name, tarmogoyf.name])
    })
  })

  describe('tix', function() {
    it(`< should work`, async function() {
      const result = names(await queryRunner.search("tix<3"))

      expect(result).toEqual([bloodCrypt.name])
    })

    it(`= should work`, async function() {
      const result = names(await queryRunner.search("tix=3.13"))

      expect(result).toEqual([tarmogoyf.name])
    })

    it(`!= should work`, async function() {
      const result = names(await queryRunner.search("tix!=3.13"))

      expect(result).toEqual([bloodCrypt.name])
    })

    it(`<= should work`, async function() {
      const result = names(await queryRunner.search("tix<=3.13"))

      expect(result).toEqual([bloodCrypt.name, tarmogoyf.name])
    })

    it(`> should work`, async function() {
      const result = names(await queryRunner.search("tix>3"))

      expect(result).toEqual([tarmogoyf.name])
    })

    it(`>= should work`, async function() {
      const result = names(await queryRunner.search("tix>=2.22"))

      expect(result).toEqual([bloodCrypt.name, tarmogoyf.name])
    })
  })
})