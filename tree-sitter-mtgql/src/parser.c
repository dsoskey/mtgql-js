#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_no_quote_string = 1,
  anon_sym_DASH = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_c = 5,
  anon_sym_color = 6,
  anon_sym_id = 7,
  anon_sym_ci = 8,
  anon_sym_commander = 9,
  anon_sym_identity = 10,
  anon_sym_mana = 11,
  anon_sym_m = 12,
  anon_sym_cmc = 13,
  anon_sym_mv = 14,
  anon_sym_manavalue = 15,
  anon_sym_BANG = 16,
  anon_sym_name = 17,
  anon_sym_n = 18,
  sym_bool_operator = 19,
  sym_number_operator = 20,
  sym_equal_operator = 21,
  sym_positive_float = 22,
  sym_natural_number = 23,
  sym_odd_even = 24,
  sym_single_quote_string = 25,
  sym_double_quote_string = 26,
  sym_regex = 27,
  sym_color_combination = 28,
  sym_color_count = 29,
  aux_sym_mana_cost_token1 = 30,
  sym_mana_symbol = 31,
  sym_query = 32,
  sym__filter = 33,
  sym_unary_statement = 34,
  sym_bool_statement = 35,
  sym_parentheses = 36,
  sym__condition = 37,
  sym_color_condition = 38,
  sym_color_filter = 39,
  sym_color_identity_condition = 40,
  sym_identity_filter = 41,
  sym_mana_condition = 42,
  sym_mana_filter = 43,
  sym_cmc_condition = 44,
  sym_cmc_filter = 45,
  sym_exact_name_condition = 46,
  sym_name_condition = 47,
  sym_name_filter = 48,
  sym__num_or_equal_operator = 49,
  sym__number = 50,
  sym__stringish_value = 51,
  sym_mana_cost = 52,
  aux_sym_mana_cost_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_no_quote_string] = "no_quote_string",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_c] = "c",
  [anon_sym_color] = "color",
  [anon_sym_id] = "id",
  [anon_sym_ci] = "ci",
  [anon_sym_commander] = "commander",
  [anon_sym_identity] = "identity",
  [anon_sym_mana] = "mana",
  [anon_sym_m] = "m",
  [anon_sym_cmc] = "cmc",
  [anon_sym_mv] = "mv",
  [anon_sym_manavalue] = "manavalue",
  [anon_sym_BANG] = "!",
  [anon_sym_name] = "name",
  [anon_sym_n] = "n",
  [sym_bool_operator] = "bool_operator",
  [sym_number_operator] = "number_operator",
  [sym_equal_operator] = "equal_operator",
  [sym_positive_float] = "positive_float",
  [sym_natural_number] = "natural_number",
  [sym_odd_even] = "odd_even",
  [sym_single_quote_string] = "single_quote_string",
  [sym_double_quote_string] = "double_quote_string",
  [sym_regex] = "regex",
  [sym_color_combination] = "color_combination",
  [sym_color_count] = "color_count",
  [aux_sym_mana_cost_token1] = "mana_cost_token1",
  [sym_mana_symbol] = "mana_symbol",
  [sym_query] = "query",
  [sym__filter] = "_filter",
  [sym_unary_statement] = "unary_statement",
  [sym_bool_statement] = "bool_statement",
  [sym_parentheses] = "parentheses",
  [sym__condition] = "_condition",
  [sym_color_condition] = "color_condition",
  [sym_color_filter] = "color_filter",
  [sym_color_identity_condition] = "color_identity_condition",
  [sym_identity_filter] = "identity_filter",
  [sym_mana_condition] = "mana_condition",
  [sym_mana_filter] = "mana_filter",
  [sym_cmc_condition] = "cmc_condition",
  [sym_cmc_filter] = "cmc_filter",
  [sym_exact_name_condition] = "exact_name_condition",
  [sym_name_condition] = "name_condition",
  [sym_name_filter] = "name_filter",
  [sym__num_or_equal_operator] = "_num_or_equal_operator",
  [sym__number] = "_number",
  [sym__stringish_value] = "_stringish_value",
  [sym_mana_cost] = "mana_cost",
  [aux_sym_mana_cost_repeat1] = "mana_cost_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_no_quote_string] = sym_no_quote_string,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_color] = anon_sym_color,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_ci] = anon_sym_ci,
  [anon_sym_commander] = anon_sym_commander,
  [anon_sym_identity] = anon_sym_identity,
  [anon_sym_mana] = anon_sym_mana,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_cmc] = anon_sym_cmc,
  [anon_sym_mv] = anon_sym_mv,
  [anon_sym_manavalue] = anon_sym_manavalue,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_n] = anon_sym_n,
  [sym_bool_operator] = sym_bool_operator,
  [sym_number_operator] = sym_number_operator,
  [sym_equal_operator] = sym_equal_operator,
  [sym_positive_float] = sym_positive_float,
  [sym_natural_number] = sym_natural_number,
  [sym_odd_even] = sym_odd_even,
  [sym_single_quote_string] = sym_single_quote_string,
  [sym_double_quote_string] = sym_double_quote_string,
  [sym_regex] = sym_regex,
  [sym_color_combination] = sym_color_combination,
  [sym_color_count] = sym_color_count,
  [aux_sym_mana_cost_token1] = aux_sym_mana_cost_token1,
  [sym_mana_symbol] = sym_mana_symbol,
  [sym_query] = sym_query,
  [sym__filter] = sym__filter,
  [sym_unary_statement] = sym_unary_statement,
  [sym_bool_statement] = sym_bool_statement,
  [sym_parentheses] = sym_parentheses,
  [sym__condition] = sym__condition,
  [sym_color_condition] = sym_color_condition,
  [sym_color_filter] = sym_color_filter,
  [sym_color_identity_condition] = sym_color_identity_condition,
  [sym_identity_filter] = sym_identity_filter,
  [sym_mana_condition] = sym_mana_condition,
  [sym_mana_filter] = sym_mana_filter,
  [sym_cmc_condition] = sym_cmc_condition,
  [sym_cmc_filter] = sym_cmc_filter,
  [sym_exact_name_condition] = sym_exact_name_condition,
  [sym_name_condition] = sym_name_condition,
  [sym_name_filter] = sym_name_filter,
  [sym__num_or_equal_operator] = sym__num_or_equal_operator,
  [sym__number] = sym__number,
  [sym__stringish_value] = sym__stringish_value,
  [sym_mana_cost] = sym_mana_cost,
  [aux_sym_mana_cost_repeat1] = aux_sym_mana_cost_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_no_quote_string] = {
    .visible = true,
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
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ci] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commander] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_identity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mana] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
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
  [sym_positive_float] = {
    .visible = true,
    .named = true,
  },
  [sym_natural_number] = {
    .visible = true,
    .named = true,
  },
  [sym_odd_even] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_color_combination] = {
    .visible = true,
    .named = true,
  },
  [sym_color_count] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_mana_cost_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_mana_symbol] = {
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
  [sym_color_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_color_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_color_identity_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_identity_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_mana_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_mana_filter] = {
    .visible = true,
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
  [sym_exact_name_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_name_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_name_filter] = {
    .visible = true,
    .named = true,
  },
  [sym__num_or_equal_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__stringish_value] = {
    .visible = false,
    .named = true,
  },
  [sym_mana_cost] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_mana_cost_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_exact_match = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_exact_match] = "exact_match",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_exact_match, 0},
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static TSCharacterRange aux_sym_mana_cost_token1_character_set_1[] = {
  {'0', '9'}, {'B', 'C'}, {'G', 'G'}, {'R', 'S'}, {'U', 'U'}, {'W', 'Z'}, {'b', 'c'}, {'g', 'g'},
  {'r', 's'}, {'u', 'u'}, {'w', 'z'},
};

