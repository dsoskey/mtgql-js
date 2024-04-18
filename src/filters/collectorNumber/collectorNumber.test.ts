import { phantomBeast } from '../_testData/phantomBeast'
import { preordain } from '../_testData/preordain'
import { negate } from '../_testData/negate'
import { QueryRunner } from '../../queryRunner'
import { defaultDataProvider, defaultOptions, names } from '../_testData/_utils'


describe('collectorNumber filter', function() {
  const corpus = [negate, phantomBeast, preordain]
  const queryRunner = new QueryRunner({ corpus, defaultOptions, dataProvider: defaultDataProvider });

  ['cn', 'number'].forEach(filterKeyword => {
    it(`${filterKeyword} parses <= properly`, async () => {
      const result = names(await queryRunner.search(`${filterKeyword}<=69`))

      expect(result).toEqual([negate.name, phantomBeast.name])
    })
  })

  it("parses < properly", async () => {
    const result = names(await queryRunner.search('cn<69'))

    expect(result).toEqual([negate.name])
  })
  it("parses >= properly", async () => {
    const result = names(await queryRunner.search('cn>=69'))

    expect(result).toEqual([phantomBeast.name, preordain.name])
  })
  it("parses > properly", async () => {
    const result = names(await queryRunner.search('cn>69'))

    expect(result).toEqual([preordain.name])
  })
  it("parses = properly", async () => {
    const result = names(await queryRunner.search('cn=69'))

    expect(result).toEqual([phantomBeast.name])
  })
  it("parses != properly", async () => {
    const result = names(await queryRunner.search('cn!=69'))

    expect(result).toEqual([negate.name, preordain.name])
  })
})