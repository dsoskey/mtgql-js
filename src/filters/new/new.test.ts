import { defaultRunner, searchNames } from '../_testData/_utils'
import { mishrasFactoryPrints } from '../_testData/mishrasFactory'
import { islandPrints } from '../_testData/island'
import { Card } from "../../generated";

describe('new filter', function() {
  const corpus: Card[] = [
    ...mishrasFactoryPrints,
    ...islandPrints
  ]
  const queryRunner = defaultRunner(corpus)
  it('should handle rarity filter', async function() {
    const result = await searchNames(queryRunner, "new:rarity");
  });

  it.skip('should handle flavor filter', async function() {
    const result = await searchNames(queryRunner, "new:flavor");

    expect(result).toEqual([islandPrints[0]])
  });

  it('should handle art filter', async function() {
    const result = await searchNames(queryRunner, "new:art");

    expect(result.length).toEqual(2)
  });

  it('should handle artist filter', async function() {
    const result = await searchNames(queryRunner, "new:artist");

    expect(result.length).toEqual(2)

  });

  it('should handle frame filter', async function() {
    const result = await searchNames(queryRunner, "new:frame");
  });

  it('should handle language filter', async function() {
    const result = await searchNames(queryRunner, "new:language");

  });

  it('should handle game filter', async function() {
    const result = await searchNames(queryRunner, "new:game");

  });

  it('should handle paper filter', async function() {
    const result = await searchNames(queryRunner, "new:paper");
    // Test code for paper filter
  });

  it('should handle mtgo filter', async function() {
    const result = await searchNames(queryRunner, "new:mtgo");

  });

  it('should handle arena filter', async function() {
    const result = await searchNames(queryRunner, "new:arena");
  });

  it('should handle nonfoil filter', async function() {
    const result = await searchNames(queryRunner, "new:nonfoil");
  });

  it('should handle foil filter', async function() {
    const result = await searchNames(queryRunner, "new:foil");
  });
});