@preproccesor typescript
@builtin "whitespace.ne"

@{%
const { FilterType } = require('./types/filterKeyword')
const { combineHybridSymbols } = require("./filters/mana")
const { lexer } = require('./lexer')
const { parseEnumToken, parseSimpleManaCost } = require("./parserUtils")
%}

@lexer lexer

main -> filterStart {% id %}

filterStart -> _ filter _ {% ([, filter]) => {
    return filter
} %}

filter ->
      filter __ boolOperator clause {% ([left, _, operator, right]) => ({ operator, left, right, offset: left.offset }) %}
    | clause {% id %}

clause -> "-":? (
      "(" _ filter _ ")" {% ([_, _1, f]) => [f] %}
    | condition
) {% ([negation, [clause]]) => {
    if (negation) {
        return { operator: "negate", clause, offset: negation.offset }
    }
    return clause
} %}

boolOperator ->
      (null | %bool_and __) {% () => "and" %}
    | %bool_or __           {% () => "or" %}

condition -> (
    identityCondition |
    cmcCondition |
    colorCondition |
    colorIdentityCondition |
    manaCostCondition |
    manaCostRegexCondition |
    nameCondition |
    nameRegexCondition |
    oracleCondition |
    oracleRegexCondition |
    oracleCountCondition |
    fullOracleCondition |
    fullOracleRegexCondition |
    fullOracleCountCondition |
    ogTextCondition |
    ogTextRegexCondition |
    ogTextCountCondition |
    fullOgCondition |
    fullOgRegexCondition |
    fullOgCountCondition |
    keywordCondition |
    keywordCountCondition |
    typeCondition |
    typeRegexCondition |
    ogTypeCondition |
    ogTypeRegexCondition |
    powerCondition |
    toughCondition |
    powTouCondition |
    loyaltyCondition |
    defenseCondition |
    layoutCondition |
    formatCondition |
    bannedCondition |
    restrictedCondition |
    isCondition |
    notCondition |
    printCountCondition |
    paperPrintCountCondition |
    setCountCondition |
    paperSetCountCondition |
    inCondition |
    rarityCondition |
    setCondition |
    setTypeCondition |
    blockCondition |
    artistCondition |
    borderCondition |
    collectorNumberCondition |
    dateCondition |
    frameCondition |
    flavorCondition |
    flavorRegexCondition |
    flavorCountCondition |
    gameCondition |
    languageCondition |
    priceCondition |
    stampCondition |
    watermarkCondition |
    cubeOracleCondition |
    cubePrintCondition |
    cubeOTagCondition |
    cubePTagCondition |
    producesCondition |
    uniqueCondition |
    orderCondition |
    directionCondition |
    devotionCondition |
    oracleTagCondition |
    artTagCondition |
    exactNameCondition |
    newCondition |
    preferCondition |
    collectionCondition |
    scryfallIdCondition |
    oracleIdCondition |
    limitCondition |
    loreCondition |
    pipsCondition
) {% ([[condition]]) => condition %}

identityCondition -> %identity {% ([{offset}]) => ({ filter: FilterType.Identity, offset }) %}

cmcCondition ->
    cmcFilter %operator integerValue {% ([{offset}, op, {value}]) =>
       ({ filter: FilterType.CmcInt, operator: op.value, value, offset })
    %} |
    cmcFilter onlyEqualOperator (%kw_even | %kw_odd) {% ([{offset}, _op, [{value}]]) =>
        ({ filter: FilterType.CmcOddEven, value, offset })
    %}
cmcFilter -> (%kw_manavalue | %kw_mv | %kw_cmc) {% ([[token]]) => token %}

exactNameCondition -> "!":? stringValue
    {% ([op, string], _, reject) => {
        if (!op && (string.value === "and" || string.value === "or")) {
            return reject;
        }
        return ({
            filter: op ? FilterType.NameExact : FilterType.NameFuzzy,
            value: string.value,
            offset: op ? op.offset : string.offset
        })
    } %}

nameCondition -> %kw_name onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Name, value, offset }) %}

nameRegexCondition -> %kw_name onlyEqualOperator regexString
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.NameRegex, value, offset }) %}

