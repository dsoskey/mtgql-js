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
      prec(2, $.cmc_condition),
      prec(2, $.name_condition),
      prec(1, $.exact_name_condition),
    ),

    // ~~ conditions ~~
    color_condition: $ => seq(
      field("color_filter", choice("c", "color")),
      choice(
        prec(2, seq($._num_or_equal_operator, $.color_count)),
        prec(1, seq($.equal_operator, $.color_combination)),
      ),
    ),
    color_count: _ => token.immediate(/[0-5]/),

    cmc_condition: $ => seq(
      $.cmc_filter,
      choice(
        prec(2, seq($._num_or_equal_operator, $._number,)),
        prec(1, seq($.equal_operator, $.odd_even,)),
      ),
    ),
    cmc_filter: _ => choice("cmc", "mv", "manavalue"),

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

    _stringish_value: $ => choice(
      $.no_quote_string,
      $.single_quote_string,
      $.double_quote_string,
      $.regex,
    ),
    no_quote_string: _ => token.immediate(/\w[\w-]*/),
    single_quote_string: _ => token.immediate(/'(?:\\['\\]|[^\n'\\])*'/),
    double_quote_string: _ => token.immediate( /"(?:\\["\\]|[^\n"\\])*"/),
    regex: _ => token.immediate( /\/(?:\\[\/\\a-zA-Z]|[^\n\/\\])*\//),

    color_combination: _ => token.immediate(choice(
      "c", "C", "brown", "colorless",
      ...colorWords,
      /[wWuUbBrRgG]{1,5}/,
    )),
  }
});
