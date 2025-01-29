import { mirrex } from '../_testData/mirrex'
import { animateLand } from '../_testData/animateLand'
import { defaultRunner, names } from '../_testData/_utils'
import { negate } from '../_testData/negate'

describe('rarity filter', function() {
  const corpus = [mirrex, animateLand, negate]
  const queryRunner = defaultRunner(corpus);

  ["r", 'rarity'].forEach(filterKeyword => {
    it(`${filterKeyword} gets parsed properly`, async () => {
      const result = names(await queryRunner.search(`${filterKeyword}:r`))

      expect(result).toEqual([mirrex.name])
    })
  })

  it('handles <=', async () => {
    const result = names(await queryRunner.search(`r<=r`))

    expect(result).toEqual([animateLand.name, mirrex.name, negate.name])
  })
  it('handles <', async () => {
    const result = names(await queryRunner.search(`r<r`))

    expect(result).toEqual([animateLand.name, negate.name])
  })

  it('handles >=', async () => {
    const result = names(await queryRunner.search(`r>=u`))

    expect(result).toEqual([animateLand.name, mirrex.name])
  })

  it('handles >', async () => {
    const result = names(await queryRunner.search(`r>u`))

    expect(result).toEqual([mirrex.name])
  })

  it('handles !=', async () => {
    const result = names(await queryRunner.search(`r!=common`))

    expect(result).toEqual([animateLand.name, mirrex.name])
  })
})