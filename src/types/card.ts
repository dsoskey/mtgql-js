import {Card, Color, ProducedColor, PromoType} from '../generated'
import { ObjectValues } from './common'
import {NormedCard, OracleKeys, Printing, PrintKeys} from './normedCard'

export const DOUBLE_FACED_LAYOUTS = [
  'transform',
  'modal_dfc',
  'double_sided',
  'double_faced_token',
  'art_series'
]

export const BASIC_LAND_TYPES = [
  'plains',
  'island',
  'swamp',
  'mountain',
  'forest',
]

export const SHOCKLAND_REGEX =
  /As .* enters( the battlefield)?, you may pay 2 life. If you don't, it enters( the battlefield)? tapped\./

export const IS_VALUE_MAP = {
  ...PromoType,
  gold: 'gold',
  hybrid: 'hybrid',
  phyrexian: 'phyrexian',
  promo: 'promo',
  reprint: 'reprint',
  firstprint: 'firstprint',
  firstprinting: 'firstprinting',
  digital: 'digital',
  dfc: 'dfc',
  mdfc: 'mdfc',
  tdfc: 'tdfc',
  meld: 'meld',
  transform: 'transform',
  split: 'split',
  flip: 'flip',
  leveler: 'leveler',
  commander: 'commander',
  spell: 'spell',
  permanent: 'permanent',
  historic: 'historic',
  vanilla: 'vanilla',
  modal: 'modal',
  fullart: 'fullart',
  foil: 'foil',
  nonfoil: 'nonfoil',
  etched: 'etched',
  token: 'token',
  bikeland: 'bikeland',
  cycleland: 'cycleland',
  bicycleland: 'bicycleland',
  bounceland: 'bounceland',
  karoo: 'karoo',
  canopyland: 'canopyland',
  canland: 'canland',
  fetchland: 'fetchland',
  checkland: 'checkland',
  dual: 'dual',
  fastland: 'fastland',
  filterland: 'filterland',
  gainland: 'gainland',
  painland: 'painland',
  pathway: 'pathway',
  scryland: 'scryland',
  shadowland: 'shadowland',
  snarl: 'snarl',
  slowland: 'slowland',
  shockland: 'shockland',
  storageland: 'storageland',
  surveilland: 'surveilland',
  creatureland: 'creatureland',
  manland: 'manland',
  triland: 'triland',
  triome: 'triome',
  trikeland: 'trikeland',
  tricycleland: 'tricycleland',
  tangoland: 'tangoland',
  battleland: 'battleland',
  bondland: 'bondland',
  ub: 'ub', universesbeyond: 'universesbeyond',
  unique: 'unique',
  extra: 'extra',
  adventure: "adventure",
  arenaid: "arenaid",
  artseries: "artseries",
  artist: "artist",
  artistmisprint: "artistmisprint",
  belzenlok: "belzenlok",
  lights: "lights",
  augmentation: "augmentation",
  back: "back",
  bear: "bear",
  booster: "booster",
  brawlcommander: "brawlcommander",
  brawler: "brawler",
  buyabox: "buyabox",
  cardmarket: "cardmarket",
  class: "class",
  ci: "ci",
  colorshifted: "colorshifted",
  companion: "companion",
  contentwarning: "contentwarning",
  core: 'core',
  covered: "covered",
  doublesided: "doublesided",
  duelcommander: "duelcommander",
  etb: "etb",
  englishart: "englishart",
  etch: "etch",
  extended: "extended",
  expansion: 'expansion',
  flavorname: "flavorname",
  flavor: "flavor",
  fbb: "fbb",
  fwb: "fwb",
  frenchvanilla: "frenchvanilla",
  funny: "funny",
  future: "future",
  halo: "halo",
  hires: "hires",
  splitmana: "splitmana",
  illustration: "illustration",
  invitational: "invitational",
  localizedname: "localizedname",
  mtgoid: "mtgoid",
  masterpiece: "masterpiece",
  modern: "modern",
  multiverse: "multiverse",
  new: "new",
  oathbreaker: "oathbreaker",
  old: "old",
  oversized: "oversized",
  paperart: "paperart",
  party: "party",
  phyrexia: "phyrexia",
  planar: "planar",
  placeholderimage: 'placeholderimage',
  printedtext: "printedtext",
  related: "related",
  reserved: "reserved",
  reversible: "reversible",
  stamp: "stamp",
  showcase: "showcase",
  spellbook: "spellbook",
  spikey: "spikey",
  stamped: "stamped",
  story: "story",
  tcgplayer: "tcgplayer",
  textless: "textless",
  tombstone: "tombstone",
  onlyprint: "onlyprint",
  variation: "variation",
  watermark: "watermark",
  setextension: "setextension",
  // included in  promo_types
  outlaw: "outlaw",
  mb1: "mb1",
  fmb1: "fmb1",
  pagl: "pagl",
  phed: "phed",
  pctb: "pctb",
  upsidedown: "upsidedown",
  upsidedownback: "upsidedownback",
  playtest: "playtest",
  paupercommander: "paupercommander",
  gamechanger: "gamechanger",
  oddframe: "oddframe",
  default: "default",
  typical:"typical",
  normal:"normal",
  traditional:"traditional",
  baseline:"baseline",
  nondefault: "nondefault",
  atypical: "atypical",
  abnormal: "abnormal",
  nontraditional: "nontraditional",
  // not in scryfall, only in mtgql
  star: 'star',
  custom: 'custom',
  deciduous: "deciduous",
  erratatext: "erratatext",
  erratatype: "erratatype",
  nooriginaltext: "nooriginaltext",
  promotype: "promotype",
} as const
export type IsValue = ObjectValues<typeof IS_VALUE_MAP>
export const IS_VALUES = Object.keys(IS_VALUE_MAP)

