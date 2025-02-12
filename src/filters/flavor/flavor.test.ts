import { gorillaTitan } from '../_testData/gorillaTitan'
import { birdsOfParadise } from '../_testData/birdsOfParadise'
import { emberethShieldbreaker } from '../_testData/emberethShieldbreaker'
import {defaultDataProvider, defaultOptions, defaultRunner, names} from '../_testData/_utils'
import { QueryRunner } from '../../queryRunner'

describe("flavor filters", () => {
  const corpus = [gorillaTitan, birdsOfParadise, emberethShieldbreaker]
  const queryRunner = defaultRunner(corpus);

  it('should handle string searches', async function() {
    const result = names(await queryRunner.search("flavor:banana"))

    expect(result).toEqual([gorillaTitan.name])
  })

  it('should handle regex searches', async function() {
    const result = names(await queryRunner.search('flavor:/".+"/'))

    expect(result).toEqual([emberethShieldbreaker.name, gorillaTitan.name])
  })
})