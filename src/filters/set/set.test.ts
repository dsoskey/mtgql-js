import { defaultRunner, searchNames } from '../_testData/_utils'
import { preordain } from '../_testData/preordain'
import { animateLand } from '../_testData/animateLand'
import {delverOfSecrets} from "../_testData/delverOfSecrets";
import {lavaAxe} from "../_testData/lavaAxe";
import {setData} from "../_testData/_setData";

const corpus = [preordain, animateLand, delverOfSecrets]
const queryRunner = defaultRunner(corpus);

describe('set filter', function() {
  ["s", "set", "e", "edition"].forEach(filterKeyword => {
    it(`${filterKeyword} should match exact set codes`, async function() {
      const result = await searchNames(queryRunner, `${filterKeyword}:m11`)

      expect(result).toEqual([preordain.name])
    })
  })
  it("should match exact set names", async function() {
    const result = await searchNames(queryRunner, 'set:"Magic 2011"')

    expect(result).toEqual([preordain.name])
  })
  it('should match multiple comma separated set codes', async function() {
    const result = await searchNames(queryRunner, "set:m11,isd");

    expect(result).toEqual([delverOfSecrets.name, preordain.name]);
  })
  it('should match multiple comma separated set codes', async function() {
    const queryRunner = defaultRunner([lavaAxe]);
    const result = await searchNames(queryRunner, "e:10e");

    expect(result).toEqual([lavaAxe.name]);
  })

  it('should work for every set code as of 2025.03.28', async function() {
    const result = await searchNames(queryRunner, `e:${setData.map(it => it.code).join(",")}`)
    expect(result).toEqual([animateLand.name, delverOfSecrets.name, preordain.name])
  })
})

describe('set-type filter', function() {
  it("should match exact set types", async function() {
    const result = await searchNames(queryRunner, "st:core")

    expect(result).toEqual([preordain.name])
  })
})