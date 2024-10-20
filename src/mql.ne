@preproccesor typescript
@builtin "whitespace.ne"
@builtin "string.ne"

@{%
const { FilterType } = require('./types/filterKeyword')
const { combineHybridSymbols } = require("./filters/mana")
const { lexer } = require('./lexer')
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
      (null | "and" __) {% () => "and" %}
    | "or" __           {% () => "or" %}

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
    keywordCondition |
    keywordCountCondition |
    typeCondition |
    typeRegexCondition |
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
    limitCondition
) {% ([[condition]]) => condition %}

identityCondition -> %identity {% ([{offset}]) => ({ filter: FilterType.Identity, offset }) %}

cmcCondition ->
    cmcFilter %operator integerValue {% ([{offset}, op, {value}]) =>
       ({ filter: FilterType.CmcInt, operator: op.value, value, offset })
    %} |
    cmcFilter onlyEqualOperator ("even" | "odd") {% ([{offset}, _op, [{value}]]) =>
        ({ filter: FilterType.CmcOddEven, value, offset })
    %}
cmcFilter -> ("manavalue" | "mv" | "cmc") {% ([[token]]) => token %}

exactNameCondition -> "!":? stringValue
    {% ([op, string]) => ({
        filter: op ? FilterType.NameExact : FilterType.Name,
        value: string.value,
        offset: op ? op.offset : string.offset
    }) %}

nameCondition -> "name" onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Name, value, offset }) %}

nameRegexCondition -> "name" onlyEqualOperator regexString
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.NameRegex, value, offset }) %}

colorCondition ->
    colorFilter anyOperator colorCombinationValue {% ([{offset}, op, {value}]) =>
        ({ filter: FilterType.ColorSet, operator: op.value, value, offset })
    %} |
    colorFilter anyOperator integerValue {% ([{offset}, op, {value}]) =>
        ({ filter: FilterType.ColorInt, operator: op.value, value, offset })
    %}
colorFilter -> ("c" | "color") {% ([[token]]) => token %}

colorIdentityCondition ->
    identityFilter anyOperator colorCombinationValue {% ([{offset}, op, {value}]) =>
        ({ filter: FilterType.ColorIdentitySet, operator: op.value, value, offset })
    %} |
    identityFilter anyOperator integerValue {% ([{offset}, op, {value}]) =>
        ({ filter: FilterType.ColorIdentityInt, operator: op.value, value, offset })
     %}
identityFilter -> ("ci" | "commander" | "identity" | "id") {% ([[token]]) => token %}

manaCostCondition -> ("mana" | "m") %operator manaCostValue
    {% ([[{offset}], op, {value}]) => ({ filter: FilterType.Mana, operator: op.value, value, offset }) %}

manaCostRegexCondition -> ("mana" | "m") onlyEqualOperator regexString
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.ManaRegex, value, offset }) %}

oracleCondition -> oracleFilter onlyEqualOperator stringValue
    {% ([{offset}, _, v], _1, reject) => {
        const {value} = v;
        if (v.type === "nqstring" && /^\d+$/.test(value.toString())) {
            return reject
        }
        return { filter: FilterType.Oracle, value, offset }
    } %}
oracleRegexCondition -> oracleFilter onlyEqualOperator regexString
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.OracleRegex, value, offset }) %}
oracleCountCondition -> oracleFilter anyOperator integerValue
    {% ([{offset}, op, {value}]) => ({ filter: FilterType.OracleCount, value, operator: op.value, offset }) %}
oracleFilter -> ("oracle" | "o" | "text") {% ([[token]]) => token %}

fullOracleCondition -> fullOracleFilter onlyEqualOperator stringValue
    {% ([{offset}, _, v], _1, reject) => {
        const {value} = v;
        if (v.type === "nqstring" && /^\d+$/.test(value.toString())) {
            return reject
        }
        return { filter: FilterType.FullOracle, value, offset }
    } %}
fullOracleRegexCondition -> fullOracleFilter onlyEqualOperator regexString
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.FullOracleRegex, value, offset }) %}
fullOracleCountCondition -> fullOracleFilter anyOperator integerValue
    {% ([{offset}, op, {value}]) => ({ filter: FilterType.FullOracleCount, value, operator: op.value, offset }) %}
fullOracleFilter -> "fo" {% id %}

keywordCondition -> ("kw" | "keyword") onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.Keyword, value, offset }) %}
keywordCountCondition -> "keywords" anyOperator integerValue
    {% ([{offset}, op, {value}]) => ({ filter: FilterType.KeywordCount, value, operator: op.value, offset }) %}

