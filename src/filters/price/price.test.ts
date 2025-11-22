import { bloodCryptOld } from '../_testData/bloodCrypt'
import { tarmogoyf } from '../_testData/tarmogoyf'
import { defaultRunner, searchNames } from '../_testData/_utils'
import { asymmetrySage } from '../_testData/asymmetrySage'

describe('price filter', function() {
  const corpus = [asymmetrySage, bloodCryptOld, tarmogoyf];
  const queryRunner = defaultRunner(corpus);
  describe('usd', function() {
    it(`< should work`, async function() {
      const result = await searchNames(queryRunner, "usd<15")

      expect(result).toEqual([tarmogoyf.name])
    })

    it(`= should work`, async function() {
      const result = await searchNames(queryRunner, "usd=18.52")

      expect(result).toEqual([bloodCryptOld.name])
    })

    it(`!= should work`, async function() {
      const result = await searchNames(queryRunner, "usd!=18.52")

      expect(result).toEqual([tarmogoyf.name])
    })

    it(`<= should work`, async function() {
      const result = await searchNames(queryRunner, "usd<=18.52")

      expect(result).toEqual([bloodCryptOld.name, tarmogoyf.name])
    })

    it(`> should work`, async function() {
      const result = await searchNames(queryRunner, "usd>15")

      expect(result).toEqual([bloodCryptOld.name])
    })

    it(`>= should work`, async function() {
      const result = await searchNames(queryRunner, "usd>=11.79")

      expect(result).toEqual([bloodCryptOld.name, tarmogoyf.name])
    })
  })

  describe('eur', function() {
    it(`< should work`, async function() {
      const result = await searchNames(queryRunner, "eur<15")

      expect(result).toEqual([tarmogoyf.name])
    })

    it(`= should work`, async function() {
      const result = await searchNames(queryRunner, "eur=15.86")

      expect(result).toEqual([bloodCryptOld.name])
    })

    it(`!= should work`, async function() {
      const result = await searchNames(queryRunner, "eur!=15.86")

      expect(result).toEqual([tarmogoyf.name])
    })

    it(`<= should work`, async function() {
      const result = await searchNames(queryRunner, "eur<=15.86")

      expect(result).toEqual([bloodCryptOld.name, tarmogoyf.name])
    })

    it(`> should work`, async function() {
      const result = await searchNames(queryRunner, "eur>15")

      expect(result).toEqual([bloodCryptOld.name])
    })

    it(`>= should work`, async function() {
      const result = await searchNames(queryRunner, "eur>=12.12")

      expect(result).toEqual([bloodCryptOld.name, tarmogoyf.name])
    })
  })

  describe('tix', function() {
    it(`< should work`, async function() {
      const result = await searchNames(queryRunner, "tix<3")

      expect(result).toEqual([bloodCryptOld.name])
    })

    it(`= should work`, async function() {
      const result = await searchNames(queryRunner, "tix=3.13")

      expect(result).toEqual([tarmogoyf.name])
    })

    it(`!= should work`, async function() {
      const result = await searchNames(queryRunner, "tix!=3.13")

      expect(result).toEqual([bloodCryptOld.name])
    })

    it(`<= should work`, async function() {
      const result = await searchNames(queryRunner, "tix<=3.13")

      expect(result).toEqual([bloodCryptOld.name, tarmogoyf.name])
    })

    it(`> should work`, async function() {
      const result = await searchNames(queryRunner, "tix>3")

      expect(result).toEqual([tarmogoyf.name])
    })

    it(`>= should work`, async function() {
      const result = await searchNames(queryRunner, "tix>=2.22")

      expect(result).toEqual([bloodCryptOld.name, tarmogoyf.name])
    })
  })
})