colorCondition ->
    colorFilter anyOperator colorCombinationValue {% ([{offset}, op, {value}]) =>
        ({ filter: FilterType.ColorSet, operator: op.value, value, offset })
    %} |
    colorFilter anyOperator integerValue {% ([{offset}, op, {value}]) =>
        ({ filter: FilterType.ColorInt, operator: op.value, value, offset })
    %}
colorFilter -> (%kw_c | %kw_color) {% ([[token]]) => token %}

colorIdentityCondition ->
    identityFilter anyOperator colorCombinationValue {% ([{offset}, op, {value}]) =>
        ({ filter: FilterType.ColorIdentitySet, operator: op.value, value, offset })
    %} |
    identityFilter anyOperator integerValue {% ([{offset}, op, {value}]) =>
        ({ filter: FilterType.ColorIdentityInt, operator: op.value, value, offset })
     %}
identityFilter -> (%kw_ci | %kw_commander | %kw_identity | %kw_id) {% ([[token]]) => token %}

manaCostCondition -> (%kw_mana | %kw_m) %operator manaCostValue
    {% ([[{offset}], op, {value}]) => ({ filter: FilterType.Mana, operator: op.value, value, offset }) %}
manaCostRegexCondition -> (%kw_mana | %kw_m) onlyEqualOperator regexString
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.ManaRegex, value, offset }) %}

oracleCondition -> oracleFilter onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Oracle, value, offset }) %}
oracleRegexCondition -> oracleFilter onlyEqualOperator regexString
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.OracleRegex, value, offset }) %}
oracleCountCondition -> oracleFilter anyOperator integerValue
    {% ([{offset}, op, {value}]) => ({ filter: FilterType.OracleCount, value, operator: op.value, offset }) %}
oracleFilter -> (%kw_oracle | %kw_o | %kw_text) {% ([[token]]) => token %}

fullOracleCondition -> fullOracleFilter onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.FullOracle, value, offset }) %}
fullOracleRegexCondition -> fullOracleFilter onlyEqualOperator regexString
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.FullOracleRegex, value, offset }) %}
fullOracleCountCondition -> fullOracleFilter anyOperator integerValue
    {% ([{offset}, op, {value}]) => ({ filter: FilterType.FullOracleCount, value, operator: op.value, offset }) %}
fullOracleFilter -> %kw_fo {% id %}

ogTextCondition -> ogTextFilter onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.OriginalText, value, offset }) %}
ogTextRegexCondition -> ogTextFilter onlyEqualOperator regexString
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.OriginalTextRegex, value, offset }) %}
ogTextCountCondition -> ogTextFilter anyOperator integerValue
    {% ([{offset}, op, {value}]) => ({ filter: FilterType.OriginalTextCount, operator: op.value, value, offset }) %}
ogTextFilter -> (%kw_ogo | %kw_ogtext) {% ([[token]]) => token %}

fullOgCondition -> fullOgTextFilter onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.FullOriginalText, value, offset }) %}
fullOgRegexCondition -> fullOgTextFilter onlyEqualOperator regexString
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.FullOriginalTextRegex, value, offset }) %}
fullOgCountCondition -> fullOgTextFilter anyOperator integerValue
    {% ([{offset}, op, {value}]) => ({ filter: FilterType.FullOriginalTextCount, operator: op.value, value, offset }) %}
fullOgTextFilter -> (%kw_fogo | %kw_fogtext) {% ([[token]]) => token %}

keywordCondition -> (%kw_kw | %kw_keyword) onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.Keyword, value, offset }) %}
keywordCountCondition -> %kw_keywords anyOperator integerValue
    {% ([{offset}, op, {value}]) => ({ filter: FilterType.KeywordCount, value, operator: op.value, offset }) %}

typeCondition -> (%kw_t | %kw_type) onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.Type, value, offset }) %}
typeRegexCondition -> (%kw_t | %kw_type) onlyEqualOperator regexString
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.TypeRegex, value, offset }) %}

ogTypeCondition -> (%kw_ogt | %kw_ogtype) onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.OriginalType, value, offset }) %}
ogTypeRegexCondition -> (%kw_ogt | %kw_ogtype) onlyEqualOperator regexString
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.OriginalTypeRegex, value, offset }) %}