typeCondition -> ("t" | "type") onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.Type, value, offset }) %}

typeRegexCondition -> ("t" | "type") onlyEqualOperator regexString
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.TypeRegex, value, offset }) %}

powerCondition -> ("pow" | "power") anyOperator (integerValue | "tou" | "toughness")
    {% ([[{offset}], op, [value]]) => ({
        filter: FilterType.Power,
        operator: op.value,
        value: value.value ?? value,
        offset
    }) %}

toughCondition -> ("tou" | "toughness") anyOperator (integerValue | "pow" | "power")
    {% ([[{offset}], op, [value]]) => ({
        filter: FilterType.Tough,
        operator: op.value,
        value: value.value ?? value,
        offset
    }) %}

powTouCondition -> ("pt" | "powtou") anyOperator integerValue
    {% ([[{offset}], op, {value}]) => ({ filter: FilterType.PowTou, operator: op.value, value, offset }) %}

loyaltyCondition -> ("loy" | "loyalty") anyOperator integerValue
    {% ([[{offset}], operator, {value}]) => ({ filter: FilterType.Loyalty, operator: operator.value, value, offset }) %}

defenseCondition -> ("def" | "defense") anyOperator integerValue
    {% ([[{offset}], op, {value}]) => ({ filter: FilterType.Defense, operator: op.value, value, offset }) %}

layoutCondition -> "layout" onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Layout, value, offset }) %}

formatCondition -> ("format" | "f") onlyEqualOperator formatValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.Format, value, offset }) %}

bannedCondition -> "banned" onlyEqualOperator formatValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Banned, value, offset }) %}

restrictedCondition -> "restricted" onlyEqualOperator formatValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Restricted, value, offset }) %}

isCondition -> ("is" | "has") onlyEqualOperator isValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.Is, value, offset }) %}

notCondition -> "not" onlyEqualOperator isValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Not, value, offset }) %}

printCountCondition -> "prints" anyOperator integerValue
    {% ([{offset}, operator, {value}]) => ({ filter: FilterType.Prints, operator: operator.value, value, offset }) %}

paperPrintCountCondition -> "paperprints" anyOperator integerValue
    {% ([{offset}, operator, {value}]) => ({ filter: FilterType.PaperPrints, operator: operator.value, value, offset }) %}

inCondition -> "in" onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.In, value, offset }) %}

producesCondition ->
    "produces" anyOperator producesCombinationValue
        {% ([{offset}, op, {value}]) => ({ filter: FilterType.ProducesSet, operator: op.value, value, offset })
    %} |
    "produces" anyOperator integerValue
        {% ([{offset}, op, {value}]) => ({ filter: FilterType.ProducesInt, operator: op.value, value, offset }) %}

devotionCondition -> "devotion" anyOperator devotionValue
    {% ([{offset}, op, {value}]) => ({ filter: FilterType.Devotion, operator: op.value, value, offset }) %}

uniqueCondition -> "unique" onlyEqualOperator ("cards" | "prints" | "art")
    {% ([{offset}, _, [{value}]]) => ({ filter: FilterType.Unique, value, offset }) %} |
    "++" {% ([{offset}]) => ({ filter: FilterType.Unique, value: "prints", offset }) %} |
    "@@" {% ([{offset}]) => ({ filter: FilterType.Unique, value: "art", offset }) %}

orderCondition -> "order" onlyEqualOperator orderValue
    {% ([{offset}, _, [{value}]]) => ({ filter: FilterType.Order, value, offset }) %}

directionCondition -> ("dir"|"direction") onlyEqualOperator (ascendingValue | descendingValue)
    {% ([[{offset}], _, [value]]) => ({ filter: FilterType.Direction, value, offset }) %}
ascendingValue -> ("asc" | "ascending") {% () => "asc" %}
descendingValue -> ("desc" | "descending") {% () => "desc" %}

# print-matters
rarityCondition -> ("r" | "rarity") anyOperator rarityValue
    {% ([[{offset}], operator, value]) => ({ filter: FilterType.Rarity, operator: operator.value, value, offset }) %}

setCondition -> ("s" | "set"| "e" | "edition") onlyEqualOperator stringValue
    {% ([[{offset}], _, {value, type}]) => {
        if (type === "nqstring" && value.includes(",")) {
            return ({ filter: FilterType.Set, value: value.split(","), offset });
        }

        return ({ filter: FilterType.Set, value: [value], offset })
     } %}

