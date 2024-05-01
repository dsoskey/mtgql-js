#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DASH = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_cmc = 4,
  anon_sym_mv = 5,
  anon_sym_manavalue = 6,
  sym_bool_operator = 7,
  sym_number_operator = 8,
  sym_equal_operator = 9,
  sym_number = 10,
  sym_odd_even = 11,
  sym_query = 12,
  sym__filter = 13,
  sym_unary_statement = 14,
  sym_bool_statement = 15,
  sym_parentheses = 16,
  sym__condition = 17,
  sym_cmc_condition = 18,
  sym_cmc_filter = 19,
  sym__num_or_equal_operator = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_cmc] = "cmc",
  [anon_sym_mv] = "mv",
  [anon_sym_manavalue] = "manavalue",
  [sym_bool_operator] = "bool_operator",
  [sym_number_operator] = "number_operator",
  [sym_equal_operator] = "equal_operator",
  [sym_number] = "number",
  [sym_odd_even] = "odd_even",
  [sym_query] = "query",
  [sym__filter] = "_filter",
  [sym_unary_statement] = "unary_statement",
  [sym_bool_statement] = "bool_statement",
  [sym_parentheses] = "parentheses",
  [sym__condition] = "_condition",
  [sym_cmc_condition] = "cmc_condition",
  [sym_cmc_filter] = "cmc_filter",
  [sym__num_or_equal_operator] = "_num_or_equal_operator",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_cmc] = anon_sym_cmc,
  [anon_sym_mv] = anon_sym_mv,
  [anon_sym_manavalue] = anon_sym_manavalue,
  [sym_bool_operator] = sym_bool_operator,
  [sym_number_operator] = sym_number_operator,
  [sym_equal_operator] = sym_equal_operator,
  [sym_number] = sym_number,
  [sym_odd_even] = sym_odd_even,
  [sym_query] = sym_query,
  [sym__filter] = sym__filter,
  [sym_unary_statement] = sym_unary_statement,
  [sym_bool_statement] = sym_bool_statement,
  [sym_parentheses] = sym_parentheses,
  [sym__condition] = sym__condition,
  [sym_cmc_condition] = sym_cmc_condition,
  [sym_cmc_filter] = sym_cmc_filter,
  [sym__num_or_equal_operator] = sym__num_or_equal_operator,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_manavalue] = {
    .visible = true,
    .named = false,
  },
  [sym_bool_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_number_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_equal_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_odd_even] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym__filter] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parentheses] = {
    .visible = true,
    .named = true,
  },
  [sym__condition] = {
    .visible = false,
    .named = true,
  },
  [sym_cmc_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_cmc_filter] = {
    .visible = true,
    .named = true,
  },
  [sym__num_or_equal_operator] = {
    .visible = false,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      ADVANCE_MAP(
        '!', 2,
        '(', 25,
        ')', 26,
        '-', 24,
        '<', 34,
        '>', 33,
        'c', 13,
        'e', 19,
        'm', 3,
        'o', 9,
        ':', 35,
        '=', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'v') ADVANCE(4);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == ')') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(21);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_cmc);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_mv);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_manavalue);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_bool_operator);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_bool_operator);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number_operator);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number_operator);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number_operator);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_equal_operator);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_odd_even);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_cmc] = ACTIONS(1),
    [anon_sym_mv] = ACTIONS(1),
    [anon_sym_manavalue] = ACTIONS(1),
    [sym_number_operator] = ACTIONS(1),
    [sym_equal_operator] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_odd_even] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(16),
    [sym__filter] = STATE(13),
    [sym_unary_statement] = STATE(13),
    [sym_bool_statement] = STATE(13),
    [sym_parentheses] = STATE(5),
    [sym__condition] = STATE(5),
    [sym_cmc_condition] = STATE(5),
    [sym_cmc_filter] = STATE(6),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_cmc] = ACTIONS(7),
    [anon_sym_mv] = ACTIONS(7),
    [anon_sym_manavalue] = ACTIONS(7),
  },
  [2] = {
    [sym__filter] = STATE(14),
    [sym_unary_statement] = STATE(14),
    [sym_bool_statement] = STATE(14),
    [sym_parentheses] = STATE(5),
    [sym__condition] = STATE(5),
    [sym_cmc_condition] = STATE(5),
    [sym_cmc_filter] = STATE(6),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_cmc] = ACTIONS(7),
    [anon_sym_mv] = ACTIONS(7),
    [anon_sym_manavalue] = ACTIONS(7),
  },
  [3] = {
    [sym__filter] = STATE(9),
    [sym_unary_statement] = STATE(9),
    [sym_bool_statement] = STATE(9),
    [sym_parentheses] = STATE(5),
    [sym__condition] = STATE(5),
    [sym_cmc_condition] = STATE(5),
    [sym_cmc_filter] = STATE(6),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_cmc] = ACTIONS(7),
    [anon_sym_mv] = ACTIONS(7),
    [anon_sym_manavalue] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_cmc_filter,
    ACTIONS(7), 3,
      anon_sym_cmc,
      anon_sym_mv,
      anon_sym_manavalue,
    STATE(7), 3,
      sym_parentheses,
      sym__condition,
      sym_cmc_condition,
  [17] = 2,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [25] = 3,
    ACTIONS(13), 1,
      sym_number_operator,
    ACTIONS(15), 1,
      sym_equal_operator,
    STATE(17), 1,
      sym__num_or_equal_operator,
  [35] = 2,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [43] = 2,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [51] = 2,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [59] = 2,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [67] = 2,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [75] = 1,
    ACTIONS(33), 2,
      sym_number_operator,
      sym_equal_operator,
  [80] = 2,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_bool_operator,
  [87] = 2,
    ACTIONS(37), 1,
      sym_bool_operator,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
  [94] = 2,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      sym_odd_even,
  [101] = 1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [105] = 1,
    ACTIONS(47), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 17,
  [SMALL_STATE(6)] = 25,
  [SMALL_STATE(7)] = 35,
  [SMALL_STATE(8)] = 43,
  [SMALL_STATE(9)] = 51,
  [SMALL_STATE(10)] = 59,
  [SMALL_STATE(11)] = 67,
  [SMALL_STATE(12)] = 75,
  [SMALL_STATE(13)] = 80,
  [SMALL_STATE(14)] = 87,
  [SMALL_STATE(15)] = 94,
  [SMALL_STATE(16)] = 101,
  [SMALL_STATE(17)] = 105,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_statement, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_statement, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_statement, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_statement, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses, 3, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_statement, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_statement, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmc_condition, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmc_condition, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmc_filter, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__num_or_equal_operator, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mtgql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
