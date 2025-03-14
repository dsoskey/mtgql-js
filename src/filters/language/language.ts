import { Filter, FilterNode } from '../base'
import { printNode } from '../print'
import { PrintingFilterTuple } from '../../types'

export const LANGUAGES = [
    'any',
    'en',
    'es',
    'fr',
    'de',
    'it',
    'pt',
    'ja',
    'ko',
    'ru',
    'zhs',
    'zht',
    'ph',
    'qya',
    'ag',
    'la',
    'ar',
    'he',
    'sa',
]

export const LANGUAGE_ALIASES: { [key: string]: string } = {
    english: "en",
    eng: "en",
    sp: "es",
    spa: "es",
    spanish: "es",
    espanol: "es",
    fre: "fr",
    french: "fr",
    de: "de",
    german: "de",
    ge: "de",
    ger: "de",
    italian: "it",
    ita: "it",
    portuguese: "pt",
    por: "pt",
    jap: "ja",
    japanese: "ja",
    kor: "ko",
    korean: "ko",
    rus: "ru",
    russian: "ru",
    "simplified chinese": "zhs",
    chi: "zht",
    "traditional chinese": "zht",
    phy: "ph",
    phyrexian: "ph",
    qy: "qya",
    quenya: "qya",
    "ancient greek": "ag",
    latin: "la",
    ara: "ar",
    arabic: "ar",
    heb: "he",
    hebrew: "he",
    san: "sa",
    sanskrit: "sa",
}

export const languageFilter = (value: string): Filter<PrintingFilterTuple> =>
  ({ printing }) => {
    if (value === 'any') {
      return true
    }
    return printing.lang === value
  }

export const languageNode = (value: string): FilterNode =>
  printNode(['language'], languageFilter(value))