setTypeCondition -> "st" onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.SetType, value, offset }) %}

blockCondition -> ("b" | "block") onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.Block, value, offset }) %}

artistCondition -> ("a" | "artist") onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.Artist, value, offset }) %}

collectorNumberCondition -> ("cn" | "number") anyOperator integerValue
    {% ([[{offset}], operator, {value}]) => ({ filter: FilterType.CollectorNumber, operator: operator.value, value, offset }) %}

borderCondition -> "border" onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Border, value, offset }) %}

dateCondition -> ("date" | "year") anyOperator stringValue
    {% ([[{offset}], op, {value}]) => ({ filter: FilterType.Date, operator: op.value, value, offset }) %}

priceCondition -> ("usd" | "eur" | "tix") anyOperator (integerValue | decimalValue)
    {% ([[unit], op, [{value}]]) => ({
        filter: FilterType.Price, unit: unit.value, operator: op.value, value, offset: unit.offset
    }) %}

frameCondition -> "frame" onlyEqualOperator stringValue
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
flavorFilter -> ("flavor" | "ft") {% ([[token]]) => token %}

gameCondition -> "game" onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Game, value, offset }) %}

languageCondition -> ("lang" | "language") onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.Language, value, offset }) %}

stampCondition -> "stamp" onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Stamp, value, offset }) %}

watermarkCondition -> ("wm" | "watermark") onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.Watermark, value, offset }) %}

newCondition -> "new" onlyEqualOperator newValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.New, value, offset }) %}

preferCondition -> "prefer" onlyEqualOperator preferValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Prefer, value, offset }) %}

cubeOracleCondition -> ("cube" | "ctag" | "tag") ":" cubeValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.CubeOracle, value, offset }) %}

cubePrintCondition -> ("cube" | "ctag" | "tag") "=" cubeValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.CubePrints, value, offset }) %}

oracleTagCondition -> ("function" | "oracletag" | "otag") onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.OracleTag, value, offset }) %}

artTagCondition -> ("art" | "arttag" | "atag") onlyEqualOperator stringValue
    {% ([[{offset}], _, {value}]) => ({ filter: FilterType.IllustrationTag, value, offset }) %}

collectionCondition -> "collection" onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Collection, value, offset }) %}

scryfallIdCondition -> "scryfallid" onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.ScryfallId, value, offset }) %}

oracleIdCondition -> "oracleid" onlyEqualOperator stringValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.OracleId, value, offset }) %}

limitCondition -> ("lim" | "limit")  onlyEqualOperator integerValue
    {% ([{offset}, _, {value}]) => ({ filter: FilterType.Limit, value, offset }) %}

# Values
stringValue -> (noQuoteStringValue | %dqstring | %sqstring) {% ([[token]]) => {
    const { value, ...rest } = token
    return { value: value.toLowerCase(), ...rest }
}%}

cubeValue -> (noQuoteStringValue | %dqstring | %sqstring) {% ([[token]]) => token %}

regexString -> %regex {% function([token]) {
    const { value, ...rest } = token
    return { value: value.toLowerCase(), ...rest }
} %}

anyOperator -> (":" | "=" | "!=" | "<>" | "<=" | "<" | ">=" | ">" | "≤" | "≥") {% ([[token]]) => token %}

onlyEqualOperator -> (":" | "=") {% ([[token]]) => token %}

integerValue -> %integer {% ([token]) => ({ ...token, value: Number.parseInt(token.value, 10) }) %}

decimalValue -> %decimal {% ([token]) => ({ ...token, value: Number.parseFloat(token.value) }) %}

formatValue -> (
    "standard" | "future" | "historic" | "pioneer" | "modern" | "legacy" | "paupercommander" |
    "pauper" |"vintage" | "penny" | "commander" | "brawl" | "duel" | "oldschool" | "timeless"
) {% ([[format]]) => format %}

