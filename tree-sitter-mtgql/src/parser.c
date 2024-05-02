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
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_no_quote_string = 1,
  anon_sym_DASH = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_c = 5,
  anon_sym_color = 6,
  sym_color_count = 7,
  anon_sym_cmc = 8,
  anon_sym_mv = 9,
  anon_sym_manavalue = 10,
  anon_sym_BANG = 11,
  anon_sym_name = 12,
  anon_sym_n = 13,
  sym_bool_operator = 14,
  sym_number_operator = 15,
  sym_equal_operator = 16,
  sym_positive_float = 17,
  sym_natural_number = 18,
  sym_odd_even = 19,
  sym_single_quote_string = 20,
  sym_double_quote_string = 21,
  sym_regex = 22,
  sym_color_combination = 23,
  sym_query = 24,
  sym__filter = 25,
  sym_unary_statement = 26,
  sym_bool_statement = 27,
  sym_parentheses = 28,
  sym__condition = 29,
  sym_color_condition = 30,
  sym_cmc_condition = 31,
  sym_cmc_filter = 32,
  sym_exact_name_condition = 33,
  sym_name_condition = 34,
  sym_name_filter = 35,
  sym__num_or_equal_operator = 36,
  sym__number = 37,
  sym__stringish_value = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_no_quote_string] = "no_quote_string",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_c] = "c",
  [anon_sym_color] = "color",
  [sym_color_count] = "color_count",
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
  [sym_query] = "query",
  [sym__filter] = "_filter",
  [sym_unary_statement] = "unary_statement",
  [sym_bool_statement] = "bool_statement",
  [sym_parentheses] = "parentheses",
  [sym__condition] = "_condition",
  [sym_color_condition] = "color_condition",
  [sym_cmc_condition] = "cmc_condition",
  [sym_cmc_filter] = "cmc_filter",
  [sym_exact_name_condition] = "exact_name_condition",
  [sym_name_condition] = "name_condition",
  [sym_name_filter] = "name_filter",
  [sym__num_or_equal_operator] = "_num_or_equal_operator",
  [sym__number] = "_number",
  [sym__stringish_value] = "_stringish_value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_no_quote_string] = sym_no_quote_string,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_color] = anon_sym_color,
  [sym_color_count] = sym_color_count,
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
  [sym_query] = sym_query,
  [sym__filter] = sym__filter,
  [sym_unary_statement] = sym_unary_statement,
  [sym_bool_statement] = sym_bool_statement,
  [sym_parentheses] = sym_parentheses,
  [sym__condition] = sym__condition,
  [sym_color_condition] = sym_color_condition,
  [sym_cmc_condition] = sym_cmc_condition,
  [sym_cmc_filter] = sym_cmc_filter,
  [sym_exact_name_condition] = sym_exact_name_condition,
  [sym_name_condition] = sym_name_condition,
  [sym_name_filter] = sym_name_filter,
  [sym__num_or_equal_operator] = sym__num_or_equal_operator,
  [sym__number] = sym__number,
  [sym__stringish_value] = sym__stringish_value,
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
  [sym_color_count] = {
    .visible = true,
    .named = true,
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
};