const MANA_SYMBOLS = {
  generic: 'generic',
  w: 'w',
  u: 'u',
  b: 'b',
  r: 'r',
  g: 'g',
  c: 'c',
  s: 's',
  x: 'x',
  y: 'y',
  z: 'z',

  'w/u': 'w/u',
  'w/b': 'w/b',
  'w/r': 'w/r',
  'w/g': 'w/g',

  'u/w': 'u/w',
  'u/b': 'u/b',
  'u/r': 'u/r',
  'u/g': 'u/g',

  'b/w': 'b/w',
  'b/u': 'b/u',
  'b/r': 'b/r',
  'b/g': 'b/g',

  'r/w': 'r/w',
  'r/u': 'r/u',
  'r/b': 'r/b',
  'r/g': 'r/g',

  'g/w': 'g/w',
  'g/u': 'g/u',
  'g/r': 'g/r',
  'g/b': 'g/b',

  'w/p': 'w/p',
  'u/p': 'u/p',
  'b/p': 'b/p',
  'r/p': 'r/p',
  'g/p': 'g/p',
  'p/w': 'p/w',
  'p/u': 'p/u',
  'p/b': 'p/b',
  'p/r': 'p/r',
  'p/g': 'p/g',

  'w/2': 'w/2',
  'u/2': 'u/2',
  'b/2': 'b/2',
  'r/2': 'r/2',
  'g/2': 'g/2',
  '2/w': '2/w',
  '2/u': '2/u',
  '2/b': '2/b',
  '2/r': '2/r',
  '2/g': '2/g',
} as const
export type ManaSymbol = ObjectValues<typeof MANA_SYMBOLS>

// manaSymbol -> total count of that type of mana
export type ManaCost = Partial<Record<ManaSymbol, number>>

