import moo from 'moo'
import { FILTER_KEYWORDS } from './types'
import {COLOR_WORDS} from "./filters/color";

function bylength(a: string, b: string): number {
  return b.length - a.length
}

function lexerWordDictionary(words: string[], prefix: string) {
  return words
      .sort(bylength)
      .reduce((l, r) => ({...l, [`${prefix}_${r}`]: r}), {});
}

const caseInsensitiveKeywords = (map: { [kw: string]: string | string[] }) => {
  const transform = moo.keywords(map)
  return (text: string) => transform(text.toLowerCase())
}

const LEXDICT_FILTER = lexerWordDictionary(Object.values(FILTER_KEYWORDS), "kw");
const LEXDICT_COLORS = lexerWordDictionary(Object.values(COLOR_WORDS), "color");
export const buildLexer = () => moo.states({
  main: {
    ws: /[ \t]+/,
    operator: [":","=","!=","<>","<=","<",">=",">", "≤", "≥"],
    negate: "-",
    art: "@@",
    prints: "++",
    uuid: { match: /[0-9a-zA-Z]{8}-[0-9a-zA-Z]{4}-[0-9a-zA-Z]{4}-[0-9a-zA-Z]{4}-[0-9a-zA-Z]{12}/ },
    lparen: "(",
    rparen: ")",
    lbrace: { match: "{", push: "manasymbol" },
    bang: "!",
    comma: ",",
    identity: "*",
    regex: { match: /\/(?:\\[\/\\a-zA-Z]|[^\n\/\\])*\//, value: s =>s.slice(1, -1) },
    dqstring: { match: /"(?:\\["\\]|[^\n"\\])*"/, value: s => s.slice(1, -1) },
    sqstring: { match: /'(?:\\['\\]|[^\n'\\])*'/, value: s => s.slice(1, -1) },
    word: {
      match: /[a-zA-z0-9\-]*[a-zA-Z\-][a-zA-z0-9\-]*/,
      type: caseInsensitiveKeywords({
        bool_and: "and",
        bool_or: "or",
        ...LEXDICT_COLORS,
        ...LEXDICT_FILTER,
        kw_even: "even",
        kw_odd:"odd",
        kw_cards: "cards",
        kw_art: "art",
        dir_asc: "asc",
        dir_ascending: "ascending",
        dir_desc: "desc",
        dir_descending: "descending",
      }),
    },
    decimal: { match: /[0-9]*\.[0-9]+/ },
    integer: { match:/[0-9]+/ },
  },
  manasymbol: {
    rbrace: { match: "}", pop: 1},
    number: /[0-9]+/,
    color: /[xyzwubrgsc]/,
    slash: "/",
  }
})

export const lexer = buildLexer();