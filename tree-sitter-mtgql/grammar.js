module.exports = grammar({
  name: 'mtgql',

  word: $ => $.no_quote_string,

  rules: {
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
      prec(2, $.cmc_condition),
      prec(2, $.name_condition),
      prec(1, $.exact_name_condition),
    ),

    cmc_condition: $ => seq(
      $.cmc_filter,
      choice(
        prec(2, seq($._num_or_equal_operator, $.number,)),
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
    number: _ => token.immediate(/\d+/),
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
  }
});
