
export declare enum UniqueStrategy {
  cards,
  art,
  prints
}
export declare enum Sort {
  name,
  set,
  released,
  rarity,
  color,
  usd,
  tix,
  eur,
  cmc,
  power,
  toughness,
  edhrec,
  artist
}
export declare enum SortDirection {
  auto,
  asc,
  desc
}
export interface SearchOptions {
  unique?: keyof typeof UniqueStrategy;
  order: keyof typeof Sort;
  dir?: keyof typeof SortDirection;
}