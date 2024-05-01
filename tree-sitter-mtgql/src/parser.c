#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_no_quote_string = 1,
  anon_sym_DASH = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_cmc = 5,
  anon_sym_mv = 6,
  anon_sym_manavalue = 7,
  anon_sym_BANG = 8,
  anon_sym_name = 9,
  anon_sym_n = 10,
  sym_bool_operator = 11,
  sym_number_operator = 12,
  sym_equal_operator = 13,
  sym_number = 14,
  sym_odd_even = 15,
  sym_single_quote_string = 16,
  sym_double_quote_string = 17,
  sym_regex = 18,
  sym_query = 19,
  sym__filter = 20,
  sym_unary_statement = 21,
  sym_bool_statement = 22,
  sym_parentheses = 23,
  sym__condition = 24,
  sym_cmc_condition = 25,
  sym_cmc_filter = 26,
  sym_exact_name_condition = 27,
  sym_name_condition = 28,
  sym_name_filter = 29,
  sym__num_or_equal_operator = 30,
  sym__stringish_value = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_no_quote_string] = "no_quote_string",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_cmc] = "cmc",
  [anon_sym_mv] = "mv",
  [anon_sym_manavalue] = "manavalue",
  [anon_sym_BANG] = "!",
  [anon_sym_name] = "name",
  [anon_sym_n] = "n",
  [sym_bool_operator] = "bool_operator",
  [sym_number_operator] = "number_operator",
  [sym_equal_operator] = "equal_operator",
  [sym_number] = "number",
  [sym_odd_even] = "odd_even",
  [sym_single_quote_string] = "single_quote_string",
  [sym_double_quote_string] = "double_quote_string",
  [sym_regex] = "regex",
  [sym_query] = "query",
  [sym__filter] = "_filter",
  [sym_unary_statement] = "unary_statement",
  [sym_bool_statement] = "bool_statement",
  [sym_parentheses] = "parentheses",
  [sym__condition] = "_condition",
  [sym_cmc_condition] = "cmc_condition",
  [sym_cmc_filter] = "cmc_filter",
  [sym_exact_name_condition] = "exact_name_condition",
  [sym_name_condition] = "name_condition",
  [sym_name_filter] = "name_filter",
  [sym__num_or_equal_operator] = "_num_or_equal_operator",
  [sym__stringish_value] = "_stringish_value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_no_quote_string] = sym_no_quote_string,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_cmc] = anon_sym_cmc,
  [anon_sym_mv] = anon_sym_mv,
  [anon_sym_manavalue] = anon_sym_manavalue,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_n] = anon_sym_n,
  [sym_bool_operator] = sym_bool_operator,
  [sym_number_operator] = sym_number_operator,
  [sym_equal_operator] = sym_equal_operator,
  [sym_number] = sym_number,
  [sym_odd_even] = sym_odd_even,
  [sym_single_quote_string] = sym_single_quote_string,
  [sym_double_quote_string] = sym_double_quote_string,
  [sym_regex] = sym_regex,
  [sym_query] = sym_query,
  [sym__filter] = sym__filter,
  [sym_unary_statement] = sym_unary_statement,
  [sym_bool_statement] = sym_bool_statement,
  [sym_parentheses] = sym_parentheses,
  [sym__condition] = sym__condition,
  [sym_cmc_condition] = sym_cmc_condition,
  [sym_cmc_filter] = sym_cmc_filter,
  [sym_exact_name_condition] = sym_exact_name_condition,
  [sym_name_condition] = sym_name_condition,
  [sym_name_filter] = sym_name_filter,
  [sym__num_or_equal_operator] = sym__num_or_equal_operator,
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
  [sym_number] = {
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
  [sym__stringish_value] = {
    .visible = false,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '!', 46,
        '"', 4,
        '\'', 5,
        '(', 37,
        ')', 38,
        '-', 36,
        '/', 6,
        '<', 55,
        '>', 54,
        'c', 71,
        'e', 76,
        'm', 61,
        'n', 49,
        'o', 66,
        ':', 56,
        '=', 56,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 45,
        '"', 4,
        '\'', 5,
        '(', 37,
        '-', 36,
        '/', 6,
        'c', 71,
        'm', 61,
        'n', 49,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'v') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(4);
      END_STATE();
    case 30:
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(5);
      END_STATE();
    case 31:
      if (lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 32:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        ' ', 52,
        '!', 7,
        '"', 4,
        '\'', 5,
        ')', 38,
        '/', 6,
        '<', 55,
        '>', 54,
        ':', 56,
        '=', 56,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == ')') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(33);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_cmc);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_cmc);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_mv);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_mv);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_manavalue);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_manavalue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_bool_operator);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_bool_operator);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number_operator);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number_operator);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number_operator);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_equal_operator);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_odd_even);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_odd_even);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'v') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_single_quote_string);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_double_quote_string);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_regex);
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
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_no_quote_string] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_cmc] = ACTIONS(1),
    [anon_sym_mv] = ACTIONS(1),
    [anon_sym_manavalue] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [sym_number_operator] = ACTIONS(1),
    [sym_equal_operator] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_odd_even] = ACTIONS(1),
    [sym_single_quote_string] = ACTIONS(1),
    [sym_double_quote_string] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(23),
    [sym__filter] = STATE(17),
    [sym_unary_statement] = STATE(17),
    [sym_bool_statement] = STATE(17),
    [sym_parentheses] = STATE(8),
    [sym__condition] = STATE(8),
    [sym_cmc_condition] = STATE(8),
    [sym_cmc_filter] = STATE(7),
    [sym_exact_name_condition] = STATE(8),
    [sym_name_condition] = STATE(8),
    [sym_name_filter] = STATE(24),
    [sym__stringish_value] = STATE(11),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_cmc] = ACTIONS(9),
    [anon_sym_mv] = ACTIONS(9),
    [anon_sym_manavalue] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_name] = ACTIONS(13),
    [anon_sym_n] = ACTIONS(13),
    [sym_single_quote_string] = ACTIONS(15),
    [sym_double_quote_string] = ACTIONS(15),
    [sym_regex] = ACTIONS(15),
  },
  [2] = {
    [sym__filter] = STATE(16),
    [sym_unary_statement] = STATE(16),
    [sym_bool_statement] = STATE(16),
    [sym_parentheses] = STATE(8),
    [sym__condition] = STATE(8),
    [sym_cmc_condition] = STATE(8),
    [sym_cmc_filter] = STATE(7),
    [sym_exact_name_condition] = STATE(8),
    [sym_name_condition] = STATE(8),
    [sym_name_filter] = STATE(24),
    [sym__stringish_value] = STATE(11),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_cmc] = ACTIONS(9),
    [anon_sym_mv] = ACTIONS(9),
    [anon_sym_manavalue] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_name] = ACTIONS(13),
    [anon_sym_n] = ACTIONS(13),
    [sym_single_quote_string] = ACTIONS(15),
    [sym_double_quote_string] = ACTIONS(15),
    [sym_regex] = ACTIONS(15),
  },
  [3] = {
    [sym__filter] = STATE(18),
    [sym_unary_statement] = STATE(18),
    [sym_bool_statement] = STATE(18),
    [sym_parentheses] = STATE(8),
    [sym__condition] = STATE(8),
    [sym_cmc_condition] = STATE(8),
    [sym_cmc_filter] = STATE(7),
    [sym_exact_name_condition] = STATE(8),
    [sym_name_condition] = STATE(8),
    [sym_name_filter] = STATE(24),
    [sym__stringish_value] = STATE(11),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_cmc] = ACTIONS(9),
    [anon_sym_mv] = ACTIONS(9),
    [anon_sym_manavalue] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_name] = ACTIONS(13),
    [anon_sym_n] = ACTIONS(13),
    [sym_single_quote_string] = ACTIONS(15),
    [sym_double_quote_string] = ACTIONS(15),
    [sym_regex] = ACTIONS(15),
  },
  [4] = {
    [sym_parentheses] = STATE(12),
    [sym__condition] = STATE(12),
    [sym_cmc_condition] = STATE(12),
    [sym_cmc_filter] = STATE(7),
    [sym_exact_name_condition] = STATE(12),
    [sym_name_condition] = STATE(12),
    [sym_name_filter] = STATE(24),
    [sym__stringish_value] = STATE(11),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_cmc] = ACTIONS(9),
    [anon_sym_mv] = ACTIONS(9),
    [anon_sym_manavalue] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_name] = ACTIONS(13),
    [anon_sym_n] = ACTIONS(13),
    [sym_single_quote_string] = ACTIONS(15),
    [sym_double_quote_string] = ACTIONS(15),
    [sym_regex] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(14), 1,
      sym__stringish_value,
    ACTIONS(17), 4,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [10] = 2,
    STATE(13), 1,
      sym__stringish_value,
    ACTIONS(19), 4,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [20] = 3,
    ACTIONS(21), 1,
      sym_number_operator,
    ACTIONS(23), 1,
      sym_equal_operator,
    STATE(22), 1,
      sym__num_or_equal_operator,
  [30] = 2,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [38] = 2,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [46] = 2,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [54] = 2,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [62] = 2,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [70] = 2,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [78] = 2,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [86] = 2,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [94] = 2,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [102] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_bool_operator,
  [109] = 2,
    ACTIONS(59), 1,
      sym_bool_operator,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
  [116] = 1,
    ACTIONS(63), 2,
      sym_number_operator,
      sym_equal_operator,
  [121] = 2,
    ACTIONS(65), 1,
      sym_number,
    ACTIONS(67), 1,
      sym_odd_even,
  [128] = 1,
    ACTIONS(69), 1,
      sym_equal_operator,
  [132] = 1,
    ACTIONS(71), 1,
      sym_number,
  [136] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [140] = 1,
    ACTIONS(75), 1,
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
  [SMALL_STATE(12)] = 62,
  [SMALL_STATE(13)] = 70,
  [SMALL_STATE(14)] = 78,
  [SMALL_STATE(15)] = 86,
  [SMALL_STATE(16)] = 94,
  [SMALL_STATE(17)] = 102,
  [SMALL_STATE(18)] = 109,
  [SMALL_STATE(19)] = 116,
  [SMALL_STATE(20)] = 121,
  [SMALL_STATE(21)] = 128,
  [SMALL_STATE(22)] = 132,
  [SMALL_STATE(23)] = 136,
  [SMALL_STATE(24)] = 140,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_statement, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_statement, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmc_condition, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmc_condition, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_name_condition, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact_name_condition, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_statement, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_statement, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_name_condition, 2, 0, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact_name_condition, 2, 0, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_condition, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_condition, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_statement, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_statement, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmc_filter, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__num_or_equal_operator, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_filter, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
