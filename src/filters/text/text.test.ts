import { QueryRunner } from '../../queryRunner'
import {defaultDataProvider, defaultOptions, defaultRunner, names} from '../_testData/_utils'
import { spinerockKnoll } from '../_testData/spinerockKnoll'
import { ancientStirrings } from '../_testData/ancientStirrings'
import { preordain } from '../_testData/preordain'
import { concordantCrossroads } from '../_testData/concordantCrossroads'
import { emberethShieldbreaker } from '../_testData/emberethShieldbreaker'
import { elvishPromenade } from '../_testData/elvishPromenade'
import { ramunapRuins } from '../_testData/ramunapRuins'
import { seasideHaven } from '../_testData/seasideHaven'
import { asymmetrySage } from '../_testData/asymmetrySage'
import { phyrexianWalker } from '../_testData/phyrexianWalker'
import {merfolkSpy} from "../_testData/merfolkSpy";
import {merfolkWindrobber} from "../_testData/merfolkWindrobber";
import {coralhelmCommander} from "../_testData/coralhelmCommander";

describe('text filters', function() {
  const queryRunner = defaultRunner([
    spinerockKnoll,
    ancientStirrings,
    preordain,
    concordantCrossroads,
    emberethShieldbreaker,
    elvishPromenade,
    ramunapRuins,
    seasideHaven,
    asymmetrySage,
    phyrexianWalker,
  ])
  describe('name filter', function() {
    it("should do a name search when no keyword is present", async () => {
      const result = names(await queryRunner.search("orda"))

      expect(result).toEqual([concordantCrossroads.name, preordain.name])
    })
    it("should do a name search for a keywordless string", async () => {
      const result = names(await queryRunner.search(`"spinerock"`))

      expect(result).toEqual([spinerockKnoll.name])
    })
  })
  describe('exact name filter', function() {
    it("should do a name search when no keyword is present", async () => {
      const result = names(await queryRunner.search("!preordain"))

      expect(result).toEqual([preordain.name])
    })
    it("should do a name search for a keywordless string", async () => {
      const result = names(await queryRunner.search(`!"spinerock knoll"`))

      expect(result).toEqual([spinerockKnoll.name])
    })
  })
  describe('name regex filter', function() {
    it('handles name regex matches', async () => {
      const result = names(await queryRunner.search('name=/^A-/'))

      expect(result).toEqual([asymmetrySage.name])
    })
  })
  describe('type text filter', function() {
    it('handles multi-face type matches', async () => {
      const result = names(await queryRunner.search("t:adventure"))

      expect(result).toEqual([emberethShieldbreaker.name])
    })
  })
  describe('type regex filter', function() {
    it('handles type line regex matches', async () => {
      const result = names(await queryRunner.search("t=/tribal .* elf/"))

      expect(result).toEqual([elvishPromenade.name])
    })
  })
  describe('oracle text filter', function() {
    it ('handles unquoted strings', async () => {
      const result = names(await queryRunner.search("o:draw"))

      expect(result).toEqual([preordain.name, seasideHaven.name])
    })

    it('excludes reminder text', async () => {
      const result = names(await queryRunner.search(`o:"put the rest on the bottom"`))

      expect(result).toEqual([ancientStirrings.name])
    })

    it("substitutes ~ for the card's name", async () => {
      const result = names(await queryRunner.search('o:"~ deals 2"'))

      expect(result).toEqual([ramunapRuins.name])
    })
  })
  describe('oracle text regex', function() {
    it("filters using regex", async () => {
      const result = names(await queryRunner.search("o:/sacrifice a.*:/"))

      expect(result).toEqual([ramunapRuins.name, seasideHaven.name])
    })
    it("handles ~ substitution like scryfall does", async function() {
      const runnerd = defaultRunner([
        merfolkSpy,
        merfolkWindrobber,
        coralhelmCommander,
      ])
      const result = names(await runnerd.search("fo:/~*merfolk/"))

      expect(result).toEqual([coralhelmCommander.name])
    })
  })
  describe("oracle text count", function () {
    it('should filter cards by word count', async function() {
      const result = names(await queryRunner.search(`o>4`))

      expect(result).toEqual([
        ancientStirrings.name,
        asymmetrySage.name,
        elvishPromenade.name,
        preordain.name,
        ramunapRuins.name,
        seasideHaven.name,
        spinerockKnoll.name]
      )
    })
    it("should consider cards with no text having 0 words", async function() {
      const result = names(await queryRunner.search(`o=0`))

      expect(result).toEqual([phyrexianWalker.name])
    })
  })
  describe('full oracle text filter', function() {
    it('includes reminder text', async () => {
      const result = names(await queryRunner.search(`fo:"put the rest on the bottom"`))

      expect(result).toEqual([ancientStirrings.name, spinerockKnoll.name])
    })
  })
  describe('full oracle text regex', function() {
    it('includes reminder text', async () => {
      const result = names(await queryRunner.search(`fo:/put .* on the bottom/`))

      expect(result).toEqual([ancientStirrings.name, preordain.name, spinerockKnoll.name])
    })
  })
})