enum ts_field_identifiers {
  field_color_filter = 1,
  field_exact_match = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_color_filter] = "color_filter",
  [field_exact_match] = "exact_match",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_exact_match, 0},
  [1] =
    {field_color_filter, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(218);
      ADVANCE_MAP(
        '!', 237,
        '"', 4,
        '\'', 5,
        '(', 220,
        ')', 221,
        '-', 219,
        '/', 6,
        '<', 247,
        '>', 246,
        'C', 461,
        'a', 272,
        'b', 256,
        'c', 222,
        'd', 293,
        'e', 409,
        'f', 326,
        'g', 373,
        'i', 364,
        'j', 290,
        'k', 297,
        'l', 375,
        'm', 257,
        'n', 240,
        'o', 273,
        'p', 394,
        'q', 435,
        'r', 258,
        's', 262,
        't', 294,
        'w', 321,
        'z', 260,
        ':', 248,
        '=', 248,
      );
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (lookahead == 'B' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'u') ADVANCE(459);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(217);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(461);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(243);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 236,
        '"', 4,
        '\'', 5,
        '(', 220,
        '-', 219,
        '/', 6,
        'c', 223,
        'm', 266,
        'n', 242,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(236);
      if (lookahead == '(') ADVANCE(220);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(463);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(462);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(464);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        'C', 465,
        'a', 26,
        'b', 468,
        'c', 466,
        'd', 50,
        'e', 164,
        'f', 96,
        'g', 472,
        'i', 124,
        'j', 49,
        'k', 66,
        'l', 132,
        'm', 13,
        'n', 14,
        'o', 27,
        'p', 149,
        'q', 191,
        'r', 467,
        's', 22,
        't', 52,
        'w', 470,
        'z', 18,
        'B', 477,
        'G', 477,
        'R', 477,
        'U', 477,
        'W', 477,
        'u', 477,
      );
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(228);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'v') ADVANCE(232);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(209);
      if (lookahead == 'g') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 'z') ADVANCE(136);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(129);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(11);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(465);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(11);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'k') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 97:
      if (lookahead == 'k') ADVANCE(465);
      END_STATE();
    case 98:
      if (lookahead == 'k') ADVANCE(21);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(121);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(465);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 'z') ADVANCE(210);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 143:
      if (lookahead == 'q') ADVANCE(194);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(465);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(465);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 196:
      if (lookahead == 'v') ADVANCE(465);
      END_STATE();
    case 197:
      if (lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 198:
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 199:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 200:
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 201:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 202:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 203:
      if (lookahead == 'w') ADVANCE(465);
      END_STATE();
    case 204:
      if (lookahead == 'w') ADVANCE(176);
      END_STATE();
    case 205:
      if (lookahead == 'x') ADVANCE(465);
      END_STATE();
    case 206:
      if (lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 207:
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 208:
      if (lookahead == 'z') ADVANCE(76);
      END_STATE();
    case 209:
      if (lookahead == 'z') ADVANCE(19);
      END_STATE();
    case 210:
      if (lookahead == 'z') ADVANCE(55);
      END_STATE();
    case 211:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(4);
      END_STATE();
    case 212:
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(5);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 214:
      if (lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 215:
      if (eof) ADVANCE(218);
      ADVANCE_MAP(
        ' ', 244,
        '!', 7,
        '"', 4,
        '\'', 5,
        ')', 221,
        '/', 6,
        '<', 247,
        '>', 246,
        ':', 248,
        '=', 248,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 216:
      if (eof) ADVANCE(218);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == ')') ADVANCE(221);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(216);
      END_STATE();
    case 217:
      if (eof) ADVANCE(218);
      if (lookahead == '!') ADVANCE(236);
      if (lookahead == '(') ADVANCE(220);
      if (lookahead == ')') ADVANCE(221);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'h') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'm') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_color_count);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_color_count);
      if (lookahead == '.') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_cmc);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_cmc);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_mv);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_mv);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_manavalue);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_manavalue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_bool_operator);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_bool_operator);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number_operator);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number_operator);
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number_operator);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(245);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_equal_operator);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_positive_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_natural_number);
      if (lookahead == '.') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_natural_number);
      if (lookahead == '.') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_odd_even);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_odd_even);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'a', 370,
        'l', 261,
        'o', 395,
        'r', 372,
        'B', 458,
        'G', 458,
        'R', 458,
        'U', 458,
        'W', 458,
        'b', 458,
        'g', 458,
        'u', 458,
        'w', 458,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'v') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'a', 330,
        'e', 284,
        'i', 446,
        'B', 458,
        'G', 458,
        'R', 458,
        'U', 458,
        'W', 458,
        'b', 458,
        'g', 458,
        'r', 458,
        'u', 458,
        'w', 458,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(353);
      if (lookahead == 'u') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'v') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(454);
      if (lookahead == 'g') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(426);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(424);
      if (lookahead == 'z') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(461);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(412);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'e', 298,
        'i', 451,
        'o', 449,
        'u', 434,
        'B', 457,
        'G', 457,
        'R', 457,
        'U', 457,
        'W', 457,
        'b', 457,
        'g', 457,
        'r', 457,
        'w', 457,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'f') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'h', 339,
        'i', 422,
        'B', 458,
        'G', 458,
        'R', 458,
        'U', 458,
        'W', 458,
        'b', 458,
        'g', 458,
        'r', 458,
        'u', 458,
        'w', 458,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(367);
      if (lookahead == 'k') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'k') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'k') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'k') ADVANCE(304);
      if (lookahead == 'w') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(447);
      if (lookahead == 'm') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'y') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == 'z') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(461);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'o', 344,
        'B', 457,
        'G', 457,
        'R', 457,
        'U', 457,
        'W', 457,
        'b', 457,
        'g', 457,
        'r', 457,
        'u', 457,
        'w', 457,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'o', 347,
        'r', 311,
        'B', 458,
        'G', 458,
        'R', 458,
        'U', 458,
        'W', 458,
        'b', 458,
        'g', 458,
        'u', 458,
        'w', 458,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'q') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == 'v') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'u', 460,
        'B', 456,
        'G', 456,
        'R', 456,
        'U', 456,
        'W', 456,
        'b', 456,
        'g', 456,
        'r', 456,
        'w', 456,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'w') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'w') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'x') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'x') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'z') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(461);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'z') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(461);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'z') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(461);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'B', 461,
        'G', 461,
        'R', 461,
        'U', 461,
        'W', 461,
        'b', 461,
        'g', 461,
        'r', 461,
        'u', 461,
        'w', 461,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'B', 456,
        'G', 456,
        'R', 456,
        'U', 456,
        'W', 456,
        'b', 456,
        'g', 456,
        'r', 456,
        'u', 456,
        'w', 456,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'B', 457,
        'G', 457,
        'R', 457,
        'U', 457,
        'W', 457,
        'b', 457,
        'g', 457,
        'r', 457,
        'u', 457,
        'w', 457,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'B', 458,
        'G', 458,
        'R', 458,
        'U', 458,
        'W', 458,
        'b', 458,
        'g', 458,
        'r', 458,
        'u', 458,
        'w', 458,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'B', 461,
        'G', 461,
        'R', 461,
        'U', 461,
        'W', 461,
        'b', 461,
        'g', 461,
        'l', 461,
        'r', 461,
        'u', 461,
        'w', 461,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_single_quote_string);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_double_quote_string);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_color_combination);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_color_combination);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'a', 86,
        'e', 40,
        'i', 201,
        'B', 476,
        'G', 476,
        'R', 476,
        'U', 476,
        'W', 476,
        'b', 476,
        'g', 476,
        'r', 476,
        'u', 476,
        'w', 476,
      );
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'a', 126,
        'l', 17,
        'o', 148,
        'r', 471,
        'B', 476,
        'G', 476,
        'R', 476,
        'U', 476,
        'W', 476,
        'b', 476,
        'g', 476,
        'u', 476,
        'w', 476,
      );
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'e', 56,
        'i', 206,
        'o', 204,
        'u', 473,
        'B', 475,
        'G', 475,
        'R', 475,
        'U', 475,
        'W', 475,
        'b', 475,
        'g', 475,
        'r', 475,
        'w', 475,
      );
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'h', 89,
        'i', 175,
        'B', 476,
        'G', 476,
        'R', 476,
        'U', 476,
        'W', 476,
        'b', 476,
        'g', 476,
        'r', 476,
        'u', 476,
        'w', 476,
      );
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'o', 99,
        'B', 475,
        'G', 475,
        'R', 475,
        'U', 475,
        'W', 475,
        'b', 475,
        'g', 475,
        'r', 475,
        'u', 475,
        'w', 475,
      );
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'o', 108,
        'r', 469,
        'B', 476,
        'G', 476,
        'R', 476,
        'U', 476,
        'W', 476,
        'b', 476,
        'g', 476,
        'u', 476,
        'w', 476,
      );
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'u', 478,
        'B', 474,
        'G', 474,
        'R', 474,
        'U', 474,
        'W', 474,
        'b', 474,
        'g', 474,
        'r', 474,
        'w', 474,
      );
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'B', 465,
        'G', 465,
        'R', 465,
        'U', 465,
        'W', 465,
        'b', 465,
        'g', 465,
        'r', 465,
        'u', 465,
        'w', 465,
      );
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'B', 474,
        'G', 474,
        'R', 474,
        'U', 474,
        'W', 474,
        'b', 474,
        'g', 474,
        'r', 474,
        'u', 474,
        'w', 474,
      );
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'B', 475,
        'G', 475,
        'R', 475,
        'U', 475,
        'W', 475,
        'b', 475,
        'g', 475,
        'r', 475,
        'u', 475,
        'w', 475,
      );
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'B', 476,
        'G', 476,
        'R', 476,
        'U', 476,
        'W', 476,
        'b', 476,
        'g', 476,
        'r', 476,
        'u', 476,
        'w', 476,
      );
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'B', 465,
        'G', 465,
        'R', 465,
        'U', 465,
        'W', 465,
        'b', 465,
        'g', 465,
        'l', 465,
        'r', 465,
        'u', 465,
        'w', 465,
      );
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
  [5] = {.lex_state = 215},
  [6] = {.lex_state = 215},
  [7] = {.lex_state = 48},
  [8] = {.lex_state = 215},
  [9] = {.lex_state = 215},
  [10] = {.lex_state = 215},
  [11] = {.lex_state = 215},
  [12] = {.lex_state = 215},
  [13] = {.lex_state = 215},
  [14] = {.lex_state = 215},
  [15] = {.lex_state = 215},
  [16] = {.lex_state = 215},
  [17] = {.lex_state = 215},
  [18] = {.lex_state = 215},
  [19] = {.lex_state = 215},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 215},
  [22] = {.lex_state = 215},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 215},
  [25] = {.lex_state = 215},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 0},
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
    [sym_color_count] = ACTIONS(1),
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
  },
  [1] = {
    [sym_query] = STATE(27),
    [sym__filter] = STATE(25),
    [sym_unary_statement] = STATE(25),
    [sym_bool_statement] = STATE(25),
    [sym_parentheses] = STATE(10),
    [sym__condition] = STATE(10),
    [sym_color_condition] = STATE(10),
    [sym_cmc_condition] = STATE(10),
    [sym_cmc_filter] = STATE(11),
    [sym_exact_name_condition] = STATE(10),
    [sym_name_condition] = STATE(10),
    [sym_name_filter] = STATE(29),
    [sym__stringish_value] = STATE(13),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_color] = ACTIONS(9),
    [anon_sym_cmc] = ACTIONS(11),
    [anon_sym_mv] = ACTIONS(11),
    [anon_sym_manavalue] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_name] = ACTIONS(15),
    [anon_sym_n] = ACTIONS(15),
    [sym_single_quote_string] = ACTIONS(17),
    [sym_double_quote_string] = ACTIONS(17),
    [sym_regex] = ACTIONS(17),
  },
  [2] = {
    [sym__filter] = STATE(16),
    [sym_unary_statement] = STATE(16),
    [sym_bool_statement] = STATE(16),
    [sym_parentheses] = STATE(10),
    [sym__condition] = STATE(10),
    [sym_color_condition] = STATE(10),
    [sym_cmc_condition] = STATE(10),
    [sym_cmc_filter] = STATE(11),
    [sym_exact_name_condition] = STATE(10),
    [sym_name_condition] = STATE(10),
    [sym_name_filter] = STATE(29),
    [sym__stringish_value] = STATE(13),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_color] = ACTIONS(9),
    [anon_sym_cmc] = ACTIONS(11),
    [anon_sym_mv] = ACTIONS(11),
    [anon_sym_manavalue] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_name] = ACTIONS(15),
    [anon_sym_n] = ACTIONS(15),
    [sym_single_quote_string] = ACTIONS(17),
    [sym_double_quote_string] = ACTIONS(17),
    [sym_regex] = ACTIONS(17),
  },
  [3] = {
    [sym__filter] = STATE(24),
    [sym_unary_statement] = STATE(24),
    [sym_bool_statement] = STATE(24),
    [sym_parentheses] = STATE(10),
    [sym__condition] = STATE(10),
    [sym_color_condition] = STATE(10),
    [sym_cmc_condition] = STATE(10),
    [sym_cmc_filter] = STATE(11),
    [sym_exact_name_condition] = STATE(10),
    [sym_name_condition] = STATE(10),
    [sym_name_filter] = STATE(29),
    [sym__stringish_value] = STATE(13),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_color] = ACTIONS(9),
    [anon_sym_cmc] = ACTIONS(11),
    [anon_sym_mv] = ACTIONS(11),
    [anon_sym_manavalue] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_name] = ACTIONS(15),
    [anon_sym_n] = ACTIONS(15),
    [sym_single_quote_string] = ACTIONS(17),
    [sym_double_quote_string] = ACTIONS(17),
    [sym_regex] = ACTIONS(17),
  },
  [4] = {
    [sym_parentheses] = STATE(14),
    [sym__condition] = STATE(14),
    [sym_color_condition] = STATE(14),
    [sym_cmc_condition] = STATE(14),
    [sym_cmc_filter] = STATE(11),
    [sym_exact_name_condition] = STATE(14),
    [sym_name_condition] = STATE(14),
    [sym_name_filter] = STATE(29),
    [sym__stringish_value] = STATE(13),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_color] = ACTIONS(9),
    [anon_sym_cmc] = ACTIONS(11),
    [anon_sym_mv] = ACTIONS(11),
    [anon_sym_manavalue] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_name] = ACTIONS(15),
    [anon_sym_n] = ACTIONS(15),
    [sym_single_quote_string] = ACTIONS(17),
    [sym_double_quote_string] = ACTIONS(17),
    [sym_regex] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(9), 1,
      sym__stringish_value,
    ACTIONS(19), 4,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [10] = 2,
    STATE(8), 1,
      sym__stringish_value,
    ACTIONS(21), 4,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [20] = 3,
    ACTIONS(23), 1,
      sym_positive_float,
    ACTIONS(25), 1,
      sym_natural_number,
    STATE(12), 1,
      sym__number,
  [30] = 2,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [38] = 2,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [46] = 2,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [54] = 3,
    ACTIONS(39), 1,
      sym_number_operator,
    ACTIONS(41), 1,
      sym_equal_operator,
    STATE(7), 1,
      sym__num_or_equal_operator,
  [64] = 2,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [72] = 2,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [80] = 2,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [88] = 2,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [96] = 2,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [104] = 2,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [112] = 2,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [120] = 3,
    ACTIONS(63), 1,
      sym_number_operator,
    ACTIONS(65), 1,
      sym_equal_operator,
    STATE(28), 1,
      sym__num_or_equal_operator,
  [130] = 3,
    ACTIONS(67), 1,
      sym_positive_float,
    ACTIONS(69), 1,
      sym_natural_number,
    ACTIONS(71), 1,
      sym_odd_even,
  [140] = 2,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [148] = 1,
    ACTIONS(77), 2,
      sym_number_operator,
      sym_equal_operator,
  [153] = 2,
    ACTIONS(67), 1,
      sym_color_count,
    ACTIONS(79), 1,
      sym_color_combination,
  [160] = 2,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      sym_bool_operator,
  [167] = 2,
    ACTIONS(83), 1,
      sym_bool_operator,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [174] = 1,
    ACTIONS(87), 1,
      sym_equal_operator,
  [178] = 1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
  [182] = 1,
    ACTIONS(91), 1,
      sym_color_count,
  [186] = 1,
    ACTIONS(93), 1,
      sym_equal_operator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 10,
  [SMALL_STATE(7)] = 20,
  [SMALL_STATE(8)] = 30,
  [SMALL_STATE(9)] = 38,
  [SMALL_STATE(10)] = 46,
  [SMALL_STATE(11)] = 54,
  [SMALL_STATE(12)] = 64,
  [SMALL_STATE(13)] = 72,
  [SMALL_STATE(14)] = 80,
  [SMALL_STATE(15)] = 88,
  [SMALL_STATE(16)] = 96,
  [SMALL_STATE(17)] = 104,
  [SMALL_STATE(18)] = 112,
  [SMALL_STATE(19)] = 120,
  [SMALL_STATE(20)] = 130,
  [SMALL_STATE(21)] = 140,
  [SMALL_STATE(22)] = 148,
  [SMALL_STATE(23)] = 153,
  [SMALL_STATE(24)] = 160,
  [SMALL_STATE(25)] = 167,
  [SMALL_STATE(26)] = 174,
  [SMALL_STATE(27)] = 178,
  [SMALL_STATE(28)] = 182,
  [SMALL_STATE(29)] = 186,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_name_condition, 2, 0, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact_name_condition, 2, 0, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_condition, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_condition, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_statement, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_statement, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmc_condition, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmc_condition, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_name_condition, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact_name_condition, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_statement, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_statement, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_statement, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_statement, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_condition, 3, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_condition, 3, 0, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__num_or_equal_operator, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__num_or_equal_operator, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmc_filter, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_filter, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
