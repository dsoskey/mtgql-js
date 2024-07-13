import { Block, Cube, IllustrationTag, OracleTag } from '../types'
import { CardSet } from "../generated";

export interface DataProvider {
  getCube: (key: string) => Promise<Cube>
  getOtag: (key: string) => Promise<OracleTag>
  getAtag: (key: string) => Promise<IllustrationTag>
  getSet: (key: string) => Promise<CardSet>
  getBlock: (key: string) => Promise<Block>
}

interface MemoryDataProviderParams {
  cubes: Cube[]
  otags: OracleTag[]
  atags: IllustrationTag[]
  blocks: Block[]
  sets: CardSet[]
}
export class MemoryDataProvider implements DataProvider {
  private readonly cubes: { [key: string]: Cube }
  getCube(key: string): Promise<Cube> {
    return Promise.resolve(this.cubes[key])
  }

  private readonly otags: { [key: string]: OracleTag }
  getOtag(key: string): Promise<OracleTag> {
    return Promise.resolve(this.otags[key])
  }

  private readonly atags: { [key: string]: IllustrationTag }
  getAtag(key: string): Promise<IllustrationTag> {
    return Promise.resolve(this.atags[key])
  }

  private readonly blocks: { [key: string]: Block }
  getBlock(key: string): Promise<Block> {
    return Promise.resolve(this.blocks[key])
  }

  private readonly sets: { [key: string]: CardSet }
  getSet(key: string): Promise<CardSet> {
    return Promise.resolve(this.sets[key])
  }

  constructor({ cubes, otags, atags, blocks, sets }: MemoryDataProviderParams) {
    this.cubes = {}
    for (const cube of cubes ?? []) {
      this.cubes[cube.key] = cube;
    }
    this.otags = {}
    for (const otag of otags ?? []) {
      this.otags[otag.label] = otag;
    }
    this.atags = {}
    for (const atag of atags ?? []) {
      this.atags[atag.label] = atag;
    }
    this.blocks = {}
    for (const block of blocks ?? []) {
      this.blocks[block.block_code] = block
      this.blocks[block.block.toLowerCase()] = block;
    }
    this.sets = {}
    for (const set of sets ?? []) {
      this.sets[set.code] = set;
      // this.sets[set.name.toLowerCase()] = set;
    }
  }
}