static TSCharacterRange sym_mana_symbol_character_set_2[] = {
  {'2', '2'}, {'B', 'C'}, {'G', 'G'}, {'P', 'P'}, {'R', 'S'}, {'U', 'U'}, {'W', 'W'}, {'b', 'c'},
  {'g', 'g'}, {'p', 'p'}, {'r', 's'}, {'u', 'u'}, {'w', 'w'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(237);
      ADVANCE_MAP(
        '!', 267,
        '"', 4,
        '\'', 5,
        '(', 239,
        ')', 240,
        '-', 238,
        '/', 7,
        '<', 277,
        '>', 276,
        'C', 500,
        'a', 301,
        'b', 286,
        'c', 241,
        'd', 325,
        'e', 447,
        'f', 360,
        'g', 409,
        'i', 314,
        'j', 322,
        'k', 329,
        'l', 412,
        'm', 257,
        'n', 270,
        'o', 302,
        'p', 433,
        'q', 475,
        'r', 287,
        's', 292,
        't', 326,
        'w', 354,
        'z', 290,
        '{', 11,
        ':', 278,
        '=', 278,
      );
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (lookahead == 'B' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'u') ADVANCE(499);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(500);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(236);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(273);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 266,
        '"', 4,
        '\'', 5,
        '(', 239,
        '-', 238,
        '/', 7,
        'c', 242,
        'i', 315,
        'm', 259,
        'n', 272,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(266);
      if (lookahead == '(') ADVANCE(239);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(271);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(503);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '{') ADVANCE(11);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(520);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(504);
      if (lookahead == '\\') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == '}') ADVANCE(521);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == '}') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '}') ADVANCE(521);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(9);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (set_contains(sym_mana_symbol_character_set_2, 13, lookahead)) ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(275);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        'C', 505,
        'a', 31,
        'b', 508,
        'c', 506,
        'd', 58,
        'e', 177,
        'f', 105,
        'g', 512,
        'i', 136,
        'j', 57,
        'k', 75,
        'l', 144,
        'm', 18,
        'n', 20,
        'o', 32,
        'p', 162,
        'q', 209,
        'r', 507,
        's', 21,
        't', 59,
        'w', 510,
        'z', 24,
        'B', 517,
        'G', 517,
        'R', 517,
        'U', 517,
        'W', 517,
        'u', 517,
      );
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(519);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == 'z') ADVANCE(147);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(505);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(505);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(505);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'k') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 106:
      if (lookahead == 'k') ADVANCE(505);
      END_STATE();
    case 107:
      if (lookahead == 'k') ADVANCE(27);
      END_STATE();
    case 108:
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(505);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(505);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'z') ADVANCE(224);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 155:
      if (lookahead == 'q') ADVANCE(208);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(505);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(505);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 211:
      if (lookahead == 'v') ADVANCE(505);
      END_STATE();
    case 212:
      if (lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 213:
      if (lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 214:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 215:
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 216:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 217:
      if (lookahead == 'w') ADVANCE(505);
      END_STATE();
    case 218:
      if (lookahead == 'w') ADVANCE(191);
      END_STATE();
    case 219:
      if (lookahead == 'x') ADVANCE(505);
      END_STATE();
    case 220:
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 221:
      if (lookahead == 'y') ADVANCE(253);
      END_STATE();
    case 222:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 223:
      if (lookahead == 'z') ADVANCE(84);
      END_STATE();
    case 224:
      if (lookahead == 'z') ADVANCE(63);
      END_STATE();
    case 225:
      if (lookahead == 'z') ADVANCE(28);
      END_STATE();
    case 226:
      if (lookahead == '}') ADVANCE(521);
      END_STATE();
    case 227:
      if (lookahead == '}') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(4);
      END_STATE();
    case 229:
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(5);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 231:
      ADVANCE_MAP(
        '2', 226,
        'B', 226,
        'C', 226,
        'G', 226,
        'P', 226,
        'R', 226,
        'S', 226,
        'U', 226,
        'W', 226,
        'b', 226,
        'c', 226,
        'g', 226,
        'p', 226,
        'r', 226,
        's', 226,
        'u', 226,
        'w', 226,
      );
      END_STATE();
    case 232:
      ADVANCE_MAP(
        '2', 10,
        'B', 10,
        'C', 10,
        'G', 10,
        'P', 10,
        'R', 10,
        'S', 10,
        'U', 10,
        'W', 10,
        'b', 10,
        'c', 10,
        'g', 10,
        'p', 10,
        'r', 10,
        's', 10,
        'u', 10,
        'w', 10,
      );
      END_STATE();
    case 233:
      if (lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 234:
      if (eof) ADVANCE(237);
      ADVANCE_MAP(
        ' ', 274,
        '!', 12,
        '"', 4,
        '\'', 5,
        ')', 240,
        '/', 7,
        '<', 277,
        '>', 276,
        '{', 11,
        ':', 278,
        '=', 278,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 235:
      if (eof) ADVANCE(237);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == ')') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(235);
      END_STATE();
    case 236:
      if (eof) ADVANCE(237);
      ADVANCE_MAP(
        '!', 266,
        '(', 239,
        ')', 240,
        '-', 238,
        'c', 243,
        'i', 43,
        'm', 258,
        'n', 271,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'm') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(389);
      if (lookahead == '-' ||
          lookahead == 'A' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          ('H' <= lookahead && lookahead <= 'Q') ||
          lookahead == 'T' ||
          lookahead == 'V' ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          ('j' <= lookahead && lookahead <= 'q') ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'm') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_ci);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ci);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_commander);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_commander);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_identity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_mana);
      if (lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_mana);
      if (lookahead == 'v') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'v') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'v') ADVANCE(262);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'v') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_cmc);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_cmc);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_mv);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_mv);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_manavalue);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_manavalue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(275);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_bool_operator);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_bool_operator);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number_operator);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number_operator);
      if (lookahead == '=') ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number_operator);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(275);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_equal_operator);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_positive_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_natural_number);
      if (lookahead == '.') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_natural_number);
      if (lookahead == '.') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_odd_even);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_odd_even);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'a', 405,
        'l', 291,
        'o', 434,
        'r', 410,
        'B', 498,
        'G', 498,
        'R', 498,
        'U', 498,
        'W', 498,
        'b', 498,
        'g', 498,
        'u', 498,
        'w', 498,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'a', 363,
        'e', 313,
        'i', 485,
        'B', 498,
        'G', 498,
        'R', 498,
        'U', 498,
        'W', 498,
        'b', 498,
        'g', 498,
        'r', 498,
        'u', 498,
        'w', 498,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(348);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(388);
      if (lookahead == 'u') ADVANCE(384);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(494);
      if (lookahead == 'g') ADVANCE(350);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead == 'z') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(501);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(449);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 'z') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(501);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == 'u') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'e', 330,
        'i', 490,
        'o', 488,
        'u', 474,
        'B', 497,
        'G', 497,
        'R', 497,
        'U', 497,
        'W', 497,
        'b', 497,
        'g', 497,
        'r', 497,
        'w', 497,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'h', 373,
        'i', 460,
        'B', 498,
        'G', 498,
        'R', 498,
        'U', 498,
        'W', 498,
        'b', 498,
        'g', 498,
        'r', 498,
        'u', 498,
        'w', 498,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(402);
      if (lookahead == 'k') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'k') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'k') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'k') ADVANCE(336);
      if (lookahead == 'w') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'l', 501,
        'B', 500,
        'G', 500,
        'R', 500,
        'U', 500,
        'W', 500,
        'b', 500,
        'g', 500,
        'r', 500,
        'u', 500,
        'w', 500,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(467);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead == 'm') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(419);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(423);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(323);
      if (lookahead == 'y') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'o', 382,
        'r', 344,
        'B', 498,
        'G', 498,
        'R', 498,
        'U', 498,
        'W', 498,
        'b', 498,
        'g', 498,
        'u', 498,
        'w', 498,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'o', 378,
        'B', 497,
        'G', 497,
        'R', 497,
        'U', 497,
        'W', 497,
        'b', 497,
        'g', 497,
        'r', 497,
        'u', 497,
        'w', 497,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'p') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'q') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(425);
      if (lookahead == 'v') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'u', 379,
        'B', 496,
        'G', 496,
        'R', 496,
        'U', 496,
        'W', 496,
        'b', 496,
        'g', 496,
        'r', 496,
        'w', 496,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'w') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'w') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'x') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'x') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'z') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(501);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'z') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(501);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'z') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(501);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'B', 500,
        'G', 500,
        'R', 500,
        'U', 500,
        'W', 500,
        'b', 500,
        'g', 500,
        'r', 500,
        'u', 500,
        'w', 500,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'B', 496,
        'G', 496,
        'R', 496,
        'U', 496,
        'W', 496,
        'b', 496,
        'g', 496,
        'r', 496,
        'u', 496,
        'w', 496,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'B', 497,
        'G', 497,
        'R', 497,
        'U', 497,
        'W', 497,
        'b', 497,
        'g', 497,
        'r', 497,
        'u', 497,
        'w', 497,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'B', 498,
        'G', 498,
        'R', 498,
        'U', 498,
        'W', 498,
        'b', 498,
        'g', 498,
        'r', 498,
        'u', 498,
        'w', 498,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(500);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(501);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_single_quote_string);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_double_quote_string);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_color_combination);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_color_combination);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'a', 101,
        'e', 46,
        'i', 215,
        'B', 516,
        'G', 516,
        'R', 516,
        'U', 516,
        'W', 516,
        'b', 516,
        'g', 516,
        'r', 516,
        'u', 516,
        'w', 516,
      );
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'a', 137,
        'l', 22,
        'o', 161,
        'r', 511,
        'B', 516,
        'G', 516,
        'R', 516,
        'U', 516,
        'W', 516,
        'b', 516,
        'g', 516,
        'u', 516,
        'w', 516,
      );
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'e', 66,
        'i', 220,
        'o', 218,
        'u', 513,
        'B', 515,
        'G', 515,
        'R', 515,
        'U', 515,
        'W', 515,
        'b', 515,
        'g', 515,
        'r', 515,
        'w', 515,
      );
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'h', 98,
        'i', 190,
        'B', 516,
        'G', 516,
        'R', 516,
        'U', 516,
        'W', 516,
        'b', 516,
        'g', 516,
        'r', 516,
        'u', 516,
        'w', 516,
      );
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'o', 108,
        'B', 515,
        'G', 515,
        'R', 515,
        'U', 515,
        'W', 515,
        'b', 515,
        'g', 515,
        'r', 515,
        'u', 515,
        'w', 515,
      );
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'o', 117,
        'r', 509,
        'B', 516,
        'G', 516,
        'R', 516,
        'U', 516,
        'W', 516,
        'b', 516,
        'g', 516,
        'u', 516,
        'w', 516,
      );
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'u', 518,
        'B', 514,
        'G', 514,
        'R', 514,
        'U', 514,
        'W', 514,
        'b', 514,
        'g', 514,
        'r', 514,
        'w', 514,
      );
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'B', 505,
        'G', 505,
        'R', 505,
        'U', 505,
        'W', 505,
        'b', 505,
        'g', 505,
        'r', 505,
        'u', 505,
        'w', 505,
      );
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'B', 514,
        'G', 514,
        'R', 514,
        'U', 514,
        'W', 514,
        'b', 514,
        'g', 514,
        'r', 514,
        'u', 514,
        'w', 514,
      );
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'B', 515,
        'G', 515,
        'R', 515,
        'U', 515,
        'W', 515,
        'b', 515,
        'g', 515,
        'r', 515,
        'u', 515,
        'w', 515,
      );
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'B', 516,
        'G', 516,
        'R', 516,
        'U', 516,
        'W', 516,
        'b', 516,
        'g', 516,
        'r', 516,
        'u', 516,
        'w', 516,
      );
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'B', 505,
        'G', 505,
        'R', 505,
        'U', 505,
        'W', 505,
        'b', 505,
        'g', 505,
        'l', 505,
        'r', 505,
        'u', 505,
        'w', 505,
      );
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_color_count);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_mana_symbol);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 234},
  [6] = {.lex_state = 234},
  [7] = {.lex_state = 234},
  [8] = {.lex_state = 234},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 234},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 234},
  [13] = {.lex_state = 234},
  [14] = {.lex_state = 234},
  [15] = {.lex_state = 234},
  [16] = {.lex_state = 234},
  [17] = {.lex_state = 234},
  [18] = {.lex_state = 234},
  [19] = {.lex_state = 234},
  [20] = {.lex_state = 234},
  [21] = {.lex_state = 234},
  [22] = {.lex_state = 234},
  [23] = {.lex_state = 234},
  [24] = {.lex_state = 234},
  [25] = {.lex_state = 234},
  [26] = {.lex_state = 234},
  [27] = {.lex_state = 234},
  [28] = {.lex_state = 234},
  [29] = {.lex_state = 54},
  [30] = {.lex_state = 54},
  [31] = {.lex_state = 234},
  [32] = {.lex_state = 234},
  [33] = {.lex_state = 234},
  [34] = {.lex_state = 234},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 234},
  [38] = {.lex_state = 234},
  [39] = {.lex_state = 234},
  [40] = {.lex_state = 234},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_no_quote_string] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_ci] = ACTIONS(1),
    [anon_sym_commander] = ACTIONS(1),
    [anon_sym_identity] = ACTIONS(1),
    [anon_sym_mana] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_cmc] = ACTIONS(1),
    [anon_sym_mv] = ACTIONS(1),
    [anon_sym_manavalue] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [sym_number_operator] = ACTIONS(1),
    [sym_equal_operator] = ACTIONS(1),
    [sym_positive_float] = ACTIONS(1),
    [sym_natural_number] = ACTIONS(1),
    [sym_odd_even] = ACTIONS(1),
    [sym_single_quote_string] = ACTIONS(1),
    [sym_double_quote_string] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [sym_color_combination] = ACTIONS(1),
    [sym_color_count] = ACTIONS(1),
    [aux_sym_mana_cost_token1] = ACTIONS(1),
    [sym_mana_symbol] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(42),
    [sym__filter] = STATE(39),
    [sym_unary_statement] = STATE(39),
    [sym_bool_statement] = STATE(39),
    [sym_parentheses] = STATE(13),
    [sym__condition] = STATE(13),
    [sym_color_condition] = STATE(13),
    [sym_color_filter] = STATE(14),
    [sym_color_identity_condition] = STATE(13),
    [sym_identity_filter] = STATE(15),
    [sym_mana_condition] = STATE(13),
    [sym_mana_filter] = STATE(16),
    [sym_cmc_condition] = STATE(13),
    [sym_cmc_filter] = STATE(17),
    [sym_exact_name_condition] = STATE(13),
    [sym_name_condition] = STATE(13),
    [sym_name_filter] = STATE(45),
    [sym__stringish_value] = STATE(19),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_color] = ACTIONS(9),
    [anon_sym_id] = ACTIONS(11),
    [anon_sym_ci] = ACTIONS(11),
    [anon_sym_commander] = ACTIONS(11),
    [anon_sym_identity] = ACTIONS(11),
    [anon_sym_mana] = ACTIONS(13),
    [anon_sym_m] = ACTIONS(13),
    [anon_sym_cmc] = ACTIONS(15),
    [anon_sym_mv] = ACTIONS(15),
    [anon_sym_manavalue] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_n] = ACTIONS(19),
    [sym_single_quote_string] = ACTIONS(21),
    [sym_double_quote_string] = ACTIONS(21),
    [sym_regex] = ACTIONS(21),
  },
  [2] = {
    [sym__filter] = STATE(10),
    [sym_unary_statement] = STATE(10),
    [sym_bool_statement] = STATE(10),
    [sym_parentheses] = STATE(13),
    [sym__condition] = STATE(13),
    [sym_color_condition] = STATE(13),
    [sym_color_filter] = STATE(14),
    [sym_color_identity_condition] = STATE(13),
    [sym_identity_filter] = STATE(15),
    [sym_mana_condition] = STATE(13),
    [sym_mana_filter] = STATE(16),
    [sym_cmc_condition] = STATE(13),
    [sym_cmc_filter] = STATE(17),
    [sym_exact_name_condition] = STATE(13),
    [sym_name_condition] = STATE(13),
    [sym_name_filter] = STATE(45),
    [sym__stringish_value] = STATE(19),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_color] = ACTIONS(9),
    [anon_sym_id] = ACTIONS(11),
    [anon_sym_ci] = ACTIONS(11),
    [anon_sym_commander] = ACTIONS(11),
    [anon_sym_identity] = ACTIONS(11),
    [anon_sym_mana] = ACTIONS(13),
    [anon_sym_m] = ACTIONS(13),
    [anon_sym_cmc] = ACTIONS(15),
    [anon_sym_mv] = ACTIONS(15),
    [anon_sym_manavalue] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_n] = ACTIONS(19),
    [sym_single_quote_string] = ACTIONS(21),
    [sym_double_quote_string] = ACTIONS(21),
    [sym_regex] = ACTIONS(21),
  },
  [3] = {
    [sym__filter] = STATE(38),
    [sym_unary_statement] = STATE(38),
    [sym_bool_statement] = STATE(38),
    [sym_parentheses] = STATE(13),
    [sym__condition] = STATE(13),
    [sym_color_condition] = STATE(13),
    [sym_color_filter] = STATE(14),
    [sym_color_identity_condition] = STATE(13),
    [sym_identity_filter] = STATE(15),
    [sym_mana_condition] = STATE(13),
    [sym_mana_filter] = STATE(16),
    [sym_cmc_condition] = STATE(13),
    [sym_cmc_filter] = STATE(17),
    [sym_exact_name_condition] = STATE(13),
    [sym_name_condition] = STATE(13),
    [sym_name_filter] = STATE(45),
    [sym__stringish_value] = STATE(19),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_color] = ACTIONS(9),
    [anon_sym_id] = ACTIONS(11),
    [anon_sym_ci] = ACTIONS(11),
    [anon_sym_commander] = ACTIONS(11),
    [anon_sym_identity] = ACTIONS(11),
    [anon_sym_mana] = ACTIONS(13),
    [anon_sym_m] = ACTIONS(13),
    [anon_sym_cmc] = ACTIONS(15),
    [anon_sym_mv] = ACTIONS(15),
    [anon_sym_manavalue] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_n] = ACTIONS(19),
    [sym_single_quote_string] = ACTIONS(21),
    [sym_double_quote_string] = ACTIONS(21),
    [sym_regex] = ACTIONS(21),
  },
  [4] = {
    [sym_parentheses] = STATE(20),
    [sym__condition] = STATE(20),
    [sym_color_condition] = STATE(20),
    [sym_color_filter] = STATE(14),
    [sym_color_identity_condition] = STATE(20),
    [sym_identity_filter] = STATE(15),
    [sym_mana_condition] = STATE(20),
    [sym_mana_filter] = STATE(16),
    [sym_cmc_condition] = STATE(20),
    [sym_cmc_filter] = STATE(17),
    [sym_exact_name_condition] = STATE(20),
    [sym_name_condition] = STATE(20),
    [sym_name_filter] = STATE(45),
    [sym__stringish_value] = STATE(19),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_color] = ACTIONS(9),
    [anon_sym_id] = ACTIONS(11),
    [anon_sym_ci] = ACTIONS(11),
    [anon_sym_commander] = ACTIONS(11),
    [anon_sym_identity] = ACTIONS(11),
    [anon_sym_mana] = ACTIONS(13),
    [anon_sym_m] = ACTIONS(13),
    [anon_sym_cmc] = ACTIONS(15),
    [anon_sym_mv] = ACTIONS(15),
    [anon_sym_manavalue] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_n] = ACTIONS(19),
    [sym_single_quote_string] = ACTIONS(21),
    [sym_double_quote_string] = ACTIONS(21),
    [sym_regex] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 1,
      sym_mana_symbol,
    STATE(5), 1,
      aux_sym_mana_cost_repeat1,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [14] = 4,
    ACTIONS(32), 1,
      anon_sym_RPAREN,
    ACTIONS(34), 1,
      sym_mana_symbol,
    STATE(5), 1,
      aux_sym_mana_cost_repeat1,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [28] = 2,
    STATE(12), 1,
      sym__stringish_value,
    ACTIONS(36), 4,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [38] = 2,
    STATE(22), 1,
      sym__stringish_value,
    ACTIONS(38), 4,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [48] = 4,
    ACTIONS(40), 1,
      aux_sym_mana_cost_token1,
    ACTIONS(42), 1,
      sym_mana_symbol,
    STATE(6), 1,
      aux_sym_mana_cost_repeat1,
    STATE(23), 1,
      sym_mana_cost,
  [61] = 2,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [69] = 2,
    ACTIONS(48), 1,
      sym_regex,
    ACTIONS(50), 2,
      aux_sym_mana_cost_token1,
      sym_mana_symbol,
  [77] = 2,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [85] = 2,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [93] = 3,
    ACTIONS(60), 1,
      sym_number_operator,
    ACTIONS(62), 1,
      sym_equal_operator,
    STATE(44), 1,
      sym__num_or_equal_operator,
  [103] = 3,
    ACTIONS(64), 1,
      sym_number_operator,
    ACTIONS(66), 1,
      sym_equal_operator,
    STATE(43), 1,
      sym__num_or_equal_operator,
  [113] = 3,
    ACTIONS(68), 1,
      sym_number_operator,
    ACTIONS(70), 1,
      sym_equal_operator,
    STATE(9), 1,
      sym__num_or_equal_operator,
  [123] = 3,
    ACTIONS(72), 1,
      sym_number_operator,
    ACTIONS(74), 1,
      sym_equal_operator,
    STATE(30), 1,
      sym__num_or_equal_operator,
  [133] = 2,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [141] = 2,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [149] = 2,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [157] = 2,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [165] = 2,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [173] = 2,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [181] = 2,
    ACTIONS(32), 1,
      anon_sym_RPAREN,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [189] = 2,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [197] = 2,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [205] = 2,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [213] = 2,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [221] = 3,
    ACTIONS(50), 1,
      sym_positive_float,
    ACTIONS(104), 1,
      sym_natural_number,
    ACTIONS(106), 1,
      sym_odd_even,
  [231] = 3,
    ACTIONS(108), 1,
      sym_positive_float,
    ACTIONS(110), 1,
      sym_natural_number,
    STATE(18), 1,
      sym__number,
  [241] = 2,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [249] = 2,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [257] = 1,
    ACTIONS(116), 2,
      sym_number_operator,
      sym_equal_operator,
  [262] = 1,
    ACTIONS(118), 2,
      sym_number_operator,
      sym_equal_operator,
  [267] = 2,
    ACTIONS(50), 1,
      sym_color_count,
    ACTIONS(120), 1,
      sym_color_combination,
  [274] = 2,
    ACTIONS(50), 1,
      sym_color_count,
    ACTIONS(122), 1,
      sym_color_combination,
  [281] = 1,
    ACTIONS(124), 2,
      sym_number_operator,
      sym_equal_operator,
  [286] = 2,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    ACTIONS(128), 1,
      sym_bool_operator,
  [293] = 2,
    ACTIONS(128), 1,
      sym_bool_operator,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [300] = 1,
    ACTIONS(132), 2,
      sym_number_operator,
      sym_equal_operator,
  [305] = 1,
    ACTIONS(134), 1,
      sym_equal_operator,
  [309] = 1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
  [313] = 1,
    ACTIONS(138), 1,
      sym_color_count,
  [317] = 1,
    ACTIONS(140), 1,
      sym_color_count,
  [321] = 1,
    ACTIONS(142), 1,
      sym_equal_operator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 14,
  [SMALL_STATE(7)] = 28,
  [SMALL_STATE(8)] = 38,
  [SMALL_STATE(9)] = 48,
  [SMALL_STATE(10)] = 61,
  [SMALL_STATE(11)] = 69,
  [SMALL_STATE(12)] = 77,
  [SMALL_STATE(13)] = 85,
  [SMALL_STATE(14)] = 93,
  [SMALL_STATE(15)] = 103,
  [SMALL_STATE(16)] = 113,
  [SMALL_STATE(17)] = 123,
  [SMALL_STATE(18)] = 133,
  [SMALL_STATE(19)] = 141,
  [SMALL_STATE(20)] = 149,
  [SMALL_STATE(21)] = 157,
  [SMALL_STATE(22)] = 165,
  [SMALL_STATE(23)] = 173,
  [SMALL_STATE(24)] = 181,
  [SMALL_STATE(25)] = 189,
  [SMALL_STATE(26)] = 197,
  [SMALL_STATE(27)] = 205,
  [SMALL_STATE(28)] = 213,
  [SMALL_STATE(29)] = 221,
  [SMALL_STATE(30)] = 231,
  [SMALL_STATE(31)] = 241,
  [SMALL_STATE(32)] = 249,
  [SMALL_STATE(33)] = 257,
  [SMALL_STATE(34)] = 262,
  [SMALL_STATE(35)] = 267,
  [SMALL_STATE(36)] = 274,
  [SMALL_STATE(37)] = 281,
  [SMALL_STATE(38)] = 286,
  [SMALL_STATE(39)] = 293,
  [SMALL_STATE(40)] = 300,
  [SMALL_STATE(41)] = 305,
  [SMALL_STATE(42)] = 309,
  [SMALL_STATE(43)] = 313,
  [SMALL_STATE(44)] = 317,
  [SMALL_STATE(45)] = 321,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mana_cost_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mana_cost_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mana_cost_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mana_cost, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mana_cost, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_statement, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_statement, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__num_or_equal_operator, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_condition, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_condition, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_statement, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_statement, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmc_condition, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmc_condition, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_name_condition, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact_name_condition, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_statement, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_statement, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_name_condition, 2, 0, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact_name_condition, 2, 0, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mana_condition, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mana_condition, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_identity_condition, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_identity_condition, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_condition, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_condition, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__num_or_equal_operator, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmc_filter, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_filter, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mana_filter, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_filter, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_filter, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_no_quote_string,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
