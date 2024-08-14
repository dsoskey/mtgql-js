import moo from 'moo'
import { FILTER_KEYWORDS } from './types'

const KEYWORDS_BY_LENGTH = Object.values(FILTER_KEYWORDS).sort((a, b) => b.length - a.length)

const caseInsensitiveKeywords = (map: { [kw: string]: string | string[] }) => {
  const transform = moo.keywords(map)
  return (text: string) => transform(text.toLowerCase())
}

export const buildLexer = () => moo.states({
  main: {
    ws: /[ \t]+/,
    operator: [":","=","!=","<>","<=","<",">=",">", "≤", "≥"],
    negate: "-",
    art: "@@",
    prints: "++",
    decimal: { match: /[0-9]*\.[0-9]+/ },
    integer: { match:/[0-9]+/ },
    lparen: "(",
    rparen: ")",
    lbrace: { match: "{", push: "manasymbol" },
    bang: "!",
    comma: ",",
    identity: "*",
    regex: { match: /\/(?:\\[\/\\a-zA-Z]|[^\n\/\\])*\//, value: s =>s.slice(1, -1) },
    dqstring: { match: /"(?:\\["\\]|[^\n"\\])*"/, value: s => s.slice(1, -1) },
    sqstring: { match: /'(?:\\['\\]|[^\n'\\])*'/, value: s => s.slice(1, -1) },
    word: { match: /[a-zA-z\-]+/, type: caseInsensitiveKeywords({
        bool: ["and", "or"],
        filter: KEYWORDS_BY_LENGTH
      }) },
  },
  manasymbol: {
    rbrace: { match: "}", pop: 1},
    number: /[0-9]+/,
    color: /[xyzwubrgsc]/,
    slash: "/",
  }
})

export const lexer = buildLexer();