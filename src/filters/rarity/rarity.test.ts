import { mirrex } from '../_testData/mirrex'
import { animateLand } from '../_testData/animateLand'
import { defaultRunner, searchNames } from '../_testData/_utils'
import { negate } from '../_testData/negate'

describe('rarity filter', function() {
  const corpus = [mirrex, animateLand, negate]
  const queryRunner = defaultRunner(corpus);

  ["r", 'rarity'].forEach(filterKeyword => {
    it(`${filterKeyword} gets parsed properly`, async () => {
      const result = await searchNames(queryRunner, `${filterKeyword}:r`)

      expect(result).toEqual([mirrex.name])
    })
  })

  it('handles <=', async () => {
    const result = await searchNames(queryRunner, `r<=r`)

    expect(result).toEqual([animateLand.name, mirrex.name, negate.name])
  })
  it('handles <', async () => {
    const result = await searchNames(queryRunner, `r<r`)

    expect(result).toEqual([animateLand.name, negate.name])
  })

  it('handles >=', async () => {
    const result = await searchNames(queryRunner, `r>=u`)

    expect(result).toEqual([animateLand.name, mirrex.name])
  })

  it('handles >', async () => {
    const result = await searchNames(queryRunner, `r>u`)

    expect(result).toEqual([mirrex.name])
  })

  it('handles !=', async () => {
    const result = await searchNames(queryRunner, `r!=common`)

    expect(result).toEqual([animateLand.name, mirrex.name])
  })
})