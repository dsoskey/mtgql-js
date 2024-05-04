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
      prec(2, $.color_condition),
      prec(2, $.color_identity_condition),
      prec(2, $.mana_condition),
      prec(2, $.cmc_condition),
      prec(2, $.oracle_condition),
      prec(2, $.full_oracle_condition),
      prec(2, $.keyword_condition),
      prec(2, $.type_condition),
      prec(2, $.power_condition),
      prec(2, $.toughness_condition),
      prec(2, $.pow_tou_condition),
      prec(2, $.loyalty_condition),
      prec(2, $.defense_condition),
      // prec(2, $.layout_condition),
      // prec(2, $.format_condition),
      // prec(2, $.banned_condition),
      // prec(2, $.restricted_condition),
      // prec(2, $.is_condition),
      // prec(2, $.not_condition),
      // prec(2, $.print_count_condition),
      // prec(2, $.paper_print_count_condition),
      // prec(2, $.in_condition),
      // prec(2, $.rarity_condition),
      // prec(2, $.set_condition),
      // prec(2, $.set_type_condition),
      // prec(2, $.block_condition),
      // prec(2, $.artist_condition),
      // prec(2, $.border_condition),
      // prec(2, $.collectorNumber_condition),
      // prec(2, $.date_condition),
      // prec(2, $.frame_condition),
      // prec(2, $.flavor_condition),
      // prec(2, $.flavor_regex_condition),
      // prec(2, $.flavor_count_condition),
      // prec(2, $.game_condition),
      // prec(2, $.language_condition),
      // prec(2, $.price_condition),
      // prec(2, $.stamp_condition),
      // prec(2, $.watermark_condition),
      // prec(2, $.cubeOracle_condition),
      // prec(2, $.cubePrint_condition),
      // prec(2, $.produces_condition),
      // prec(2, $.unique_condition),
      // prec(2, $.order_condition),
      // prec(2, $.direction_condition),
      // prec(2, $.devotion_condition),
      // prec(2, $.oracle_tag_condition),
      // prec(2, $.art_tag_condition),
      // prec(2, $.new_condition),
      // prec(2, $.prefer_condition),
      // prec(2, $.collection_condition),
      // prec(2, $.scryfall_id_condition),
      // prec(2, $.oracle_id_condition),
      prec(2, $.name_condition),
      prec(1, $.exact_name_condition),
    ),

    // ~~ conditions ~~
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

    keyword_condition: $ => seq(
      $.keyword_filter, $.equal_operator, $._string_value,
    ),
    keyword_filter: _ => choice("kw", "keyword"),

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

    pow_tou_condition: $ => seq(
      $.pow_tou_filter,
      $._num_or_equal_operator,
      $.natural_number,
    ),
    pow_tou_filter: _ => choice("pt", "powtou"),

    loyalty_condition: $ => seq(
      $.loyalty_filter,
      $._num_or_equal_operator,
      $.natural_number,
    ),
    loyalty_filter: _ => choice("loyalty", "loy"),

    defense_condition: $ => seq(
      $.defense_filter,
      $._num_or_equal_operator,
      $.natural_number,
    ),
    defense_filter: _ => choice("defense", "def"),

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
    _number: $ => choice($.natural_number, $.positive_float,),
    positive_float: _ => token.immediate(/\d+\.\d+/),
    natural_number: _ => token.immediate(/\d+/),
    odd_even: _ => token.immediate(choice("odd", "even")),

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
    no_quote_string: _ => token.immediate(/\w[\w-]*/),
    single_quote_string: _ => token.immediate(/'(?:\\['\\]|[^\n'\\])*'/),
    double_quote_string: _ => token.immediate( /"(?:\\["\\]|[^\n"\\])*"/),
    regex: _ => token.immediate( /\/(?:\\[\/\\{a-zA-Z]|[^\n\/\\])*\//),

    color_combination: _ => token.immediate(choice(
      "c", "C", "brown", "colorless",
      ...colorWords,
      /[wWuUbBrRgG]+/,
    )),
    color_count: _ => token.immediate(/[0-5]/),

    mana_cost: $ => choice(
      prec(2, repeat1($.mana_symbol)),
      prec(1, token.immediate(/[0-9xyzwubrgscXYZWUBRGSC]+/)),
    ),
    mana_symbol: _ => token.immediate(/\{([0-9]+|[xyz]|[2pwubrgscPWUBRGSC](\/[2pwubrgscPWUBRGSC]){0,2})}/),
  }
});
