import { Color, Rarity } from "../generated";

export type ExternalCubeSource = "cubecobra" | "cubeartisan"
export type CubeSource = "list" | ExternalCubeSource
export const CUBE_SOURCE_OPTIONS: CubeSource[] = ["cubeartisan", "cubecobra", "list"]

export interface CoverImage {
  uri: string
  card_name: string
  artist: string
}

export interface CubeCard {
  oracle_id: string
  print_id?: string
  alt_image_uri?: string
  alt_image_back_uri?: string
  name?: string // cubeartisan exclusive
  mana_cost?: string
  cmc?: number
  type_line?: string
  tags?: string[]
  colors?: Color[]
  rarity?: Rarity
  color_category?: string
  status?: string
  notes?: string
}

export interface Cube {
  key: string,
  canonical_id: string
  name: string
  created_by: string
  description: string
  cover_image?: CoverImage
  /** @deprecated, iterate through cards now */
  oracle_ids: string[],
  /** @deprecated, iterate through cards now */
  print_ids: string[]
  cards: CubeCard[]
  source: CubeSource
  last_updated: Date
  last_source_update: Date
}