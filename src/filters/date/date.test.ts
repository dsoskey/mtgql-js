import { QueryRunner } from '../../queryRunner'
import { defaultOptions, names } from '../_testData/_utils'
import { preordain } from '../_testData/preordain'
import { adantoVanguard } from '../_testData/adantoVanguard'
import { mirrex } from '../_testData/mirrex'
import {MemoryDataProvider} from "../dataProvider";
import {CardSet} from "../../generated";

describe('date filters', function() {
  const corpus = [preordain, adantoVanguard, mirrex]
  const set: CardSet = {
    code: "m11",
    released_at: "2010-07-16"
  }
  const dataProvider = new MemoryDataProvider({
    cubes: [], atags: [], otags: [], blocks: [], sets: [set],
  })
  const queryRunner = new QueryRunner({ corpus, defaultOptions, dataProvider })

  it("returns an error when the date doesnt fit yyyy-MM-dd", async () => {
    return expect((await queryRunner.search("date<jan1st2021"))._unsafeUnwrapErr()).toBeDefined()
  })

  it('should handle year only queries', async () => {
    const result = names(await queryRunner.search("date=2010"))

    expect(result).toEqual([preordain.name])
  })

  it('should handle set codes', async () => {
    const result = names(await queryRunner.search("date=m11"))

    expect(result).toEqual([preordain.name])
  })

  it('= compares input date to a printings release date', async () => {
    const result = names(await queryRunner.search("date=2010-07-16"))

    expect(result).toEqual([preordain.name])
  })

  it('< compares input date to a printings release date', async () => {
    const result = names(await queryRunner.search("date<2020-01-01"))

    expect(result).toEqual([adantoVanguard.name, preordain.name])
  })

  it('> compares input date to a printings release date', async () => {
    const result = names(await queryRunner.search("date>2020-01-01"))

    expect(result).toEqual([mirrex.name])
  })

  it('<= compares input date to a printings release date', async () => {
    const result = names(await queryRunner.search("date<=2019-11-07"))

    expect(result).toEqual([adantoVanguard.name, preordain.name])
  })

  it('>= compares input date to a printings release date', async () => {
    const result = names(await queryRunner.search("date>=2019-11-07"))

    expect(result).toEqual([adantoVanguard.name, mirrex.name])
  })
})