powerCondition -> (%kw_pow | %kw_power) anyOperator (integerValue | %kw_tou | %kw_toughness)
    {% ([[{offset}], op, [value]]) => ({
        filter: FilterType.Power,
        operator: op.value,
        value: value.value ?? value,
        offset
    }) %}

toughCondition -> (%kw_tou | %kw_toughness) anyOperator (integerValue | %kw_pow | %kw_power)
    {% ([[{offset}], op, [value]]) => ({
        filter: FilterType.Tough,
        operator: op.value,
        value: value.value ?? value,
        offset
    }) %}

powTouCondition -> (%kw_pt | %kw_powtou) anyOperator integerValue
    {% ([[{offset}], op, {value}]) => ({ filter: FilterType.PowTou, operator: op.value, value, offset }) %}

loyaltyCondition -> (%kw_loy | %kw_loyalty) anyOperator integerValue
    {% ([[{offset}], operator, {value}]) => ({ filter: FilterType.Loyalty, operator: operator.value, value, offset }) %}

defenseCondition -> (%kw_def | %kw_defense) anyOperator integerValue
    {% ([[{offset}], op, {value}]) => ({ filter: FilterType.Defense, operator: op.value, value, offset }) %}

layoutCondition -> %kw_layout onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Layout, value, offset }) %}

formatCondition -> (%kw_format | %kw_f) onlyEqualOperator stringValue
    {% ([[filterToken], _, valueToken]) =>
        parseEnumToken(FilterType.Format, filterToken, valueToken)
    %}

bannedCondition -> %kw_banned onlyEqualOperator stringValue
    {% ([filterToken, _, valueToken]) =>
        parseEnumToken(FilterType.Banned, filterToken, valueToken)
    %}

restrictedCondition -> %kw_restricted onlyEqualOperator stringValue
    {% ([filterToken, _, valueToken]) =>
        parseEnumToken(FilterType.Restricted, filterToken, valueToken)
    %}

isCondition -> (%kw_is | %kw_has) onlyEqualOperator stringValue
    {% ([[filterToken], _, valueToken]) =>
        parseEnumToken(FilterType.Is, filterToken, valueToken)
    %}

notCondition -> %kw_not onlyEqualOperator stringValue
    {% ([filterToken, _, valueToken]) =>
        parseEnumToken(FilterType.Not, filterToken, valueToken)
    %}

printCountCondition -> %kw_prints anyOperator integerValue
    {% ([{offset}, operator, {value}]) => ({ filter: FilterType.Prints, operator: operator.value, value, offset }) %}

paperPrintCountCondition -> %kw_paperprints anyOperator integerValue
    {% ([{offset}, operator, {value}]) => ({ filter: FilterType.PaperPrints, operator: operator.value, value, offset }) %}

setCountCondition -> %kw_sets anyOperator integerValue
    {% ([{offset}, operator, {value}]) => ({ filter: FilterType.Sets, operator: operator.value, value, offset }) %}

paperSetCountCondition -> %kw_papersets anyOperator integerValue
    {% ([{offset}, operator, {value}]) => ({ filter: FilterType.PaperSets, operator: operator.value, value, offset }) %}


inCondition -> %kw_in onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.In, value, offset }) %}

producesCondition ->
    %kw_produces anyOperator producesCombinationValue
        {% ([{offset}, op, {value}]) => ({ filter: FilterType.ProducesSet, operator: op.value, value, offset })
    %} |
    %kw_produces anyOperator integerValue
        {% ([{offset}, op, {value}]) => ({ filter: FilterType.ProducesInt, operator: op.value, value, offset }) %}

devotionCondition -> %kw_devotion anyOperator devotionValue
    {% ([{offset}, op, {value}]) => ({ filter: FilterType.Devotion, operator: op.value, value, offset }) %}

uniqueCondition -> %kw_unique onlyEqualOperator (%kw_cards | %kw_prints | %kw_art)
    {% ([{offset}, _, [{value}]]) => ({ filter: FilterType.Unique, value, offset }) %} |
    "++" {% ([{offset}]) => ({ filter: FilterType.Unique, value: "prints", offset }) %} |
    "@@" {% ([{offset}]) => ({ filter: FilterType.Unique, value: "art", offset }) %}

