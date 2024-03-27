export type ExternalCubeSource = "cubecobra" | "cubeartisan"
export type CubeSource = "list" | ExternalCubeSource
export const CUBE_SOURCE_OPTIONS: CubeSource[] = ["cubeartisan", "cubecobra", "list"]

export interface CubeCard {
  oracle_id: string
  print_id?: string
}

export interface CubeDefinition {
  key: string,
  oracle_ids: string[],
  print_ids: string[]
  cards: CubeCard[]
  source: CubeSource
  last_updated: Date
}