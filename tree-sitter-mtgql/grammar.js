const {colorWords, formats, isvalues, orderValues, newValues, preferValues} = require("./gsrc");

function simpleNumberCondition($, filter/*: RuleOrLiteral*/) {
  return seq(
    filter,
    $._num_or_equal_operator,
    $.natural_number,
  )
}

function stringCondition($, filter/*: RuleOrLiteral*/) {
  return seq(
    filter,
    $.equal_operator,
    $._string_value,
  )
}

function formatCondition($, filter/*: RuleOrLiteral*/) {
  return seq(
    filter,
    $.equal_operator,
    $.format_value,
  )
}

// consider using spread here
function enumChoice(enumValues) {
  const regex = new RegExp(`(${enumValues.join("|")})`, 'i')
  return token.immediate(regex)
}

module.exports = grammar({
  name: 'mtgql',

  word: $ => $.no_quote_string,

  rules: {
    // ~~ basic query structure ~~
    query: $ => $._filter,
    _filter: $ => choice(
      $.unary_statement,
      $.bool_statement
    ),
    unary_statement: $ => seq(
      optional("-"),
      choice(
        $.parentheses,
        $._condition,
      )
    ),
    bool_statement: $ => prec.left(1, seq(
      $._filter,
      $.bool_operator,
      $._filter,
    )),
    parentheses: $ => seq(
      "(", $._filter, ")"
    ),
    _condition: $ => choice(
      prec(2, $.identity_condition),
      prec(2, $.color_condition),
      prec(2, $.color_identity_condition),
      prec(2, $.mana_condition),
      prec(2, $.cmc_condition),
      prec(2, $.oracle_condition),
      prec(2, $.full_oracle_condition),
      prec(2, $.keyword_condition),
      prec(2, $.keyword_count_condition),
      prec(2, $.type_condition),
      prec(2, $.power_condition),
      prec(2, $.toughness_condition),
      prec(2, $.pow_tou_condition),
      prec(2, $.loyalty_condition),
      prec(2, $.defense_condition),
      prec(2, $.layout_condition),
      prec(2, $.format_condition),
      prec(2, $.banned_condition),
      prec(2, $.restricted_condition),
      prec(2, $.is_condition),
      prec(2, $.not_condition),
      prec(2, $.print_count_condition),
      prec(2, $.paper_print_count_condition),
      prec(2, $.in_condition),
      prec(2, $.rarity_condition),
      prec(2, $.set_condition),
      prec(2, $.set_type_condition),
      prec(2, $.block_condition),
      prec(2, $.artist_condition),
      prec(2, $.collector_number_condition),
      prec(2, $.border_condition),
      prec(2, $.date_condition),
      prec(2, $.frame_condition),
      prec(2, $.flavor_condition),
      prec(2, $.game_condition),
      prec(2, $.language_condition),
      prec(2, $.price_condition),
      prec(2, $.stamp_condition),
      prec(2, $.watermark_condition),
      prec(2, $.cube_oracle_condition),
      prec(2, $.cube_print_condition),
      prec(2, $.produces_condition),
      prec(2, $.unique_condition),
      prec(2, $.order_condition),
      prec(2, $.direction_condition),
      prec(2, $.devotion_condition),
      prec(2, $.oracle_tag_condition),
      prec(2, $.art_tag_condition),
      prec(2, $.new_condition),
      prec(2, $.prefer_condition),
      prec(2, $.scryfall_id_condition),
      prec(2, $.oracle_id_condition),
      prec(2, $.name_condition),
      prec(1, $.exact_name_condition),
      // syntax extension
      prec(2, $.collection_condition),
    ),

    // ~~ conditions ~~
    identity_condition: _ => "*",

    color_condition: $ => seq(
      $.color_filter,
      choice(
        prec(2, seq($._num_or_equal_operator, $.color_count)),
        prec(1, seq($.equal_operator, $.color_combination)),
      ),
    ),
    color_filter: _ => choice("c", "color"),

    color_identity_condition: $ => seq(
      $.identity_filter,
      choice(
        prec(2, seq($._num_or_equal_operator, $.color_count)),
        prec(1, seq($.equal_operator, $.color_combination)),
      ),
    ),
    identity_filter: _ => choice("id", "ci", "commander", "identity"),

    mana_condition: $ => seq(
      $.mana_filter,
      choice(
        prec(2, seq($._num_or_equal_operator, $.mana_cost,)),
        prec(1, seq($.equal_operator, $.regex,)),
      ),
    ),
    mana_filter: _ => choice("mana", "m"),

    cmc_condition: $ => seq(
      $.cmc_filter,
      choice(
        prec(2, seq($._num_or_equal_operator, $._number,)),
        prec(1, seq($.equal_operator, $.odd_even,)),
      ),
    ),
    cmc_filter: _ => choice("cmc", "mv", "manavalue"),

    oracle_condition: $ => seq(
      $.oracle_filter,
      choice(
        prec(2, seq($._num_or_equal_operator, $.natural_number)),
        prec(1, seq($.equal_operator, $._stringish_value)),
      )
    ),
    oracle_filter: _ => choice("oracle", "o", "text"),

    full_oracle_condition: $ => seq(
      $.full_oracle_filter,
      choice(
        prec(2, seq($._num_or_equal_operator, $.natural_number)),
        prec(1, seq($.equal_operator, $._stringish_value)),
      )
    ),
    full_oracle_filter: _ => choice("fo"),

    keyword_condition: $ => stringCondition($, $.keyword_filter),
    keyword_filter: _ => choice("kw", "keyword"),

    keyword_count_condition: $ => simpleNumberCondition($, $.keyword_count_filter),
    keyword_count_filter: _ => "keywords",

    type_condition: $ => seq(
      $.type_filter, $.equal_operator, $._stringish_value,
    ),
    type_filter: _ => choice("t", "type"),

    power_condition: $ => seq(
      $.power_filter,
      $._num_or_equal_operator,
      choice($.natural_number, $.toughness_value,),
    ),
    power_filter: _ => choice("pow", "power"),
    toughness_value: _ => token.immediate(choice("tou", "toughness")),

    toughness_condition: $ => seq(
      $.toughness_filter,
      $._num_or_equal_operator,
      choice($.natural_number, $.power_value,),
    ),
    toughness_filter: _ => choice("tou", "toughness"),
    power_value: _ => token.immediate(choice("pow", "power")),

    pow_tou_condition: $ => simpleNumberCondition($, $.pow_tou_filter),
    pow_tou_filter: _ => choice("pt", "powtou"),

    loyalty_condition: $ => simpleNumberCondition($, $.loyalty_filter),
    loyalty_filter: _ => choice("loyalty", "loy"),

    defense_condition: $ => simpleNumberCondition($, $.defense_filter),
    defense_filter: _ => choice("defense", "def"),

    layout_condition: $ => stringCondition($, $.layout_filter),
    layout_filter: _ => "layout",

    format_condition: $ => formatCondition($, $.format_filter),
    format_filter: _ => choice("format", "f"),

    banned_condition: $ => formatCondition($, $.banned_filter),
    banned_filter: _ => "banned",

    restricted_condition: $ => formatCondition($, $.restricted_filter),
    restricted_filter: _ => "restricted",

    is_condition: $ => seq($.is_filter, $.equal_operator, $.is_value,),
    is_filter: _ => choice("is", "has"),
    not_condition: $ => seq($.not_filter, $.equal_operator, $.is_value,),
    not_filter: _ => "not",

    print_count_condition: $ => simpleNumberCondition($, $.print_count_filter),
    print_count_filter: _ => "prints",

    paper_print_count_condition: $ => simpleNumberCondition($, $.paper_print_count_filter),
    paper_print_count_filter: _ => "paperprints",

    in_condition: $ => stringCondition($, $.in_filter),
    in_filter: _ => "in",

    produces_condition: $ => seq(
      $.produces_filter,
      $._num_or_equal_operator,
      choice(
        prec(2, $.produces_count),
        prec(1, $.produces_combination),
      ),
    ),
    produces_filter: _ => "produces",

    devotion_condition: $ => seq(
      $.devotion_filter,
      $._num_or_equal_operator,
      $.mana_cost,
    ),
    devotion_filter: _ => "devotion",

    unique_condition: $ => choice(
      $.unique_symbol,
      seq(
        $.unique_filter,
        $.equal_operator,
        $.unique_value,
      )
    ),
    unique_symbol: _ => choice("++", "@@"),
    unique_filter: _ => "unique",
    unique_value: _ => token.immediate(/(cards|prints|art)/i),

    order_condition: $ => seq(
      $.order_filter,
      $.equal_operator,
      $.order_value,
    ),
    order_filter: _ => "order",
    order_value: _ => enumChoice(orderValues),

    direction_condition: $ => seq(
      $.direction_filter,
      $.equal_operator,
      $.direction_value,
    ),
    direction_filter: _ => "direction",
    direction_value: _ => enumChoice(["asc", "desc"]),

    rarity_condition: $ => seq(
      $.rarity_filter,
      $._num_or_equal_operator,
      $.rarity_value,
    ),
    rarity_filter: _ => choice("r", "rarity"),
    rarity_value: _ => enumChoice([
      "b", "bonus",
      "m", "mythic",
      "s", "special",
      "r", "rare",
      "u", "uncommon",
      "c", "common",
    ]),

    set_condition: $ => stringCondition($, $.set_filter),
    set_filter: _ => choice("s", "set", "e", "edition"),

    set_type_condition: $ => stringCondition($, $.set_type_filter),
    set_type_filter: _ => "st",

    block_condition: $ => stringCondition($, $.block_filter),
    block_filter: _ => choice("b","block"),

    artist_condition: $ => stringCondition($, $.artist_filter),
    artist_filter: _ => choice("a", "artist"),

    collector_number_condition: $ => seq(
      $.collector_number_filter,
      choice(
        prec(2, seq($._num_or_equal_operator, $.natural_number)),
        prec(1, seq($.equal_operator, $._string_value)),
      ),
    ),
    collector_number_filter: _ => choice("cn", "number"),

    border_condition: $ => stringCondition($, $.border_filter),
    border_filter: _ => "border",

    date_condition: $ => stringCondition($, $.date_filter),
    date_filter: _ => choice("year", "date"),

    price_condition: $ => seq(
      $.price_condition,
      $._num_or_equal_operator,
      $._number,
    ),

    frame_condition: $ => stringCondition($, $.frame_filter),
    frame_filter: _ => "frame",

    flavor_condition: $ => seq(
      $.flavor_filter,
      choice(
        prec(2, seq($._num_or_equal_operator, $.natural_number)),
        prec(1, seq($.equal_operator, $._stringish_value)),
      )
    ),
    flavor_filter: _ => choice("ft", "flavor"),

    game_condition: $ => stringCondition($, $.game_filter),
    game_filter: _ => "game",

    language_condition: $ => stringCondition($, $.language_filter),
    language_filter: _ => choice("lang", "language"),

    stamp_condition: $ => stringCondition($, $.stamp_filter),
    stamp_filter: _ => "stamp",

    watermark_condition: $ => stringCondition($, $.watermark_filter),
    watermark_filter: _ => choice("wm", "watermark"),

    new_condition: $ => seq(
      $.new_filter,
      $.equal_operator,
      $.new_value,
    ),
    new_filter: _ => "new",
    new_value: _ => enumChoice(newValues),

    prefer_condition: $ => seq(
      $.prefer_filter,
      $.equal_operator,
      $.prefer_value,
    ),
    prefer_filter: _ => "prefer",
    prefer_value: _ => enumChoice(preferValues),

    cube_oracle_condition: $ => stringCondition($, $.cube_oracle_filter),
    cube_oracle_filter: _ => choice("cube", "ctag", "tag"),

    cube_print_condition: $ => stringCondition($, $.cube_print_filter),
    cube_print_filter: _ => choice("cube+", "ctag+", "tag+"),

    oracle_tag_condition: $ => stringCondition($, $.oracle_tag_filter),
    oracle_tag_filter: _ => choice("otag", "function", "oracletag"),

    art_tag_condition: $ => stringCondition($, $.art_tag_filter),
    art_tag_filter: _ => choice("atag", "arttag", "art"),

    collection_condition: $ => stringCondition($, $.collection_filter),
    collection_filter: _ => "collection",

    scryfall_id_condition: $ => seq(
      $.scryfall_id_filter,
      $.equal_operator,
      $.uuid,
    ),
    scryfall_id_filter: _ => "scryfallid",

    oracle_id_condition: $ => seq(
      $.oracle_id_filter,
      $.equal_operator,
      $.uuid,
    ),
    oracle_id_filter: _ => "oracleid",

    exact_name_condition: $ => seq(
      optional(field("exact_match", "!")),
      $._stringish_value,
    ),
    name_condition: $ => seq(
      $.name_filter,
      $.equal_operator,
      $._stringish_value,
    ),
    name_filter: _ => choice("name", "n"),

    // ~~ operators ~~
    // consider putting token.immediate here
    bool_operator: _ => token(choice(
      prec(2, " and "),
      prec(2, " or "),
      prec(1, " ")
    )),
    _num_or_equal_operator: $ => choice($.number_operator, $.equal_operator),
    number_operator: _ => token.immediate(choice(
      "!=", "<>", ">=", "<=", ">", "<"
    )),
    equal_operator: _ => token.immediate(choice(
      ":", "="
    )),

    // ~~ search values ~~
    color_combination: _ => token.immediate(
      new RegExp(`(${colorWords.join("|")}|colorless|c|brown|[wubrg]+)`,'i'),
    ),
    color_count: _ => token.immediate(/[0-5]/),
    produces_combination: _ => token.immediate(
      new RegExp(`(${colorWords.join("|")}|brown|colorless|[wubrgc]+)`, 'i'),
    ),
    produces_count: _ => token.immediate(/[0-6]/),

    mana_cost: $ => choice(
      prec(2, repeat1($.mana_symbol)),
      prec(1, token.immediate(/[0-9xyzwubrgsc]+/i)),
    ),
    mana_symbol: _ => token.immediate(/\{([0-9]+|[xyz]|[2pwubrgsc](\/[2pwubrgsc]){0,2})}/i),

    format_value: _ => enumChoice(formats),
    is_value: _ => enumChoice(isvalues),
    odd_even: _ => token.immediate(/(odd|even)/i),

    _number: $ => choice($.natural_number, $.positive_float,),
    positive_float: _ => token.immediate(/\d+\.\d+/),
    natural_number: _ => token.immediate(/\d+/),

    _string_value: $ => choice(
      $.no_quote_string,
      $.single_quote_string,
      $.double_quote_string,
    ),
    _stringish_value: $ => choice(
      $.no_quote_string,
      $.single_quote_string,
      $.double_quote_string,
      $.regex,
    ),
    uuid: _ => token.immediate(/[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}/),
    // when I switch filter keywords to use a case-agnostic regex,
    // tree sitter no longer recognizes filter words above exact_name_condition
    no_quote_string: _ => token.immediate(/\w[\w-]*/),
    single_quote_string: _ => token.immediate(/'(?:\\['\\]|[^\n'\\])*'/),
    double_quote_string: _ => token.immediate( /"(?:\\["\\]|[^\n"\\])*"/),
    regex: _ => token.immediate( /\/(?:\\[\/\\{a-zA-Z]|[^\n\/\\])*\//),
  }
});