isValue -> (
    "gold" | "twobrid" | "hybrid" | "phyrexian" | "promo" | "reprint" | "firstprint" | "firstprinting" | "digital"
  | "dfc" | "mdfc" |"tdfc" | "extra"
  | "meld" | "transform" | "split" | "flip" | "leveler" | "commander" | "spell" | "permanent" | "historic"
  | "vanilla" | "modal" | "fullart" | "foil" | "nonfoil" | "etched" | "token"
  | "bikeland" | "cycleland" | "bicycleland" | "bounceland" | "karoo" | "canopyland" | "canland" | "fetchland"
  | "checkland" | "dual" | "fastland" | "filterland" | "gainland" | "painland" | "scryland" | "shadowland" | "snarl"
  | "slowland" | "shockland" | "storageland" | "creatureland" | "manland"
  | "triland" | "triome" | "trikeland" | "tricycleland"
  | "tangoland" | "battleland" | "bondland"
  # pulled these from advanced tab in scryfall
  | "adventure" | "arenaid" | "artseries" | "artist" | "artistmisprint" | "belzenlok"
  | "lights" | "augmentation" | "back" | "bear" | "booster" | "brawlcommander" | "buyabox"
  | "cardmarket" | "class" | "ci" | "colorshifted" | "companion" | "contentwarning"
  | "covered" | "doublesided" | "duelcommander" | "etb"
  | "englishart" | "etch" | "extended" | "flavorname" | "flavor"
  | "fbb" | "fwb" | "frenchvanilla" | "funny" | "future"
  | "hires" | "splitmana" | "llustration" | "ntropack" | "nvitational" | "setextension"
  | "localizedname" | "mtgoid" | "masterpiece"
  | "modern" | "multiverse" | "new" | "oathbreaker" | "old" | "oversized" | "paperart"
  | "party" | "phyrexia" | "planar" | "printedtext"
  | "related" | "reserved" | "reversible" | "stamp" | "showcase" | "serialized"
  | "spellbook" | "spikey" | "stamped" | "story" | "tcgplayer" | "textless"
  | "tombstone" | "onlyprint" | "variation" | "watermark" | "ub" | "unique" | "placeholderimage"
  | "outlaw" | "mb1" | "fmb1" | "pagl" | "phed" | "pctb"
  # promo_types
  | "halo"
  | "poster" | "scroll" | "boosterfun" | "brawldeck" | "rebalanced"
  | "duels" | "embossed" | "moonlitland" | "openhouse" | "boxtopper" | "promopack"
  | "gilded" | "playpromo" | "setpromo" | "fnm" | "mediainsert" | "wizardsplaynetwork" | "bundle" | "concept" | "halofoil"
  | "godzillaseries" | "neonink" | "instore" | "arenaleague" | "starterdeck" | "confettifoil" | "textured"
  | "convention" | "themepack" | "commanderparty" | "bringafriend" | "plastic" | "alchemy" | "gameday" | "intropack"
  | "draculaseries" | "silverfoil" | "datestamped" | "league" | "doublerainbow" | "release" | "draftweekend" | "event" | "surgefoil"
  | "schinesealtart" | "playerrewards" | "storechampionship" | "giftbox" | "galaxyfoil" | "glossy" | "stepandcompleat" | "oilslick"
  | "tourney" | "premiereshop" | "judgegift" | "thick" | "jpwalker" | "prerelease" | "planeswalkerdeck"
  | "upsidedown" | "upsidedownback" | "playtest" | "imagine"
  # non-scryfall filters
  | "star" | "custom" | "deciduous"
) {% ([[category]]) => category %}

