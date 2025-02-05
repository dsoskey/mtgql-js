import { phantomBeast } from '../_testData/phantomBeast'
import { preordain } from '../_testData/preordain'
import { negate } from '../_testData/negate'
import { defaultRunner, searchNames } from '../_testData/_utils'


describe('collectorNumber filter', function() {
  const corpus = [negate, phantomBeast, preordain]
  const queryRunner = defaultRunner(corpus);

  ['cn', 'number'].forEach(filterKeyword => {
    it(`${filterKeyword} parses <= properly`, async () => {
      const result = await searchNames(queryRunner, `${filterKeyword}<=69`)

      expect(result).toEqual([negate.name, phantomBeast.name])
    })
  })

  it("parses < properly", async () => {
    const result = await searchNames(queryRunner, 'cn<69')

    expect(result).toEqual([negate.name])
  })
  it("parses >= properly", async () => {
    const result = await searchNames(queryRunner, 'cn>=69')

    expect(result).toEqual([phantomBeast.name, preordain.name])
  })
  it("parses > properly", async () => {
    const result = await searchNames(queryRunner, 'cn>69')

    expect(result).toEqual([preordain.name])
  })
  it("parses = properly", async () => {
    const result = await searchNames(queryRunner, 'cn=69')

    expect(result).toEqual([phantomBeast.name])
  })
  it("parses != properly", async () => {
    const result = await searchNames(queryRunner, 'cn!=69')

    expect(result).toEqual([negate.name, preordain.name])
  })
})