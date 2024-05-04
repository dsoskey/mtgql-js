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
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
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
  anon_sym_oracle = 16,
  anon_sym_o = 17,
  anon_sym_text = 18,
  anon_sym_fo = 19,
  anon_sym_kw = 20,
  anon_sym_keyword = 21,
  anon_sym_t = 22,
  anon_sym_type = 23,
  anon_sym_pow = 24,
  anon_sym_power = 25,
  sym_toughness_value = 26,
  anon_sym_tou = 27,
  anon_sym_toughness = 28,
  sym_power_value = 29,
  anon_sym_pt = 30,
  anon_sym_powtou = 31,
  anon_sym_loyalty = 32,
  anon_sym_loy = 33,
  anon_sym_defense = 34,
  anon_sym_def = 35,
  anon_sym_BANG = 36,
  anon_sym_name = 37,
  anon_sym_n = 38,
  sym_bool_operator = 39,
  sym_number_operator = 40,
  sym_equal_operator = 41,
  sym_positive_float = 42,
  sym_natural_number = 43,
  sym_odd_even = 44,
  sym_single_quote_string = 45,
  sym_double_quote_string = 46,
  sym_regex = 47,
  sym_color_combination = 48,
  sym_color_count = 49,
  aux_sym_mana_cost_token1 = 50,
  sym_mana_symbol = 51,
  sym_query = 52,
  sym__filter = 53,
  sym_unary_statement = 54,
  sym_bool_statement = 55,
  sym_parentheses = 56,
  sym__condition = 57,
  sym_color_condition = 58,
  sym_color_filter = 59,
  sym_color_identity_condition = 60,
  sym_identity_filter = 61,
  sym_mana_condition = 62,
  sym_mana_filter = 63,
  sym_cmc_condition = 64,
  sym_cmc_filter = 65,
  sym_oracle_condition = 66,
  sym_oracle_filter = 67,
  sym_full_oracle_condition = 68,
  sym_full_oracle_filter = 69,
  sym_keyword_condition = 70,
  sym_keyword_filter = 71,
  sym_type_condition = 72,
  sym_type_filter = 73,
  sym_power_condition = 74,
  sym_power_filter = 75,
  sym_toughness_condition = 76,
  sym_toughness_filter = 77,
  sym_pow_tou_condition = 78,
  sym_pow_tou_filter = 79,
  sym_loyalty_condition = 80,
  sym_loyalty_filter = 81,
  sym_defense_condition = 82,
  sym_defense_filter = 83,
  sym_exact_name_condition = 84,
  sym_name_condition = 85,
  sym_name_filter = 86,
  sym__num_or_equal_operator = 87,
  sym__number = 88,
  sym__string_value = 89,
  sym__stringish_value = 90,
  sym_mana_cost = 91,
  aux_sym_mana_cost_repeat1 = 92,
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
  [anon_sym_oracle] = "oracle",
  [anon_sym_o] = "o",
  [anon_sym_text] = "text",
  [anon_sym_fo] = "fo",
  [anon_sym_kw] = "kw",
  [anon_sym_keyword] = "keyword",
  [anon_sym_t] = "t",
  [anon_sym_type] = "type",
  [anon_sym_pow] = "pow",
  [anon_sym_power] = "power",
  [sym_toughness_value] = "toughness_value",
  [anon_sym_tou] = "tou",
  [anon_sym_toughness] = "toughness",
  [sym_power_value] = "power_value",
  [anon_sym_pt] = "pt",
  [anon_sym_powtou] = "powtou",
  [anon_sym_loyalty] = "loyalty",
  [anon_sym_loy] = "loy",
  [anon_sym_defense] = "defense",
  [anon_sym_def] = "def",
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
  [sym_oracle_condition] = "oracle_condition",
  [sym_oracle_filter] = "oracle_filter",
  [sym_full_oracle_condition] = "full_oracle_condition",
  [sym_full_oracle_filter] = "full_oracle_filter",
  [sym_keyword_condition] = "keyword_condition",
  [sym_keyword_filter] = "keyword_filter",
  [sym_type_condition] = "type_condition",
  [sym_type_filter] = "type_filter",
  [sym_power_condition] = "power_condition",
  [sym_power_filter] = "power_filter",
  [sym_toughness_condition] = "toughness_condition",
  [sym_toughness_filter] = "toughness_filter",
  [sym_pow_tou_condition] = "pow_tou_condition",
  [sym_pow_tou_filter] = "pow_tou_filter",
  [sym_loyalty_condition] = "loyalty_condition",
  [sym_loyalty_filter] = "loyalty_filter",
  [sym_defense_condition] = "defense_condition",
  [sym_defense_filter] = "defense_filter",
  [sym_exact_name_condition] = "exact_name_condition",
  [sym_name_condition] = "name_condition",
  [sym_name_filter] = "name_filter",
  [sym__num_or_equal_operator] = "_num_or_equal_operator",
  [sym__number] = "_number",
  [sym__string_value] = "_string_value",
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
  [anon_sym_oracle] = anon_sym_oracle,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_fo] = anon_sym_fo,
  [anon_sym_kw] = anon_sym_kw,
  [anon_sym_keyword] = anon_sym_keyword,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_pow] = anon_sym_pow,
  [anon_sym_power] = anon_sym_power,
  [sym_toughness_value] = sym_toughness_value,
  [anon_sym_tou] = anon_sym_tou,
  [anon_sym_toughness] = anon_sym_toughness,
  [sym_power_value] = sym_power_value,
  [anon_sym_pt] = anon_sym_pt,
  [anon_sym_powtou] = anon_sym_powtou,
  [anon_sym_loyalty] = anon_sym_loyalty,
  [anon_sym_loy] = anon_sym_loy,
  [anon_sym_defense] = anon_sym_defense,
  [anon_sym_def] = anon_sym_def,
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
  [sym_oracle_condition] = sym_oracle_condition,
  [sym_oracle_filter] = sym_oracle_filter,
  [sym_full_oracle_condition] = sym_full_oracle_condition,
  [sym_full_oracle_filter] = sym_full_oracle_filter,
  [sym_keyword_condition] = sym_keyword_condition,
  [sym_keyword_filter] = sym_keyword_filter,
  [sym_type_condition] = sym_type_condition,
  [sym_type_filter] = sym_type_filter,
  [sym_power_condition] = sym_power_condition,
  [sym_power_filter] = sym_power_filter,
  [sym_toughness_condition] = sym_toughness_condition,
  [sym_toughness_filter] = sym_toughness_filter,
  [sym_pow_tou_condition] = sym_pow_tou_condition,
  [sym_pow_tou_filter] = sym_pow_tou_filter,
  [sym_loyalty_condition] = sym_loyalty_condition,
  [sym_loyalty_filter] = sym_loyalty_filter,
  [sym_defense_condition] = sym_defense_condition,
  [sym_defense_filter] = sym_defense_filter,
  [sym_exact_name_condition] = sym_exact_name_condition,
  [sym_name_condition] = sym_name_condition,
  [sym_name_filter] = sym_name_filter,
  [sym__num_or_equal_operator] = sym__num_or_equal_operator,
  [sym__number] = sym__number,
  [sym__string_value] = sym__string_value,
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
  [anon_sym_oracle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keyword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_power] = {
    .visible = true,
    .named = false,
  },
  [sym_toughness_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tou] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toughness] = {
    .visible = true,
    .named = false,
  },
  [sym_power_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_powtou] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loyalty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defense] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
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
  [sym_oracle_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_oracle_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_full_oracle_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_full_oracle_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_type_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_power_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_power_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_toughness_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_toughness_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_pow_tou_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_pow_tou_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_loyalty_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_loyalty_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_defense_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_defense_filter] = {
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
  [sym__string_value] = {
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
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
      if (eof) ADVANCE(284);
      ADVANCE_MAP(
        '!', 356,
        '"', 5,
        '\'', 6,
        '(', 286,
        ')', 287,
        '-', 285,
        '/', 8,
        '<', 366,
        '>', 365,
        'C', 621,
        'a', 393,
        'b', 376,
        'c', 288,
        'd', 415,
        'e', 559,
        'f', 460,
        'g', 514,
        'i', 406,
        'j', 416,
        'k', 417,
        'l', 515,
        'm', 304,
        'n', 359,
        'o', 315,
        'p', 516,
        'q', 594,
        'r', 377,
        's', 380,
        't', 326,
        'w', 453,
        'z', 379,
        '{', 12,
        ':', 367,
        '=', 367,
      );
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (lookahead == 'B' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'u') ADVANCE(620);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(621);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(283);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(362);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 355,
        '"', 5,
        '\'', 6,
        '(', 286,
        '-', 285,
        '/', 8,
        'c', 289,
        'd', 423,
        'f', 513,
        'i', 407,
        'k', 426,
        'l', 527,
        'm', 306,
        'n', 361,
        'o', 317,
        'p', 517,
        't', 328,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 355,
        '(', 286,
        '-', 285,
        'c', 290,
        'd', 56,
        'f', 159,
        'i', 46,
        'k', 57,
        'l', 162,
        'm', 305,
        'n', 360,
        'o', 316,
        'p', 160,
        't', 327,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '/') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(624);
      if (lookahead == '\\') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(623);
      if (lookahead == '\\') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '{') ADVANCE(12);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(638);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(279);
      if (lookahead == '}') ADVANCE(639);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(279);
      if (lookahead == '}') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(278);
      if (lookahead == '}') ADVANCE(639);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(10);
      if (('x' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (set_contains(sym_mana_symbol_character_set_2, 13, lookahead)) ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(364);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        'C', 626,
        'a', 33,
        'b', 629,
        'c', 627,
        'd', 66,
        'e', 219,
        'f', 119,
        'g', 634,
        'i', 154,
        'j', 70,
        'k', 83,
        'l', 171,
        'm', 18,
        'n', 25,
        'o', 34,
        'p', 191,
        'q', 249,
        'r', 628,
        's', 20,
        't', 67,
        'w', 631,
        'z', 22,
        'B', 636,
        'G', 636,
        'R', 636,
        'U', 636,
        'W', 636,
        'u', 636,
      );
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(637);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(272);
      if (lookahead == 'g') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 'z') ADVANCE(175);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(169);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(626);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 'w') ADVANCE(322);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(353);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(200);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(626);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(153);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(166);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(170);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(158);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'k') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 120:
      if (lookahead == 'k') ADVANCE(626);
      END_STATE();
    case 121:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 122:
      if (lookahead == 'k') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(626);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(626);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(626);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'z') ADVANCE(271);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 182:
      if (lookahead == 'q') ADVANCE(246);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(626);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(626);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 251:
      if (lookahead == 'v') ADVANCE(626);
      END_STATE();
    case 252:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 253:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 254:
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 255:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 256:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 257:
      if (lookahead == 'w') ADVANCE(331);
      END_STATE();
    case 258:
      if (lookahead == 'w') ADVANCE(342);
      END_STATE();
    case 259:
      if (lookahead == 'w') ADVANCE(626);
      END_STATE();
    case 260:
      if (lookahead == 'w') ADVANCE(165);
      END_STATE();
    case 261:
      if (lookahead == 'w') ADVANCE(228);
      END_STATE();
    case 262:
      if (lookahead == 'x') ADVANCE(222);
      END_STATE();
    case 263:
      if (lookahead == 'x') ADVANCE(626);
      END_STATE();
    case 264:
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 265:
      if (lookahead == 'y') ADVANCE(349);
      END_STATE();
    case 266:
      if (lookahead == 'y') ADVANCE(347);
      END_STATE();
    case 267:
      if (lookahead == 'y') ADVANCE(300);
      END_STATE();
    case 268:
      if (lookahead == 'y') ADVANCE(260);
      END_STATE();
    case 269:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 270:
      if (lookahead == 'z') ADVANCE(98);
      END_STATE();
    case 271:
      if (lookahead == 'z') ADVANCE(73);
      END_STATE();
    case 272:
      if (lookahead == 'z') ADVANCE(29);
      END_STATE();
    case 273:
      if (lookahead == '}') ADVANCE(639);
      END_STATE();
    case 274:
      if (lookahead == '}') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(5);
      END_STATE();
    case 276:
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 278:
      ADVANCE_MAP(
        '2', 273,
        'B', 273,
        'C', 273,
        'G', 273,
        'P', 273,
        'R', 273,
        'S', 273,
        'U', 273,
        'W', 273,
        'b', 273,
        'c', 273,
        'g', 273,
        'p', 273,
        'r', 273,
        's', 273,
        'u', 273,
        'w', 273,
      );
      END_STATE();
    case 279:
      ADVANCE_MAP(
        '2', 11,
        'B', 11,
        'C', 11,
        'G', 11,
        'P', 11,
        'R', 11,
        'S', 11,
        'U', 11,
        'W', 11,
        'b', 11,
        'c', 11,
        'g', 11,
        'p', 11,
        'r', 11,
        's', 11,
        'u', 11,
        'w', 11,
      );
      END_STATE();
    case 280:
      if (lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= '{')) ADVANCE(8);
      END_STATE();
    case 281:
      if (eof) ADVANCE(284);
      ADVANCE_MAP(
        ' ', 363,
        '!', 13,
        '"', 5,
        '\'', 6,
        ')', 287,
        '/', 8,
        '<', 366,
        '>', 365,
        '{', 12,
        ':', 367,
        '=', 367,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 282:
      if (eof) ADVANCE(284);
      if (lookahead == ' ') ADVANCE(363);
      if (lookahead == ')') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(282);
      END_STATE();
    case 283:
      if (eof) ADVANCE(284);
      ADVANCE_MAP(
        '!', 355,
        '(', 286,
        ')', 287,
        '-', 285,
        'c', 290,
        'd', 56,
        'f', 159,
        'i', 46,
        'k', 57,
        'l', 162,
        'm', 305,
        'n', 360,
        'o', 316,
        'p', 160,
        't', 327,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == 'h') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(490);
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
          lookahead == 'v') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_ci);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_ci);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_commander);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_commander);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_identity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_mana);
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_mana);
      if (lookahead == 'v') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'v') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'v') ADVANCE(309);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'a') ADVANCE(509);
      if (lookahead == 'v') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_cmc);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_cmc);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_mv);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_mv);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_manavalue);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_manavalue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_oracle);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_oracle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'b') ADVANCE(563);
      if (lookahead == 'd') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_fo);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_fo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_kw);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_kw);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_keyword);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_keyword);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 'o') ADVANCE(591);
      if (lookahead == 'y') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 'y') ADVANCE(180);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == 'o') ADVANCE(591);
      if (lookahead == 'y') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_pow);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_pow);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_power);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_power);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_toughness_value);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_toughness_value);
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_tou);
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_tou);
      if (lookahead == 'g') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_toughness);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_toughness);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_power_value);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_power_value);
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_pt);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_pt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_powtou);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_powtou);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_loyalty);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_loyalty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_loy);
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_loy);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_defense);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_defense);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(364);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_bool_operator);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_bool_operator);
      if (lookahead == ' ') ADVANCE(363);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_number_operator);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_number_operator);
      if (lookahead == '=') ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_number_operator);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(364);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_equal_operator);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_positive_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_natural_number);
      if (lookahead == '.') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_natural_number);
      if (lookahead == '.') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_odd_even);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_odd_even);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == 'd') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'a', 506,
        'l', 382,
        'o', 545,
        'r', 518,
        'B', 620,
        'G', 620,
        'R', 620,
        'U', 620,
        'W', 620,
        'b', 620,
        'g', 620,
        'u', 620,
        'w', 620,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'a', 463,
        'e', 405,
        'i', 604,
        'B', 620,
        'G', 620,
        'R', 620,
        'U', 620,
        'W', 620,
        'b', 620,
        'g', 620,
        'r', 620,
        'u', 620,
        'w', 620,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(448);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(603);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == 'u') ADVANCE(483);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'u') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'z') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(622);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(618);
      if (lookahead == 'g') ADVANCE(447);
      if (lookahead == 'l') ADVANCE(579);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead == 'r') ADVANCE(580);
      if (lookahead == 'z') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(622);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead == 'z') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(622);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(560);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == 'w') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead == 'w') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'e', 428,
        'i', 612,
        'o', 608,
        'u', 592,
        'B', 620,
        'G', 620,
        'R', 620,
        'U', 620,
        'W', 620,
        'b', 620,
        'g', 620,
        'r', 620,
        'w', 620,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'f') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'h', 470,
        'i', 578,
        'B', 620,
        'G', 620,
        'R', 620,
        'U', 620,
        'W', 620,
        'b', 620,
        'g', 620,
        'r', 620,
        'u', 620,
        'w', 620,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(503);
      if (lookahead == 'k') ADVANCE(374);
      if (lookahead == 'u') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'k') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'k') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'k') ADVANCE(433);
      if (lookahead == 'w') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'l', 622,
        'B', 620,
        'G', 620,
        'R', 620,
        'U', 620,
        'W', 620,
        'b', 620,
        'g', 620,
        'r', 620,
        'u', 620,
        'w', 620,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(584);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == 'm') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(605);
      if (lookahead == 'm') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'm') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(597);
      if (lookahead == 'x') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(418);
      if (lookahead == 'y') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'o', 481,
        'r', 440,
        'B', 620,
        'G', 620,
        'R', 620,
        'U', 620,
        'W', 620,
        'b', 620,
        'g', 620,
        'u', 620,
        'w', 620,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'o', 478,
        'B', 620,
        'G', 620,
        'R', 620,
        'U', 620,
        'W', 620,
        'b', 620,
        'g', 620,
        'r', 620,
        'u', 620,
        'w', 620,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'p') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'p') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'q') ADVANCE(598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(441);
      if (lookahead == 'y') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == 'v') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(552);
      if (lookahead == 'y') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'u', 479,
        'B', 620,
        'G', 620,
        'R', 620,
        'U', 620,
        'W', 620,
        'b', 620,
        'g', 620,
        'r', 620,
        'w', 620,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'w') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'w') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'w') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'w') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'x') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'x') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'x') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'z') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(622);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'z') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(622);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'B', 620,
        'G', 620,
        'R', 620,
        'U', 620,
        'W', 620,
        'b', 620,
        'g', 620,
        'r', 620,
        'u', 620,
        'w', 620,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'C' ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'c' ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(621);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(622);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_single_quote_string);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_double_quote_string);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_color_combination);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_color_combination);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'a', 112,
        'e', 50,
        'i', 255,
        'B', 636,
        'G', 636,
        'R', 636,
        'U', 636,
        'W', 636,
        'b', 636,
        'g', 636,
        'r', 636,
        'u', 636,
        'w', 636,
      );
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'a', 156,
        'l', 23,
        'o', 197,
        'r', 633,
        'B', 636,
        'G', 636,
        'R', 636,
        'U', 636,
        'W', 636,
        'b', 636,
        'g', 636,
        'u', 636,
        'w', 636,
      );
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'e', 74,
        'i', 264,
        'o', 261,
        'u', 635,
        'B', 636,
        'G', 636,
        'R', 636,
        'U', 636,
        'W', 636,
        'b', 636,
        'g', 636,
        'r', 636,
        'w', 636,
      );
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'h', 115,
        'i', 226,
        'B', 636,
        'G', 636,
        'R', 636,
        'U', 636,
        'W', 636,
        'b', 636,
        'g', 636,
        'r', 636,
        'u', 636,
        'w', 636,
      );
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'l', 626,
        'B', 636,
        'G', 636,
        'R', 636,
        'U', 636,
        'W', 636,
        'b', 636,
        'g', 636,
        'r', 636,
        'u', 636,
        'w', 636,
      );
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'o', 122,
        'B', 636,
        'G', 636,
        'R', 636,
        'U', 636,
        'W', 636,
        'b', 636,
        'g', 636,
        'r', 636,
        'u', 636,
        'w', 636,
      );
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'o', 133,
        'r', 630,
        'B', 636,
        'G', 636,
        'R', 636,
        'U', 636,
        'W', 636,
        'b', 636,
        'g', 636,
        'u', 636,
        'w', 636,
      );
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'u', 632,
        'B', 636,
        'G', 636,
        'R', 636,
        'U', 636,
        'W', 636,
        'b', 636,
        'g', 636,
        'r', 636,
        'w', 636,
      );
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'B', 636,
        'G', 636,
        'R', 636,
        'U', 636,
        'W', 636,
        'b', 636,
        'g', 636,
        'r', 636,
        'u', 636,
        'w', 636,
      );
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_color_count);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(638);
      END_STATE();
    case 639:
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
  [5] = {.lex_state = 281},
  [6] = {.lex_state = 281},
  [7] = {.lex_state = 281},
  [8] = {.lex_state = 281},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 281},
  [15] = {.lex_state = 281},
  [16] = {.lex_state = 281},
  [17] = {.lex_state = 281},
  [18] = {.lex_state = 281},
  [19] = {.lex_state = 281},
  [20] = {.lex_state = 281},
  [21] = {.lex_state = 281},
  [22] = {.lex_state = 281},
  [23] = {.lex_state = 281},
  [24] = {.lex_state = 281},
  [25] = {.lex_state = 281},
  [26] = {.lex_state = 281},
  [27] = {.lex_state = 281},
  [28] = {.lex_state = 281},
  [29] = {.lex_state = 281},
  [30] = {.lex_state = 281},
  [31] = {.lex_state = 281},
  [32] = {.lex_state = 281},
  [33] = {.lex_state = 281},
  [34] = {.lex_state = 281},
  [35] = {.lex_state = 281},
  [36] = {.lex_state = 281},
  [37] = {.lex_state = 281},
  [38] = {.lex_state = 281},
  [39] = {.lex_state = 281},
  [40] = {.lex_state = 281},
  [41] = {.lex_state = 281},
  [42] = {.lex_state = 281},
  [43] = {.lex_state = 281},
  [44] = {.lex_state = 281},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 281},
  [47] = {.lex_state = 63},
  [48] = {.lex_state = 63},
  [49] = {.lex_state = 281},
  [50] = {.lex_state = 281},
  [51] = {.lex_state = 281},
  [52] = {.lex_state = 281},
  [53] = {.lex_state = 281},
  [54] = {.lex_state = 281},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 63},
  [57] = {.lex_state = 281},
  [58] = {.lex_state = 281},
  [59] = {.lex_state = 281},
  [60] = {.lex_state = 281},
  [61] = {.lex_state = 281},
  [62] = {.lex_state = 63},
  [63] = {.lex_state = 281},
  [64] = {.lex_state = 281},
  [65] = {.lex_state = 281},
  [66] = {.lex_state = 281},
  [67] = {.lex_state = 281},
  [68] = {.lex_state = 281},
  [69] = {.lex_state = 281},
  [70] = {.lex_state = 281},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 281},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 281},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 281},
  [84] = {.lex_state = 281},
  [85] = {.lex_state = 281},
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
    [anon_sym_oracle] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_fo] = ACTIONS(1),
    [anon_sym_kw] = ACTIONS(1),
    [anon_sym_keyword] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_pow] = ACTIONS(1),
    [anon_sym_power] = ACTIONS(1),
    [sym_toughness_value] = ACTIONS(1),
    [anon_sym_tou] = ACTIONS(1),
    [anon_sym_toughness] = ACTIONS(1),
    [sym_power_value] = ACTIONS(1),
    [anon_sym_pt] = ACTIONS(1),
    [anon_sym_powtou] = ACTIONS(1),
    [anon_sym_loyalty] = ACTIONS(1),
    [anon_sym_loy] = ACTIONS(1),
    [anon_sym_defense] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
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
    [sym_query] = STATE(80),
    [sym__filter] = STATE(65),
    [sym_unary_statement] = STATE(65),
    [sym_bool_statement] = STATE(65),
    [sym_parentheses] = STATE(22),
    [sym__condition] = STATE(22),
    [sym_color_condition] = STATE(22),
    [sym_color_filter] = STATE(23),
    [sym_color_identity_condition] = STATE(22),
    [sym_identity_filter] = STATE(24),
    [sym_mana_condition] = STATE(22),
    [sym_mana_filter] = STATE(25),
    [sym_cmc_condition] = STATE(22),
    [sym_cmc_filter] = STATE(26),
    [sym_oracle_condition] = STATE(22),
    [sym_oracle_filter] = STATE(27),
    [sym_full_oracle_condition] = STATE(22),
    [sym_full_oracle_filter] = STATE(28),
    [sym_keyword_condition] = STATE(22),
    [sym_keyword_filter] = STATE(78),
    [sym_type_condition] = STATE(22),
    [sym_type_filter] = STATE(77),
    [sym_power_condition] = STATE(22),
    [sym_power_filter] = STATE(31),
    [sym_toughness_condition] = STATE(22),
    [sym_toughness_filter] = STATE(32),
    [sym_pow_tou_condition] = STATE(22),
    [sym_pow_tou_filter] = STATE(33),
    [sym_loyalty_condition] = STATE(22),
    [sym_loyalty_filter] = STATE(34),
    [sym_defense_condition] = STATE(22),
    [sym_defense_filter] = STATE(35),
    [sym_exact_name_condition] = STATE(22),
    [sym_name_condition] = STATE(22),
    [sym_name_filter] = STATE(76),
    [sym__stringish_value] = STATE(37),
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
    [anon_sym_oracle] = ACTIONS(17),
    [anon_sym_o] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fo] = ACTIONS(19),
    [anon_sym_kw] = ACTIONS(21),
    [anon_sym_keyword] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(23),
    [anon_sym_type] = ACTIONS(23),
    [anon_sym_pow] = ACTIONS(25),
    [anon_sym_power] = ACTIONS(25),
    [anon_sym_tou] = ACTIONS(27),
    [anon_sym_toughness] = ACTIONS(27),
    [anon_sym_pt] = ACTIONS(29),
    [anon_sym_powtou] = ACTIONS(29),
    [anon_sym_loyalty] = ACTIONS(31),
    [anon_sym_loy] = ACTIONS(31),
    [anon_sym_defense] = ACTIONS(33),
    [anon_sym_def] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_name] = ACTIONS(37),
    [anon_sym_n] = ACTIONS(37),
    [sym_single_quote_string] = ACTIONS(39),
    [sym_double_quote_string] = ACTIONS(39),
    [sym_regex] = ACTIONS(39),
  },
  [2] = {
    [sym__filter] = STATE(53),
    [sym_unary_statement] = STATE(53),
    [sym_bool_statement] = STATE(53),
    [sym_parentheses] = STATE(22),
    [sym__condition] = STATE(22),
    [sym_color_condition] = STATE(22),
    [sym_color_filter] = STATE(23),
    [sym_color_identity_condition] = STATE(22),
    [sym_identity_filter] = STATE(24),
    [sym_mana_condition] = STATE(22),
    [sym_mana_filter] = STATE(25),
    [sym_cmc_condition] = STATE(22),
    [sym_cmc_filter] = STATE(26),
    [sym_oracle_condition] = STATE(22),
    [sym_oracle_filter] = STATE(27),
    [sym_full_oracle_condition] = STATE(22),
    [sym_full_oracle_filter] = STATE(28),
    [sym_keyword_condition] = STATE(22),
    [sym_keyword_filter] = STATE(78),
    [sym_type_condition] = STATE(22),
    [sym_type_filter] = STATE(77),
    [sym_power_condition] = STATE(22),
    [sym_power_filter] = STATE(31),
    [sym_toughness_condition] = STATE(22),
    [sym_toughness_filter] = STATE(32),
    [sym_pow_tou_condition] = STATE(22),
    [sym_pow_tou_filter] = STATE(33),
    [sym_loyalty_condition] = STATE(22),
    [sym_loyalty_filter] = STATE(34),
    [sym_defense_condition] = STATE(22),
    [sym_defense_filter] = STATE(35),
    [sym_exact_name_condition] = STATE(22),
    [sym_name_condition] = STATE(22),
    [sym_name_filter] = STATE(76),
    [sym__stringish_value] = STATE(37),
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
    [anon_sym_oracle] = ACTIONS(17),
    [anon_sym_o] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fo] = ACTIONS(19),
    [anon_sym_kw] = ACTIONS(21),
    [anon_sym_keyword] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(23),
    [anon_sym_type] = ACTIONS(23),
    [anon_sym_pow] = ACTIONS(25),
    [anon_sym_power] = ACTIONS(25),
    [anon_sym_tou] = ACTIONS(27),
    [anon_sym_toughness] = ACTIONS(27),
    [anon_sym_pt] = ACTIONS(29),
    [anon_sym_powtou] = ACTIONS(29),
    [anon_sym_loyalty] = ACTIONS(31),
    [anon_sym_loy] = ACTIONS(31),
    [anon_sym_defense] = ACTIONS(33),
    [anon_sym_def] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_name] = ACTIONS(37),
    [anon_sym_n] = ACTIONS(37),
    [sym_single_quote_string] = ACTIONS(39),
    [sym_double_quote_string] = ACTIONS(39),
    [sym_regex] = ACTIONS(39),
  },
  [3] = {
    [sym__filter] = STATE(67),
    [sym_unary_statement] = STATE(67),
    [sym_bool_statement] = STATE(67),
    [sym_parentheses] = STATE(22),
    [sym__condition] = STATE(22),
    [sym_color_condition] = STATE(22),
    [sym_color_filter] = STATE(23),
    [sym_color_identity_condition] = STATE(22),
    [sym_identity_filter] = STATE(24),
    [sym_mana_condition] = STATE(22),
    [sym_mana_filter] = STATE(25),
    [sym_cmc_condition] = STATE(22),
    [sym_cmc_filter] = STATE(26),
    [sym_oracle_condition] = STATE(22),
    [sym_oracle_filter] = STATE(27),
    [sym_full_oracle_condition] = STATE(22),
    [sym_full_oracle_filter] = STATE(28),
    [sym_keyword_condition] = STATE(22),
    [sym_keyword_filter] = STATE(78),
    [sym_type_condition] = STATE(22),
    [sym_type_filter] = STATE(77),
    [sym_power_condition] = STATE(22),
    [sym_power_filter] = STATE(31),
    [sym_toughness_condition] = STATE(22),
    [sym_toughness_filter] = STATE(32),
    [sym_pow_tou_condition] = STATE(22),
    [sym_pow_tou_filter] = STATE(33),
    [sym_loyalty_condition] = STATE(22),
    [sym_loyalty_filter] = STATE(34),
    [sym_defense_condition] = STATE(22),
    [sym_defense_filter] = STATE(35),
    [sym_exact_name_condition] = STATE(22),
    [sym_name_condition] = STATE(22),
    [sym_name_filter] = STATE(76),
    [sym__stringish_value] = STATE(37),
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
    [anon_sym_oracle] = ACTIONS(17),
    [anon_sym_o] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fo] = ACTIONS(19),
    [anon_sym_kw] = ACTIONS(21),
    [anon_sym_keyword] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(23),
    [anon_sym_type] = ACTIONS(23),
    [anon_sym_pow] = ACTIONS(25),
    [anon_sym_power] = ACTIONS(25),
    [anon_sym_tou] = ACTIONS(27),
    [anon_sym_toughness] = ACTIONS(27),
    [anon_sym_pt] = ACTIONS(29),
    [anon_sym_powtou] = ACTIONS(29),
    [anon_sym_loyalty] = ACTIONS(31),
    [anon_sym_loy] = ACTIONS(31),
    [anon_sym_defense] = ACTIONS(33),
    [anon_sym_def] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_name] = ACTIONS(37),
    [anon_sym_n] = ACTIONS(37),
    [sym_single_quote_string] = ACTIONS(39),
    [sym_double_quote_string] = ACTIONS(39),
    [sym_regex] = ACTIONS(39),
  },
  [4] = {
    [sym_parentheses] = STATE(38),
    [sym__condition] = STATE(38),
    [sym_color_condition] = STATE(38),
    [sym_color_filter] = STATE(23),
    [sym_color_identity_condition] = STATE(38),
    [sym_identity_filter] = STATE(24),
    [sym_mana_condition] = STATE(38),
    [sym_mana_filter] = STATE(25),
    [sym_cmc_condition] = STATE(38),
    [sym_cmc_filter] = STATE(26),
    [sym_oracle_condition] = STATE(38),
    [sym_oracle_filter] = STATE(27),
    [sym_full_oracle_condition] = STATE(38),
    [sym_full_oracle_filter] = STATE(28),
    [sym_keyword_condition] = STATE(38),
    [sym_keyword_filter] = STATE(78),
    [sym_type_condition] = STATE(38),
    [sym_type_filter] = STATE(77),
    [sym_power_condition] = STATE(38),
    [sym_power_filter] = STATE(31),
    [sym_toughness_condition] = STATE(38),
    [sym_toughness_filter] = STATE(32),
    [sym_pow_tou_condition] = STATE(38),
    [sym_pow_tou_filter] = STATE(33),
    [sym_loyalty_condition] = STATE(38),
    [sym_loyalty_filter] = STATE(34),
    [sym_defense_condition] = STATE(38),
    [sym_defense_filter] = STATE(35),
    [sym_exact_name_condition] = STATE(38),
    [sym_name_condition] = STATE(38),
    [sym_name_filter] = STATE(76),
    [sym__stringish_value] = STATE(37),
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
    [anon_sym_oracle] = ACTIONS(17),
    [anon_sym_o] = ACTIONS(17),
    [anon_sym_text] = ACTIONS(17),
    [anon_sym_fo] = ACTIONS(19),
    [anon_sym_kw] = ACTIONS(21),
    [anon_sym_keyword] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(23),
    [anon_sym_type] = ACTIONS(23),
    [anon_sym_pow] = ACTIONS(25),
    [anon_sym_power] = ACTIONS(25),
    [anon_sym_tou] = ACTIONS(27),
    [anon_sym_toughness] = ACTIONS(27),
    [anon_sym_pt] = ACTIONS(29),
    [anon_sym_powtou] = ACTIONS(29),
    [anon_sym_loyalty] = ACTIONS(31),
    [anon_sym_loy] = ACTIONS(31),
    [anon_sym_defense] = ACTIONS(33),
    [anon_sym_def] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_name] = ACTIONS(37),
    [anon_sym_n] = ACTIONS(37),
    [sym_single_quote_string] = ACTIONS(39),
    [sym_double_quote_string] = ACTIONS(39),
    [sym_regex] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(41), 1,
      sym_no_quote_string,
    ACTIONS(43), 1,
      sym_natural_number,
    STATE(39), 1,
      sym__stringish_value,
    ACTIONS(45), 3,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [15] = 4,
    ACTIONS(43), 1,
      sym_natural_number,
    ACTIONS(47), 1,
      sym_no_quote_string,
    STATE(42), 1,
      sym__stringish_value,
    ACTIONS(49), 3,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [30] = 4,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 1,
      sym_mana_symbol,
    STATE(7), 1,
      aux_sym_mana_cost_repeat1,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [44] = 4,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    ACTIONS(62), 1,
      sym_mana_symbol,
    STATE(7), 1,
      aux_sym_mana_cost_repeat1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [58] = 2,
    STATE(16), 1,
      sym__stringish_value,
    ACTIONS(64), 4,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [68] = 2,
    STATE(29), 1,
      sym__stringish_value,
    ACTIONS(66), 4,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [78] = 2,
    STATE(40), 1,
      sym__stringish_value,
    ACTIONS(68), 4,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [88] = 2,
    STATE(30), 1,
      sym__string_value,
    ACTIONS(70), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [97] = 4,
    ACTIONS(72), 1,
      aux_sym_mana_cost_token1,
    ACTIONS(74), 1,
      sym_mana_symbol,
    STATE(8), 1,
      aux_sym_mana_cost_repeat1,
    STATE(46), 1,
      sym_mana_cost,
  [110] = 2,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [118] = 2,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [126] = 2,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [134] = 2,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [142] = 2,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [150] = 2,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [158] = 2,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [166] = 2,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [174] = 2,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [182] = 3,
    ACTIONS(112), 1,
      sym_number_operator,
    ACTIONS(114), 1,
      sym_equal_operator,
    STATE(73), 1,
      sym__num_or_equal_operator,
  [192] = 3,
    ACTIONS(116), 1,
      sym_number_operator,
    ACTIONS(118), 1,
      sym_equal_operator,
    STATE(74), 1,
      sym__num_or_equal_operator,
  [202] = 3,
    ACTIONS(120), 1,
      sym_number_operator,
    ACTIONS(122), 1,
      sym_equal_operator,
    STATE(13), 1,
      sym__num_or_equal_operator,
  [212] = 3,
    ACTIONS(124), 1,
      sym_number_operator,
    ACTIONS(126), 1,
      sym_equal_operator,
    STATE(48), 1,
      sym__num_or_equal_operator,
  [222] = 3,
    ACTIONS(128), 1,
      sym_number_operator,
    ACTIONS(130), 1,
      sym_equal_operator,
    STATE(79), 1,
      sym__num_or_equal_operator,
  [232] = 3,
    ACTIONS(132), 1,
      sym_number_operator,
    ACTIONS(134), 1,
      sym_equal_operator,
    STATE(83), 1,
      sym__num_or_equal_operator,
  [242] = 2,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [250] = 2,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [258] = 2,
    STATE(62), 1,
      sym__num_or_equal_operator,
    ACTIONS(144), 2,
      sym_number_operator,
      sym_equal_operator,
  [266] = 2,
    STATE(56), 1,
      sym__num_or_equal_operator,
    ACTIONS(146), 2,
      sym_number_operator,
      sym_equal_operator,
  [274] = 2,
    STATE(75), 1,
      sym__num_or_equal_operator,
    ACTIONS(148), 2,
      sym_number_operator,
      sym_equal_operator,
  [282] = 2,
    STATE(85), 1,
      sym__num_or_equal_operator,
    ACTIONS(150), 2,
      sym_number_operator,
      sym_equal_operator,
  [290] = 2,
    STATE(84), 1,
      sym__num_or_equal_operator,
    ACTIONS(152), 2,
      sym_number_operator,
      sym_equal_operator,
  [298] = 2,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [306] = 2,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [314] = 2,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [322] = 2,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [330] = 2,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [338] = 2,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [346] = 2,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [354] = 2,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [362] = 2,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [370] = 2,
    ACTIONS(178), 1,
      sym_regex,
    ACTIONS(180), 2,
      aux_sym_mana_cost_token1,
      sym_mana_symbol,
  [378] = 2,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [386] = 3,
    ACTIONS(43), 1,
      sym_natural_number,
    ACTIONS(180), 1,
      sym_positive_float,
    ACTIONS(186), 1,
      sym_odd_even,
  [396] = 3,
    ACTIONS(188), 1,
      sym_positive_float,
    ACTIONS(190), 1,
      sym_natural_number,
    STATE(43), 1,
      sym__number,
  [406] = 2,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [414] = 2,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [422] = 2,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [430] = 2,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [438] = 2,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [446] = 2,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [454] = 2,
    ACTIONS(180), 1,
      sym_color_count,
    ACTIONS(200), 1,
      sym_color_combination,
  [461] = 1,
    ACTIONS(202), 2,
      sym_power_value,
      sym_natural_number,
  [466] = 1,
    ACTIONS(204), 2,
      sym_number_operator,
      sym_equal_operator,
  [471] = 1,
    ACTIONS(206), 2,
      sym_number_operator,
      sym_equal_operator,
  [476] = 1,
    ACTIONS(208), 2,
      sym_number_operator,
      sym_equal_operator,
  [481] = 1,
    ACTIONS(210), 2,
      sym_number_operator,
      sym_equal_operator,
  [486] = 1,
    ACTIONS(212), 2,
      sym_number_operator,
      sym_equal_operator,
  [491] = 1,
    ACTIONS(214), 2,
      sym_toughness_value,
      sym_natural_number,
  [496] = 1,
    ACTIONS(216), 2,
      sym_number_operator,
      sym_equal_operator,
  [501] = 1,
    ACTIONS(218), 2,
      sym_number_operator,
      sym_equal_operator,
  [506] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      sym_bool_operator,
  [513] = 1,
    ACTIONS(224), 2,
      sym_number_operator,
      sym_equal_operator,
  [518] = 2,
    ACTIONS(222), 1,
      sym_bool_operator,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
  [525] = 1,
    ACTIONS(228), 2,
      sym_number_operator,
      sym_equal_operator,
  [530] = 1,
    ACTIONS(230), 2,
      sym_number_operator,
      sym_equal_operator,
  [535] = 1,
    ACTIONS(232), 2,
      sym_number_operator,
      sym_equal_operator,
  [540] = 2,
    ACTIONS(180), 1,
      sym_color_count,
    ACTIONS(234), 1,
      sym_color_combination,
  [547] = 1,
    ACTIONS(236), 1,
      sym_equal_operator,
  [551] = 1,
    ACTIONS(238), 1,
      sym_color_count,
  [555] = 1,
    ACTIONS(240), 1,
      sym_color_count,
  [559] = 1,
    ACTIONS(242), 1,
      sym_natural_number,
  [563] = 1,
    ACTIONS(244), 1,
      sym_equal_operator,
  [567] = 1,
    ACTIONS(246), 1,
      sym_equal_operator,
  [571] = 1,
    ACTIONS(248), 1,
      sym_equal_operator,
  [575] = 1,
    ACTIONS(250), 1,
      sym_natural_number,
  [579] = 1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [583] = 1,
    ACTIONS(254), 1,
      sym_equal_operator,
  [587] = 1,
    ACTIONS(256), 1,
      sym_equal_operator,
  [591] = 1,
    ACTIONS(258), 1,
      sym_natural_number,
  [595] = 1,
    ACTIONS(260), 1,
      sym_natural_number,
  [599] = 1,
    ACTIONS(262), 1,
      sym_natural_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 15,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 44,
  [SMALL_STATE(9)] = 58,
  [SMALL_STATE(10)] = 68,
  [SMALL_STATE(11)] = 78,
  [SMALL_STATE(12)] = 88,
  [SMALL_STATE(13)] = 97,
  [SMALL_STATE(14)] = 110,
  [SMALL_STATE(15)] = 118,
  [SMALL_STATE(16)] = 126,
  [SMALL_STATE(17)] = 134,
  [SMALL_STATE(18)] = 142,
  [SMALL_STATE(19)] = 150,
  [SMALL_STATE(20)] = 158,
  [SMALL_STATE(21)] = 166,
  [SMALL_STATE(22)] = 174,
  [SMALL_STATE(23)] = 182,
  [SMALL_STATE(24)] = 192,
  [SMALL_STATE(25)] = 202,
  [SMALL_STATE(26)] = 212,
  [SMALL_STATE(27)] = 222,
  [SMALL_STATE(28)] = 232,
  [SMALL_STATE(29)] = 242,
  [SMALL_STATE(30)] = 250,
  [SMALL_STATE(31)] = 258,
  [SMALL_STATE(32)] = 266,
  [SMALL_STATE(33)] = 274,
  [SMALL_STATE(34)] = 282,
  [SMALL_STATE(35)] = 290,
  [SMALL_STATE(36)] = 298,
  [SMALL_STATE(37)] = 306,
  [SMALL_STATE(38)] = 314,
  [SMALL_STATE(39)] = 322,
  [SMALL_STATE(40)] = 330,
  [SMALL_STATE(41)] = 338,
  [SMALL_STATE(42)] = 346,
  [SMALL_STATE(43)] = 354,
  [SMALL_STATE(44)] = 362,
  [SMALL_STATE(45)] = 370,
  [SMALL_STATE(46)] = 378,
  [SMALL_STATE(47)] = 386,
  [SMALL_STATE(48)] = 396,
  [SMALL_STATE(49)] = 406,
  [SMALL_STATE(50)] = 414,
  [SMALL_STATE(51)] = 422,
  [SMALL_STATE(52)] = 430,
  [SMALL_STATE(53)] = 438,
  [SMALL_STATE(54)] = 446,
  [SMALL_STATE(55)] = 454,
  [SMALL_STATE(56)] = 461,
  [SMALL_STATE(57)] = 466,
  [SMALL_STATE(58)] = 471,
  [SMALL_STATE(59)] = 476,
  [SMALL_STATE(60)] = 481,
  [SMALL_STATE(61)] = 486,
  [SMALL_STATE(62)] = 491,
  [SMALL_STATE(63)] = 496,
  [SMALL_STATE(64)] = 501,
  [SMALL_STATE(65)] = 506,
  [SMALL_STATE(66)] = 513,
  [SMALL_STATE(67)] = 518,
  [SMALL_STATE(68)] = 525,
  [SMALL_STATE(69)] = 530,
  [SMALL_STATE(70)] = 535,
  [SMALL_STATE(71)] = 540,
  [SMALL_STATE(72)] = 547,
  [SMALL_STATE(73)] = 551,
  [SMALL_STATE(74)] = 555,
  [SMALL_STATE(75)] = 559,
  [SMALL_STATE(76)] = 563,
  [SMALL_STATE(77)] = 567,
  [SMALL_STATE(78)] = 571,
  [SMALL_STATE(79)] = 575,
  [SMALL_STATE(80)] = 579,
  [SMALL_STATE(81)] = 583,
  [SMALL_STATE(82)] = 587,
  [SMALL_STATE(83)] = 591,
  [SMALL_STATE(84)] = 595,
  [SMALL_STATE(85)] = 599,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__num_or_equal_operator, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mana_cost_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mana_cost_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mana_cost_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mana_cost, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mana_cost, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_condition, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_condition, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_identity_condition, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_identity_condition, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_condition, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_condition, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defense_condition, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defense_condition, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loyalty_condition, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loyalty_condition, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pow_tou_condition, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pow_tou_condition, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toughness_condition, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_toughness_condition, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_power_condition, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_power_condition, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_statement, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_statement, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_condition, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_condition, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_condition, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_condition, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_oracle_condition, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_oracle_condition, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_name_condition, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact_name_condition, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_statement, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_statement, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_name_condition, 2, 0, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact_name_condition, 2, 0, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_condition, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oracle_condition, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmc_condition, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmc_condition, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__num_or_equal_operator, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mana_condition, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mana_condition, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_statement, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_statement, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_filter, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pow_tou_filter, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loyalty_filter, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_filter, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_oracle_filter, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmc_filter, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defense_filter, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toughness_filter, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_power_filter, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_filter, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mana_filter, 1, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_filter, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [252] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_filter, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_filter, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
