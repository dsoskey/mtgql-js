import { defaultRunner, searchNames } from '../_testData/_utils'
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
import {irrigationDitch} from "../_testData/irrigationDitch";
import {condemn} from "../_testData/condemn";
import {blastedLandscape} from "../_testData/blastedLandscape";

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
      const result = await searchNames(queryRunner, "orda")

      expect(result).toEqual([concordantCrossroads.name, preordain.name])
    })
    it("should do a name search for a keywordless string", async () => {
      const result = await searchNames(queryRunner, `"spinerock"`)

      expect(result).toEqual([spinerockKnoll.name])
    })
    it("shouldn't do a name search for a keywordless 'or' string", async () => {
      const result = await searchNames(queryRunner, "* (st:core or st:expansion or st:masters)")

      expect(result).toEqual([
        "Ancient Stirrings",
        "A-Symmetry Sage",
        "Concordant Crossroads",
        "Embereth Shieldbreaker // Battle Display",
        "Phyrexian Walker",
        "Preordain",
        "Ramunap Ruins",
        "Seaside Haven",
      ])
    })
  })
  describe('exact name filter', function() {
    it("should do a name search when no keyword is present", async () => {
      const result = await searchNames(queryRunner, "!preordain")

      expect(result).toEqual([preordain.name])
    })
    it("should do a name search for a keywordless string", async () => {
      const result = await searchNames(queryRunner, `!"spinerock knoll"`)

      expect(result).toEqual([spinerockKnoll.name])
    })
  })
  describe('name regex filter', function() {
    it('handles name regex matches', async () => {
      const result = await searchNames(queryRunner, 'name=/^A-/')

      expect(result).toEqual([asymmetrySage.name])
    })
  })
  describe('type text filter', function() {
    it('handles multi-face type matches', async () => {
      const result = await searchNames(queryRunner, "t:adventure")

      expect(result).toEqual([emberethShieldbreaker.name])
    })
  })
  describe('type regex filter', function() {
    it('handles type line regex matches', async () => {
      const result = await searchNames(queryRunner, "t=/tribal .* elf/")

      expect(result).toEqual([elvishPromenade.name])
    })
  })
  describe('oracle text filter', function() {
    it ('handles unquoted strings', async () => {
      const result = await searchNames(queryRunner, "o:draw")

      expect(result).toEqual([preordain.name, seasideHaven.name])
    })

    it('excludes reminder text', async () => {
      const result = await searchNames(queryRunner, `o:"put the rest on the bottom"`)

      expect(result).toEqual([ancientStirrings.name])
    })

    it("substitutes ~ for the card's name", async () => {
      const result = await searchNames(queryRunner, 'o:"~ deals 2"')

      expect(result).toEqual([ramunapRuins.name])
    })
  })
  describe('oracle text regex', function() {
    it("filters using regex", async () => {
      const result = await searchNames(queryRunner, "o:/sacrifice a.*:/")

      expect(result).toEqual([ramunapRuins.name, seasideHaven.name])
    })
    it("handles ~ substitution like scryfall does", async function() {
      const runnerd = defaultRunner([
        merfolkSpy,
        merfolkWindrobber,
        coralhelmCommander,
      ])
      const result = await searchNames(runnerd, "fo:/~*merfolk/")

      expect(result).toEqual([coralhelmCommander.name])
    })
  })
  describe("oracle text count", function () {
    it('should filter cards by word count', async function() {
      const result = await searchNames(queryRunner, `o>4`)

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
      const result = await searchNames(queryRunner, `o=0`)

      expect(result).toEqual([phyrexianWalker.name])
    })
  })
  describe('full oracle text filter', function() {
    it('includes reminder text', async () => {
      const result = await searchNames(queryRunner, `fo:"put the rest on the bottom"`)

      expect(result).toEqual([ancientStirrings.name, spinerockKnoll.name])
    })
  })
  describe('full oracle text regex', function() {
    it('includes reminder text', async () => {
      const result = await searchNames(queryRunner, `fo:/put .* on the bottom/`)

      expect(result).toEqual([ancientStirrings.name, preordain.name, spinerockKnoll.name])
    })
  })

  describe("original text", function() {
    const corpus = [irrigationDitch, ancientStirrings, condemn, blastedLandscape]
    const queryRunner = defaultRunner(corpus);
    it("handles cards with original_text", async function() {
      const result = await searchNames(queryRunner, 'ogo:ditch')

      expect(result).toEqual([irrigationDitch.name]);
    })


    it("handles cards with original_text that has reminder text", async function() {
      const result = await searchNames(queryRunner, 'fogo:discard')

      expect(result).toEqual([blastedLandscape.name])
    })

    it('handles regular expressions for full original text', async function() {
      const result = await searchNames(queryRunner, `fogo:/\\(.+\\)/`)

      expect(result).toEqual([blastedLandscape.name])
    })

    it("handles original text count", async function() {
      const result = await searchNames(queryRunner, 'ogo<20')

      // ancient stirrings is ignored because it doesn't have original_text
      expect(result).toEqual([blastedLandscape.name, condemn.name])
    })
  })
})