orderCondition -> %kw_order onlyEqualOperator stringValue
    {% ([filterToken, _, valueToken]) =>
        parseEnumToken(FilterType.Order, filterToken, valueToken)
    %}

directionCondition -> (%kw_dir|%kw_direction) onlyEqualOperator (ascendingValue | descendingValue)
    {% ([[{offset}], _, [value]]) => ({ filter: FilterType.Direction, value, offset }) %}
ascendingValue -> (%dir_asc | %dir_ascending) {% () => "asc" %}
descendingValue -> (%dir_desc | %dir_descending) {% () => "desc" %}

# print-matters
rarityCondition -> (%kw_r | %kw_rarity) anyOperator stringValue
    {% ([[filterToken], operator, valueToken]) =>
        parseEnumToken(FilterType.Rarity, filterToken, valueToken, operator)
    %}

setCondition -> (%kw_s | %kw_set | %kw_e | %kw_edition) onlyEqualOperator csv
    {% ([[{offset}], _, value], _1, reject) => {
        if (value === undefined) return reject
        return ({ filter: FilterType.Set, value: value.map(it => it.value), offset })
     } %}

csv -> stringValue (%comma stringValue {% (a) => { return a[1]} %}):* {% (tokens) => {
    const [first, rest] = tokens
    return [first, ...rest]
} %}

setTypeCondition -> (%kw_st | %kw_settype) onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.SetType, value, offset }) %}

blockCondition -> (%kw_b | %kw_block) onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.Block, value, offset }) %}

artistCondition -> (%kw_a | %kw_artist) onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.Artist, value, offset }) %}

collectorNumberCondition -> (%kw_cn | %kw_number) anyOperator integerValue
    {% ([[{offset}], operator, {value}]) => ({ filter: FilterType.CollectorNumber, operator: operator.value, value, offset }) %}

borderCondition -> %kw_border onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Border, value, offset }) %}

dateCondition -> (%kw_date | %kw_year) anyOperator (stringValue | yearValue)
    {% ([[{offset}], op, [{value}]]) => ({ filter: FilterType.Date, operator: op.value, value, offset }) %}

priceCondition -> (%kw_usd | %kw_eur | %kw_tix) anyOperator (integerValue | decimalValue)
    {% ([[unit], op, [{value}]]) => ({
        filter: FilterType.Price, unit: unit.value, operator: op.value, value, offset: unit.offset
    }) %}

frameCondition -> %kw_frame onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Frame, value, offset }) %}

flavorCondition -> flavorFilter onlyEqualOperator stringValue
    {% ([{offset}, _, v], _1, reject) => {
        const {value} = v;
        if (v.type === "nqstring" && /^\d+$/.test(value.toString())) {
            return reject
        }
        return { filter: FilterType.Flavor, value, offset }
    } %}
flavorRegexCondition -> flavorFilter onlyEqualOperator regexString
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.FlavorRegex, value, offset }) %}
flavorCountCondition -> flavorFilter anyOperator integerValue
    {% ([{offset}, op, {value}]) => ({ filter: FilterType.FlavorCount, value, operator: op.value, offset }) %}
flavorFilter -> (%kw_flavor | %kw_ft) {% ([[token]]) => token %}

loreCondition -> %kw_lore onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Lore, value, offset }) %}

gameCondition -> %kw_game onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Game, value, offset }) %}

languageCondition -> (%kw_lang | %kw_language) onlyEqualOperator stringValue
    {% ([[filterToken], _, valueToken]) => parseEnumToken(FilterType.Language, filterToken, valueToken) %}

stampCondition -> %kw_stamp onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Stamp, value, offset }) %}

watermarkCondition -> (%kw_wm | %kw_watermark) onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.Watermark, value, offset }) %}

newCondition -> %kw_new onlyEqualOperator stringValue
    {% ([filterToken, _, valueToken]) =>
        parseEnumToken(FilterType.New, filterToken, valueToken)
    %}

preferCondition -> %kw_prefer onlyEqualOperator stringValue
    {% ([filterToken, _, valueToken]) =>
        parseEnumToken(FilterType.Prefer, filterToken, valueToken)
    %}

