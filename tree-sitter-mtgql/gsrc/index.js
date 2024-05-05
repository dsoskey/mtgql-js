const colorWords = [
  "white", "blue", "black", "red", "green",
  "azorius",
  "dimir",
  "rakdos",
  "gruul",
  "selesnya",
  "silverquill", "orzhov",
  "prismari", "izzet",
  "witherbloom", "golgari",
  "lorehold", "boros",
  "quandrix", "simic",
  "brokers", "bant",
  "obscura", "esper",
  "maestros", "grixis",
  "riveteers", "jund",
  "cabaretti", "naya",
  "savai", "dega", "mardu",
  "ketria", "ceta", "temur",
  "indatha", "necra", "abzan",
  "raugrin", "raka", "jeskai",
  "zagoth", "ana", "sultai",
  "chaos", // ['b','g','r','u']
  "aggression", // ['b','g','r','w']
  "altruism", // ['w','g','r','u']
  "growth", // ['b','g','w','u']
  "artifice", // ['b','w','r','u']
  "rainbow", "fivecolor",
]

const formats = [
  "standard", "future", "historic", "pioneer", "modern", "legacy", "paupercommander",
  "pauper","vintage", "penny", "commander", "brawl", "duel", "oldschool", "timeless"
]

const isvalues = [
  "gold" , "twobrid" , "hybrid" , "phyrexian" , "promo" , "reprint" , "firstprint" , "firstprinting" , "digital"
  , "dfc" , "mdfc" ,"tdfc" , "extra"
  , "meld" , "transform" , "split" , "flip" , "leveler" , "commander" , "spell" , "permanent" , "historic"
  , "vanilla" , "modal" , "fullart" , "foil" , "nonfoil" , "etched" , "token"
  , "bikeland" , "cycleland" , "bicycleland" , "bounceland" , "karoo" , "canopyland" , "canland" , "fetchland"
  , "checkland" , "dual" , "fastland" , "filterland" , "gainland" , "painland" , "scryland" , "shadowland" , "snarl"
  , "slowland" , "shockland" , "storageland" , "creatureland" , "manland"
  , "triland" , "triome" , "trikeland" , "tricycleland"
  , "tangoland" , "battleland" , "bondland", "outlaw"
  // pulled these from advanced tab in scryfall
  , "adventure" , "arenaid" , "artseries" , "artist" , "artistmisprint" , "belzenlok"
  , "lights" , "augmentation" , "back" , "bear" , "booster" , "brawlcommander" , "buyabox"
  , "cardmarket" , "class" , "ci" , "colorshifted" , "companion" , "contentwarning"
  , "covered" , "doublesided" , "duelcommander" , "etb"
  , "englishart" , "etch" , "extended" , "flavorname" , "flavor"
  , "fbb" , "fwb" , "frenchvanilla" , "funny" , "future"
  , "hires" , "splitmana" , "llustration" , "ntropack" , "nvitational" , "setextension"
  , "localizedname" , "mtgoid" , "masterpiece"
  , "modern" , "multiverse" , "new" , "oathbreaker" , "old" , "oversized" , "paperart"
  , "party" , "phyrexia" , "planar" , "printedtext"
  , "related" , "reserved" , "reversible" , "stamp" , "showcase" , "serialized"
  , "spellbook" , "spikey" , "stamped" , "story" , "tcgplayer" , "textless"
  , "tombstone" , "onlyprint" , "variation" , "watermark" , "ub" , "unique" , "placeholderimage"
  // promo_types
  , "halo"
  , "poster" , "scroll" , "boosterfun" , "brawldeck" , "rebalanced"
  , "duels" , "embossed" , "moonlitland" , "openhouse" , "boxtopper" , "promopack"
  , "gilded" , "playpromo" , "setpromo" , "fnm" , "mediainsert" , "wizardsplaynetwork" , "bundle" , "concept" , "halofoil"
  , "godzillaseries" , "neonink" , "instore" , "arenaleague" , "starterdeck" , "confettifoil" , "textured"
  , "convention" , "themepack" , "commanderparty" , "bringafriend" , "plastic" , "alchemy" , "gameday" , "intropack"
  , "draculaseries" , "silverfoil" , "datestamped" , "league" , "doublerainbow" , "release" , "draftweekend" , "event" , "surgefoil"
  , "schinesealtart" , "playerrewards" , "storechampionship" , "giftbox" , "galaxyfoil" , "glossy" , "stepandcompleat" , "oilslick"
  , "tourney" , "premiereshop" , "judgegift" , "thick" , "jpwalker" , "prerelease" , "planeswalkerdeck"
  // non-scryfall filters
  , "star" , "custom"
]

const orderValues = [
  "artist"  , "cmc", "mv" , "power"  , "toughness"  , "set"  , "name"  , "usd"  , "tix"  , "eur"  , "rarity"  , "color"  , "released"  , "spoiled"  , "edhrec"  , "penny"  , "review"
]

const newValues = [
  "rarity" , "flavor" , "art" , "artist" , "frame" , "language" , "game" , "paper" , "mtgo" , "arena" , "nonfoil" , "foil"
]

const preferValues = [
  "oldest" , "newest" , "usd-low" , "usd-high" , "eur-low" , "eur-high" , "tix-low" , "tix-high"
]

module.exports = {
  colorWords,
  formats,
  isvalues,
  orderValues,
  newValues,
  preferValues,
}