export const manaAliases: Record<ManaSymbol, ManaSymbol> = {
  '2/b': '2/b',
  '2/g': '2/g',
  '2/r': '2/r',
  '2/u': '2/u',
  '2/w': '2/w',
  'b/2': '2/b',
  'b/p': 'b/p',
  'g/2': '2/g',
  'g/p': 'g/p',
  'p/b': 'b/p',
  'p/g': 'g/p',
  'p/r': 'r/p',
  'p/u': 'u/p',
  'p/w': 'w/p',
  'r/2': '2/r',
  'r/p': 'r/p',
  'u/2': '2/u',
  'u/p': 'u/p',
  'w/2': '2/w',
  'w/p': 'w/p',
  'b/g': 'b/g',
  'b/r': 'b/r',
  'b/u': 'u/b',
  'b/w': 'w/b',
  'g/b': 'b/g',
  'g/r': 'r/g',
  'g/u': 'u/g',
  'g/w': 'w/g',
  'r/b': 'b/r',
  'r/g': 'r/g',
  'r/u': 'u/r',
  'r/w': 'w/r',
  'u/b': 'u/b',
  'u/g': 'u/g',
  'u/r': 'u/r',
  'u/w': 'w/u',
  'w/b': 'w/b',
  'w/g': 'w/g',
  'w/r': 'w/r',
  'w/u': 'w/u',
  x: 'x',
  y: 'y',
  z: 'z',
  generic: 'generic',
  w: 'w',
  u: 'u',
  b: 'b',
  r: 'r',
  g: 'g',
  c: 'c',
  s: 's',
}

export const parsePowTou = (value: any) =>
  value !== undefined
    ? Number.parseInt(value.toString().replace('*', '0'), 10)
    : 0

export const replaceNamePlaceholder = (text: string, name: string): string => {
  return text.replace(/~/g, name).toLowerCase()
}

export const toManaCost = (splitCost: ManaSymbol[]): ManaCost => {
  const result: ManaCost = {}
  for (const rawSymbol of splitCost) {
    // hybrids are considered NaN
    const asNum = rawSymbol.includes('/') ? NaN : Number.parseInt(rawSymbol, 10)
    if (Number.isNaN(asNum)) {
      if (result[manaAliases[rawSymbol]] === undefined) {
        result[manaAliases[rawSymbol]] = 0
      }
      // @ts-ignore
      result[manaAliases[rawSymbol]] += 1
    } else {
      if (result.generic === undefined) {
        result.generic = 0
      }
      result.generic += asNum
    }
  }
  return result
}

export const toSplitCost = (cost: string): Array<ManaSymbol> =>
  cost.toLowerCase()
    .slice(1, cost.length - 1)
    .split('}{')
    .filter(it => it.length > 0)
    .sort() as ManaSymbol[]

export const isDual = (card: Card | NormedCard) =>
  card.type_line.includes('Land') && /Add \{.} or \{.}( to your mana pool)?\./.test(card.oracle_text ?? "")
export const hasNumLandTypes = (card: Card | NormedCard, num: number) =>
  BASIC_LAND_TYPES.filter((type) => card.type_line.toLowerCase().includes(type))
    .length === num

export const anyFaceContains = (
  card: Card | NormedCard,
  field: OracleKeys,
  value: string,
  fieldTransform: (a: string) => string = (it) => it
): boolean => {
  if (card[field]) {
    return fieldTransform(card[field].toString().toLowerCase()).includes(value)
  }
  for (const face of card.card_faces ?? []) {
    if (fieldTransform(face[field]?.toString().toLowerCase() ?? '').includes(value)) {
      return true;
    }
  }
  return false
}

export const anyPrintFaceContains = (
    printing: Printing,
    field: PrintKeys,
    value: string,
    fieldTransform: (a: string) => string = (it) => it
): boolean => {
  if (printing[field]) {
    return fieldTransform(printing[field].toString().toLowerCase()).includes(value)
  }
  for (const face of printing.card_faces ?? []) {
    if (fieldTransform(face[field]?.toString().toLowerCase() ?? '').includes(value)) {
      return true;
    }
  }
  return false
}
// Alt algo
// return ({ printing }: PrintingFilterTuple) => {
//   const fieldsToCheck = [printing[field]]
//   if (printing.card_faces) {
//     for(const face of printing.card_faces) {
//       fieldsToCheck.push(face[field])
//     }
//   }
//   for (const field of fieldsToCheck) {
//     if (field && field.includes(value)) {
//       return true
//     }
//   }
//   return false
// }