cubeOracleCondition -> (%kw_cube | %kw_ctag | %kw_list) ":" cubeValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.CubeOracle, value, offset }) %}

cubeOTagCondition -> (%kw_cube | %kw_ctag | %kw_list) ":" cubeValue "." stringValue
    {% ([[{offset}], _, cubeToken, _1, tagToken]) => ({ filter: FilterType.CubeOTag, value: { cubeID: cubeToken.value, tag: tagToken.value }, offset }) %}

cubePrintCondition -> (%kw_cube | %kw_ctag | %kw_list) "=" cubeValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.CubePrints, value, offset }) %}

cubePTagCondition -> (%kw_cube | %kw_ctag | %kw_list) "=" cubeValue "." stringValue
    {% ([[{offset}], _, cubeToken, _1, tagToken]) => ({ filter: FilterType.CubePTag, value: { cubeID: cubeToken.value, tag: tagToken.value }, offset }) %}

oracleTagCondition -> (%kw_function | %kw_oracletag | %kw_otag) onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.OracleTag, value, offset }) %}

artTagCondition -> (%kw_art | %kw_arttag | %kw_atag) onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.IllustrationTag, value, offset }) %}

collectionCondition -> %kw_collection onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Collection, value, offset }) %}

scryfallIdCondition -> %kw_scryfallid onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.ScryfallId, value, offset }) %}

oracleIdCondition -> %kw_oracleid onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.OracleId, value, offset }) %}

limitCondition -> (%kw_lim | %kw_limit)  onlyEqualOperator integerValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Limit, value, offset }) %}

pipsCondition -> %kw_pips anyOperator integerValue
    {% ([{offset}, op, {value}]) => ({ filter: FilterType.Pips, value, offset, operator: op.value }) %}


# Values
stringValue -> (noQuoteString | %dqstring | %sqstring) {% ([[token]]) => {
    const { value, ...rest } = token
    return { value: value.toLowerCase(), ...rest }
}%}

cubeValue -> (noQuoteString | %dqstring | %sqstring) {% ([[token]]) => token %}

regexString -> %regex {% function([token]) {
    const { value, ...rest } = token
    return { value: value.toLowerCase(), ...rest }
} %}

anyOperator -> (":" | "=" | "!=" | "<>" | "<=" | "<" | ">=" | ">" | "≤" | "≥") {% ([[token]]) => token %}

onlyEqualOperator -> (":" | "=") {% ([[token]]) => token %}

integerValue -> %integer {% ([token]) => ({ ...token, value: Number.parseInt(token.value, 10) }) %}

decimalValue -> %decimal {% ([token]) => ({ ...token, value: Number.parseFloat(token.value) }) %}

yearValue -> %integer {% ([token], _, reject) => {
    if (token.value.length !== 4) {
        return reject;
    }
    return token;
} %}

noQuoteString -> [a-zA-z0-9\-]:+ {% ([[token]], _, reject) => {
    const rejectTypes = ["integer", "bool", "regex", "dqstring", "rparen", "lparen", "identity"]
        if (rejectTypes.includes(token.type)) {
            return reject;
        }

    return {...token, type: "nqstring"}
}%}