# This somehow picks up restricted!=vintage
noQuoteStringValue ->
  ("a" | "an" | "o") {% ([[token]]) => token %}
  | ([^aAoO\- \t\n"'\\\/=<>:!\+@]
    | "a" [^nN \t\n"'\\=<>:]
    | "an" [^dD \t\n"'\\=<>:]
    | "and" [^ \t\n"'\\=<>:]
    | "o" [^rR \t\n"'\\=<>:]
    | "or" [^ \t\n"'\\=<>:]
    ) [^ \t\n"'\\=<>:]:* {% ([startChars, chars], _, reject) => {
    // hack: The lexer causes "or" to get picked up as a name search
    // todo: rework noQuoteString to play more nicely with lexer
    const allChars = startChars.concat(chars)
    const rejectTypes = ["bool", "regex", "operator", "dqstring", "rparen", "lparen", "identity"]
    if (allChars.find(it => rejectTypes.includes(it.type))) {
        return reject;
    }
    const value = allChars.map(it=>it.text).join("");
    return { value, offset: startChars[0]?.offset ?? -1, type: "nqstring" }
} %}

# we never need offset from this
colorCombinationKeyword ->
    "white" {% () => ['w'] %}
  | "blue" {% () => ['u'] %}
  | "black" {% () => ['b'] %}
  | "red" {% () => ['r'] %}
  | "green" {% () => ['g'] %}
  | ("azorius")  {% () => ['w', 'u'] %}
  | ("dimir")  {% () => ['u', 'b'] %}
  | ("rakdos")  {% () => ['b', 'r'] %}
  | ("gruul")  {% () => ['r', 'g'] %}
  | ("selesnya")  {% () => ['g', 'w'] %}
  | ("silverquill" | "orzhov")  {% () => ['w', 'b'] %}
  | ("prismari" | "izzet")  {% () => ['u', 'r'] %}
  | ("witherbloom" | "golgari")  {% () => ['b', 'g'] %}
  | ("lorehold" | "boros")  {% () => ['w', 'r'] %}
  | ("quandrix" | "simic")  {% () => ['u', 'g'] %}
  | ("brokers" | "bant")  {% () => ['w', 'u', 'g'] %}
  | ("obscura" | "esper")  {% () => ['w', 'u', 'b'] %}
  | ("maestros" | "grixis")  {% () => ['u', 'b', 'r'] %}
  | ("riveteers" | "jund")  {% () => ['b', 'r', 'g'] %}
  | ("cabaretti" | "naya")  {% () => ['w', 'r', 'g'] %}
  | ("savai" | "dega" | "mardu")  {% () => ['w', 'b', 'r'] %}
  | ("ketria" | "ceta" | "temur")  {% () => ['u', 'r', 'g'] %}
  | ("indatha" | "necra" | "abzan")  {% () => ['w', 'b', 'g'] %}
  | ("raugrin" | "raka" | "jeskai")  {% () => ['w', 'u', 'r'] %}
  | ("zagoth" | "ana" | "sultai")  {% () => ['u', 'b', 'g'] %}
  | "chaos" {% () => ['b','g','r','u'] %}
  | "aggression" {% () => ['b','g','r','w'] %}
  | "altruism" {% () => ['w','g','r','u'] %}
  | "growth" {% () => ['b','g','w','u'] %}
  | "artifice" {% () => ['b','w','r','u'] %}
  | ("rainbow" | "fivecolor")  {% () => ['w', 'u', 'b', 'r', 'g'] %}

colorCombinationValue ->
    ("c" | "brown" | "colorless")  {% ([[token]]) => ({ value: [], offset: token.offset }) %}
  | colorCombinationKeyword {% ([value]) => ({ value }) %}
  | noQuoteStringValue {% ([token], _, reject) => {
    if (/[^wubrg]/.test(token.value)) {
        return reject
    }
    return { value: token.value.split(""), offset: token.offset }
  } %}

producesCombinationValue ->
    ("brown" | "colorless") {% ([[token]]) => ({ value: ['c'], offset: token.offset }) %}
  | colorCombinationKeyword {% ([value]) => ({ value }) %}
  | noQuoteStringValue {% ([token], _, reject) => {
      if (/[^wubrgc]/.test(token.value)) {
          return reject
      }
      return { value: token.value.split(""), offset: token.offset }
    } %}

devotionValue -> manaCostValue {% id %}

manaCostValue -> manaSymbol:+ {% ([symbols]) => ({
    value: symbols.map(it => it.value),
    offset: symbols[0].offset
}) %} |
 noQuoteStringValue {% ([token], _, reject) => {
    if (/[^0-9xyzwubrgsc]/.test(token.value)) {
        return reject
    }
    return { value: token.value.split("") , offset: token.offset }
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

rarityValue ->
    ("b" | "bonus")  {% () => "bonus" %} |
    ("m" | "mythic")  {% () => "mythic" %} |
    ("s" | "special")  {% () => "special" %} |
    ("r" | "rare")  {% () => "rare" %} |
    ("u" | "uncommon")  {% () => "uncommon" %} |
    ("c" | "common")  {% () => "common" %}

orderValue -> ("artist" | orderMv | "power" | "toughness" | "set" | "name" | "usd" | "tix" | "eur" | "rarity" | "color" | "released" | "spoiled" | "edhrec" | "penny" | "review"
# non-scryfall
| "wc" | "fwc" | "random")
    {% id %}

orderMv -> ("cmc" | "mv") {% ([token]) => {
    return { ...token, value: "cmc" }
} %}


newValue -> ("rarity" | "flavor" | "art" | "artist" | "frame" | "language" | "game" | "paper" | "mtgo" | "arena" | "nonfoil" | "foil")
 {% ([[it]]) => it %}

preferValue -> ("oldest" | "newest" | "usd-low" | "usd-high" | "eur-low" | "eur-high" | "tix-low" | "tix-high") {% ([[it]]) => it %}