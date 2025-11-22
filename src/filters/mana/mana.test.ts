import { davrielsWithering } from '../_testData/davrielsWithering'
import { kroxaTitanOfDeathsHungerOld } from '../_testData/kroxaTitanOfDeathsHunger'
import { defaultRunner, searchNames } from '../_testData/_utils'
import { preordain } from '../_testData/preordain'
import { darkConfidant } from '../_testData/darkConfidant'
import { combineHybridSymbols } from './mana'
import { gitaxianProbe } from '../_testData/gitaxianProbe'
import { delverOfSecrets } from '../_testData/delverOfSecrets'
import {bonesplitter} from "../_testData/bonesplitter";
import {parseSimpleManaCost} from "../../parserUtils";
import {emrakulTheAeonsTorn} from "../_testData/emrakulTheAeonsTorn";
import {ghaltaPrimalHunger} from "../_testData/ghaltaPrimalHunger";

describe("combineHybridSymbols", function() {
  it("should not combine an existing hybrid symbol", function () {
    const symbols = "r/u/r/u".split("")
    const result = combineHybridSymbols(symbols);
    expect(result).toEqual(["r/u", "r/u"])
  })
  it('should combine mana symbols adjacent to a "/"', function() {
    const symbols = ["u","/", "r"];
    const result = combineHybridSymbols(symbols);
    expect(result).toEqual(["u/r"])
  })
  it('should combine mana symbols adjacent to a "/"', function() {
    const symbols = ["u", "b" ,"/", "r", "g"];
    const result = combineHybridSymbols(symbols);
    expect(result).toEqual(["u", "b/r", "g"])
  })
  it("drops leading and ending slashes", function() {
    const symbols = ["/", "u", "b" ,"/", "r", "g", "/"];
    const result = combineHybridSymbols(symbols);
    expect(result).toEqual(["u", "b/r", "g"])
  })
  it("drops slashes that have adjacent slashes", function() {
    const symbols = ["u", "b" ,"/", "/", "r", "g"];
    const result = combineHybridSymbols(symbols);
    expect(result).toEqual(["u", "b", "r", "g"])
  })
})

describe("parseSimpleManaCost", function() {
  it('should handle 1bb', function() {
    const result = parseSimpleManaCost("1bb");
    expect(result).toEqual(["1", "b", "b"])
  });
  it('should handle 10bb', function() {
    const result = parseSimpleManaCost("10bb");
    expect(result).toEqual(["10", "b", "b"])
  });
  it('should handle bb', function() {
    const result = parseSimpleManaCost("bb");
    expect(result).toEqual(["b", "b"])
  })
  it('should combine multiple instances of numbers into a single generic cost', function() {
    const result = parseSimpleManaCost("2b2b2");
    expect(result).toEqual(["6", "b", "b"])
  })

})

describe('mana filter', function() {

  const corpus = [
    bonesplitter,
    preordain,
    davrielsWithering,
    darkConfidant,
    kroxaTitanOfDeathsHungerOld,
    ghaltaPrimalHunger,
    emrakulTheAeonsTorn,
  ]
  const queryRunner = defaultRunner(corpus)

  it('should handle numbers in mana filter', async function() {
    const result = await searchNames(queryRunner, "mana=1")

    expect(result).toEqual([bonesplitter.name])
  })

  it('should handle numbers in mana filter 2', async function() {
    const result = await searchNames(queryRunner, "mana=1B")

    expect(result).toEqual([darkConfidant.name])
  })

  it('should handle multi-digit numbers', async function() {
    const result = await searchNames(queryRunner, "mana>10")

    expect(result).toEqual([emrakulTheAeonsTorn.name, ghaltaPrimalHunger.name]);
  })

  it('should combine multiple instances of numbers into a single generic cost', async function() {
    const result = await searchNames(queryRunner, "mana>5g5")

    expect(result).toEqual([ghaltaPrimalHunger.name]);
  })

  it('should handle exact match', async function() {
    const result = await searchNames(queryRunner, "mana=rb")

    expect(result).toEqual([kroxaTitanOfDeathsHungerOld.name])
  })

  it('should handle != filter', async function() {
    const result = await searchNames(queryRunner, "m!=b")

    expect(result).toEqual([
      bonesplitter.name,
      darkConfidant.name,
      emrakulTheAeonsTorn.name,
      ghaltaPrimalHunger.name,
      kroxaTitanOfDeathsHungerOld.name,
      preordain.name
    ])
  })

  it('should handle > filter', async function() {
    const result = await searchNames(queryRunner, "mana>b")

    expect(result).toEqual([darkConfidant.name, kroxaTitanOfDeathsHungerOld.name])
  })

  it('should handle < filter', async function() {
    const result = await searchNames(queryRunner, "mana<rb")

    expect(result).toEqual([davrielsWithering.name])
  })

  it('should handle <= filter', async function() {
    const result = await searchNames(queryRunner, "mana<=rb")

    expect(result).toEqual([davrielsWithering.name, kroxaTitanOfDeathsHungerOld.name])
  })

  it('should handle >= filter, which is the default', async function() {
    const result = await searchNames(queryRunner, "mana>=b")
    const defaultResult = await searchNames(queryRunner, "mana:b")

    expect(result).toEqual([darkConfidant.name, davrielsWithering.name, kroxaTitanOfDeathsHungerOld.name])
    expect(result).toEqual(defaultResult)
  })
  it.todo("should handle mixed symbols (aka r{r/u})")
})

describe('Mana regex filter', function() {
  const corpus = [gitaxianProbe, delverOfSecrets, davrielsWithering]
  const queryRunner = defaultRunner(corpus)
  it('should handle typical regexes', async function() {
    const result = await searchNames(queryRunner, "mana:/u/")
    expect(result).toEqual([delverOfSecrets.name, gitaxianProbe.name])
  })
  it('should substitute special regex escapes like \\smp', async function() {
    const result = await searchNames(queryRunner, "mana:/\\smp/")
    expect(result).toEqual([gitaxianProbe.name])
  })
})