# we never need offset from this
colorCombinationKeyword ->
    %color_white {% () => ['w'] %}
  | %color_blue {% () => ['u'] %}
  | %color_black {% () => ['b'] %}
  | %color_red {% () => ['r'] %}
  | %color_green {% () => ['g'] %}
  | (%color_azorius)  {% () => ['w', 'u'] %}
  | (%color_dimir)  {% () => ['u', 'b'] %}
  | (%color_rakdos)  {% () => ['b', 'r'] %}
  | (%color_gruul)  {% () => ['r', 'g'] %}
  | (%color_selesnya)  {% () => ['g', 'w'] %}
  | (%color_silverquill | %color_orzhov)  {% () => ['w', 'b'] %}
  | (%color_prismari | %color_izzet)  {% () => ['u', 'r'] %}
  | (%color_witherbloom | %color_golgari)  {% () => ['b', 'g'] %}
  | (%color_lorehold | %color_boros)  {% () => ['w', 'r'] %}
  | (%color_quandrix | %color_simic)  {% () => ['u', 'g'] %}
  | (%color_brokers | %color_bant)  {% () => ['w', 'u', 'g'] %}
  | (%color_obscura | %color_esper)  {% () => ['w', 'u', 'b'] %}
  | (%color_maestros | %color_grixis)  {% () => ['u', 'b', 'r'] %}
  | (%color_riveteers | %color_jund)  {% () => ['b', 'r', 'g'] %}
  | (%color_cabaretti | %color_naya)  {% () => ['w', 'r', 'g'] %}
  | (%color_savai | %color_dega | %color_mardu)  {% () => ['w', 'b', 'r'] %}
  | (%color_ketria | %color_ceta | %color_temur)  {% () => ['u', 'r', 'g'] %}
  | (%color_indatha | %color_necra | %color_abzan)  {% () => ['w', 'b', 'g'] %}
  | (%color_raugrin | %color_raka | %color_jeskai)  {% () => ['w', 'u', 'r'] %}
  | (%color_zagoth | %color_ana | %color_sultai)  {% () => ['u', 'b', 'g'] %}
  | %color_chaos {% () => ['b','g','r','u'] %}
  | %color_aggression {% () => ['b','g','r','w'] %}
  | %color_altruism {% () => ['w','g','r','u'] %}
  | %color_growth {% () => ['b','g','w','u'] %}
  | %color_artifice {% () => ['b','w','r','u'] %}
  | (%color_rainbow | %color_fivecolor)  {% () => ['w', 'u', 'b', 'r', 'g'] %}

colorCombinationValue ->
    ("c" | "C" | %color_brown | %color_colorless)  {% ([[token]]) => ({ value: [], offset: token.offset }) %}
  | colorCombinationKeyword {% ([value]) => ({ value }) %}
  | noQuoteString {% ([token], _, reject) => {
    if (/[^wubrgWUBRG]/.test(token.value)) {
        return reject
    }
    return { value: token.value.toLowerCase().split(""), offset: token.offset }
  } %}

producesCombinationValue ->
    (%color_brown | %color_colorless) {% ([[token]]) => ({ value: ['c'], offset: token.offset }) %}
  | colorCombinationKeyword {% ([value]) => ({ value }) %}
  | noQuoteString {% ([token], _, reject) => {
      if (/[^wubrgcWUBRGC]/.test(token.value)) {
          return reject
      }
      return { value: token.value.split(""), offset: token.offset }
    } %}

devotionValue -> manaCostValue {% id %}

manaCostValue -> manaSymbol:+ {% ([symbols]) => ({
    value: symbols.map(it => it.value),
    offset: symbols[0].offset
}) %} |
 integerValue {% ([token]) => ({ value: [token.value.toString()], offset: token.offset }) %} |
 noQuoteString {% ([token], _, reject) => {
    if (/[^0-9xyzwubrgscXYZWUBRGSC]/.test(token.value)) {
        return reject;
    }
    return { value: parseSimpleManaCost(token.value), offset: token.offset }
} %}


manaSymbol -> "{" innerManaSymbol "}"
    {% ([brace, inner]) => ({ value: inner, offset: brace.offset }) %}

innerManaSymbol -> [0-9]:+ {% ([digits]) => digits.join('') %}
  | purebredSymbol {% ([[symbol]]) => symbol.value %}
  | ( "2" "/" ("w" | "u" | "b" | "r" | "g") 
    | "p" "/" ("w" | "u" | "b" | "r" | "g") 
    | "w" "/" ("2" | "p" | "u" | "b" | "r" | "g") 
    | "u" "/" ("2" | "p" | "w" | "b" | "r" | "g") 
    | "b" "/" ("2" | "p" | "w" | "u" | "r" | "g") 
    | "r" "/" ("2" | "p" | "w" | "u" | "b" | "g") 
    | "g" "/" ("2" | "p" | "w" | "u" | "b" | "r") 
    ) {% ([[color, , [secondColor]]]) => color + "/" + secondColor %}

purebredSymbol -> ("x" | "y" | "z" | "w" | "u" | "b" | "r" | "g" | "s" | "c")  {% id %}