export type RegexableField = 'name' | 'mana_cost' | 'type_line' | 'oracle_text' | 'original_text' | 'original_type'
export const anyFaceRegexMatch = (
  card: Card | NormedCard | Printing,
  field: RegexableField,
  regex: RegExp,
  fieldTransform: (val: string) => string = (it) => it
): boolean => {
  const squiggleMode = regex.source.includes("~") && "name" in card
  const fieldVal = card[field];
  if (fieldVal) {
    const squiggled = squiggleMode
        ? fieldVal.toString().replace(new RegExp(escapeRegex(card.name), "g"), "~")
        : fieldVal.toString()
    return regex.test(fieldTransform(squiggled.toLowerCase()))
  }

  for (const face of card.card_faces??[]) {
    const fieldVal = face[field];
    if (fieldVal) {
      const squiggled = squiggleMode
          ? fieldVal.toString().replace(new RegExp(escapeRegex(face.name), "g"), "~")
          : fieldVal.toString()
      if (regex.test(fieldTransform(squiggled.toLowerCase()))) {
        return true;
      }
    }
  }
  return false;
}

// shamelessly stolen from https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Regular_Expressions#escaping
function escapeRegex(text: string): string {
  return text.replace(/[.*+?^${}()|[\]\\]/g, "\\$&")
}
export const noReminderText = (text: string): string =>
  text.replace(/\(.*\)/gi, '').trim();

export function getColors(card: Card | NormedCard): Color[] {
  const colorSet = new Set<Color>();
  for (const color of card.colors??[]) {
    colorSet.add(color);
  }
  for (const color of card.color_indicator??[]) {
    colorSet.add(color);
  }
  for (const face of card.card_faces??[]) {
    for (const color of face.colors??[]) {
      colorSet.add(color);
    }
    for (const color of face.color_indicator??[]) {
      colorSet.add(color);
    }
  }

  return Array.from(colorSet);
}

export function parseProducedMana(card: Card): ProducedColor[] | undefined {

  const regexSingleMana = /(\{\w})+/
  const regexTwoMana = /\{(\w)} or \{(\w)}/
  const regexThreeMana = /\{(\w)}, \{(\w)}, or \{(\w)}/
  const regexFiveMana = /\{(\w)}, \{(\w)}, \{(\w)}, \{(\w)}, or \{(\w)}/
  const regexAnyMana = /(an additional )?\w+ mana (of any type that land (produced|could produce)|of any type that a land you control could produce|of either of the circled colors|of any of (the exiled card's|this creature's) colors|of the chosen color|in any combination of( its)? colors|of any( one)? color|of that color)/

  const result = new Set<string>();
  const toParse = [card.oracle_text ?? '']
  if (card.card_faces) {
    toParse.push(...card.card_faces.map(it => it.oracle_text ?? ""))
  }

  let matchAddMana: RegExpExecArray;
  for (const face of toParse) {
    const regexAddMana = /Adds? (.+)\./gi;

    while ((matchAddMana = regexAddMana.exec(face)) !== null) {
      const [_text, manaString] = matchAddMana;

      let match: RegExpExecArray;
      if ((match = regexAnyMana.exec(manaString))) {
        result.add("W")
        result.add("U")
        result.add("B")
        result.add("R")
        result.add("G")
      } else if ((match = regexFiveMana.exec(manaString))) {
        result.add("W")
        result.add("U")
        result.add("B")
        result.add("R")
        result.add("G")
      } else if ((match = regexThreeMana.exec(manaString))) {
        const [_, ...symbols] = match;
        for (const symbol of symbols) {
          result.add(symbol)
        }
      } else if ((match = regexTwoMana.exec(manaString))) {
        const [_, ...symbols] = match;
        for (const symbol of symbols) {
          result.add(symbol)
        }
      } else if ((match = regexSingleMana.exec(manaString))) {
        for (const symbol of match[0]) {
          if (symbol !== "{" && symbol !== "}") {
            result.add(symbol)
          }
        }
      }
    }

    if (face.includes("add the mana lost this way")) {
      result.add("W")
      result.add("U")
      result.add("B")
      result.add("R")
      result.add("G")
    }

  }
  if (result.size === 0) return undefined;
  return Array.from(result) as ProducedColor[];
}