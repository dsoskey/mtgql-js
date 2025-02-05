import { gorillaTitan } from '../_testData/gorillaTitan'
import { birdsOfParadise } from '../_testData/birdsOfParadise'
import { emberethShieldbreaker } from '../_testData/emberethShieldbreaker'
import { defaultRunner, searchNames } from '../_testData/_utils'

describe("flavor filters", () => {
  const corpus = [gorillaTitan, birdsOfParadise, emberethShieldbreaker]
  const queryRunner = defaultRunner(corpus);

  it('should handle string searches', async function() {
    const result = await searchNames(queryRunner, "flavor:banana");

    expect(result).toEqual([gorillaTitan.name])
  })

  it('should handle regex searches', async function() {
    const result = await searchNames(queryRunner, 'flavor:/".+"/');

    expect(result).toEqual([emberethShieldbreaker.name, gorillaTitan.name])
  })
})