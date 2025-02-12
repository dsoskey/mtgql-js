import { lagoHirvienteDeDarigaaz } from '../_testData/lagoHirvienteDeDarigaaz'
import { asymmetrySage } from '../_testData/asymmetrySage'
import { defaultRunner, names } from '../_testData/_utils'

describe('language filter', function() {
  const corpus = [asymmetrySage, lagoHirvienteDeDarigaaz]
  const queryRunner = defaultRunner(corpus);
  it('should show all cards for language:any', async function() {
    const result = names(await queryRunner.search("language:any"))

    expect(result).toEqual(corpus.map(it => it.name))
  })
  it('should filter by language otherwise', async function() {
    const result = names(await queryRunner.search("language:es"))

    expect(result).toEqual([lagoHirvienteDeDarigaaz.name])
  })
})