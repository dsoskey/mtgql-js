import { defaultRunner, names, searchNames } from '../_testData/_utils'
import { preordain } from '../_testData/preordain'
import { animateLand } from '../_testData/animateLand'
import {delverOfSecrets} from "../_testData/delverOfSecrets";

const corpus = [preordain, animateLand, delverOfSecrets]
const queryRunner = defaultRunner(corpus);

describe('set filter', function() {
  ["s", "set", "e", "edition"].forEach(filterKeyword => {
    it(`${filterKeyword} should match exact set codes`, async function() {
      const result = names(await queryRunner.search(`${filterKeyword}:m11`))

      expect(result).toEqual([preordain.name])
    })
  })
  it("should match exact set names", async function() {
    const result = names(await queryRunner.search('set:"Magic 2011"'))

    expect(result).toEqual([preordain.name])
  })
  it('should match multiple comma separated set codes', async function() {
    const result = await searchNames(queryRunner, "set:m11,isd");

    expect(result).toEqual([delverOfSecrets.name, preordain.name]);
  })
})

describe('set-type filter', function() {
  it("should match exact set types", async function() {
    const result = names(await queryRunner.search("st:core"))

    expect(result).toEqual([preordain.name])
  })
})