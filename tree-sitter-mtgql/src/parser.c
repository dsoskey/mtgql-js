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
#define STATE_COUNT 225
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 221
#define ALIAS_COUNT 0
#define TOKEN_COUNT 125
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_no_quote_string = 1,
  anon_sym_DASH = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym_identity_condition = 5,
  anon_sym_c = 6,
  anon_sym_color = 7,
  anon_sym_id = 8,
  anon_sym_ci = 9,
  anon_sym_commander = 10,
  anon_sym_identity = 11,
  anon_sym_mana = 12,
  anon_sym_m = 13,
  anon_sym_cmc = 14,
  anon_sym_mv = 15,
  anon_sym_manavalue = 16,
  anon_sym_oracle = 17,
  anon_sym_o = 18,
  anon_sym_text = 19,
  anon_sym_fo = 20,
  anon_sym_kw = 21,
  anon_sym_keyword = 22,
  sym_keyword_count_filter = 23,
  anon_sym_t = 24,
  anon_sym_type = 25,
  anon_sym_pow = 26,
  anon_sym_power = 27,
  sym_toughness_value = 28,
  anon_sym_tou = 29,
  anon_sym_toughness = 30,
  sym_power_value = 31,
  anon_sym_pt = 32,
  anon_sym_powtou = 33,
  anon_sym_loyalty = 34,
  anon_sym_loy = 35,
  anon_sym_defense = 36,
  anon_sym_def = 37,
  sym_layout_filter = 38,
  anon_sym_format = 39,
  anon_sym_f = 40,
  sym_banned_filter = 41,
  sym_restricted_filter = 42,
  anon_sym_is = 43,
  anon_sym_has = 44,
  sym_not_filter = 45,
  sym_print_count_filter = 46,
  sym_paper_print_count_filter = 47,
  sym_in_filter = 48,
  sym_produces_filter = 49,
  sym_devotion_filter = 50,
  anon_sym_PLUS_PLUS = 51,
  anon_sym_AT_AT = 52,
  sym_unique_filter = 53,
  sym_unique_value = 54,
  sym_order_filter = 55,
  sym_order_value = 56,
  sym_direction_filter = 57,
  sym_direction_value = 58,
  anon_sym_r = 59,
  anon_sym_rarity = 60,
  sym_rarity_value = 61,
  anon_sym_s = 62,
  anon_sym_set = 63,
  anon_sym_e = 64,
  anon_sym_edition = 65,
  sym_set_type_filter = 66,
  anon_sym_b = 67,
  anon_sym_block = 68,
  anon_sym_a = 69,
  anon_sym_artist = 70,
  anon_sym_cn = 71,
  anon_sym_number = 72,
  sym_border_filter = 73,
  anon_sym_year = 74,
  anon_sym_date = 75,
  sym_frame_filter = 76,
  anon_sym_ft = 77,
  anon_sym_flavor = 78,
  sym_game_filter = 79,
  anon_sym_lang = 80,
  anon_sym_language = 81,
  sym_stamp_filter = 82,
  anon_sym_wm = 83,
  anon_sym_watermark = 84,
  sym_new_filter = 85,
  sym_new_value = 86,
  sym_prefer_filter = 87,
  sym_prefer_value = 88,
  anon_sym_cube = 89,
  anon_sym_ctag = 90,
  anon_sym_tag = 91,
  anon_sym_cube_PLUS = 92,
  anon_sym_ctag_PLUS = 93,
  anon_sym_tag_PLUS = 94,
  anon_sym_otag = 95,
  anon_sym_function = 96,
  anon_sym_oracletag = 97,
  anon_sym_atag = 98,
  anon_sym_arttag = 99,
  anon_sym_art = 100,
  sym_collection_filter = 101,
  sym_scryfall_id_filter = 102,
  sym_oracle_id_filter = 103,
  anon_sym_BANG = 104,
  anon_sym_name = 105,
  anon_sym_n = 106,
  sym_bool_operator = 107,
  sym_number_operator = 108,
  sym_equal_operator = 109,
  sym_color_combination = 110,
  sym_color_count = 111,
  sym_produces_combination = 112,
  sym_produces_count = 113,
  aux_sym_mana_cost_token1 = 114,
  sym_mana_symbol = 115,
  sym_format_value = 116,
  sym_is_value = 117,
  sym_odd_even = 118,
  sym_positive_float = 119,
  sym_natural_number = 120,
  sym_uuid = 121,
  sym_single_quote_string = 122,
  sym_double_quote_string = 123,
  sym_regex = 124,
  sym_query = 125,
  sym__filter = 126,
  sym_unary_statement = 127,
  sym_bool_statement = 128,
  sym_parentheses = 129,
  sym__condition = 130,
  sym_color_condition = 131,
  sym_color_filter = 132,
  sym_color_identity_condition = 133,
  sym_identity_filter = 134,
  sym_mana_condition = 135,
  sym_mana_filter = 136,
  sym_cmc_condition = 137,
  sym_cmc_filter = 138,
  sym_oracle_condition = 139,
  sym_oracle_filter = 140,
  sym_full_oracle_condition = 141,
  sym_full_oracle_filter = 142,
  sym_keyword_condition = 143,
  sym_keyword_filter = 144,
  sym_keyword_count_condition = 145,
  sym_type_condition = 146,
  sym_type_filter = 147,
  sym_power_condition = 148,
  sym_power_filter = 149,
  sym_toughness_condition = 150,
  sym_toughness_filter = 151,
  sym_pow_tou_condition = 152,
  sym_pow_tou_filter = 153,
  sym_loyalty_condition = 154,
  sym_loyalty_filter = 155,
  sym_defense_condition = 156,
  sym_defense_filter = 157,
  sym_layout_condition = 158,
  sym_format_condition = 159,
  sym_format_filter = 160,
  sym_banned_condition = 161,
  sym_restricted_condition = 162,
  sym_is_condition = 163,
  sym_is_filter = 164,
  sym_not_condition = 165,
  sym_print_count_condition = 166,
  sym_paper_print_count_condition = 167,
  sym_in_condition = 168,
  sym_produces_condition = 169,
  sym_devotion_condition = 170,
  sym_unique_condition = 171,
  sym_unique_symbol = 172,
  sym_order_condition = 173,
  sym_direction_condition = 174,
  sym_rarity_condition = 175,
  sym_rarity_filter = 176,
  sym_set_condition = 177,
  sym_set_filter = 178,
  sym_set_type_condition = 179,
  sym_block_condition = 180,
  sym_block_filter = 181,
  sym_artist_condition = 182,
  sym_artist_filter = 183,
  sym_collector_number_condition = 184,
  sym_collector_number_filter = 185,
  sym_border_condition = 186,
  sym_date_condition = 187,
  sym_date_filter = 188,
  sym_price_condition = 189,
  sym_frame_condition = 190,
  sym_flavor_condition = 191,
  sym_flavor_filter = 192,
  sym_game_condition = 193,
  sym_language_condition = 194,
  sym_language_filter = 195,
  sym_stamp_condition = 196,
  sym_watermark_condition = 197,
  sym_watermark_filter = 198,
  sym_new_condition = 199,
  sym_prefer_condition = 200,
  sym_cube_oracle_condition = 201,
  sym_cube_oracle_filter = 202,
  sym_cube_print_condition = 203,
  sym_cube_print_filter = 204,
  sym_oracle_tag_condition = 205,
  sym_oracle_tag_filter = 206,
  sym_art_tag_condition = 207,
  sym_art_tag_filter = 208,
  sym_collection_condition = 209,
  sym_scryfall_id_condition = 210,
  sym_oracle_id_condition = 211,
  sym_exact_name_condition = 212,
  sym_name_condition = 213,
  sym_name_filter = 214,
  sym__num_or_equal_operator = 215,
  sym_mana_cost = 216,
  sym__number = 217,
  sym__string_value = 218,
  sym__stringish_value = 219,
  aux_sym_mana_cost_repeat1 = 220,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_no_quote_string] = "no_quote_string",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identity_condition] = "identity_condition",
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
  [sym_keyword_count_filter] = "keyword_count_filter",
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
  [sym_layout_filter] = "layout_filter",
  [anon_sym_format] = "format",
  [anon_sym_f] = "f",
  [sym_banned_filter] = "banned_filter",
  [sym_restricted_filter] = "restricted_filter",
  [anon_sym_is] = "is",
  [anon_sym_has] = "has",
  [sym_not_filter] = "not_filter",
  [sym_print_count_filter] = "print_count_filter",
  [sym_paper_print_count_filter] = "paper_print_count_filter",
  [sym_in_filter] = "in_filter",
  [sym_produces_filter] = "produces_filter",
  [sym_devotion_filter] = "devotion_filter",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_AT_AT] = "@@",
  [sym_unique_filter] = "unique_filter",
  [sym_unique_value] = "unique_value",
  [sym_order_filter] = "order_filter",
  [sym_order_value] = "order_value",
  [sym_direction_filter] = "direction_filter",
  [sym_direction_value] = "direction_value",
  [anon_sym_r] = "r",
  [anon_sym_rarity] = "rarity",
  [sym_rarity_value] = "rarity_value",
  [anon_sym_s] = "s",
  [anon_sym_set] = "set",
  [anon_sym_e] = "e",
  [anon_sym_edition] = "edition",
  [sym_set_type_filter] = "set_type_filter",
  [anon_sym_b] = "b",
  [anon_sym_block] = "block",
  [anon_sym_a] = "a",
  [anon_sym_artist] = "artist",
  [anon_sym_cn] = "cn",
  [anon_sym_number] = "number",
  [sym_border_filter] = "border_filter",
  [anon_sym_year] = "year",
  [anon_sym_date] = "date",
  [sym_frame_filter] = "frame_filter",
  [anon_sym_ft] = "ft",
  [anon_sym_flavor] = "flavor",
  [sym_game_filter] = "game_filter",
  [anon_sym_lang] = "lang",
  [anon_sym_language] = "language",
  [sym_stamp_filter] = "stamp_filter",
  [anon_sym_wm] = "wm",
  [anon_sym_watermark] = "watermark",
  [sym_new_filter] = "new_filter",
  [sym_new_value] = "new_value",
  [sym_prefer_filter] = "prefer_filter",
  [sym_prefer_value] = "prefer_value",
  [anon_sym_cube] = "cube",
  [anon_sym_ctag] = "ctag",
  [anon_sym_tag] = "tag",
  [anon_sym_cube_PLUS] = "cube+",
  [anon_sym_ctag_PLUS] = "ctag+",
  [anon_sym_tag_PLUS] = "tag+",
  [anon_sym_otag] = "otag",
  [anon_sym_function] = "function",
  [anon_sym_oracletag] = "oracletag",
  [anon_sym_atag] = "atag",
  [anon_sym_arttag] = "arttag",
  [anon_sym_art] = "art",
  [sym_collection_filter] = "collection_filter",
  [sym_scryfall_id_filter] = "scryfall_id_filter",
  [sym_oracle_id_filter] = "oracle_id_filter",
  [anon_sym_BANG] = "!",
  [anon_sym_name] = "name",
  [anon_sym_n] = "n",
  [sym_bool_operator] = "bool_operator",
  [sym_number_operator] = "number_operator",
  [sym_equal_operator] = "equal_operator",
  [sym_color_combination] = "color_combination",
  [sym_color_count] = "color_count",
  [sym_produces_combination] = "produces_combination",
  [sym_produces_count] = "produces_count",
  [aux_sym_mana_cost_token1] = "mana_cost_token1",
  [sym_mana_symbol] = "mana_symbol",
  [sym_format_value] = "format_value",
  [sym_is_value] = "is_value",
  [sym_odd_even] = "odd_even",
  [sym_positive_float] = "positive_float",
  [sym_natural_number] = "natural_number",
  [sym_uuid] = "uuid",
  [sym_single_quote_string] = "single_quote_string",
  [sym_double_quote_string] = "double_quote_string",
  [sym_regex] = "regex",
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
  [sym_keyword_count_condition] = "keyword_count_condition",
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
  [sym_layout_condition] = "layout_condition",
  [sym_format_condition] = "format_condition",
  [sym_format_filter] = "format_filter",
  [sym_banned_condition] = "banned_condition",
  [sym_restricted_condition] = "restricted_condition",
  [sym_is_condition] = "is_condition",
  [sym_is_filter] = "is_filter",
  [sym_not_condition] = "not_condition",
  [sym_print_count_condition] = "print_count_condition",
  [sym_paper_print_count_condition] = "paper_print_count_condition",
  [sym_in_condition] = "in_condition",
  [sym_produces_condition] = "produces_condition",
  [sym_devotion_condition] = "devotion_condition",
  [sym_unique_condition] = "unique_condition",
  [sym_unique_symbol] = "unique_symbol",
  [sym_order_condition] = "order_condition",
  [sym_direction_condition] = "direction_condition",
  [sym_rarity_condition] = "rarity_condition",
  [sym_rarity_filter] = "rarity_filter",
  [sym_set_condition] = "set_condition",
  [sym_set_filter] = "set_filter",
  [sym_set_type_condition] = "set_type_condition",
  [sym_block_condition] = "block_condition",
  [sym_block_filter] = "block_filter",
  [sym_artist_condition] = "artist_condition",
  [sym_artist_filter] = "artist_filter",
  [sym_collector_number_condition] = "collector_number_condition",
  [sym_collector_number_filter] = "collector_number_filter",
  [sym_border_condition] = "border_condition",
  [sym_date_condition] = "date_condition",
  [sym_date_filter] = "date_filter",
  [sym_price_condition] = "price_condition",
  [sym_frame_condition] = "frame_condition",
  [sym_flavor_condition] = "flavor_condition",
  [sym_flavor_filter] = "flavor_filter",
  [sym_game_condition] = "game_condition",
  [sym_language_condition] = "language_condition",
  [sym_language_filter] = "language_filter",
  [sym_stamp_condition] = "stamp_condition",
  [sym_watermark_condition] = "watermark_condition",
  [sym_watermark_filter] = "watermark_filter",
  [sym_new_condition] = "new_condition",
  [sym_prefer_condition] = "prefer_condition",
  [sym_cube_oracle_condition] = "cube_oracle_condition",
  [sym_cube_oracle_filter] = "cube_oracle_filter",
  [sym_cube_print_condition] = "cube_print_condition",
  [sym_cube_print_filter] = "cube_print_filter",
  [sym_oracle_tag_condition] = "oracle_tag_condition",
  [sym_oracle_tag_filter] = "oracle_tag_filter",
  [sym_art_tag_condition] = "art_tag_condition",
  [sym_art_tag_filter] = "art_tag_filter",
  [sym_collection_condition] = "collection_condition",
  [sym_scryfall_id_condition] = "scryfall_id_condition",
  [sym_oracle_id_condition] = "oracle_id_condition",
  [sym_exact_name_condition] = "exact_name_condition",
  [sym_name_condition] = "name_condition",
  [sym_name_filter] = "name_filter",
  [sym__num_or_equal_operator] = "_num_or_equal_operator",
  [sym_mana_cost] = "mana_cost",
  [sym__number] = "_number",
  [sym__string_value] = "_string_value",
  [sym__stringish_value] = "_stringish_value",
  [aux_sym_mana_cost_repeat1] = "mana_cost_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_no_quote_string] = sym_no_quote_string,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identity_condition] = sym_identity_condition,
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
  [sym_keyword_count_filter] = sym_keyword_count_filter,
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
  [sym_layout_filter] = sym_layout_filter,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_f] = anon_sym_f,
  [sym_banned_filter] = sym_banned_filter,
  [sym_restricted_filter] = sym_restricted_filter,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_has] = anon_sym_has,
  [sym_not_filter] = sym_not_filter,
  [sym_print_count_filter] = sym_print_count_filter,
  [sym_paper_print_count_filter] = sym_paper_print_count_filter,
  [sym_in_filter] = sym_in_filter,
  [sym_produces_filter] = sym_produces_filter,
  [sym_devotion_filter] = sym_devotion_filter,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [sym_unique_filter] = sym_unique_filter,
  [sym_unique_value] = sym_unique_value,
  [sym_order_filter] = sym_order_filter,
  [sym_order_value] = sym_order_value,
  [sym_direction_filter] = sym_direction_filter,
  [sym_direction_value] = sym_direction_value,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_rarity] = anon_sym_rarity,
  [sym_rarity_value] = sym_rarity_value,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_edition] = anon_sym_edition,
  [sym_set_type_filter] = sym_set_type_filter,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_artist] = anon_sym_artist,
  [anon_sym_cn] = anon_sym_cn,
  [anon_sym_number] = anon_sym_number,
  [sym_border_filter] = sym_border_filter,
  [anon_sym_year] = anon_sym_year,
  [anon_sym_date] = anon_sym_date,
  [sym_frame_filter] = sym_frame_filter,
  [anon_sym_ft] = anon_sym_ft,
  [anon_sym_flavor] = anon_sym_flavor,
  [sym_game_filter] = sym_game_filter,
  [anon_sym_lang] = anon_sym_lang,
  [anon_sym_language] = anon_sym_language,
  [sym_stamp_filter] = sym_stamp_filter,
  [anon_sym_wm] = anon_sym_wm,
  [anon_sym_watermark] = anon_sym_watermark,
  [sym_new_filter] = sym_new_filter,
  [sym_new_value] = sym_new_value,
  [sym_prefer_filter] = sym_prefer_filter,
  [sym_prefer_value] = sym_prefer_value,
  [anon_sym_cube] = anon_sym_cube,
  [anon_sym_ctag] = anon_sym_ctag,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_cube_PLUS] = anon_sym_cube_PLUS,
  [anon_sym_ctag_PLUS] = anon_sym_ctag_PLUS,
  [anon_sym_tag_PLUS] = anon_sym_tag_PLUS,
  [anon_sym_otag] = anon_sym_otag,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_oracletag] = anon_sym_oracletag,
  [anon_sym_atag] = anon_sym_atag,
  [anon_sym_arttag] = anon_sym_arttag,
  [anon_sym_art] = anon_sym_art,
  [sym_collection_filter] = sym_collection_filter,
  [sym_scryfall_id_filter] = sym_scryfall_id_filter,
  [sym_oracle_id_filter] = sym_oracle_id_filter,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_n] = anon_sym_n,
  [sym_bool_operator] = sym_bool_operator,
  [sym_number_operator] = sym_number_operator,
  [sym_equal_operator] = sym_equal_operator,
  [sym_color_combination] = sym_color_combination,
  [sym_color_count] = sym_color_count,
  [sym_produces_combination] = sym_produces_combination,
  [sym_produces_count] = sym_produces_count,
  [aux_sym_mana_cost_token1] = aux_sym_mana_cost_token1,
  [sym_mana_symbol] = sym_mana_symbol,
  [sym_format_value] = sym_format_value,
  [sym_is_value] = sym_is_value,
  [sym_odd_even] = sym_odd_even,
  [sym_positive_float] = sym_positive_float,
  [sym_natural_number] = sym_natural_number,
  [sym_uuid] = sym_uuid,
  [sym_single_quote_string] = sym_single_quote_string,
  [sym_double_quote_string] = sym_double_quote_string,
  [sym_regex] = sym_regex,
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
  [sym_keyword_count_condition] = sym_keyword_count_condition,
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
  [sym_layout_condition] = sym_layout_condition,
  [sym_format_condition] = sym_format_condition,
  [sym_format_filter] = sym_format_filter,
  [sym_banned_condition] = sym_banned_condition,
  [sym_restricted_condition] = sym_restricted_condition,
  [sym_is_condition] = sym_is_condition,
  [sym_is_filter] = sym_is_filter,
  [sym_not_condition] = sym_not_condition,
  [sym_print_count_condition] = sym_print_count_condition,
  [sym_paper_print_count_condition] = sym_paper_print_count_condition,
  [sym_in_condition] = sym_in_condition,
  [sym_produces_condition] = sym_produces_condition,
  [sym_devotion_condition] = sym_devotion_condition,
  [sym_unique_condition] = sym_unique_condition,
  [sym_unique_symbol] = sym_unique_symbol,
  [sym_order_condition] = sym_order_condition,
  [sym_direction_condition] = sym_direction_condition,
  [sym_rarity_condition] = sym_rarity_condition,
  [sym_rarity_filter] = sym_rarity_filter,
  [sym_set_condition] = sym_set_condition,
  [sym_set_filter] = sym_set_filter,
  [sym_set_type_condition] = sym_set_type_condition,
  [sym_block_condition] = sym_block_condition,
  [sym_block_filter] = sym_block_filter,
  [sym_artist_condition] = sym_artist_condition,
  [sym_artist_filter] = sym_artist_filter,
  [sym_collector_number_condition] = sym_collector_number_condition,
  [sym_collector_number_filter] = sym_collector_number_filter,
  [sym_border_condition] = sym_border_condition,
  [sym_date_condition] = sym_date_condition,
  [sym_date_filter] = sym_date_filter,
  [sym_price_condition] = sym_price_condition,
  [sym_frame_condition] = sym_frame_condition,
  [sym_flavor_condition] = sym_flavor_condition,
  [sym_flavor_filter] = sym_flavor_filter,
  [sym_game_condition] = sym_game_condition,
  [sym_language_condition] = sym_language_condition,
  [sym_language_filter] = sym_language_filter,
  [sym_stamp_condition] = sym_stamp_condition,
  [sym_watermark_condition] = sym_watermark_condition,
  [sym_watermark_filter] = sym_watermark_filter,
  [sym_new_condition] = sym_new_condition,
  [sym_prefer_condition] = sym_prefer_condition,
  [sym_cube_oracle_condition] = sym_cube_oracle_condition,
  [sym_cube_oracle_filter] = sym_cube_oracle_filter,
  [sym_cube_print_condition] = sym_cube_print_condition,
  [sym_cube_print_filter] = sym_cube_print_filter,
  [sym_oracle_tag_condition] = sym_oracle_tag_condition,
  [sym_oracle_tag_filter] = sym_oracle_tag_filter,
  [sym_art_tag_condition] = sym_art_tag_condition,
  [sym_art_tag_filter] = sym_art_tag_filter,
  [sym_collection_condition] = sym_collection_condition,
  [sym_scryfall_id_condition] = sym_scryfall_id_condition,
  [sym_oracle_id_condition] = sym_oracle_id_condition,
  [sym_exact_name_condition] = sym_exact_name_condition,
  [sym_name_condition] = sym_name_condition,
  [sym_name_filter] = sym_name_filter,
  [sym__num_or_equal_operator] = sym__num_or_equal_operator,
  [sym_mana_cost] = sym_mana_cost,
  [sym__number] = sym__number,
  [sym__string_value] = sym__string_value,
  [sym__stringish_value] = sym__stringish_value,
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
  [sym_identity_condition] = {
    .visible = true,
    .named = true,
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
  [sym_keyword_count_filter] = {
    .visible = true,
    .named = true,
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
  [sym_layout_filter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [sym_banned_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_restricted_filter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = false,
  },
  [sym_not_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_print_count_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_paper_print_count_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_in_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_produces_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_devotion_filter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_unique_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_unique_value] = {
    .visible = true,
    .named = true,
  },
  [sym_order_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_order_value] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rarity] = {
    .visible = true,
    .named = false,
  },
  [sym_rarity_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edition] = {
    .visible = true,
    .named = false,
  },
  [sym_set_type_filter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_artist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [sym_border_filter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [sym_frame_filter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flavor] = {
    .visible = true,
    .named = false,
  },
  [sym_game_filter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_language] = {
    .visible = true,
    .named = false,
  },
  [sym_stamp_filter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_wm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_watermark] = {
    .visible = true,
    .named = false,
  },
  [sym_new_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_new_value] = {
    .visible = true,
    .named = true,
  },
  [sym_prefer_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_prefer_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cube] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cube_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctag_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_otag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oracletag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arttag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_art] = {
    .visible = true,
    .named = false,
  },
  [sym_collection_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_scryfall_id_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_oracle_id_filter] = {
    .visible = true,
    .named = true,
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
  [sym_color_combination] = {
    .visible = true,
    .named = true,
  },
  [sym_color_count] = {
    .visible = true,
    .named = true,
  },
  [sym_produces_combination] = {
    .visible = true,
    .named = true,
  },
  [sym_produces_count] = {
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
  [sym_format_value] = {
    .visible = true,
    .named = true,
  },
  [sym_is_value] = {
    .visible = true,
    .named = true,
  },
  [sym_odd_even] = {
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
  [sym_uuid] = {
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
  [sym_keyword_count_condition] = {
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
  [sym_layout_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_format_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_format_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_banned_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_restricted_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_is_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_is_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_not_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_print_count_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_paper_print_count_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_in_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_produces_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_devotion_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_unique_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_unique_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_order_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_rarity_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_rarity_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_set_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_set_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_set_type_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_block_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_block_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_artist_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_artist_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_collector_number_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_collector_number_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_border_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_date_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_date_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_price_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_frame_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_flavor_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_flavor_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_game_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_language_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_language_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_stamp_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_watermark_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_watermark_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_new_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_prefer_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_cube_oracle_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_cube_oracle_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_cube_print_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_cube_print_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_oracle_tag_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_oracle_tag_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_art_tag_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_art_tag_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_scryfall_id_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_oracle_id_condition] = {
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
  [sym_mana_cost] = {
    .visible = true,
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
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
};

static TSCharacterRange sym_produces_combination_character_set_5[] = {
  {'B', 'C'}, {'G', 'G'}, {'R', 'R'}, {'U', 'U'}, {'W', 'W'}, {'b', 'c'}, {'g', 'g'}, {'r', 'r'},
  {'u', 'u'}, {'w', 'w'},
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
      if (eof) ADVANCE(1448);
      ADVANCE_MAP(
        '!', 1675,
        '"', 5,
        '\'', 6,
        '(', 1450,
        ')', 1451,
        '*', 1452,
        '+', 7,
        '-', 1449,
        '/', 13,
        '6', 1747,
        '<', 1685,
        '>', 1684,
        '@', 19,
        'A', 2229,
        'B', 1698,
        'C', 1699,
        'D', 2153,
        'E', 2277,
        'F', 2140,
        'G', 1700,
        'H', 2141,
        'I', 2612,
        'K', 2154,
        'L', 2142,
        'M', 2143,
        'N', 2144,
        'O', 2167,
        'P', 2145,
        'R', 1701,
        'S', 1762,
        'T', 2204,
        'U', 1707,
        'W', 1706,
        '_', 3008,
        'a', 1593,
        'b', 1588,
        'c', 1453,
        'd', 1832,
        'e', 1580,
        'f', 1532,
        'g', 1689,
        'h', 1829,
        'i', 1871,
        'k', 1852,
        'l', 1830,
        'm', 1470,
        'n', 1678,
        'o', 1481,
        'p', 1831,
        'r', 1569,
        's', 1574,
        't', 1496,
        'u', 1697,
        'w', 1690,
        'y', 1760,
        '{', 17,
        ':', 1686,
        '=', 1686,
        'J', 2317,
        'j', 2317,
        'Q', 2915,
        'q', 2915,
        'V', 2155,
        'v', 2155,
        'Z', 1764,
        'z', 1764,
        'X', 1781,
        'Y', 1781,
        'x', 1781,
      );
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1750);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1447);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1722);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1681);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 1674,
        '"', 5,
        '\'', 6,
        '(', 1450,
        '*', 1452,
        '+', 7,
        '-', 1449,
        '/', 13,
        '@', 19,
        'a', 1595,
        'b', 1590,
        'c', 1454,
        'd', 1933,
        'e', 1582,
        'f', 1534,
        'g', 1921,
        'h', 1926,
        'i', 1946,
        'k', 1974,
        'l', 1915,
        'm', 1472,
        'n', 1680,
        'o', 1483,
        'p', 1932,
        'r', 1571,
        's', 1576,
        't', 1498,
        'u', 2040,
        'w', 1929,
        'y', 1970,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 1674,
        '(', 1450,
        '*', 1452,
        '+', 7,
        '-', 1449,
        '@', 19,
        'a', 1594,
        'b', 1589,
        'c', 1455,
        'd', 29,
        'e', 1581,
        'f', 1533,
        'g', 23,
        'h', 24,
        'i', 55,
        'k', 65,
        'l', 25,
        'm', 1471,
        'n', 1679,
        'o', 1482,
        'p', 26,
        'r', 1570,
        's', 1575,
        't', 1497,
        'u', 140,
        'w', 43,
        'y', 82,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '/') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(3010);
      if (lookahead == '\\') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(3009);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(1556);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(1423);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(1429);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(1435);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(1441);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '{') ADVANCE(17);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1782);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(3011);
      if (lookahead == '\\') ADVANCE(1444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(1443);
      if (lookahead == '}') ADVANCE(1783);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(1443);
      if (lookahead == '}') ADVANCE(1783);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(1442);
      if (lookahead == '}') ADVANCE(1783);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(15);
      if (('X' <= lookahead && lookahead <= 'Z') ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (set_contains(sym_mana_symbol_character_set_2, 13, lookahead)) ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(1683);
      END_STATE();
    case 19:
      if (lookahead == '@') ADVANCE(1557);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        'A', 1124,
        'C', 864,
        'E', 448,
        'a', 1125,
        'c', 865,
        'e', 21,
        'M', 1342,
        'm', 1342,
        'N', 356,
        'n', 356,
        'P', 561,
        'p', 561,
        'R', 362,
        'r', 362,
        'S', 557,
        's', 557,
        'T', 696,
        't', 696,
        'U', 1192,
        'u', 1192,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1431);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(677);
      if (lookahead == 'd') ADVANCE(678);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1425);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        'P', 249,
        'T', 680,
        'p', 156,
        't', 158,
        'A', 1066,
        'a', 1066,
        'B', 1078,
        'b', 1078,
        'C', 974,
        'c', 974,
        'D', 1314,
        'd', 1314,
        'E', 1343,
        'e', 1343,
        'F', 792,
        'f', 792,
        'G', 330,
        'g', 330,
        'H', 681,
        'h', 681,
        'L', 270,
        'l', 270,
        'M', 968,
        'm', 968,
        'N', 976,
        'n', 976,
        'O', 442,
        'o', 442,
        'R', 274,
        'r', 274,
        'S', 1246,
        's', 1246,
        'V', 692,
        'v', 692,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1821);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 't') ADVANCE(1515);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(1469);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'm') ADVANCE(1628);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(1473);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(1460);
      if (lookahead == 'n') ADVANCE(1549);
      if (lookahead == 's') ADVANCE(1539);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(1535);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(1493);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(1672);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(1537);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(1670);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'w') ADVANCE(1490);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(1646);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(1607);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(1617);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(1676);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(1499);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(1610);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(1480);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(1558);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(1523);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(1477);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(1526);
      if (lookahead == 'v') ADVANCE(166);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(1650);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(1661);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(1648);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(1621);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(1655);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(1663);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(1659);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(150);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(152);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 118:
      if (lookahead == 'k') ADVANCE(1591);
      END_STATE();
    case 119:
      if (lookahead == 'k') ADVANCE(1630);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(1583);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(1554);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(1657);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(1567);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(1668);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1044);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(904);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(985);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(872);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(1625);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 171:
      if (lookahead == 'q') ADVANCE(230);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(1605);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(1456);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(1560);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(1504);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(1603);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(1614);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(1601);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(1644);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(1463);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(1513);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(1541);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(1545);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(1552);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(1511);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(1547);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(1506);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(1666);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(1543);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(1577);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(1484);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(1596);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(1530);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(1528);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(1509);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(1517);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(1507);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 233:
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 234:
      if (lookahead == 'w') ADVANCE(1632);
      END_STATE();
    case 235:
      if (lookahead == 'w') ADVANCE(1502);
      END_STATE();
    case 236:
      if (lookahead == 'w') ADVANCE(1514);
      END_STATE();
    case 237:
      if (lookahead == 'w') ADVANCE(165);
      END_STATE();
    case 238:
      if (lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 239:
      if (lookahead == 'y') ADVANCE(1522);
      END_STATE();
    case 240:
      if (lookahead == 'y') ADVANCE(1572);
      END_STATE();
    case 241:
      if (lookahead == 'y') ADVANCE(1519);
      END_STATE();
    case 242:
      if (lookahead == 'y') ADVANCE(1466);
      END_STATE();
    case 243:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 244:
      if (lookahead == 'y') ADVANCE(237);
      END_STATE();
    case 245:
      if (lookahead == '}') ADVANCE(1783);
      END_STATE();
    case 246:
      if (lookahead == '}') ADVANCE(1783);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 247:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(5);
      END_STATE();
    case 248:
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(6);
      END_STATE();
    case 249:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1044);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(904);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(985);
      END_STATE();
    case 250:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1359);
      END_STATE();
    case 251:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1634);
      END_STATE();
    case 252:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 253:
      ADVANCE_MAP(
        'A', 373,
        'a', 373,
        'B', 1705,
        'b', 1705,
        'C', 1702,
        'c', 1702,
        'D', 562,
        'd', 562,
        'E', 1217,
        'e', 1217,
        'F', 735,
        'f', 735,
        'G', 1717,
        'g', 1717,
        'I', 906,
        'i', 906,
        'J', 490,
        'j', 490,
        'K', 496,
        'k', 496,
        'L', 1023,
        'l', 1023,
        'M', 254,
        'm', 254,
        'N', 276,
        'n', 276,
        'O', 382,
        'o', 382,
        'P', 1086,
        'p', 1086,
        'Q', 1335,
        'q', 1335,
        'R', 1703,
        'r', 1703,
        'S', 275,
        's', 275,
        'T', 488,
        't', 488,
        'U', 1719,
        'u', 1719,
        'W', 1714,
        'w', 1714,
        'Z', 337,
        'z', 337,
      );
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1721);
      END_STATE();
    case 254:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(571);
      END_STATE();
    case 255:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1687);
      END_STATE();
    case 256:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1687);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(992);
      END_STATE();
    case 257:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1723);
      END_STATE();
    case 258:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1723);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(998);
      END_STATE();
    case 259:
      ADVANCE_MAP(
        'A', 472,
        'a', 472,
        'B', 260,
        'b', 260,
        'C', 261,
        'c', 261,
        'D', 340,
        'd', 340,
        'E', 880,
        'e', 880,
        'F', 357,
        'f', 357,
        'G', 263,
        'g', 263,
        'H', 345,
        'h', 345,
        'I', 897,
        'i', 897,
        'J', 1045,
        'j', 1045,
        'K', 307,
        'k', 307,
        'L', 479,
        'l', 479,
        'M', 264,
        'm', 264,
        'N', 480,
        'n', 480,
        'O', 309,
        'o', 309,
        'P', 265,
        'p', 265,
        'R', 481,
        'r', 481,
        'S', 401,
        's', 401,
        'T', 336,
        't', 336,
        'U', 376,
        'u', 376,
        'V', 271,
        'v', 271,
        'W', 312,
        'w', 312,
      );
      END_STATE();
    case 260:
      ADVANCE_MAP(
        'A', 406,
        'a', 406,
        'E', 311,
        'e', 311,
        'I', 407,
        'i', 407,
        'O', 915,
        'o', 915,
        'R', 331,
        'r', 331,
        'U', 917,
        'u', 917,
      );
      END_STATE();
    case 261:
      ADVANCE_MAP(
        'A', 898,
        'a', 898,
        'H', 513,
        'h', 513,
        'I', 1791,
        'i', 1791,
        'L', 353,
        'l', 353,
        'O', 830,
        'o', 830,
        'R', 524,
        'r', 524,
        'U', 1193,
        'u', 1193,
        'Y', 418,
        'y', 418,
      );
      END_STATE();
    case 262:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1791);
      END_STATE();
    case 263:
      ADVANCE_MAP(
        'A', 724,
        'a', 724,
        'I', 614,
        'i', 614,
        'L', 1032,
        'l', 1032,
        'O', 445,
        'o', 445,
      );
      END_STATE();
    case 264:
      ADVANCE_MAP(
        'A', 924,
        'a', 924,
        'D', 612,
        'd', 612,
        'E', 455,
        'e', 455,
        'O', 443,
        'o', 443,
        'T', 635,
        't', 635,
        'U', 808,
        'u', 808,
      );
      END_STATE();
    case 265:
      ADVANCE_MAP(
        'A', 725,
        'a', 725,
        'E', 1155,
        'e', 1155,
        'H', 1397,
        'h', 1397,
        'L', 267,
        'l', 267,
        'O', 1225,
        'o', 1225,
        'R', 482,
        'r', 482,
      );
      END_STATE();
    case 266:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 267:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 268:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(709);
      END_STATE();
    case 269:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1344);
      END_STATE();
    case 270:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(900);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 271:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(948);
      END_STATE();
    case 272:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(860);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1057);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1074);
      END_STATE();
    case 273:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1807);
      END_STATE();
    case 274:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1082);
      END_STATE();
    case 275:
      ADVANCE_MAP(
        'A', 1347,
        'a', 1347,
        'E', 802,
        'e', 802,
        'I', 826,
        'i', 826,
        'U', 827,
        'u', 827,
      );
      END_STATE();
    case 276:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 277:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 278:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 279:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 280:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(476);
      END_STATE();
    case 281:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1379);
      END_STATE();
    case 282:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1362);
      END_STATE();
    case 283:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1388);
      END_STATE();
    case 284:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(782);
      END_STATE();
    case 285:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1083);
      END_STATE();
    case 286:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(902);
      END_STATE();
    case 287:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(992);
      END_STATE();
    case 288:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(958);
      END_STATE();
    case 289:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1398);
      END_STATE();
    case 290:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(404);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(477);
      END_STATE();
    case 291:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1396);
      END_STATE();
    case 292:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(873);
      END_STATE();
    case 293:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1244);
      END_STATE();
    case 294:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(877);
      END_STATE();
    case 295:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(642);
      END_STATE();
    case 296:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(642);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(530);
      END_STATE();
    case 297:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(910);
      END_STATE();
    case 298:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(645);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1791);
      END_STATE();
    case 299:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(682);
      END_STATE();
    case 300:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(894);
      END_STATE();
    case 301:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(411);
      END_STATE();
    case 302:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(788);
      END_STATE();
    case 303:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(788);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 304:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(788);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1119);
      END_STATE();
    case 305:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(998);
      END_STATE();
    case 306:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 307:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1136);
      END_STATE();
    case 308:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(895);
      END_STATE();
    case 309:
      ADVANCE_MAP(
        'A', 1252,
        'a', 1252,
        'I', 801,
        'i', 801,
        'L', 439,
        'l', 439,
        'N', 794,
        'n', 794,
        'P', 534,
        'p', 534,
        'U', 1269,
        'u', 1269,
        'V', 527,
        'v', 527,
      );
      END_STATE();
    case 310:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1073);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1227);
      END_STATE();
    case 311:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1073);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1408);
      END_STATE();
    case 312:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1297);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1407);
      END_STATE();
    case 313:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(796);
      END_STATE();
    case 314:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(683);
      END_STATE();
    case 315:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1100);
      END_STATE();
    case 316:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1103);
      END_STATE();
    case 317:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1233);
      END_STATE();
    case 318:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(919);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 319:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1116);
      END_STATE();
    case 320:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1134);
      END_STATE();
    case 321:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(914);
      END_STATE();
    case 322:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(963);
      END_STATE();
    case 323:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(949);
      END_STATE();
    case 324:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1081);
      END_STATE();
    case 325:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(921);
      END_STATE();
    case 326:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(945);
      END_STATE();
    case 327:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1106);
      END_STATE();
    case 328:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1112);
      END_STATE();
    case 329:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(947);
      END_STATE();
    case 330:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(859);
      END_STATE();
    case 331:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1367);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(951);
      END_STATE();
    case 332:
      ADVANCE_MAP(
        'A', 390,
        'a', 390,
        'B', 1727,
        'b', 1727,
        'C', 1729,
        'c', 1729,
        'D', 580,
        'd', 580,
        'E', 1223,
        'e', 1223,
        'F', 769,
        'f', 769,
        'G', 1735,
        'g', 1735,
        'I', 960,
        'i', 960,
        'J', 598,
        'j', 598,
        'K', 599,
        'k', 599,
        'L', 1038,
        'l', 1038,
        'M', 333,
        'm', 333,
        'N', 338,
        'n', 338,
        'O', 392,
        'o', 392,
        'P', 1163,
        'p', 1163,
        'Q', 1339,
        'q', 1339,
        'R', 1728,
        'r', 1728,
        'S', 363,
        's', 363,
        'T', 597,
        't', 597,
        'U', 1745,
        'u', 1745,
        'W', 1732,
        'w', 1732,
        'Z', 344,
        'z', 344,
      );
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1746);
      END_STATE();
    case 333:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 334:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1350);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      END_STATE();
    case 335:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1288);
      END_STATE();
    case 336:
      ADVANCE_MAP(
        'A', 952,
        'a', 952,
        'C', 625,
        'c', 625,
        'D', 612,
        'd', 612,
        'E', 1382,
        'e', 1382,
        'H', 578,
        'h', 578,
        'O', 779,
        'o', 779,
        'R', 318,
        'r', 318,
        'W', 984,
        'w', 984,
      );
      END_STATE();
    case 337:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 338:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1393);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 339:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1281);
      END_STATE();
    case 340:
      ADVANCE_MAP(
        'A', 1268,
        'a', 1268,
        'F', 400,
        'f', 400,
        'I', 649,
        'i', 649,
        'O', 1318,
        'o', 1318,
        'R', 266,
        'r', 266,
        'U', 303,
        'u', 303,
      );
      END_STATE();
    case 341:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1200);
      END_STATE();
    case 342:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(815);
      END_STATE();
    case 343:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(928);
      END_STATE();
    case 344:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(643);
      END_STATE();
    case 345:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(806);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1108);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(389);
      END_STATE();
    case 346:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 347:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(640);
      END_STATE();
    case 348:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1099);
      END_STATE();
    case 349:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1128);
      END_STATE();
    case 350:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1272);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 351:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1195);
      END_STATE();
    case 352:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(869);
      END_STATE();
    case 353:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1187);
      END_STATE();
    case 354:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1310);
      END_STATE();
    case 355:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1206);
      END_STATE();
    case 356:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(871);
      END_STATE();
    case 357:
      ADVANCE_MAP(
        'A', 1194,
        'a', 1194,
        'B', 374,
        'b', 374,
        'E', 1266,
        'e', 1266,
        'I', 846,
        'i', 846,
        'L', 334,
        'l', 334,
        'N', 857,
        'n', 857,
        'O', 715,
        'o', 715,
        'R', 531,
        'r', 531,
        'U', 805,
        'u', 805,
        'W', 374,
        'w', 374,
      );
      END_STATE();
    case 358:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1097);
      END_STATE();
    case 359:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(731);
      END_STATE();
    case 360:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(747);
      END_STATE();
    case 361:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1109);
      END_STATE();
    case 362:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 363:
      ADVANCE_MAP(
        'A', 1349,
        'a', 1349,
        'E', 844,
        'e', 844,
        'I', 853,
        'i', 853,
        'U', 834,
        'u', 834,
      );
      END_STATE();
    case 364:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(961);
      END_STATE();
    case 365:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      END_STATE();
    case 366:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(843);
      END_STATE();
    case 367:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(848);
      END_STATE();
    case 368:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1158);
      END_STATE();
    case 369:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(840);
      END_STATE();
    case 370:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(962);
      END_STATE();
    case 371:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1308);
      END_STATE();
    case 372:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(964);
      END_STATE();
    case 373:
      ADVANCE_MAP(
        'B', 1405,
        'b', 1405,
        'G', 646,
        'g', 646,
        'L', 1257,
        'l', 1257,
        'N', 255,
        'n', 255,
        'R', 1254,
        'r', 1254,
        'Z', 1030,
        'z', 1030,
      );
      END_STATE();
    case 374:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1791);
      END_STATE();
    case 375:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1791);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(654);
      END_STATE();
    case 376:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1791);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(688);
      END_STATE();
    case 377:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(977);
      END_STATE();
    case 378:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(981);
      END_STATE();
    case 379:
      ADVANCE_MAP(
        'B', 365,
        'b', 365,
        'L', 350,
        'l', 350,
        'P', 1150,
        'p', 1150,
        'S', 532,
        's', 532,
        'V', 604,
        'v', 604,
      );
      END_STATE();
    case 380:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(986);
      END_STATE();
    case 381:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(988);
      END_STATE();
    case 382:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1178);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1403);
      END_STATE();
    case 383:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(803);
      END_STATE();
    case 384:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(348);
      END_STATE();
    case 385:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(813);
      END_STATE();
    case 386:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(814);
      END_STATE();
    case 387:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1146);
      END_STATE();
    case 388:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1203);
      END_STATE();
    case 389:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1117);
      END_STATE();
    case 390:
      ADVANCE_MAP(
        'B', 1406,
        'b', 1406,
        'G', 651,
        'g', 651,
        'L', 1284,
        'l', 1284,
        'N', 257,
        'n', 257,
        'R', 1306,
        'r', 1306,
        'Z', 1035,
        'z', 1035,
      );
      END_STATE();
    case 391:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1033);
      END_STATE();
    case 392:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1220);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1404);
      END_STATE();
    case 393:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(845);
      END_STATE();
    case 394:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(368);
      END_STATE();
    case 395:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1386);
      END_STATE();
    case 396:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1784);
      END_STATE();
    case 397:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(655);
      END_STATE();
    case 398:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1687);
      END_STATE();
    case 399:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1723);
      END_STATE();
    case 400:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1791);
      END_STATE();
    case 401:
      ADVANCE_MAP(
        'C', 674,
        'c', 674,
        'E', 1115,
        'e', 1115,
        'H', 301,
        'h', 301,
        'I', 849,
        'i', 849,
        'L', 1027,
        'l', 1027,
        'N', 315,
        'n', 315,
        'P', 576,
        'p', 576,
        'T', 272,
        't', 272,
        'U', 1144,
        'u', 1144,
      );
      END_STATE();
    case 402:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1562);
      END_STATE();
    case 403:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(770);
      END_STATE();
    case 404:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(771);
      END_STATE();
    case 405:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(772);
      END_STATE();
    case 406:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(772);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1264);
      END_STATE();
    case 407:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1392);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(521);
      END_STATE();
    case 408:
      ADVANCE_MAP(
        'C', 1392,
        'c', 1392,
        'K', 521,
        'k', 521,
        'L', 321,
        'l', 321,
        'O', 869,
        'o', 869,
      );
      END_STATE();
    case 409:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1331);
      END_STATE();
    case 410:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(774);
      END_STATE();
    case 411:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(774);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(423);
      END_STATE();
    case 412:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(663);
      END_STATE();
    case 413:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 414:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(671);
      END_STATE();
    case 415:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1336);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1248);
      END_STATE();
    case 416:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(673);
      END_STATE();
    case 417:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1037);
      END_STATE();
    case 418:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(821);
      END_STATE();
    case 419:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(477);
      END_STATE();
    case 420:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 421:
      ADVANCE_MAP(
        'C', 500,
        'c', 500,
        'F', 605,
        'f', 605,
        'T', 570,
        't', 570,
        'V', 550,
        'v', 550,
      );
      END_STATE();
    case 422:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(505);
      END_STATE();
    case 423:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 424:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 425:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1092);
      END_STATE();
    case 426:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(664);
      END_STATE();
    case 427:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(521);
      END_STATE();
    case 428:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1098);
      END_STATE();
    case 429:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1000);
      END_STATE();
    case 430:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1334);
      END_STATE();
    case 431:
      ADVANCE_MAP(
        'C', 590,
        'c', 590,
        'N', 310,
        'n', 310,
        'S', 1276,
        's', 1276,
        'Y', 541,
        'y', 541,
      );
      END_STATE();
    case 432:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1039);
      END_STATE();
    case 433:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1041);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(516);
      END_STATE();
    case 434:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1041);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1791);
      END_STATE();
    case 435:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1817);
      END_STATE();
    case 436:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1784);
      END_STATE();
    case 437:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1687);
      END_STATE();
    case 438:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1723);
      END_STATE();
    case 439:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1791);
      END_STATE();
    case 440:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1562);
      END_STATE();
    case 441:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1172);
      END_STATE();
    case 442:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(435);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 443:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(304);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(926);
      END_STATE();
    case 444:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1315);
      END_STATE();
    case 445:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1409);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(439);
      END_STATE();
    case 446:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1316);
      END_STATE();
    case 447:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 448:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(677);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1076);
      END_STATE();
    case 449:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1170);
      END_STATE();
    case 450:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(835);
      END_STATE();
    case 451:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1219);
      END_STATE();
    case 452:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(429);
      END_STATE();
    case 453:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1027);
      END_STATE();
    case 454:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(505);
      END_STATE();
    case 455:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(726);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(439);
      END_STATE();
    case 456:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 457:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(516);
      END_STATE();
    case 458:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(957);
      END_STATE();
    case 459:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 460:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(489);
      END_STATE();
    case 461:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(636);
      END_STATE();
    case 462:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(881);
      END_STATE();
    case 463:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 464:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(813);
      END_STATE();
    case 465:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(495);
      END_STATE();
    case 466:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1278);
      END_STATE();
    case 467:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1104);
      END_STATE();
    case 468:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1110);
      END_STATE();
    case 469:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 470:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(556);
      END_STATE();
    case 471:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(558);
      END_STATE();
    case 472:
      ADVANCE_MAP(
        'D', 1351,
        'd', 1351,
        'L', 426,
        'l', 426,
        'R', 522,
        'r', 522,
        'U', 644,
        'u', 644,
      );
      END_STATE();
    case 473:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 474:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1784);
      END_STATE();
    case 475:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1634);
      END_STATE();
    case 476:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1687);
      END_STATE();
    case 477:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1723);
      END_STATE();
    case 478:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1791);
      END_STATE();
    case 479:
      ADVANCE_MAP(
        'E', 296,
        'e', 296,
        'I', 628,
        'i', 628,
        'L', 1338,
        'l', 1338,
        'O', 420,
        'o', 420,
      );
      END_STATE();
    case 480:
      ADVANCE_MAP(
        'E', 1010,
        'e', 1010,
        'O', 941,
        'o', 941,
        'T', 1111,
        't', 1111,
        'V', 754,
        'v', 754,
      );
      END_STATE();
    case 481:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 482:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(870);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(946);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(867);
      END_STATE();
    case 483:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1562);
      END_STATE();
    case 484:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1159);
      END_STATE();
    case 485:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1174);
      END_STATE();
    case 486:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 487:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1068);
      END_STATE();
    case 488:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 489:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 490:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1168);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(908);
      END_STATE();
    case 491:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1069);
      END_STATE();
    case 492:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(907);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1641);
      END_STATE();
    case 493:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1388);
      END_STATE();
    case 494:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 495:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1067);
      END_STATE();
    case 496:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1292);
      END_STATE();
    case 497:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 498:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 499:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1189);
      END_STATE();
    case 500:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1048);
      END_STATE();
    case 501:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1231);
      END_STATE();
    case 502:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 503:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1363);
      END_STATE();
    case 504:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1070);
      END_STATE();
    case 505:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 506:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1303);
      END_STATE();
    case 507:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1087);
      END_STATE();
    case 508:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1282);
      END_STATE();
    case 509:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1170);
      END_STATE();
    case 510:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1071);
      END_STATE();
    case 511:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1232);
      END_STATE();
    case 512:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 513:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 514:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1079);
      END_STATE();
    case 515:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1072);
      END_STATE();
    case 516:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 517:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1093);
      END_STATE();
    case 518:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 519:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 520:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 521:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(835);
      END_STATE();
    case 522:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(927);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(759);
      END_STATE();
    case 523:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1073);
      END_STATE();
    case 524:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 525:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 526:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 527:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1137);
      END_STATE();
    case 528:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 529:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1215);
      END_STATE();
    case 530:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      END_STATE();
    case 531:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(922);
      END_STATE();
    case 532:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1148);
      END_STATE();
    case 533:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1160);
      END_STATE();
    case 534:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(955);
      END_STATE();
    case 535:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1105);
      END_STATE();
    case 536:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1233);
      END_STATE();
    case 537:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 538:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1116);
      END_STATE();
    case 539:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(959);
      END_STATE();
    case 540:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1090);
      END_STATE();
    case 541:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1153);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1147);
      END_STATE();
    case 542:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 543:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1131);
      END_STATE();
    case 544:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1077);
      END_STATE();
    case 545:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(950);
      END_STATE();
    case 546:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 547:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 548:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 549:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1141);
      END_STATE();
    case 550:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(965);
      END_STATE();
    case 551:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 552:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1139);
      END_STATE();
    case 553:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 554:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1253);
      END_STATE();
    case 555:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 556:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1132);
      END_STATE();
    case 557:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1237);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1019);
      END_STATE();
    case 558:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1130);
      END_STATE();
    case 559:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(966);
      END_STATE();
    case 560:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1076);
      END_STATE();
    case 561:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(938);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1373);
      END_STATE();
    case 562:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(862);
      END_STATE();
    case 563:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 564:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1183);
      END_STATE();
    case 565:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1049);
      END_STATE();
    case 566:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1384);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1147);
      END_STATE();
    case 567:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 568:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 569:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(940);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 570:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(934);
      END_STATE();
    case 571:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1207);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 572:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 573:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1385);
      END_STATE();
    case 574:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1182);
      END_STATE();
    case 575:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1383);
      END_STATE();
    case 576:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(775);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(728);
      END_STATE();
    case 577:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1214);
      END_STATE();
    case 578:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(868);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 579:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1212);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 580:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(878);
      END_STATE();
    case 581:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1151);
      END_STATE();
    case 582:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 583:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1185);
      END_STATE();
    case 584:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 585:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 586:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1187);
      END_STATE();
    case 587:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 588:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 589:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1113);
      END_STATE();
    case 590:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 591:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1196);
      END_STATE();
    case 592:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 593:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1126);
      END_STATE();
    case 594:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1202);
      END_STATE();
    case 595:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1122);
      END_STATE();
    case 596:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(967);
      END_STATE();
    case 597:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 598:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1218);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(912);
      END_STATE();
    case 599:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1295);
      END_STATE();
    case 600:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1372);
      END_STATE();
    case 601:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1209);
      END_STATE();
    case 602:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1286);
      END_STATE();
    case 603:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1154);
      END_STATE();
    case 604:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1145);
      END_STATE();
    case 605:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1293);
      END_STATE();
    case 606:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 607:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1307);
      END_STATE();
    case 608:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      END_STATE();
    case 609:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1229);
      END_STATE();
    case 610:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 611:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(978);
      END_STATE();
    case 612:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(400);
      END_STATE();
    case 613:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(700);
      END_STATE();
    case 614:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(454);
      END_STATE();
    case 615:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1233);
      END_STATE();
    case 616:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(742);
      END_STATE();
    case 617:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1007);
      END_STATE();
    case 618:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1272);
      END_STATE();
    case 619:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1015);
      END_STATE();
    case 620:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1127);
      END_STATE();
    case 621:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1791);
      END_STATE();
    case 622:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(970);
      END_STATE();
    case 623:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1320);
      END_STATE();
    case 624:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(475);
      END_STATE();
    case 625:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1051);
      END_STATE();
    case 626:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 627:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(474);
      END_STATE();
    case 628:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(667);
      END_STATE();
    case 629:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(997);
      END_STATE();
    case 630:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 631:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1133);
      END_STATE();
    case 632:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(670);
      END_STATE();
    case 633:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 634:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(811);
      END_STATE();
    case 635:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1012);
      END_STATE();
    case 636:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(568);
      END_STATE();
    case 637:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1005);
      END_STATE();
    case 638:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(563);
      END_STATE();
    case 639:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 640:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(478);
      END_STATE();
    case 641:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(693);
      END_STATE();
    case 642:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1328);
      END_STATE();
    case 643:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1003);
      END_STATE();
    case 644:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(884);
      END_STATE();
    case 645:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(521);
      END_STATE();
    case 646:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1135);
      END_STATE();
    case 647:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(358);
      END_STATE();
    case 648:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1142);
      END_STATE();
    case 649:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(757);
      END_STATE();
    case 650:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(361);
      END_STATE();
    case 651:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1164);
      END_STATE();
    case 652:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1687);
      END_STATE();
    case 653:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1723);
      END_STATE();
    case 654:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1796);
      END_STATE();
    case 655:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(990);
      END_STATE();
    case 656:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(387);
      END_STATE();
    case 657:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(255);
      END_STATE();
    case 658:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(980);
      END_STATE();
    case 659:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(989);
      END_STATE();
    case 660:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(257);
      END_STATE();
    case 661:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(983);
      END_STATE();
    case 662:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(995);
      END_STATE();
    case 663:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(835);
      END_STATE();
    case 664:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(502);
      END_STATE();
    case 665:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1028);
      END_STATE();
    case 666:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1008);
      END_STATE();
    case 667:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1261);
      END_STATE();
    case 668:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(975);
      END_STATE();
    case 669:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(684);
      END_STATE();
    case 670:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(956);
      END_STATE();
    case 671:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1353);
      END_STATE();
    case 672:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(739);
      END_STATE();
    case 673:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(294);
      END_STATE();
    case 674:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(727);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1031);
      END_STATE();
    case 675:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(319);
      END_STATE();
    case 676:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(514);
      END_STATE();
    case 677:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1129);
      END_STATE();
    case 678:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1419);
      END_STATE();
    case 679:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(608);
      END_STATE();
    case 680:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(872);
      END_STATE();
    case 681:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1173);
      END_STATE();
    case 682:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1687);
      END_STATE();
    case 683:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1723);
      END_STATE();
    case 684:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      END_STATE();
    case 685:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(785);
      END_STATE();
    case 686:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 687:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1375);
      END_STATE();
    case 688:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1063);
      END_STATE();
    case 689:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 690:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1376);
      END_STATE();
    case 691:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1239);
      END_STATE();
    case 692:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(939);
      END_STATE();
    case 693:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 694:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1319);
      END_STATE();
    case 695:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1176);
      END_STATE();
    case 696:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1378);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1323);
      END_STATE();
    case 697:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1167);
      END_STATE();
    case 698:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(797);
      END_STATE();
    case 699:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 700:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 701:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1256);
      END_STATE();
    case 702:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1179);
      END_STATE();
    case 703:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 704:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 705:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1169);
      END_STATE();
    case 706:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1070);
      END_STATE();
    case 707:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1181);
      END_STATE();
    case 708:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 709:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(439);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(546);
      END_STATE();
    case 710:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 711:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(899);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(256);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(631);
      END_STATE();
    case 712:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 713:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(894);
      END_STATE();
    case 714:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1265);
      END_STATE();
    case 715:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(788);
      END_STATE();
    case 716:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1072);
      END_STATE();
    case 717:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 718:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(895);
      END_STATE();
    case 719:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1186);
      END_STATE();
    case 720:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 721:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1177);
      END_STATE();
    case 722:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(929);
      END_STATE();
    case 723:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1267);
      END_STATE();
    case 724:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(923);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(281);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(567);
      END_STATE();
    case 725:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(923);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(581);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1249);
      END_STATE();
    case 726:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 727:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(933);
      END_STATE();
    case 728:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1235);
      END_STATE();
    case 729:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 730:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(903);
      END_STATE();
    case 731:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(925);
      END_STATE();
    case 732:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1259);
      END_STATE();
    case 733:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 734:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 735:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1345);
      END_STATE();
    case 736:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(454);
      END_STATE();
    case 737:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 738:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(876);
      END_STATE();
    case 739:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 740:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1321);
      END_STATE();
    case 741:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(800);
      END_STATE();
    case 742:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 743:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(942);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(258);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(648);
      END_STATE();
    case 744:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1001);
      END_STATE();
    case 745:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(916);
      END_STATE();
    case 746:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1402);
      END_STATE();
    case 747:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(953);
      END_STATE();
    case 748:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(935);
      END_STATE();
    case 749:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1004);
      END_STATE();
    case 750:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1401);
      END_STATE();
    case 751:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(832);
      END_STATE();
    case 752:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1014);
      END_STATE();
    case 753:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(825);
      END_STATE();
    case 754:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1273);
      END_STATE();
    case 755:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1029);
      END_STATE();
    case 756:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(819);
      END_STATE();
    case 757:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1274);
      END_STATE();
    case 758:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1018);
      END_STATE();
    case 759:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1201);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(595);
      END_STATE();
    case 760:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1205);
      END_STATE();
    case 761:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 762:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(593);
      END_STATE();
    case 763:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 764:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 765:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1355);
      END_STATE();
    case 766:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1228);
      END_STATE();
    case 767:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 768:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 769:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1358);
      END_STATE();
    case 770:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1687);
      END_STATE();
    case 771:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1723);
      END_STATE();
    case 772:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1791);
      END_STATE();
    case 773:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(299);
      END_STATE();
    case 774:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(835);
      END_STATE();
    case 775:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(493);
      END_STATE();
    case 776:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(536);
      END_STATE();
    case 777:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(314);
      END_STATE();
    case 778:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(507);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(894);
      END_STATE();
    case 779:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(542);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(388);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1120);
      END_STATE();
    case 780:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(517);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(895);
      END_STATE();
    case 781:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(547);
      END_STATE();
    case 782:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(523);
      END_STATE();
    case 783:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(549);
      END_STATE();
    case 784:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1784);
      END_STATE();
    case 785:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1634);
      END_STATE();
    case 786:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1687);
      END_STATE();
    case 787:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1723);
      END_STATE();
    case 788:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1791);
      END_STATE();
    case 789:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 790:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(433);
      END_STATE();
    case 791:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1793);
      END_STATE();
    case 792:
      ADVANCE_MAP(
        'L', 269,
        'l', 269,
        'O', 685,
        'o', 685,
        'R', 330,
        'r', 330,
        'U', 1238,
        'u', 1238,
      );
      END_STATE();
    case 793:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 794:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1390);
      END_STATE();
    case 795:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 796:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(782);
      END_STATE();
    case 797:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(786);
      END_STATE();
    case 798:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 799:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(996);
      END_STATE();
    case 800:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(787);
      END_STATE();
    case 801:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1213);
      END_STATE();
    case 802:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 803:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1020);
      END_STATE();
    case 804:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(788);
      END_STATE();
    case 805:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(838);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(909);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1337);
      END_STATE();
    case 806:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(972);
      END_STATE();
    case 807:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(791);
      END_STATE();
    case 808:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1304);
      END_STATE();
    case 809:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 810:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 811:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(719);
      END_STATE();
    case 812:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(982);
      END_STATE();
    case 813:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 814:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 815:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(746);
      END_STATE();
    case 816:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(717);
      END_STATE();
    case 817:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 818:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 819:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 820:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(999);
      END_STATE();
    case 821:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(521);
      END_STATE();
    case 822:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(647);
      END_STATE();
    case 823:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 824:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1002);
      END_STATE();
    case 825:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(847);
      END_STATE();
    case 826:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1352);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(699);
      END_STATE();
    case 827:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1260);
      END_STATE();
    case 828:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 829:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(723);
      END_STATE();
    case 830:
      ADVANCE_MAP(
        'L', 1006,
        'l', 1006,
        'M', 887,
        'm', 887,
        'N', 421,
        'n', 421,
        'V', 589,
        'v', 589,
      );
      END_STATE();
    case 831:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      END_STATE();
    case 832:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(809);
      END_STATE();
    case 833:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(586);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1113);
      END_STATE();
    case 834:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1285);
      END_STATE();
    case 835:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 836:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1046);
      END_STATE();
    case 837:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(555);
      END_STATE();
    case 838:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 839:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1017);
      END_STATE();
    case 840:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1294);
      END_STATE();
    case 841:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 842:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(523);
      END_STATE();
    case 843:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(783);
      END_STATE();
    case 844:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(601);
      END_STATE();
    case 845:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1026);
      END_STATE();
    case 846:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1298);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1198);
      END_STATE();
    case 847:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 848:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(750);
      END_STATE();
    case 849:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1354);
      END_STATE();
    case 850:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(606);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(734);
      END_STATE();
    case 851:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 852:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(650);
      END_STATE();
    case 853:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1356);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(703);
      END_STATE();
    case 854:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1040);
      END_STATE();
    case 855:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1687);
      END_STATE();
    case 856:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1723);
      END_STATE();
    case 857:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1791);
      END_STATE();
    case 858:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(875);
      END_STATE();
    case 859:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(475);
      END_STATE();
    case 860:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1043);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1814);
      END_STATE();
    case 861:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1388);
      END_STATE();
    case 862:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(706);
      END_STATE();
    case 863:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1055);
      END_STATE();
    case 864:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(402);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(839);
      END_STATE();
    case 865:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(402);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1425);
      END_STATE();
    case 866:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(971);
      END_STATE();
    case 867:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(973);
      END_STATE();
    case 868:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(565);
      END_STATE();
    case 869:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(478);
      END_STATE();
    case 870:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(762);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      END_STATE();
    case 871:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(483);
      END_STATE();
    case 872:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(486);
      END_STATE();
    case 873:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1047);
      END_STATE();
    case 874:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1322);
      END_STATE();
    case 875:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 876:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(347);
      END_STATE();
    case 877:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1062);
      END_STATE();
    case 878:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(716);
      END_STATE();
    case 879:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1325);
      END_STATE();
    case 880:
      ADVANCE_MAP(
        'M', 391,
        'm', 391,
        'N', 634,
        'n', 634,
        'T', 375,
        't', 375,
        'V', 528,
        'v', 528,
        'X', 1241,
        'x', 1241,
      );
      END_STATE();
    case 881:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(320);
      END_STATE();
    case 882:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(323);
      END_STATE();
    case 883:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(324);
      END_STATE();
    case 884:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(596);
      END_STATE();
    case 885:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 886:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(361);
      END_STATE();
    case 887:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(370);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 888:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(372);
      END_STATE();
    case 889:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(888);
      END_STATE();
    case 890:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(611);
      END_STATE();
    case 891:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1817);
      END_STATE();
    case 892:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1386);
      END_STATE();
    case 893:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1784);
      END_STATE();
    case 894:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1687);
      END_STATE();
    case 895:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1723);
      END_STATE();
    case 896:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1791);
      END_STATE();
    case 897:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1211);
      END_STATE();
    case 898:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(836);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 899:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 900:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(623);
      END_STATE();
    case 901:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1391);
      END_STATE();
    case 902:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 903:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(772);
      END_STATE();
    case 904:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(892);
      END_STATE();
    case 905:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(582);
      END_STATE();
    case 906:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1399);
      END_STATE();
    case 907:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 908:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 909:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1388);
      END_STATE();
    case 910:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 911:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1231);
      END_STATE();
    case 912:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 913:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1389);
      END_STATE();
    case 914:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 915:
      ADVANCE_MAP(
        'N', 450,
        'n', 450,
        'O', 1226,
        'o', 1226,
        'U', 920,
        'u', 920,
        'X', 1271,
        'x', 1271,
      );
      END_STATE();
    case 916:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(621);
      END_STATE();
    case 917:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(464);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(346);
      END_STATE();
    case 918:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1232);
      END_STATE();
    case 919:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1210);
      END_STATE();
    case 920:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 921:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 922:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 923:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(835);
      END_STATE();
    case 924:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(835);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1299);
      END_STATE();
    case 925:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1216);
      END_STATE();
    case 926:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(829);
      END_STATE();
    case 927:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 928:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 929:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1233);
      END_STATE();
    case 930:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 931:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 932:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(478);
      END_STATE();
    case 933:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(577);
      END_STATE();
    case 934:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1251);
      END_STATE();
    case 935:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1236);
      END_STATE();
    case 936:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(554);
      END_STATE();
    case 937:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(745);
      END_STATE();
    case 938:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      END_STATE();
    case 939:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1250);
      END_STATE();
    case 940:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 941:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(617);
      END_STATE();
    case 942:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 943:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1393);
      END_STATE();
    case 944:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1208);
      END_STATE();
    case 945:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 946:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1275);
      END_STATE();
    case 947:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 948:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(751);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(768);
      END_STATE();
    case 949:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(528);
      END_STATE();
    case 950:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(812);
      END_STATE();
    case 951:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(639);
      END_STATE();
    case 952:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(637);
      END_STATE();
    case 953:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 954:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 955:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 956:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 957:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 958:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 959:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1302);
      END_STATE();
    case 960:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1400);
      END_STATE();
    case 961:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 962:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 963:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 964:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 965:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1308);
      END_STATE();
    case 966:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1224);
      END_STATE();
    case 967:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1313);
      END_STATE();
    case 968:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(622);
      END_STATE();
    case 969:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(784);
      END_STATE();
    case 970:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1634);
      END_STATE();
    case 971:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1791);
      END_STATE();
    case 972:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1800);
      END_STATE();
    case 973:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1810);
      END_STATE();
    case 974:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 975:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1042);
      END_STATE();
    case 976:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(890);
      END_STATE();
    case 977:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1360);
      END_STATE();
    case 978:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 979:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1068);
      END_STATE();
    case 980:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1340);
      END_STATE();
    case 981:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1361);
      END_STATE();
    case 982:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(772);
      END_STATE();
    case 983:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1341);
      END_STATE();
    case 984:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 985:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(905);
      END_STATE();
    case 986:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1377);
      END_STATE();
    case 987:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(855);
      END_STATE();
    case 988:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1362);
      END_STATE();
    case 989:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(795);
      END_STATE();
    case 990:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(969);
      END_STATE();
    case 991:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(856);
      END_STATE();
    case 992:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1167);
      END_STATE();
    case 993:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1060);
      END_STATE();
    case 994:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(857);
      END_STATE();
    case 995:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(798);
      END_STATE();
    case 996:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1156);
      END_STATE();
    case 997:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1243);
      END_STATE();
    case 998:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1169);
      END_STATE();
    case 999:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1070);
      END_STATE();
    case 1000:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(863);
      END_STATE();
    case 1001:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(894);
      END_STATE();
    case 1002:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1072);
      END_STATE();
    case 1003:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1247);
      END_STATE();
    case 1004:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(895);
      END_STATE();
    case 1005:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(835);
      END_STATE();
    case 1006:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1102);
      END_STATE();
    case 1007:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 1008:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(851);
      END_STATE();
    case 1009:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(971);
      END_STATE();
    case 1010:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(954);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1791);
      END_STATE();
    case 1011:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1075);
      END_STATE();
    case 1012:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(708);
      END_STATE();
    case 1013:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(982);
      END_STATE();
    case 1014:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(896);
      END_STATE();
    case 1015:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1088);
      END_STATE();
    case 1016:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1081);
      END_STATE();
    case 1017:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1076);
      END_STATE();
    case 1018:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(944);
      END_STATE();
    case 1019:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(756);
      END_STATE();
    case 1020:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(987);
      END_STATE();
    case 1021:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1084);
      END_STATE();
    case 1022:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1049);
      END_STATE();
    case 1023:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1095);
      END_STATE();
    case 1024:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(866);
      END_STATE();
    case 1025:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(932);
      END_STATE();
    case 1026:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(991);
      END_STATE();
    case 1027:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1366);
      END_STATE();
    case 1028:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1332);
      END_STATE();
    case 1029:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(931);
      END_STATE();
    case 1030:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1094);
      END_STATE();
    case 1031:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(835);
      END_STATE();
    case 1032:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1188);
      END_STATE();
    case 1033:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1190);
      END_STATE();
    case 1034:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1118);
      END_STATE();
    case 1035:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1138);
      END_STATE();
    case 1036:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1121);
      END_STATE();
    case 1037:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(820);
      END_STATE();
    case 1038:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1157);
      END_STATE();
    case 1039:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(824);
      END_STATE();
    case 1040:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1161);
      END_STATE();
    case 1041:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(889);
      END_STATE();
    case 1042:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1791);
      END_STATE();
    case 1043:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1796);
      END_STATE();
    case 1044:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(487);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1052);
      END_STATE();
    case 1045:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1368);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(461);
      END_STATE();
    case 1046:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1394);
      END_STATE();
    case 1047:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(505);
      END_STATE();
    case 1048:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1233);
      END_STATE();
    case 1049:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(306);
      END_STATE();
    case 1050:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(733);
      END_STATE();
    case 1051:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(817);
      END_STATE();
    case 1052:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(491);
      END_STATE();
    case 1053:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(504);
      END_STATE();
    case 1054:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(818);
      END_STATE();
    case 1055:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(837);
      END_STATE();
    case 1056:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(515);
      END_STATE();
    case 1057:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(325);
      END_STATE();
    case 1058:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(523);
      END_STATE();
    case 1059:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1150);
      END_STATE();
    case 1060:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1058);
      END_STATE();
    case 1061:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1152);
      END_STATE();
    case 1062:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(758);
      END_STATE();
    case 1063:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1328);
      END_STATE();
    case 1064:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1326);
      END_STATE();
    case 1065:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1333);
      END_STATE();
    case 1066:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(492);
      END_STATE();
    case 1067:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1784);
      END_STATE();
    case 1068:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1634);
      END_STATE();
    case 1069:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1785);
      END_STATE();
    case 1070:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1687);
      END_STATE();
    case 1071:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1064);
      END_STATE();
    case 1072:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1723);
      END_STATE();
    case 1073:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1791);
      END_STATE();
    case 1074:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 1075:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1808);
      END_STATE();
    case 1076:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1562);
      END_STATE();
    case 1077:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1797);
      END_STATE();
    case 1078:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 1079:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 1080:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1324);
      END_STATE();
    case 1081:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(772);
      END_STATE();
    case 1082:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      END_STATE();
    case 1083:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 1084:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(689);
      END_STATE();
    case 1085:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 1086:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 1087:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1167);
      END_STATE();
    case 1088:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(857);
      END_STATE();
    case 1089:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(992);
      END_STATE();
    case 1090:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1050);
      END_STATE();
    case 1091:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(893);
      END_STATE();
    case 1092:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 1093:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1169);
      END_STATE();
    case 1094:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(694);
      END_STATE();
    case 1095:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 1096:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 1097:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 1098:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 1099:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 1100:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 1101:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 1102:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1184);
      END_STATE();
    case 1103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 1104:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(687);
      END_STATE();
    case 1105:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(835);
      END_STATE();
    case 1106:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 1107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(712);
      END_STATE();
    case 1108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(509);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1309);
      END_STATE();
    case 1109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(683);
      END_STATE();
    case 1110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 1111:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1022);
      END_STATE();
    case 1112:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1249);
      END_STATE();
    case 1113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 1114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 1115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(767);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(566);
      END_STATE();
    case 1116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1233);
      END_STATE();
    case 1117:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(708);
      END_STATE();
    case 1118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 1119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(896);
      END_STATE();
    case 1120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(930);
      END_STATE();
    case 1121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      END_STATE();
    case 1122:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 1123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(600);
      END_STATE();
    case 1124:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1280);
      END_STATE();
    case 1125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1425);
      END_STATE();
    case 1126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 1127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(761);
      END_STATE();
    case 1128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(937);
      END_STATE();
    case 1129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 1130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 1131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 1132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1811);
      END_STATE();
    case 1133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 1134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 1135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 1136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1009);
      END_STATE();
    case 1137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1222);
      END_STATE();
    case 1138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 1139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1200);
      END_STATE();
    case 1140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 1141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 1142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(718);
      END_STATE();
    case 1143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1327);
      END_STATE();
    case 1144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(638);
      END_STATE();
    case 1145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1204);
      END_STATE();
    case 1146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 1147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1024);
      END_STATE();
    case 1148:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1348);
      END_STATE();
    case 1149:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(732);
      END_STATE();
    case 1150:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 1151:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 1152:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      END_STATE();
    case 1153:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1123);
      END_STATE();
    case 1154:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1065);
      END_STATE();
    case 1155:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(882);
      END_STATE();
    case 1156:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(823);
      END_STATE();
    case 1157:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 1158:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(602);
      END_STATE();
    case 1159:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(736);
      END_STATE();
    case 1160:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(883);
      END_STATE();
    case 1161:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 1162:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 1163:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(766);
      END_STATE();
    case 1164:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 1165:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 1166:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1784);
      END_STATE();
    case 1167:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1687);
      END_STATE();
    case 1168:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(773);
      END_STATE();
    case 1169:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1723);
      END_STATE();
    case 1170:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1791);
      END_STATE();
    case 1171:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1562);
      END_STATE();
    case 1172:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(397);
      END_STATE();
    case 1173:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1245);
      END_STATE();
    case 1174:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1166);
      END_STATE();
    case 1175:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1230);
      END_STATE();
    case 1176:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(885);
      END_STATE();
    case 1177:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1059);
      END_STATE();
    case 1178:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(409);
      END_STATE();
    case 1179:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(855);
      END_STATE();
    case 1180:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1388);
      END_STATE();
    case 1181:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(856);
      END_STATE();
    case 1182:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1167);
      END_STATE();
    case 1183:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1191);
      END_STATE();
    case 1184:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(672);
      END_STATE();
    case 1185:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1169);
      END_STATE();
    case 1186:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(675);
      END_STATE();
    case 1187:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1170);
      END_STATE();
    case 1188:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1180);
      END_STATE();
    case 1189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(901);
      END_STATE();
    case 1190:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1197);
      END_STATE();
    case 1191:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(744);
      END_STATE();
    case 1192:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(440);
      END_STATE();
    case 1193:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1287);
      END_STATE();
    case 1194:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1267);
      END_STATE();
    case 1195:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(595);
      END_STATE();
    case 1196:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1171);
      END_STATE();
    case 1197:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      END_STATE();
    case 1198:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1311);
      END_STATE();
    case 1199:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1290);
      END_STATE();
    case 1200:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      END_STATE();
    case 1201:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1242);
      END_STATE();
    case 1202:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1279);
      END_STATE();
    case 1203:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1291);
      END_STATE();
    case 1204:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(764);
      END_STATE();
    case 1205:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1237);
      END_STATE();
    case 1206:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(525);
      END_STATE();
    case 1207:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1255);
      END_STATE();
    case 1208:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(669);
      END_STATE();
    case 1209:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(943);
      END_STATE();
    case 1210:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      END_STATE();
    case 1211:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1305);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1111);
      END_STATE();
    case 1212:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1283);
      END_STATE();
    case 1213:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(816);
      END_STATE();
    case 1214:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(553);
      END_STATE();
    case 1215:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(668);
      END_STATE();
    case 1216:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(538);
      END_STATE();
    case 1217:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1053);
      END_STATE();
    case 1218:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(777);
      END_STATE();
    case 1219:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1054);
      END_STATE();
    case 1220:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(430);
      END_STATE();
    case 1221:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(749);
      END_STATE();
    case 1222:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(750);
      END_STATE();
    case 1223:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1056);
      END_STATE();
    case 1224:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(752);
      END_STATE();
    case 1225:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1300);
      END_STATE();
    case 1226:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1301);
      END_STATE();
    case 1227:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1374);
      END_STATE();
    case 1228:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(886);
      END_STATE();
    case 1229:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1221);
      END_STATE();
    case 1230:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1634);
      END_STATE();
    case 1231:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1687);
      END_STATE();
    case 1232:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1723);
      END_STATE();
    case 1233:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1791);
      END_STATE();
    case 1234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(833);
      END_STATE();
    case 1235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1805);
      END_STATE();
    case 1236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1801);
      END_STATE();
    case 1237:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1562);
      END_STATE();
    case 1238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1317);
      END_STATE();
    case 1239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1387);
      END_STATE();
    case 1240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(676);
      END_STATE();
    case 1241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      END_STATE();
    case 1242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1804);
      END_STATE();
    case 1243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      END_STATE();
    case 1244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      END_STATE();
    case 1245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1021);
      END_STATE();
    case 1246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      END_STATE();
    case 1247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(653);
      END_STATE();
    case 1248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1369);
      END_STATE();
    case 1249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1388);
      END_STATE();
    case 1250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 1251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1371);
      END_STATE();
    case 1252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(656);
      END_STATE();
    case 1253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1370);
      END_STATE();
    case 1254:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      END_STATE();
    case 1255:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1089);
      END_STATE();
    case 1256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(476);
      END_STATE();
    case 1257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1080);
      END_STATE();
    case 1258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      END_STATE();
    case 1259:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1389);
      END_STATE();
    case 1260:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(299);
      END_STATE();
    case 1261:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1170);
      END_STATE();
    case 1262:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(682);
      END_STATE();
    case 1263:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 1264:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(821);
      END_STATE();
    case 1265:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      END_STATE();
    case 1266:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      END_STATE();
    case 1267:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(835);
      END_STATE();
    case 1268:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(594);
      END_STATE();
    case 1269:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(810);
      END_STATE();
    case 1270:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(683);
      END_STATE();
    case 1271:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(993);
      END_STATE();
    case 1272:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      END_STATE();
    case 1273:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      END_STATE();
    case 1274:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      END_STATE();
    case 1275:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      END_STATE();
    case 1276:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      END_STATE();
    case 1277:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(737);
      END_STATE();
    case 1278:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(575);
      END_STATE();
    case 1279:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 1280:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      END_STATE();
    case 1281:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      END_STATE();
    case 1282:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1262);
      END_STATE();
    case 1283:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1101);
      END_STATE();
    case 1284:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1143);
      END_STATE();
    case 1285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 1286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1270);
      END_STATE();
    case 1287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(994);
      END_STATE();
    case 1288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1330);
      END_STATE();
    case 1289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      END_STATE();
    case 1290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1165);
      END_STATE();
    case 1291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1025);
      END_STATE();
    case 1292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1096);
      END_STATE();
    case 1293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1277);
      END_STATE();
    case 1294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 1295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1107);
      END_STATE();
    case 1296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      END_STATE();
    case 1297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(533);
      END_STATE();
    case 1298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(535);
      END_STATE();
    case 1299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(540);
      END_STATE();
    case 1300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(523);
      END_STATE();
    case 1301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(544);
      END_STATE();
    case 1302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1337);
      END_STATE();
    case 1303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(588);
      END_STATE();
    case 1304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(765);
      END_STATE();
    case 1305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1034);
      END_STATE();
    case 1306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(763);
      END_STATE();
    case 1307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      END_STATE();
    case 1308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(752);
      END_STATE();
    case 1309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1036);
      END_STATE();
    case 1310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(755);
      END_STATE();
    case 1311:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1061);
      END_STATE();
    case 1312:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(679);
      END_STATE();
    case 1313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 1314:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(473);
      END_STATE();
    case 1315:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1687);
      END_STATE();
    case 1316:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1723);
      END_STATE();
    case 1317:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1085);
      END_STATE();
    case 1318:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 1319:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1167);
      END_STATE();
    case 1320:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 1321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1169);
      END_STATE();
    case 1322:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1070);
      END_STATE();
    case 1323:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(632);
      END_STATE();
    case 1324:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(702);
      END_STATE();
    case 1325:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1072);
      END_STATE();
    case 1326:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(698);
      END_STATE();
    case 1327:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(707);
      END_STATE();
    case 1328:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(478);
      END_STATE();
    case 1329:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(896);
      END_STATE();
    case 1330:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1140);
      END_STATE();
    case 1331:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1092);
      END_STATE();
    case 1332:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1200);
      END_STATE();
    case 1333:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(741);
      END_STATE();
    case 1334:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1098);
      END_STATE();
    case 1335:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 1336:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(847);
      END_STATE();
    case 1337:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1118);
      END_STATE();
    case 1338:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1199);
      END_STATE();
    case 1339:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 1340:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1687);
      END_STATE();
    case 1341:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1723);
      END_STATE();
    case 1342:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1562);
      END_STATE();
    case 1343:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(497);
      END_STATE();
    case 1344:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(979);
      END_STATE();
    case 1345:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(494);
      END_STATE();
    case 1346:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(506);
      END_STATE();
    case 1347:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(299);
      END_STATE();
    case 1348:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(505);
      END_STATE();
    case 1349:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(314);
      END_STATE();
    case 1350:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1011);
      END_STATE();
    case 1351:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(539);
      END_STATE();
    case 1352:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(510);
      END_STATE();
    case 1353:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(329);
      END_STATE();
    case 1354:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(543);
      END_STATE();
    case 1355:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(552);
      END_STATE();
    case 1356:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(603);
      END_STATE();
    case 1357:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(607);
      END_STATE();
    case 1358:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(610);
      END_STATE();
    case 1359:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(784);
      END_STATE();
    case 1360:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1687);
      END_STATE();
    case 1361:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1723);
      END_STATE();
    case 1362:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1791);
      END_STATE();
    case 1363:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1562);
      END_STATE();
    case 1364:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1243);
      END_STATE();
    case 1365:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1247);
      END_STATE();
    case 1366:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(835);
      END_STATE();
    case 1367:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(790);
      END_STATE();
    case 1368:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(313);
      END_STATE();
    case 1369:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(551);
      END_STATE();
    case 1370:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1016);
      END_STATE();
    case 1371:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(349);
      END_STATE();
    case 1372:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(327);
      END_STATE();
    case 1373:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(560);
      END_STATE();
    case 1374:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(366);
      END_STATE();
    case 1375:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1687);
      END_STATE();
    case 1376:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1723);
      END_STATE();
    case 1377:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1791);
      END_STATE();
    case 1378:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1562);
      END_STATE();
    case 1379:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1395);
      END_STATE();
    case 1380:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(697);
      END_STATE();
    case 1381:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(705);
      END_STATE();
    case 1382:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1234);
      END_STATE();
    case 1383:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1233);
      END_STATE();
    case 1384:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1296);
      END_STATE();
    case 1385:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(729);
      END_STATE();
    case 1386:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1784);
      END_STATE();
    case 1387:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1634);
      END_STATE();
    case 1388:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1791);
      END_STATE();
    case 1389:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1562);
      END_STATE();
    case 1390:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1059);
      END_STATE();
    case 1391:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(255);
      END_STATE();
    case 1392:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(418);
      END_STATE();
    case 1393:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(257);
      END_STATE();
    case 1394:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(835);
      END_STATE();
    case 1395:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(617);
      END_STATE();
    case 1396:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(936);
      END_STATE();
    case 1397:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1114);
      END_STATE();
    case 1398:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(523);
      END_STATE();
    case 1399:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(501);
      END_STATE();
    case 1400:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(511);
      END_STATE();
    case 1401:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(505);
      END_STATE();
    case 1402:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(520);
      END_STATE();
    case 1403:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(658);
      END_STATE();
    case 1404:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(661);
      END_STATE();
    case 1405:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(300);
      END_STATE();
    case 1406:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(308);
      END_STATE();
    case 1407:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(316);
      END_STATE();
    case 1408:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(545);
      END_STATE();
    case 1409:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(753);
      END_STATE();
    case 1410:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1820);
      END_STATE();
    case 1411:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 1412:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1823);
      END_STATE();
    case 1413:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1411);
      END_STATE();
    case 1414:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1412);
      END_STATE();
    case 1415:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1413);
      END_STATE();
    case 1416:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1414);
      END_STATE();
    case 1417:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1415);
      END_STATE();
    case 1418:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1416);
      END_STATE();
    case 1419:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1417);
      END_STATE();
    case 1420:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 1421:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1420);
      END_STATE();
    case 1422:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1421);
      END_STATE();
    case 1423:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1422);
      END_STATE();
    case 1424:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1418);
      END_STATE();
    case 1425:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1419);
      END_STATE();
    case 1426:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 1427:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1426);
      END_STATE();
    case 1428:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1427);
      END_STATE();
    case 1429:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1428);
      END_STATE();
    case 1430:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1424);
      END_STATE();
    case 1431:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1425);
      END_STATE();
    case 1432:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 1433:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1432);
      END_STATE();
    case 1434:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1433);
      END_STATE();
    case 1435:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1434);
      END_STATE();
    case 1436:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1430);
      END_STATE();
    case 1437:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1436);
      END_STATE();
    case 1438:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1437);
      END_STATE();
    case 1439:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1438);
      END_STATE();
    case 1440:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1439);
      END_STATE();
    case 1441:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1440);
      END_STATE();
    case 1442:
      ADVANCE_MAP(
        '2', 245,
        'B', 245,
        'C', 245,
        'G', 245,
        'P', 245,
        'R', 245,
        'S', 245,
        'U', 245,
        'W', 245,
        'b', 245,
        'c', 245,
        'g', 245,
        'p', 245,
        'r', 245,
        's', 245,
        'u', 245,
        'w', 245,
      );
      END_STATE();
    case 1443:
      ADVANCE_MAP(
        '2', 16,
        'B', 16,
        'C', 16,
        'G', 16,
        'P', 16,
        'R', 16,
        'S', 16,
        'U', 16,
        'W', 16,
        'b', 16,
        'c', 16,
        'g', 16,
        'p', 16,
        'r', 16,
        's', 16,
        'u', 16,
        'w', 16,
      );
      END_STATE();
    case 1444:
      if (lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= '{')) ADVANCE(13);
      END_STATE();
    case 1445:
      if (eof) ADVANCE(1448);
      ADVANCE_MAP(
        ' ', 1682,
        '!', 18,
        '"', 5,
        '\'', 6,
        ')', 1451,
        '/', 13,
        '<', 1685,
        '>', 1684,
        '{', 17,
        ':', 1686,
        '=', 1686,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1822);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1446:
      if (eof) ADVANCE(1448);
      if (lookahead == ' ') ADVANCE(1682);
      if (lookahead == ')') ADVANCE(1451);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1446);
      END_STATE();
    case 1447:
      if (eof) ADVANCE(1448);
      ADVANCE_MAP(
        '!', 1674,
        '(', 1450,
        ')', 1451,
        '*', 1452,
        '+', 7,
        '-', 1449,
        '@', 19,
        'a', 1594,
        'b', 1589,
        'c', 1455,
        'd', 29,
        'e', 1581,
        'f', 1533,
        'g', 23,
        'h', 24,
        'i', 55,
        'k', 65,
        'l', 25,
        'm', 1471,
        'n', 1679,
        'o', 1482,
        'p', 26,
        'r', 1570,
        's', 1575,
        't', 1497,
        'u', 140,
        'w', 43,
        'y', 82,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1447);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_identity_condition);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_c);
      ADVANCE_MAP(
        'A', 2232,
        'E', 2852,
        'I', 1816,
        'M', 2245,
        'O', 2567,
        'U', 1736,
        'a', 1841,
        'e', 2851,
        'i', 1462,
        'm', 1843,
        'n', 1600,
        'o', 1864,
        't', 1917,
        'u', 1725,
        'H', 2205,
        'h', 2205,
        'L', 2160,
        'l', 2160,
        'R', 1730,
        'r', 1730,
        'Y', 1765,
        'y', 1765,
        'd', 2992,
        'f', 2992,
        'b', 1743,
        'c', 1743,
        'S', 1781,
        'X', 1781,
        'Z', 1781,
        's', 1781,
        'x', 1781,
        'z', 1781,
        'B', 1744,
        'C', 1744,
        'G', 1744,
        'W', 1744,
        'g', 1744,
        'w', 1744,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1780);
      if (lookahead == '-' ||
          ('D' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('j' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'i') ADVANCE(1462);
      if (lookahead == 'm') ADVANCE(1937);
      if (lookahead == 'n') ADVANCE(1600);
      if (lookahead == 'o') ADVANCE(2014);
      if (lookahead == 't') ADVANCE(1917);
      if (lookahead == 'u') ADVANCE(1935);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'i') ADVANCE(1461);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(1599);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2394);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'e') ADVANCE(2045);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_ci);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_ci);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_commander);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_commander);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_commander);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_identity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_mana);
      if (lookahead == 'v') ADVANCE(1923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_mana);
      if (lookahead == 'v') ADVANCE(32);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_m);
      ADVANCE_MAP(
        'A', 2387,
        'V', 1566,
        'a', 1874,
        'v', 1476,
        'D', 2406,
        'd', 2406,
        'E', 2286,
        'e', 2286,
        'O', 2284,
        'o', 2284,
        'T', 2425,
        't', 2425,
        'U', 2548,
        'u', 2548,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'v') ADVANCE(1475);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'a') ADVANCE(2041);
      if (lookahead == 'v') ADVANCE(1476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_cmc);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_cmc);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_mv);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_mv);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_manavalue);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_manavalue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_oracle);
      if (lookahead == 'i') ADVANCE(1949);
      if (lookahead == 't') ADVANCE(1927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_oracle);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_o);
      ADVANCE_MAP(
        'R', 2970,
        'r', 1918,
        't', 1922,
        'A', 2865,
        'a', 2865,
        'B', 2815,
        'b', 2815,
        'D', 2280,
        'd', 2280,
        'I', 2541,
        'i', 2541,
        'L', 2281,
        'l', 2281,
        'N', 2540,
        'n', 2540,
        'P', 2335,
        'p', 2335,
        'U', 2874,
        'u', 2874,
        'V', 2330,
        'v', 2330,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'r') ADVANCE(1919);
      if (lookahead == 't') ADVANCE(1922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2318);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_fo);
      if (lookahead == 'r') ADVANCE(2023);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_fo);
      if (lookahead == 'r') ADVANCE(2023);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_fo);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_kw);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_kw);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_keyword);
      if (lookahead == 's') ADVANCE(1495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_keyword);
      if (lookahead == 's') ADVANCE(1494);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_keyword_count_filter);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_keyword_count_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_t);
      ADVANCE_MAP(
        'A', 2657,
        'E', 2587,
        'O', 2527,
        'a', 1989,
        'e', 1909,
        'o', 1904,
        'y', 2061,
        'C', 2422,
        'c', 2422,
        'D', 2406,
        'd', 2406,
        'H', 2375,
        'h', 2375,
        'I', 2599,
        'i', 2599,
        'R', 2182,
        'r', 2182,
        'W', 2679,
        'w', 2679,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == 'y') ADVANCE(168);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'a') ADVANCE(1990);
      if (lookahead == 'e') ADVANCE(2130);
      if (lookahead == 'o') ADVANCE(2121);
      if (lookahead == 'y') ADVANCE(2061);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_pow);
      if (lookahead == 'E') ADVANCE(2744);
      if (lookahead == 'e') ADVANCE(1883);
      if (lookahead == 't') ADVANCE(2053);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_pow);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_pow);
      if (lookahead == 'e') ADVANCE(2069);
      if (lookahead == 't') ADVANCE(2053);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_power);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_power);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym_toughness_value);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym_toughness_value);
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_tou);
      if (lookahead == 'G') ADVANCE(2457);
      if (lookahead == 'g') ADVANCE(1860);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_tou);
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_tou);
      if (lookahead == 'g') ADVANCE(1998);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_toughness);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_toughness);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym_power_value);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym_power_value);
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_pt);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_pt);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_powtou);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_powtou);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_loyalty);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_loyalty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_loy);
      if (lookahead == 'a') ADVANCE(2015);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_loy);
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_defense);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_defense);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'e') ADVANCE(2029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2984);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'e') ADVANCE(2030);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(sym_layout_filter);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(sym_layout_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_format);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_f);
      ADVANCE_MAP(
        'A', 2838,
        'B', 2231,
        'E', 2861,
        'L', 2157,
        'O', 2473,
        'R', 2159,
        'U', 2545,
        'a', 2837,
        'b', 1840,
        'e', 2860,
        'l', 1833,
        'o', 1487,
        'r', 1834,
        't', 1613,
        'u', 1873,
        'I', 2583,
        'i', 2583,
        'N', 2584,
        'n', 2584,
        'W', 2231,
        'w', 2231,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(2992);
      if (lookahead == '-' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(1489);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == 't') ADVANCE(1612);
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'l') ADVANCE(1916);
      if (lookahead == 'o') ADVANCE(1488);
      if (lookahead == 'r') ADVANCE(1934);
      if (lookahead == 't') ADVANCE(1613);
      if (lookahead == 'u') ADVANCE(2047);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym_banned_filter);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym_banned_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym_restricted_filter);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_restricted_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym_not_filter);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym_not_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym_print_count_filter);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym_print_count_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_paper_print_count_filter);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_paper_print_count_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_in_filter);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_in_filter);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2896);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_in_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym_produces_filter);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym_produces_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym_devotion_filter);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym_devotion_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym_unique_filter);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_unique_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym_order_filter);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym_order_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym_order_value);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym_order_value);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2956);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(sym_order_value);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2394);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(sym_order_value);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(sym_order_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym_direction_filter);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(sym_direction_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_r);
      ADVANCE_MAP(
        'A', 2483,
        'E', 2233,
        'a', 1890,
        'e', 1895,
        'C', 1744,
        'c', 1744,
        'I', 2932,
        'i', 2932,
        'B', 1712,
        'G', 1712,
        'R', 1712,
        'U', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'r', 1712,
        'u', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('D' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'a') ADVANCE(2083);
      if (lookahead == 'e') ADVANCE(2094);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_rarity);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_rarity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_s);
      ADVANCE_MAP(
        'C', 1769,
        'E', 2549,
        'T', 2150,
        'c', 1758,
        'e', 1897,
        't', 1585,
        'A', 2931,
        'a', 2931,
        'H', 2172,
        'h', 2172,
        'I', 2569,
        'i', 2569,
        'L', 2709,
        'l', 2709,
        'N', 2175,
        'n', 2175,
        'P', 2337,
        'p', 2337,
        'U', 1771,
        'u', 1771,
        '-', 3008,
        'D', 3008,
        'F', 3008,
        'J', 3008,
        'K', 3008,
        'M', 3008,
        'O', 3008,
        'Q', 3008,
        'V', 3008,
        '_', 3008,
        'd', 3008,
        'f', 3008,
        'j', 3008,
        'k', 3008,
        'm', 3008,
        'o', 3008,
        'q', 3008,
        'v', 3008,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 't') ADVANCE(1587);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'c') ADVANCE(2081);
      if (lookahead == 'e') ADVANCE(2103);
      if (lookahead == 't') ADVANCE(1586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2956);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_e);
      ADVANCE_MAP(
        'D', 2452,
        'd', 1999,
        'M', 2243,
        'm', 2243,
        'N', 2423,
        'n', 2423,
        'S', 2728,
        's', 2728,
        'T', 2230,
        't', 2230,
        'U', 2744,
        'u', 2744,
        'V', 2324,
        'v', 2324,
        'X', 2855,
        'x', 2855,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2992);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'd') ADVANCE(2000);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_edition);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_edition);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(sym_set_type_filter);
      if (lookahead == 'A') ADVANCE(2588);
      if (lookahead == 'a') ADVANCE(1865);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2733);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2747);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(sym_set_type_filter);
      if (lookahead == 'a') ADVANCE(2022);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(sym_set_type_filter);
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_b);
      ADVANCE_MAP(
        'A', 2247,
        'C', 1744,
        'E', 2170,
        'L', 2158,
        'O', 2618,
        'a', 1844,
        'b', 1696,
        'c', 1743,
        'e', 1835,
        'l', 2048,
        'o', 1889,
        'I', 2252,
        'i', 2252,
        'R', 1704,
        'r', 1704,
        'U', 1710,
        'u', 1710,
        'd', 2992,
        'f', 2992,
        'B', 1712,
        'G', 1712,
        'W', 1712,
        'g', 1712,
        'w', 1712,
      );
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1780);
      if (lookahead == '-' ||
          ('D' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'a') ADVANCE(2042);
      if (lookahead == 'l') ADVANCE(2049);
      if (lookahead == 'o') ADVANCE(2082);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_a);
      ADVANCE_MAP(
        'B', 2975,
        'D', 2936,
        'R', 2319,
        'b', 2974,
        'd', 2935,
        'r', 1896,
        't', 1911,
        'G', 2419,
        'g', 2419,
        'L', 2250,
        'l', 2250,
        'N', 2147,
        'n', 2147,
        'U', 2418,
        'u', 2418,
        'Z', 2682,
        'z', 2682,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2992);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'r') ADVANCE(2102);
      if (lookahead == 't') ADVANCE(1911);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_artist);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_artist);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_artist);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_cn);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_cn);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(sym_border_filter);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(sym_border_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(sym_frame_filter);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(sym_frame_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_ft);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_ft);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_flavor);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_flavor);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_flavor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(sym_game_filter);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(sym_game_filter);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(sym_game_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_lang);
      if (lookahead == 'U') ADVANCE(2216);
      if (lookahead == 'u') ADVANCE(1838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_lang);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_lang);
      if (lookahead == 'u') ADVANCE(1928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(anon_sym_language);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_language);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(sym_stamp_filter);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(sym_stamp_filter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(sym_stamp_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_wm);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_wm);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_watermark);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_watermark);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(sym_new_filter);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(sym_new_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(sym_new_value);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(sym_new_value);
      if (lookahead == 'p') ADVANCE(2080);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2785);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(sym_new_value);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2785);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(sym_new_value);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(sym_new_value);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2410);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(sym_new_value);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2276);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(sym_new_value);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(sym_new_value);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1175);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(sym_new_value);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(sym_new_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(sym_prefer_filter);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(sym_prefer_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(anon_sym_cube);
      if (lookahead == '+') ADVANCE(1652);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_cube);
      if (lookahead == '+') ADVANCE(1652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_ctag);
      if (lookahead == '+') ADVANCE(1653);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_ctag);
      if (lookahead == '+') ADVANCE(1653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '+') ADVANCE(1654);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '+') ADVANCE(1654);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_cube_PLUS);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_ctag_PLUS);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_tag_PLUS);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_otag);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_otag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_oracletag);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_oracletag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_atag);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_atag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_arttag);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_arttag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_art);
      if (lookahead == 'I') ADVANCE(2410);
      if (lookahead == 'i') ADVANCE(1894);
      if (lookahead == 't') ADVANCE(1924);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_art);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_art);
      if (lookahead == 'i') ADVANCE(2095);
      if (lookahead == 't') ADVANCE(1924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(sym_collection_filter);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(sym_collection_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(sym_scryfall_id_filter);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(sym_scryfall_id_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(sym_oracle_id_filter);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(sym_oracle_id_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(1683);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_n);
      ADVANCE_MAP(
        'A', 2589,
        'E', 2260,
        'O', 2617,
        'a', 1867,
        'e', 1907,
        'o', 2096,
        'u', 2021,
        'T', 2763,
        't', 2763,
        'V', 2479,
        'v', 2479,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'a') ADVANCE(2027);
      if (lookahead == 'e') ADVANCE(2127);
      if (lookahead == 'o') ADVANCE(2097);
      if (lookahead == 'u') ADVANCE(2021);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(sym_bool_operator);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(sym_bool_operator);
      if (lookahead == ' ') ADVANCE(1682);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(sym_number_operator);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(sym_number_operator);
      if (lookahead == '=') ADVANCE(1683);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(sym_number_operator);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(1683);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(sym_equal_operator);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(sym_color_combination);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        '-', 3001,
        'C', 1744,
        'c', 1744,
        'B', 1712,
        'G', 1712,
        'R', 1712,
        'U', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'r', 1712,
        'u', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'A', 2474,
        'a', 1866,
        'C', 1744,
        'c', 1744,
        'I', 2407,
        'i', 2407,
        'L', 2711,
        'l', 2711,
        'O', 2285,
        'o', 2285,
        'R', 1708,
        'r', 1708,
        'B', 1712,
        'G', 1712,
        'U', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'u', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('D' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'A', 2899,
        'a', 1903,
        'm', 1629,
        'C', 1744,
        'c', 1744,
        'H', 2501,
        'h', 2501,
        'I', 2892,
        'i', 2892,
        'B', 1712,
        'G', 1712,
        'R', 1712,
        'U', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'r', 1712,
        'u', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('D' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(sym_color_combination);
      if (lookahead == 'C') ADVANCE(1744);
      if (lookahead == 'b') ADVANCE(1688);
      if (lookahead == 'c') ADVANCE(1724);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1828);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (set_contains(sym_produces_combination_character_set_5, 10, lookahead)) ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1749);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(sym_color_combination);
      if (lookahead == 'C') ADVANCE(1744);
      if (lookahead == 'b') ADVANCE(1693);
      if (lookahead == 'c') ADVANCE(1740);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2980);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (set_contains(sym_produces_combination_character_set_5, 10, lookahead)) ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1776);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(sym_color_combination);
      if (lookahead == 'C') ADVANCE(1744);
      if (lookahead == 'b') ADVANCE(1691);
      if (lookahead == 'c') ADVANCE(1738);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2978);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (set_contains(sym_produces_combination_character_set_5, 10, lookahead)) ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1775);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(sym_color_combination);
      if (lookahead == 'C') ADVANCE(1744);
      if (lookahead == 'b') ADVANCE(1692);
      if (lookahead == 'c') ADVANCE(1739);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2982);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (set_contains(sym_produces_combination_character_set_5, 10, lookahead)) ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1777);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(sym_color_combination);
      if (lookahead == 'C') ADVANCE(1744);
      if (lookahead == 'b') ADVANCE(1694);
      if (lookahead == 'c') ADVANCE(1741);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2984);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (set_contains(sym_produces_combination_character_set_5, 10, lookahead)) ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1778);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(sym_color_combination);
      if (lookahead == 'C') ADVANCE(1744);
      if (lookahead == 'b') ADVANCE(1695);
      if (lookahead == 'c') ADVANCE(1742);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (set_contains(sym_produces_combination_character_set_5, 10, lookahead)) ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1779);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'N', 2461,
        'n', 1861,
        'B', 1712,
        'b', 1712,
        'C', 1744,
        'c', 1744,
        'S', 1766,
        's', 1766,
        'G', 1712,
        'R', 1712,
        'U', 1712,
        'W', 1712,
        'g', 1712,
        'r', 1712,
        'u', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'A', 2247,
        'a', 2247,
        'C', 1744,
        'c', 1744,
        'E', 2170,
        'e', 2170,
        'I', 2252,
        'i', 2252,
        'L', 2158,
        'l', 2158,
        'O', 2618,
        'o', 2618,
        'R', 1704,
        'r', 1704,
        'U', 1710,
        'u', 1710,
        'B', 1712,
        'G', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('D' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'A', 2232,
        'a', 2232,
        'E', 2852,
        'e', 2852,
        'H', 2205,
        'h', 2205,
        'I', 1816,
        'i', 1816,
        'L', 2160,
        'l', 2160,
        'M', 2245,
        'm', 2245,
        'O', 2567,
        'o', 2567,
        'R', 1730,
        'r', 1730,
        'U', 1736,
        'u', 1736,
        'Y', 1765,
        'y', 1765,
        'B', 1744,
        'C', 1744,
        'G', 1744,
        'W', 1744,
        'b', 1744,
        'c', 1744,
        'g', 1744,
        'w', 1744,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('D' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'A', 2474,
        'a', 2474,
        'C', 1744,
        'c', 1744,
        'I', 2407,
        'i', 2407,
        'L', 2711,
        'l', 2711,
        'O', 2285,
        'o', 2285,
        'R', 1708,
        'r', 1708,
        'B', 1712,
        'G', 1712,
        'U', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'u', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('D' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'A', 2483,
        'a', 2483,
        'C', 1744,
        'c', 1744,
        'E', 2233,
        'e', 2233,
        'I', 2932,
        'i', 2932,
        'B', 1712,
        'G', 1712,
        'R', 1712,
        'U', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'r', 1712,
        'u', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('D' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'A', 384,
        'a', 384,
        'E', 1258,
        'e', 1258,
        'H', 287,
        'h', 287,
        'O', 799,
        'o', 799,
      );
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'A', 711,
        'a', 711,
        'E', 437,
        'e', 437,
        'I', 1346,
        'i', 1346,
        'B', 1719,
        'G', 1719,
        'R', 1719,
        'U', 1719,
        'W', 1719,
        'b', 1719,
        'g', 1719,
        'r', 1719,
        'u', 1719,
        'w', 1719,
      );
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'A', 2945,
        'a', 2945,
        'C', 1744,
        'c', 1744,
        'I', 2627,
        'i', 2627,
        'O', 2528,
        'o', 2528,
        'B', 1712,
        'G', 1712,
        'R', 1712,
        'U', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'r', 1712,
        'u', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('D' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'A', 911,
        'a', 911,
        'L', 280,
        'l', 280,
        'O', 1089,
        'o', 1089,
        'R', 1716,
        'r', 1716,
        'B', 1719,
        'G', 1719,
        'U', 1719,
        'W', 1719,
        'b', 1719,
        'g', 1719,
        'u', 1719,
        'w', 1719,
      );
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'A', 2899,
        'a', 2899,
        'C', 1744,
        'c', 1744,
        'H', 2501,
        'h', 2501,
        'I', 2892,
        'i', 2892,
        'B', 1712,
        'G', 1712,
        'R', 1712,
        'U', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'r', 1712,
        'u', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('D' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'B', 1712,
        'b', 1712,
        'C', 1744,
        'c', 1744,
        'N', 2461,
        'n', 2461,
        'S', 1766,
        's', 1766,
        'G', 1712,
        'R', 1712,
        'U', 1712,
        'W', 1712,
        'g', 1712,
        'r', 1712,
        'u', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'C', 1744,
        'c', 1744,
        'E', 2345,
        'e', 2345,
        'I', 2955,
        'i', 2955,
        'O', 2946,
        'o', 2946,
        'U', 1711,
        'u', 1711,
        'B', 1712,
        'G', 1712,
        'R', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'r', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'C', 1744,
        'c', 1744,
        'L', 1720,
        'l', 1720,
        'B', 1712,
        'G', 1712,
        'R', 1712,
        'U', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'r', 1712,
        'u', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'C', 1744,
        'c', 1744,
        'N', 2291,
        'n', 2291,
        'Y', 1763,
        'y', 1763,
        'B', 1712,
        'G', 1712,
        'R', 1712,
        'U', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'r', 1712,
        'u', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'C', 1744,
        'c', 1744,
        'U', 1709,
        'u', 1709,
        'B', 1712,
        'G', 1712,
        'R', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'r', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'C', 1744,
        'c', 1744,
        'B', 1712,
        'G', 1712,
        'R', 1712,
        'U', 1712,
        'W', 1712,
        'b', 1712,
        'g', 1712,
        'r', 1712,
        'u', 1712,
        'w', 1712,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'E', 512,
        'e', 512,
        'I', 1380,
        'i', 1380,
        'O', 1364,
        'o', 1364,
        'U', 1718,
        'u', 1718,
        'B', 1719,
        'G', 1719,
        'R', 1719,
        'W', 1719,
        'b', 1719,
        'g', 1719,
        'r', 1719,
        'w', 1719,
      );
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'H', 701,
        'h', 701,
        'I', 1240,
        'i', 1240,
        'B', 1719,
        'G', 1719,
        'R', 1719,
        'U', 1719,
        'W', 1719,
        'b', 1719,
        'g', 1719,
        'r', 1719,
        'u', 1719,
        'w', 1719,
      );
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'L', 1687,
        'l', 1687,
        'B', 1719,
        'G', 1719,
        'R', 1719,
        'U', 1719,
        'W', 1719,
        'b', 1719,
        'g', 1719,
        'r', 1719,
        'u', 1719,
        'w', 1719,
      );
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'O', 778,
        'o', 778,
        'B', 1719,
        'G', 1719,
        'R', 1719,
        'U', 1719,
        'W', 1719,
        'b', 1719,
        'g', 1719,
        'r', 1719,
        'u', 1719,
        'w', 1719,
      );
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'O', 822,
        'o', 822,
        'R', 1713,
        'r', 1713,
        'B', 1719,
        'G', 1719,
        'U', 1719,
        'W', 1719,
        'b', 1719,
        'g', 1719,
        'u', 1719,
        'w', 1719,
      );
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'U', 1715,
        'u', 1715,
        'B', 1719,
        'G', 1719,
        'R', 1719,
        'W', 1719,
        'b', 1719,
        'g', 1719,
        'r', 1719,
        'w', 1719,
      );
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(sym_color_combination);
      ADVANCE_MAP(
        'B', 1719,
        'G', 1719,
        'R', 1719,
        'U', 1719,
        'W', 1719,
        'b', 1719,
        'g', 1719,
        'r', 1719,
        'u', 1719,
        'w', 1719,
      );
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(sym_color_combination);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(sym_color_count);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(sym_color_count);
      if (lookahead == '.') ADVANCE(1410);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1780);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2992);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1756);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(sym_produces_combination);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        '-', 3001,
        'B', 1744,
        'C', 1744,
        'G', 1744,
        'R', 1744,
        'U', 1744,
        'W', 1744,
        'b', 1744,
        'c', 1744,
        'g', 1744,
        'r', 1744,
        'u', 1744,
        'w', 1744,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'b', 1726,
        'S', 1774,
        's', 1774,
        'B', 1744,
        'C', 1744,
        'G', 1744,
        'R', 1744,
        'U', 1744,
        'W', 1744,
        'c', 1744,
        'g', 1744,
        'r', 1744,
        'u', 1744,
        'w', 1744,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'e', 1647,
        'B', 1744,
        'C', 1744,
        'G', 1744,
        'R', 1744,
        'U', 1744,
        'W', 1744,
        'b', 1744,
        'c', 1744,
        'g', 1744,
        'r', 1744,
        'u', 1744,
        'w', 1744,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'A', 918,
        'a', 918,
        'L', 290,
        'l', 290,
        'O', 1101,
        'o', 1101,
        'R', 1734,
        'r', 1734,
        'B', 1745,
        'C', 1745,
        'G', 1745,
        'U', 1745,
        'W', 1745,
        'b', 1745,
        'c', 1745,
        'g', 1745,
        'u', 1745,
        'w', 1745,
      );
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'A', 743,
        'a', 743,
        'E', 438,
        'e', 438,
        'I', 1357,
        'i', 1357,
        'B', 1745,
        'C', 1745,
        'G', 1745,
        'R', 1745,
        'U', 1745,
        'W', 1745,
        'b', 1745,
        'c', 1745,
        'g', 1745,
        'r', 1745,
        'u', 1745,
        'w', 1745,
      );
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'A', 394,
        'a', 394,
        'E', 1263,
        'e', 1263,
        'H', 305,
        'h', 305,
        'O', 854,
        'o', 854,
        'B', 1745,
        'C', 1745,
        'G', 1745,
        'R', 1745,
        'U', 1745,
        'W', 1745,
        'b', 1745,
        'c', 1745,
        'g', 1745,
        'r', 1745,
        'u', 1745,
        'w', 1745,
      );
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'E', 2188,
        'e', 2188,
        'B', 1744,
        'C', 1744,
        'G', 1744,
        'R', 1744,
        'U', 1744,
        'W', 1744,
        'b', 1744,
        'c', 1744,
        'g', 1744,
        'r', 1744,
        'u', 1744,
        'w', 1744,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'E', 519,
        'e', 519,
        'I', 1381,
        'i', 1381,
        'O', 1365,
        'o', 1365,
        'U', 1737,
        'u', 1737,
        'B', 1745,
        'C', 1745,
        'G', 1745,
        'R', 1745,
        'W', 1745,
        'b', 1745,
        'c', 1745,
        'g', 1745,
        'r', 1745,
        'w', 1745,
      );
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'H', 714,
        'h', 714,
        'I', 1312,
        'i', 1312,
        'B', 1745,
        'C', 1745,
        'G', 1745,
        'R', 1745,
        'U', 1745,
        'W', 1745,
        'b', 1745,
        'c', 1745,
        'g', 1745,
        'r', 1745,
        'u', 1745,
        'w', 1745,
      );
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'L', 1723,
        'l', 1723,
        'B', 1745,
        'C', 1745,
        'G', 1745,
        'R', 1745,
        'U', 1745,
        'W', 1745,
        'b', 1745,
        'c', 1745,
        'g', 1745,
        'r', 1745,
        'u', 1745,
        'w', 1745,
      );
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'O', 780,
        'o', 780,
        'B', 1745,
        'C', 1745,
        'G', 1745,
        'R', 1745,
        'U', 1745,
        'W', 1745,
        'b', 1745,
        'c', 1745,
        'g', 1745,
        'r', 1745,
        'u', 1745,
        'w', 1745,
      );
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'O', 852,
        'o', 852,
        'R', 1731,
        'r', 1731,
        'B', 1745,
        'C', 1745,
        'G', 1745,
        'U', 1745,
        'W', 1745,
        'b', 1745,
        'c', 1745,
        'g', 1745,
        'u', 1745,
        'w', 1745,
      );
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'S', 1774,
        's', 1774,
        'B', 1744,
        'C', 1744,
        'G', 1744,
        'R', 1744,
        'U', 1744,
        'W', 1744,
        'b', 1744,
        'c', 1744,
        'g', 1744,
        'r', 1744,
        'u', 1744,
        'w', 1744,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'U', 1733,
        'u', 1733,
        'B', 1745,
        'C', 1745,
        'G', 1745,
        'R', 1745,
        'W', 1745,
        'b', 1745,
        'c', 1745,
        'g', 1745,
        'r', 1745,
        'w', 1745,
      );
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(sym_produces_combination);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1724);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1828);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (set_contains(sym_produces_combination_character_set_5, 10, lookahead)) ADVANCE(1744);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1749);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(sym_produces_combination);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1740);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2980);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (set_contains(sym_produces_combination_character_set_5, 10, lookahead)) ADVANCE(1744);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1776);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(sym_produces_combination);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1738);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2978);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (set_contains(sym_produces_combination_character_set_5, 10, lookahead)) ADVANCE(1744);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1775);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(sym_produces_combination);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1739);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2982);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (set_contains(sym_produces_combination_character_set_5, 10, lookahead)) ADVANCE(1744);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1777);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(sym_produces_combination);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1741);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2984);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (set_contains(sym_produces_combination_character_set_5, 10, lookahead)) ADVANCE(1744);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1778);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(sym_produces_combination);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1742);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (set_contains(sym_produces_combination_character_set_5, 10, lookahead)) ADVANCE(1744);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1779);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'B', 1744,
        'C', 1744,
        'G', 1744,
        'R', 1744,
        'U', 1744,
        'W', 1744,
        'b', 1744,
        'c', 1744,
        'g', 1744,
        'r', 1744,
        'u', 1744,
        'w', 1744,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'S' ||
          ('X' <= lookahead && lookahead <= 'Z') ||
          lookahead == 's' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(sym_produces_combination);
      ADVANCE_MAP(
        'B', 1745,
        'C', 1745,
        'G', 1745,
        'R', 1745,
        'U', 1745,
        'W', 1745,
        'b', 1745,
        'c', 1745,
        'g', 1745,
        'r', 1745,
        'u', 1745,
        'w', 1745,
      );
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(sym_produces_count);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(sym_produces_count);
      if (lookahead == '.') ADVANCE(1410);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1780);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2992);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1756);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == '-') ADVANCE(3001);
      if (lookahead == '.') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1757);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == '-') ADVANCE(3001);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == '.') ADVANCE(1410);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1780);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2992);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1756);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == '.') ADVANCE(1410);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1749);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(1828);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1748);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == '.') ADVANCE(1410);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1775);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2978);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1751);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == '.') ADVANCE(1410);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1776);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2980);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1752);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == '.') ADVANCE(1410);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1777);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2982);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1753);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == '.') ADVANCE(1410);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1778);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2984);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1754);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == '.') ADVANCE(1410);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1779);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1755);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == '.') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1757);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'R') ADVANCE(1773);
      if (lookahead == 'r') ADVANCE(1759);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2498);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'Y') ADVANCE(1772);
      if (lookahead == 'y') ADVANCE(1761);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2542);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'e') ADVANCE(1912);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'f') ADVANCE(1925);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2191);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      ADVANCE_MAP(
        'A', 2931,
        'a', 2931,
        'C', 1769,
        'c', 1769,
        'E', 2549,
        'e', 2549,
        'H', 2172,
        'h', 2172,
        'I', 2569,
        'i', 2569,
        'L', 2709,
        'l', 2709,
        'N', 2175,
        'n', 2175,
        'P', 2337,
        'p', 2337,
        'T', 2150,
        't', 2150,
        'U', 1771,
        'u', 1771,
        '-', 3008,
        'D', 3008,
        'F', 3008,
        'J', 3008,
        'K', 3008,
        'M', 3008,
        'O', 3008,
        'Q', 3008,
        'V', 3008,
        '_', 3008,
        'd', 3008,
        'f', 3008,
        'j', 3008,
        'k', 3008,
        'm', 3008,
        'o', 3008,
        'q', 3008,
        'v', 3008,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1781);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2235);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('D' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2427);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('D' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1770);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1566);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2412);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1767);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2498);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1773);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2334);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2875);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1768);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2191);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2542);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1772);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2672);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'a' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(1828);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1749);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'a' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(2978);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1775);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'a' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(2980);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1776);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'a' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(2982);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1777);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'a' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(2984);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1778);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (lookahead == 'a' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'b' ||
          lookahead == 'c') ADVANCE(1779);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1781);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'V') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'v')) ADVANCE(3008);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym_mana_cost_token1);
      if (set_contains(aux_sym_mana_cost_token1_character_set_1, 11, lookahead)) ADVANCE(1782);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(sym_mana_symbol);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(sym_format_value);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(sym_format_value);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(974);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(sym_format_value);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2685);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(sym_format_value);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2685);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(sym_format_value);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(sym_format_value);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(sym_format_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(sym_is_value);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2700);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1013);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1329);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2919);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1007);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(916);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(721);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(343);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1791);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(306);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(328);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(549);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(sym_is_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2984);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(sym_is_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(sym_odd_even);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(sym_odd_even);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(sym_odd_even);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(sym_positive_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1820);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(sym_natural_number);
      if (lookahead == '.') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1821);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(sym_natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1822);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(sym_uuid);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(sym_uuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == '-') ADVANCE(2990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == '-') ADVANCE(2996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == '-') ADVANCE(3007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == '-') ADVANCE(3001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A') ADVANCE(2543);
      if (lookahead == 'a') ADVANCE(2085);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2762);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'A', 2623,
        'O', 2263,
        'a', 1872,
        'o', 2133,
        'E', 2173,
        'e', 2173,
        'I', 2421,
        'i', 2421,
        'L', 2923,
        'l', 2923,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'A', 2475,
        'O', 2848,
        'R', 2311,
        'a', 1881,
        'o', 1908,
        'r', 1848,
        't', 1516,
        'E', 2630,
        'e', 2630,
        'H', 2966,
        'h', 2966,
        'I', 2695,
        'i', 2695,
        'L', 2149,
        'l', 2149,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'A', 2866,
        'E', 2416,
        'F', 2244,
        'I', 2436,
        'a', 1900,
        'e', 1984,
        'f', 1842,
        'i', 2065,
        'O', 2914,
        'o', 2914,
        'R', 2148,
        'r', 2148,
        'U', 2163,
        'u', 2163,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(2992);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A') ADVANCE(2934);
      if (lookahead == 'a') ADVANCE(1906);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2721);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A') ADVANCE(2593);
      if (lookahead == 'a') ADVANCE(1868);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A') ADVANCE(2742);
      if (lookahead == 'a') ADVANCE(2741);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A') ADVANCE(2631);
      if (lookahead == 'a') ADVANCE(1875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A') ADVANCE(2746);
      if (lookahead == 'a') ADVANCE(1884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A') ADVANCE(2430);
      if (lookahead == 'a') ADVANCE(1858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A') ADVANCE(2806);
      if (lookahead == 'a') ADVANCE(2805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(2984);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B') ADVANCE(1816);
      if (lookahead == 'b') ADVANCE(1815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B') ADVANCE(2218);
      if (lookahead == 'b') ADVANCE(1839);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2572);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C') ADVANCE(1816);
      if (lookahead == 'c') ADVANCE(1815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C') ADVANCE(1566);
      if (lookahead == 'c') ADVANCE(1474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C') ADVANCE(2521);
      if (lookahead == 'N') ADVANCE(2854);
      if (lookahead == 'c') ADVANCE(2520);
      if (lookahead == 'n') ADVANCE(2036);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D') ADVANCE(2371);
      if (lookahead == 'd') ADVANCE(1855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E') ADVANCE(1816);
      if (lookahead == 'e') ADVANCE(1559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E') ADVANCE(1566);
      if (lookahead == 'e') ADVANCE(1677);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E') ADVANCE(2591);
      if (lookahead == 'I') ADVANCE(2661);
      if (lookahead == 'O') ADVANCE(2592);
      if (lookahead == 'e') ADVANCE(1987);
      if (lookahead == 'i') ADVANCE(1876);
      if (lookahead == 'o') ADVANCE(1952);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E') ADVANCE(1643);
      if (lookahead == 'e') ADVANCE(1611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E') ADVANCE(1643);
      if (lookahead == 'e') ADVANCE(1624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E') ADVANCE(1637);
      if (lookahead == 'e') ADVANCE(1618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E') ADVANCE(2894);
      if (lookahead == 'e') ADVANCE(2131);
      if (lookahead == 'w') ADVANCE(1491);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E') ADVANCE(2749);
      if (lookahead == 'e') ADVANCE(1886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E') ADVANCE(2804);
      if (lookahead == 'e') ADVANCE(1891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E') ADVANCE(2754);
      if (lookahead == 'e') ADVANCE(1888);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E') ADVANCE(2841);
      if (lookahead == 'e') ADVANCE(1608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E') ADVANCE(2826);
      if (lookahead == 'e') ADVANCE(1893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G') ADVANCE(2312);
      if (lookahead == 'g') ADVANCE(1850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G') ADVANCE(2929);
      if (lookahead == 'g') ADVANCE(1620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H') ADVANCE(2668);
      if (lookahead == 'h') ADVANCE(1877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I') ADVANCE(2739);
      if (lookahead == 'i') ADVANCE(1882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I') ADVANCE(2867);
      if (lookahead == 'i') ADVANCE(1901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'K') ADVANCE(1816);
      if (lookahead == 'k') ADVANCE(1631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'L', 2691,
        'M', 2601,
        'l', 1878,
        'm', 1869,
        'N', 2266,
        'n', 2266,
        'V', 2388,
        'v', 2388,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M') ADVANCE(2722);
      if (lookahead == 'm') ADVANCE(1880);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2299);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M') ADVANCE(2313);
      if (lookahead == 'm') ADVANCE(1851);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2626);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M') ADVANCE(2309);
      if (lookahead == 'm') ADVANCE(1847);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M') ADVANCE(2312);
      if (lookahead == 'm') ADVANCE(1849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M') ADVANCE(2193);
      if (lookahead == 'm') ADVANCE(1836);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M') ADVANCE(2201);
      if (lookahead == 'm') ADVANCE(1837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N') ADVANCE(2296);
      if (lookahead == 'd') ADVANCE(1459);
      if (lookahead == 'n') ADVANCE(1550);
      if (lookahead == 's') ADVANCE(1540);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N') ADVANCE(2435);
      if (lookahead == 'n') ADVANCE(1859);
      if (lookahead == 'y') ADVANCE(2050);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N') ADVANCE(2619);
      if (lookahead == 'n') ADVANCE(1942);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2571);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'N', 2573,
        'n', 1913,
        'E', 2836,
        'e', 2836,
        'R', 2288,
        'r', 2288,
        'S', 2901,
        's', 2901,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N') ADVANCE(2304);
      if (lookahead == 'n') ADVANCE(1845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N') ADVANCE(2888);
      if (lookahead == 'n') ADVANCE(1902);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N') ADVANCE(2396);
      if (lookahead == 'n') ADVANCE(1857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O') ADVANCE(2748);
      if (lookahead == 'l') ADVANCE(1983);
      if (lookahead == 'o') ADVANCE(1885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O') ADVANCE(2750);
      if (lookahead == 'o') ADVANCE(1887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P') ADVANCE(1795);
      if (lookahead == 'p') ADVANCE(1626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'P', 2339,
        'p', 1853,
        'I', 2626,
        'i', 2626,
        'R', 2863,
        'r', 2863,
        'U', 2734,
        'u', 2734,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Q') ADVANCE(2921);
      if (lookahead == 'q') ADVANCE(1905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R') ADVANCE(1566);
      if (lookahead == 'r') ADVANCE(1505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R') ADVANCE(2521);
      if (lookahead == 'r') ADVANCE(1863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R') ADVANCE(1564);
      if (lookahead == 'r') ADVANCE(1457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R') ADVANCE(1636);
      if (lookahead == 'r') ADVANCE(1635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R') ADVANCE(1642);
      if (lookahead == 'r') ADVANCE(1615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R') ADVANCE(1789);
      if (lookahead == 'r') ADVANCE(1464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'R', 2684,
        'r', 1954,
        'N', 2290,
        'n', 2290,
        'O', 2849,
        'o', 2849,
        'U', 2624,
        'u', 2624,
        'X', 2872,
        'x', 2872,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'R', 2489,
        'r', 1862,
        'I', 2654,
        'i', 2654,
        'K', 2146,
        'k', 2146,
        'U', 2437,
        'u', 2437,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R') ADVANCE(2605);
      if (lookahead == 'r') ADVANCE(1870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S') ADVANCE(1566);
      if (lookahead == 's') ADVANCE(1512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S') ADVANCE(2809);
      if (lookahead == 's') ADVANCE(1892);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S') ADVANCE(2858);
      if (lookahead == 's') ADVANCE(1899);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'S', 2341,
        's', 2108,
        'B', 2211,
        'b', 2211,
        'D', 1720,
        'd', 1720,
        'L', 2221,
        'l', 2221,
        'P', 2773,
        'p', 2773,
        'V', 2401,
        'v', 2401,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T') ADVANCE(1638);
      if (lookahead == 't') ADVANCE(1665);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T') ADVANCE(1563);
      if (lookahead == 't') ADVANCE(1578);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2333);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T') ADVANCE(2568);
      if (lookahead == 't') ADVANCE(1485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T') ADVANCE(1565);
      if (lookahead == 't') ADVANCE(1597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T') ADVANCE(2391);
      if (lookahead == 't') ADVANCE(1856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T') ADVANCE(2961);
      if (lookahead == 't') ADVANCE(1910);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T') ADVANCE(2340);
      if (lookahead == 't') ADVANCE(2087);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T') ADVANCE(2343);
      if (lookahead == 't') ADVANCE(1854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U') ADVANCE(2426);
      if (lookahead == 'u') ADVANCE(1508);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2350);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U') ADVANCE(2306);
      if (lookahead == 'u') ADVANCE(1846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'V') ADVANCE(2698);
      if (lookahead == 'v') ADVANCE(1879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W') ADVANCE(1816);
      if (lookahead == 'w') ADVANCE(1633);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2740);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W') ADVANCE(2308);
      if (lookahead == 'w') ADVANCE(1501);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'X') ADVANCE(2856);
      if (lookahead == 'x') ADVANCE(1898);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2918);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Y') ADVANCE(1566);
      if (lookahead == 'y') ADVANCE(1573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(1991);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2067);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(1468);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(1468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2038);
      if (lookahead == 'o') ADVANCE(2134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(1992);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(1939);
      if (lookahead == 'd') ADVANCE(1971);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(1939);
      if (lookahead == 'd') ADVANCE(1971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2099);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(1993);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2016);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(1994);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2019);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2086);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(1995);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(1997);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2119);
      if (lookahead == 'm') ADVANCE(1629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2046);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2076);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2063);
      if (lookahead == 'o') ADVANCE(2128);
      if (lookahead == 'r') ADVANCE(1967);
      if (lookahead == 't') ADVANCE(1516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2114);
      if (lookahead == 'e') ADVANCE(1985);
      if (lookahead == 'i') ADVANCE(2066);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'a') ADVANCE(2028);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(1957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'b') ADVANCE(1977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(1474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(2012);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(2017);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(2113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(1972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(2116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(2116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(2117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'c') ADVANCE(2118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(1459);
      if (lookahead == 'n') ADVANCE(1551);
      if (lookahead == 's') ADVANCE(1540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(1536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(1492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(1673);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(1538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(1671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(2123);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2677);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(2123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(1975);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(1975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'd') ADVANCE(1982);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1677);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1988);
      if (lookahead == 'i') ADVANCE(2043);
      if (lookahead == 'o') ADVANCE(1953);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(2068);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(2089);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1944);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(2132);
      if (lookahead == 'w') ADVANCE(1491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(2070);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1950);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(2071);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(2072);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(2093);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(2078);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(2084);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(2075);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'e') ADVANCE(1945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'f') ADVANCE(1525);
      if (lookahead == 'v') ADVANCE(2059);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'f') ADVANCE(1527);
      if (lookahead == 'v') ADVANCE(2059);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'f') ADVANCE(1925);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'f') ADVANCE(1978);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2517);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'f') ADVANCE(1978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(1651);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(1651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(1662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(1649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(1656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(1664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(1660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(1622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'g') ADVANCE(1965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'h') ADVANCE(2044);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(2098);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(2098);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(2064);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(1940);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(2051);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(2107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(1951);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(2052);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(2039);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(2054);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(2055);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(2057);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'i') ADVANCE(2112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'k') ADVANCE(1592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'k') ADVANCE(1631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(2020);
      if (lookahead == 'm') ADVANCE(2024);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(2101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(2124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(1962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(2005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(2018);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'l') ADVANCE(1983);
      if (lookahead == 'o') ADVANCE(2073);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(1936);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(2060);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(1920);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(1930);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(1931);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(1969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(1958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'm') ADVANCE(1961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(2092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2982);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(2092);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(1584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(1555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(1658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(1568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(1669);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(1960);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(1960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(1996);
      if (lookahead == 'y') ADVANCE(2050);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(2110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(2001);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(1914);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(2037);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(2111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(1979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(2106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(1956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'n') ADVANCE(1943);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(1938);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(1938);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(2122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(2031);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(2032);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(2120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(2033);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(2034);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(2077);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(2035);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(2074);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'o') ADVANCE(2115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'p') ADVANCE(1627);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'p') ADVANCE(1959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'p') ADVANCE(2080);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'p') ADVANCE(1980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'q') ADVANCE(2125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(1973);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2499);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(1973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(1606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(1561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(1505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(1604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(1602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(1645);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(1458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(1616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(1465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(2013);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(1948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(2062);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(2002);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(2007);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(2138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(1955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(2011);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'r') ADVANCE(2025);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(1542);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2675);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(1542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(1546);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(1546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(1553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(1512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(1548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(1964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(2090);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(2109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 's') ADVANCE(2105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(1544);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(1544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(2003);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(1531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(1529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(2136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(1667);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(1579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(1486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(1598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(2004);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(2137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(2079);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(2079);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(2091);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(2088);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(2135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(1976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(1968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(2006);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(2008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(2009);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(2010);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 't') ADVANCE(1981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(1518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(1510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(2100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(1941);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(1966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'u') ADVANCE(1963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'v') ADVANCE(2058);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'w') ADVANCE(1633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'w') ADVANCE(1503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'w') ADVANCE(2056);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'x') ADVANCE(2104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(2129);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(2129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(1521);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2209);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(1521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(1573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(1520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(1467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'y') ADVANCE(1986);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'A', 2838,
        'a', 2838,
        'B', 2231,
        'b', 2231,
        'E', 2861,
        'e', 2861,
        'I', 2583,
        'i', 2583,
        'L', 2157,
        'l', 2157,
        'N', 2584,
        'n', 2584,
        'O', 2473,
        'o', 2473,
        'R', 2159,
        'r', 2159,
        'U', 2545,
        'u', 2545,
        'W', 2231,
        'w', 2231,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2543);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2762);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'A', 2623,
        'a', 2623,
        'E', 2173,
        'e', 2173,
        'I', 2421,
        'i', 2421,
        'L', 2923,
        'l', 2923,
        'O', 2263,
        'o', 2263,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'A', 2387,
        'a', 2387,
        'D', 2406,
        'd', 2406,
        'E', 2286,
        'e', 2286,
        'O', 2284,
        'o', 2284,
        'T', 2425,
        't', 2425,
        'U', 2548,
        'u', 2548,
        'V', 1566,
        'v', 1566,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'A', 2589,
        'a', 2589,
        'E', 2260,
        'e', 2260,
        'O', 2617,
        'o', 2617,
        'T', 2763,
        't', 2763,
        'V', 2479,
        'v', 2479,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'A', 2475,
        'a', 2475,
        'E', 2630,
        'e', 2630,
        'H', 2966,
        'h', 2966,
        'I', 2695,
        'i', 2695,
        'L', 2149,
        'l', 2149,
        'O', 2848,
        'o', 2848,
        'R', 2311,
        'r', 2311,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1720);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2588);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2733);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2747);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'A', 2866,
        'a', 2866,
        'E', 2416,
        'e', 2416,
        'F', 2244,
        'f', 2244,
        'I', 2436,
        'i', 2436,
        'O', 2914,
        'o', 2914,
        'R', 2148,
        'r', 2148,
        'U', 2163,
        'u', 2163,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2761);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2655);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2954);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2934);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2721);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2255);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2593);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2162:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2532);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2164:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2532);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2166:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2940);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2167:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'A', 2865,
        'a', 2865,
        'B', 2815,
        'b', 2815,
        'D', 2280,
        'd', 2280,
        'I', 2541,
        'i', 2541,
        'L', 2281,
        'l', 2281,
        'N', 2540,
        'n', 2540,
        'P', 2335,
        'p', 2335,
        'R', 2970,
        'r', 2970,
        'U', 2874,
        'u', 2874,
        'V', 2330,
        'v', 2330,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2168:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2169:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2742);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2170:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2742);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2171:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2172:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2283);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2173:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2424);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2177);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2174:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2175:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2757);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2176:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2177:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2178:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2179:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2180:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2181:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2265);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2628);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2183:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2184:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2769);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2185:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2186:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2188:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2907);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2189:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2785);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2190:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2191:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2192:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2194:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2641);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2195:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2196:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2197:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2198:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2794);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2199:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2200:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2201:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2202:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2203:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2771);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'A', 2657,
        'a', 2657,
        'C', 2422,
        'c', 2422,
        'D', 2406,
        'd', 2406,
        'E', 2587,
        'e', 2587,
        'H', 2375,
        'h', 2375,
        'I', 2599,
        'i', 2599,
        'O', 2527,
        'o', 2527,
        'R', 2182,
        'r', 2182,
        'W', 2679,
        'w', 2679,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2205:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2684);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2206:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2207:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2208:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2209:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2211:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2212:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2213:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2214:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2217:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2908);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2218:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2220:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2830);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2221:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2882);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2225:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2226:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2227:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2667);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'B', 2975,
        'b', 2975,
        'D', 2936,
        'd', 2936,
        'G', 2419,
        'g', 2419,
        'L', 2250,
        'l', 2250,
        'N', 2147,
        'n', 2147,
        'R', 2319,
        'r', 2319,
        'U', 2418,
        'u', 2418,
        'Z', 2682,
        'z', 2682,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 2230:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1816);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2232:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2218);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2572);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2233:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'B', 2211,
        'b', 2211,
        'D', 1720,
        'd', 1720,
        'L', 2221,
        'l', 2221,
        'P', 2773,
        'p', 2773,
        'S', 2341,
        's', 2341,
        'V', 2401,
        'v', 2401,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2234:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2681);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2686);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2683);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2239:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2240:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2242:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2713);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2244:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2245:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2246:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2521);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2854);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2248:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2249:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2443);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2758);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2251:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'C', 2964,
        'c', 2964,
        'K', 2334,
        'k', 2334,
        'L', 2191,
        'l', 2191,
        'O', 2595,
        'o', 2595,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2964);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2254:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2255:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2523);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2920);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2259:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2740);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2653);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2262:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2209);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2264:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'C', 2332,
        'c', 2332,
        'F', 2359,
        'f', 2359,
        'T', 2383,
        't', 2383,
        'V', 2389,
        'v', 2389,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2701);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2271:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2917);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'C', 2405,
        'c', 2405,
        'N', 2169,
        'n', 2169,
        'S', 2880,
        's', 2880,
        'Y', 2358,
        'y', 2358,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1816);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'D', 2452,
        'd', 2452,
        'M', 2243,
        'm', 2243,
        'N', 2423,
        'n', 2423,
        'S', 2728,
        's', 2728,
        'T', 2230,
        't', 2230,
        'U', 2744,
        'u', 2744,
        'V', 2324,
        'v', 2324,
        'X', 2855,
        'x', 2855,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1812);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2709);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2164);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2285:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2976);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2286:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2485);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2288:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2913);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2432);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2290:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2292:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2896);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2645);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2300:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2889);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2307:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2744);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2311:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2591);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2661);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1794);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2813);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2944);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2318:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2633);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2321:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2742);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2941);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2326:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2332:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2727);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2335:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2336:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'E', 2554,
        'e', 2554,
        'I', 2525,
        'i', 2525,
        'L', 2490,
        'l', 2490,
        'O', 2506,
        'o', 2506,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2804);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2345:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2346:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2620);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2351:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2842);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2785);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2355:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2356:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2357:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2752);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2801);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2897);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2360:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2753);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2361:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2362:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2363:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2755);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2364:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2365:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2366:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2367:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2369:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2370:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2372:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2373:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2725);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2375:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2594);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2669);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2377:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2378:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2379:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2380:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2381:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2382:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2383:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2384:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2385:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2386:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2387:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'E', 2836,
        'e', 2836,
        'N', 2573,
        'n', 2573,
        'R', 2288,
        'r', 2288,
        'S', 2901,
        's', 2901,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2388:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2389:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2665);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2390:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2391:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2392:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2909);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2817);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2395:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2396:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2397:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2792);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2399:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2400:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2401:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2796);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2402:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2898);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2403:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2950);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2404:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2405:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2406:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2407:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2890);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2408:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2673);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2409:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2410:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2480);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2411:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2716);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(2925);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2412:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2413:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2707);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2414:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2415:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2787);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2416:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2417:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2418:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2419:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2772);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2420:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2421:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2422:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2729);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2423:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2424:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2921);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2425:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2676);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2426:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2457);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2427:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2699);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2428:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2689);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2429:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2430:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2431:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2432:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2433:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2434:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2435:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2929);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2436:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2499);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2437:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2438:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2439:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2440:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2441:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2442:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2680);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2443:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2444:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2690);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2445:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2446:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2447:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2678);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2448:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2449:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2450:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2937);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2451:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2452:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2776);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2453:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2715);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2454:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2702);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2455:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2456:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2457:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2668);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2458:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2459:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2460:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2461:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2739);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2462:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2463:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2721);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2464:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2465:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2466:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2467:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2953);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2468:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2469:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2470:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2471:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2472:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2473:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2474:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2626);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2156);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2475:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'I', 2626,
        'i', 2626,
        'P', 2339,
        'p', 2339,
        'R', 2863,
        'r', 2863,
        'U', 2734,
        'u', 2734,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2476:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2916);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2477:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2478:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2479:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2480:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2481:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2482:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2483:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'I', 2654,
        'i', 2654,
        'K', 2146,
        'k', 2146,
        'R', 2489,
        'r', 2489,
        'U', 2437,
        'u', 2437,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2484:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2485:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2486:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2487:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2488:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2489:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2490:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2491:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2492:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2663);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2493:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2494:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2495:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2697);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2496:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2497:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2498:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2499:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2500:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2501:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2502:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2714);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2503:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2504:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2505:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2506:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2507:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2939);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2508:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2509:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2696);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2510:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2706);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2511:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2512:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2513:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2514:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2515:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2516:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2517:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2518:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2519:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2520:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2984);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2521:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2522:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2523:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2524:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2525:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2526:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2527:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2350);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2241);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2528:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2346);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2529:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2530:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2531:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2532:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2533:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2534:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1787);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2535:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2536:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2537:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1792);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2538:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2539:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2540:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2541:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2542:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2543:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2675);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2544:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2545:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2571);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2546:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2547:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2548:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2549:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2333);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2518);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2550:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2551:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2552:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2553:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2554:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2555:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2556:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2557:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2558:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2559:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2560:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2561:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2562:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2563:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2564:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2565:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2566:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2567:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'L', 2691,
        'l', 2691,
        'M', 2601,
        'm', 2601,
        'N', 2266,
        'n', 2266,
        'V', 2388,
        'v', 2388,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2568:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2318);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2569:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2938);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2570:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2571:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2572:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2191);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2723);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2573:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2574:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2703);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2575:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2576:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2577:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2693);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2578:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2579:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2580:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2581:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2582:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2583:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2900);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2824);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2584:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2585:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2586:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2587:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2918);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2588:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2722);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2299);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2589:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2309);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2590:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2591:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2517);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2592:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2677);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2593:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2594:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2595:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2596:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2724);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2597:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2732);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2598:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2738);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2599:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2352);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2600:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2601:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2193);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2602:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2603:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2604:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2605:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2606:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2607:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2608:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2609:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2610:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2611:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2612:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2296);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 2613:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2614:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2615:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2616:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2617:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2618:
      ACCEPT_TOKEN(sym_no_quote_string);
      ADVANCE_MAP(
        'N', 2290,
        'n', 2290,
        'O', 2849,
        'o', 2849,
        'R', 2684,
        'r', 2684,
        'U', 2624,
        'u', 2624,
        'X', 2872,
        'x', 2872,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2619:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2620:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2621:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2622:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2623:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2624:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2625:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2626:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2627:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2628:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2812);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2629:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2630:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2621);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2631:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2632:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2633:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2634:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2635:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2636:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2637:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2638:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2639:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2640:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2641:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2642:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2643:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2644:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2645:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2646:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2647:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2648:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2649:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2650:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2651:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2652:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2653:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2654:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2655:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2488);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2656:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2657:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2658:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2659:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2660:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2661:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2888);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2662:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2663:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2844);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2664:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2827);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2665:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2666:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2667:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2668:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2669:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2910);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2670:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2671:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2672:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2673:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2674:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2675:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2676:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2677:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1809);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2678:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2721);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2679:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2680:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2930);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2681:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2952);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2682:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2683:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2940);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2684:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2685:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2686:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2687:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2737);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2688:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2689:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2690:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2691:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2748);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2692:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2693:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2694:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2695:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2696:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2697:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2698:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2699:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2700:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2701:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2702:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2703:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2688);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2704:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2705:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2706:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2707:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2743);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2708:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2709:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2943);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2710:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2725);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2711:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2712:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2713:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2714:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2715:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2705);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2716:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2717:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2644);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2718:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2784);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2719:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2720:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2721:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2722:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2723:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2724:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2725:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2726:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2727:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2728:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2729:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2730:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2731:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2732:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2733:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2734:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2735:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2736:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2737:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2738:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2739:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(2921);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2740:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2741:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2984);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2742:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2743:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2744:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2745:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2746:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2747:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2748:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2749:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2750:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2751:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2752:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2753:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2754:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2755:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2756:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2757:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2758:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2759:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2760:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2761:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2694);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2762:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2326);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2763:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2710);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2764:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2765:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2766:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2726);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2767:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2768:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2769:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2770:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2771:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2772:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2773:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2774:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2775:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2776:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2777:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2778:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2779:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2780:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2781:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2712);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2782:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2783:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2784:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2785:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2786:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2787:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2788:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2789:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2648);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2790:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2791:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2792:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2793:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2794:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2795:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2796:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2797:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2798:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2799:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2830);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2800:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2933);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2801:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2802:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2803:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2222);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2804:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2805:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2982);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2806:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2807:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2808:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2809:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2810:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2811:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2812:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2813:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2814:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2815:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2816:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2817:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2818:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2819:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2820:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2821:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2822:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2823:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2824:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2911);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2825:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2826:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2809);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2827:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2828:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2829:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2830:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2831:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2832:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2833:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2834:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2835:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2836:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2837:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2838:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2839:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2840:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2847);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2841:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2842:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2843:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2844:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2845:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2731);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2846:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2847:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2848:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2903);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2849:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2850:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2951);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2851:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2852:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2853:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2854:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2855:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2856:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2857:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2858:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2859:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2860:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2861:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2862:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2863:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2864:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2865:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2866:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2867:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2868:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2869:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2870:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2871:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2872:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2687);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2873:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2874:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2875:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2876:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2877:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2878:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2879:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2880:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2881:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2882:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2883:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2884:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2885:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2793);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2886:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2887:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2888:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2889:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2890:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2891:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2949);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2892:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2458);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 2893:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2894:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2895:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2896:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2718);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2897:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2898:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2899:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2900:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2901:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2902:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2903:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2904:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2905:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2906:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2717);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2907:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2908:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2909:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2910:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2911:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2736);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2912:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2913:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2914:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2915:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2916:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2917:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2740);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2918:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2919:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2920:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2921:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2922:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2923:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2834);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2924:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2830);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2925:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2926:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2927:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2784);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2928:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2756);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2929:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2930:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2931:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2932:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2933:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2934:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2698);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2935:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2936:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2937:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2938:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2939:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2940:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2941:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2942:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2943:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2944:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2945:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2946:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2947:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2948:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2708);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2949:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2950:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2951:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2952:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2953:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2954:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2955:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2956:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2957:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2958:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2959:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2960:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2961:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2962:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2963:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2964:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2965:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2966:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2967:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2659);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2968:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2969:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2970:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 2971:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 2972:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 2973:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 2974:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 2975:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 2976:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 2977:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(2353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(3008);
      END_STATE();
    case 2978:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1828);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2979:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1824);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2980:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2978);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2981:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2979);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2982:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2980);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2983:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2981);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2984:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2982);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2985:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2983);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2986:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2984);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2987:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1827);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2988:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2987);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2989:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2988);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2990:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2989);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2991:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2985);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2992:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2986);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2993:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1825);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2994:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2993);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2995:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2994);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2996:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2995);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2997:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2991);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2998:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1826);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 2999:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2998);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 3000:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2999);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 3001:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3000);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 3002:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2997);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 3003:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3002);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 3004:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3003);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 3005:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3004);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 3006:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3005);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 3007:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3006);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 3008:
      ACCEPT_TOKEN(sym_no_quote_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3008);
      END_STATE();
    case 3009:
      ACCEPT_TOKEN(sym_single_quote_string);
      END_STATE();
    case 3010:
      ACCEPT_TOKEN(sym_double_quote_string);
      END_STATE();
    case 3011:
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
      ADVANCE_MAP(
        'A', 1,
        'a', 1,
        'B', 2,
        'b', 2,
        'C', 3,
        'c', 3,
        'D', 4,
        'd', 4,
        'E', 5,
        'e', 5,
        'M', 6,
        'm', 6,
        'N', 7,
        'n', 7,
        'O', 8,
        'o', 8,
        'P', 9,
        'p', 9,
        'R', 10,
        'r', 10,
        'S', 11,
        's', 11,
        'T', 12,
        't', 12,
        'U', 13,
        'u', 13,
      );
      END_STATE();
    case 1:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(14);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_rarity_value);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_rarity_value);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(17);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_rarity_value);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_rarity_value);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_rarity_value);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_rarity_value);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_unique_value);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_direction_value);
      END_STATE();
    case 32:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(60);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_rarity_value);
      END_STATE();
    case 55:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(67);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(70);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 71:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_prefer_value);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 76:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 79:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(74);
      END_STATE();
    case 81:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 82:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 83:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 84:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(74);
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
  [5] = {.lex_state = 1445},
  [6] = {.lex_state = 1445},
  [7] = {.lex_state = 1445},
  [8] = {.lex_state = 1445},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 1445},
  [11] = {.lex_state = 1445},
  [12] = {.lex_state = 1445},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 1445},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 1445},
  [38] = {.lex_state = 1445},
  [39] = {.lex_state = 1445},
  [40] = {.lex_state = 1445},
  [41] = {.lex_state = 1445},
  [42] = {.lex_state = 1445},
  [43] = {.lex_state = 1445},
  [44] = {.lex_state = 1445},
  [45] = {.lex_state = 1445},
  [46] = {.lex_state = 1445},
  [47] = {.lex_state = 1445},
  [48] = {.lex_state = 1445},
  [49] = {.lex_state = 1445},
  [50] = {.lex_state = 1445},
  [51] = {.lex_state = 1445},
  [52] = {.lex_state = 1445},
  [53] = {.lex_state = 1445},
  [54] = {.lex_state = 1445},
  [55] = {.lex_state = 1445},
  [56] = {.lex_state = 1445},
  [57] = {.lex_state = 1445},
  [58] = {.lex_state = 1445},
  [59] = {.lex_state = 1445},
  [60] = {.lex_state = 1445},
  [61] = {.lex_state = 1445},
  [62] = {.lex_state = 1445},
  [63] = {.lex_state = 1445},
  [64] = {.lex_state = 1445},
  [65] = {.lex_state = 1445},
  [66] = {.lex_state = 1445},
  [67] = {.lex_state = 1445},
  [68] = {.lex_state = 1445},
  [69] = {.lex_state = 1445},
  [70] = {.lex_state = 1445},
  [71] = {.lex_state = 1445},
  [72] = {.lex_state = 1445},
  [73] = {.lex_state = 1445},
  [74] = {.lex_state = 1445},
  [75] = {.lex_state = 1445},
  [76] = {.lex_state = 1445},
  [77] = {.lex_state = 1445},
  [78] = {.lex_state = 1445},
  [79] = {.lex_state = 1445},
  [80] = {.lex_state = 1445},
  [81] = {.lex_state = 1445},
  [82] = {.lex_state = 1445},
  [83] = {.lex_state = 1445},
  [84] = {.lex_state = 1445},
  [85] = {.lex_state = 1445},
  [86] = {.lex_state = 1445},
  [87] = {.lex_state = 1445},
  [88] = {.lex_state = 1445},
  [89] = {.lex_state = 1445},
  [90] = {.lex_state = 1445},
  [91] = {.lex_state = 1445},
  [92] = {.lex_state = 1445},
  [93] = {.lex_state = 1445},
  [94] = {.lex_state = 1445},
  [95] = {.lex_state = 1445},
  [96] = {.lex_state = 1445},
  [97] = {.lex_state = 1445},
  [98] = {.lex_state = 1445},
  [99] = {.lex_state = 1445},
  [100] = {.lex_state = 1445},
  [101] = {.lex_state = 1445},
  [102] = {.lex_state = 1445},
  [103] = {.lex_state = 1445},
  [104] = {.lex_state = 1445},
  [105] = {.lex_state = 1445},
  [106] = {.lex_state = 1445},
  [107] = {.lex_state = 1445},
  [108] = {.lex_state = 1445},
  [109] = {.lex_state = 1445},
  [110] = {.lex_state = 1445},
  [111] = {.lex_state = 1445},
  [112] = {.lex_state = 1445},
  [113] = {.lex_state = 1445},
  [114] = {.lex_state = 1445},
  [115] = {.lex_state = 1445},
  [116] = {.lex_state = 1445},
  [117] = {.lex_state = 1445},
  [118] = {.lex_state = 1445},
  [119] = {.lex_state = 1445},
  [120] = {.lex_state = 1445},
  [121] = {.lex_state = 1445},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 1445},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 1445},
  [126] = {.lex_state = 22},
  [127] = {.lex_state = 22},
  [128] = {.lex_state = 1445},
  [129] = {.lex_state = 1445},
  [130] = {.lex_state = 253},
  [131] = {.lex_state = 1445},
  [132] = {.lex_state = 22},
  [133] = {.lex_state = 22},
  [134] = {.lex_state = 1445},
  [135] = {.lex_state = 253},
  [136] = {.lex_state = 1445},
  [137] = {.lex_state = 1445},
  [138] = {.lex_state = 1445},
  [139] = {.lex_state = 1445},
  [140] = {.lex_state = 1445},
  [141] = {.lex_state = 1445},
  [142] = {.lex_state = 1445},
  [143] = {.lex_state = 332},
  [144] = {.lex_state = 1445},
  [145] = {.lex_state = 1445},
  [146] = {.lex_state = 1445},
  [147] = {.lex_state = 1445},
  [148] = {.lex_state = 1445},
  [149] = {.lex_state = 1445},
  [150] = {.lex_state = 1445},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1445},
  [153] = {.lex_state = 22},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 259},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 1445},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 1445},
  [166] = {.lex_state = 1445},
  [167] = {.lex_state = 1445},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 1445},
  [170] = {.lex_state = 1445},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 253},
  [173] = {.lex_state = 253},
  [174] = {.lex_state = 20},
  [175] = {.lex_state = 20},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 22},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 20},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 1445},
  [182] = {.lex_state = 1445},
  [183] = {.lex_state = 259},
  [184] = {.lex_state = 22},
  [185] = {.lex_state = 22},
  [186] = {.lex_state = 1445},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_no_quote_string] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identity_condition] = ACTIONS(1),
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
    [sym_keyword_count_filter] = ACTIONS(1),
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
    [sym_layout_filter] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [sym_banned_filter] = ACTIONS(1),
    [sym_restricted_filter] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(1),
    [sym_not_filter] = ACTIONS(1),
    [sym_print_count_filter] = ACTIONS(1),
    [sym_paper_print_count_filter] = ACTIONS(1),
    [sym_in_filter] = ACTIONS(1),
    [sym_produces_filter] = ACTIONS(1),
    [sym_devotion_filter] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [sym_unique_filter] = ACTIONS(1),
    [sym_unique_value] = ACTIONS(1),
    [sym_order_filter] = ACTIONS(1),
    [sym_order_value] = ACTIONS(1),
    [sym_direction_filter] = ACTIONS(1),
    [sym_direction_value] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_rarity] = ACTIONS(1),
    [sym_rarity_value] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_edition] = ACTIONS(1),
    [sym_set_type_filter] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_artist] = ACTIONS(1),
    [anon_sym_cn] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [sym_border_filter] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [sym_frame_filter] = ACTIONS(1),
    [anon_sym_ft] = ACTIONS(1),
    [anon_sym_flavor] = ACTIONS(1),
    [sym_game_filter] = ACTIONS(1),
    [anon_sym_lang] = ACTIONS(1),
    [anon_sym_language] = ACTIONS(1),
    [sym_stamp_filter] = ACTIONS(1),
    [anon_sym_wm] = ACTIONS(1),
    [anon_sym_watermark] = ACTIONS(1),
    [sym_new_filter] = ACTIONS(1),
    [sym_new_value] = ACTIONS(1),
    [sym_prefer_filter] = ACTIONS(1),
    [sym_prefer_value] = ACTIONS(1),
    [anon_sym_cube] = ACTIONS(1),
    [anon_sym_ctag] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_cube_PLUS] = ACTIONS(1),
    [anon_sym_ctag_PLUS] = ACTIONS(1),
    [anon_sym_tag_PLUS] = ACTIONS(1),
    [anon_sym_otag] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_oracletag] = ACTIONS(1),
    [anon_sym_atag] = ACTIONS(1),
    [anon_sym_arttag] = ACTIONS(1),
    [anon_sym_art] = ACTIONS(1),
    [sym_collection_filter] = ACTIONS(1),
    [sym_scryfall_id_filter] = ACTIONS(1),
    [sym_oracle_id_filter] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [sym_number_operator] = ACTIONS(1),
    [sym_equal_operator] = ACTIONS(1),
    [sym_color_combination] = ACTIONS(1),
    [sym_color_count] = ACTIONS(1),
    [sym_produces_combination] = ACTIONS(1),
    [sym_produces_count] = ACTIONS(1),
    [aux_sym_mana_cost_token1] = ACTIONS(1),
    [sym_mana_symbol] = ACTIONS(1),
    [sym_format_value] = ACTIONS(1),
    [sym_is_value] = ACTIONS(1),
    [sym_odd_even] = ACTIONS(1),
    [sym_positive_float] = ACTIONS(1),
    [sym_natural_number] = ACTIONS(1),
    [sym_uuid] = ACTIONS(1),
    [sym_single_quote_string] = ACTIONS(1),
    [sym_double_quote_string] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(201),
    [sym__filter] = STATE(145),
    [sym_unary_statement] = STATE(145),
    [sym_bool_statement] = STATE(145),
    [sym_parentheses] = STATE(69),
    [sym__condition] = STATE(69),
    [sym_color_condition] = STATE(69),
    [sym_color_filter] = STATE(70),
    [sym_color_identity_condition] = STATE(69),
    [sym_identity_filter] = STATE(71),
    [sym_mana_condition] = STATE(69),
    [sym_mana_filter] = STATE(72),
    [sym_cmc_condition] = STATE(69),
    [sym_cmc_filter] = STATE(73),
    [sym_oracle_condition] = STATE(69),
    [sym_oracle_filter] = STATE(74),
    [sym_full_oracle_condition] = STATE(69),
    [sym_full_oracle_filter] = STATE(75),
    [sym_keyword_condition] = STATE(69),
    [sym_keyword_filter] = STATE(200),
    [sym_keyword_count_condition] = STATE(69),
    [sym_type_condition] = STATE(69),
    [sym_type_filter] = STATE(199),
    [sym_power_condition] = STATE(69),
    [sym_power_filter] = STATE(78),
    [sym_toughness_condition] = STATE(69),
    [sym_toughness_filter] = STATE(79),
    [sym_pow_tou_condition] = STATE(69),
    [sym_pow_tou_filter] = STATE(80),
    [sym_loyalty_condition] = STATE(69),
    [sym_loyalty_filter] = STATE(81),
    [sym_defense_condition] = STATE(69),
    [sym_defense_filter] = STATE(82),
    [sym_layout_condition] = STATE(69),
    [sym_format_condition] = STATE(69),
    [sym_format_filter] = STATE(151),
    [sym_banned_condition] = STATE(69),
    [sym_restricted_condition] = STATE(69),
    [sym_is_condition] = STATE(69),
    [sym_is_filter] = STATE(198),
    [sym_not_condition] = STATE(69),
    [sym_print_count_condition] = STATE(69),
    [sym_paper_print_count_condition] = STATE(69),
    [sym_in_condition] = STATE(69),
    [sym_produces_condition] = STATE(69),
    [sym_devotion_condition] = STATE(69),
    [sym_unique_condition] = STATE(69),
    [sym_unique_symbol] = STATE(85),
    [sym_order_condition] = STATE(69),
    [sym_direction_condition] = STATE(69),
    [sym_rarity_condition] = STATE(69),
    [sym_rarity_filter] = STATE(86),
    [sym_set_condition] = STATE(69),
    [sym_set_filter] = STATE(197),
    [sym_set_type_condition] = STATE(69),
    [sym_block_condition] = STATE(69),
    [sym_block_filter] = STATE(196),
    [sym_artist_condition] = STATE(69),
    [sym_artist_filter] = STATE(195),
    [sym_collector_number_condition] = STATE(69),
    [sym_collector_number_filter] = STATE(90),
    [sym_border_condition] = STATE(69),
    [sym_date_condition] = STATE(69),
    [sym_date_filter] = STATE(194),
    [sym_price_condition] = STATE(5),
    [sym_frame_condition] = STATE(69),
    [sym_flavor_condition] = STATE(69),
    [sym_flavor_filter] = STATE(92),
    [sym_game_condition] = STATE(69),
    [sym_language_condition] = STATE(69),
    [sym_language_filter] = STATE(193),
    [sym_stamp_condition] = STATE(69),
    [sym_watermark_condition] = STATE(69),
    [sym_watermark_filter] = STATE(192),
    [sym_new_condition] = STATE(69),
    [sym_prefer_condition] = STATE(69),
    [sym_cube_oracle_condition] = STATE(69),
    [sym_cube_oracle_filter] = STATE(191),
    [sym_cube_print_condition] = STATE(69),
    [sym_cube_print_filter] = STATE(190),
    [sym_oracle_tag_condition] = STATE(69),
    [sym_oracle_tag_filter] = STATE(189),
    [sym_art_tag_condition] = STATE(69),
    [sym_art_tag_filter] = STATE(188),
    [sym_collection_condition] = STATE(69),
    [sym_scryfall_id_condition] = STATE(69),
    [sym_oracle_id_condition] = STATE(69),
    [sym_exact_name_condition] = STATE(69),
    [sym_name_condition] = STATE(69),
    [sym_name_filter] = STATE(187),
    [sym__stringish_value] = STATE(100),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_identity_condition] = ACTIONS(9),
    [anon_sym_c] = ACTIONS(11),
    [anon_sym_color] = ACTIONS(11),
    [anon_sym_id] = ACTIONS(13),
    [anon_sym_ci] = ACTIONS(13),
    [anon_sym_commander] = ACTIONS(13),
    [anon_sym_identity] = ACTIONS(13),
    [anon_sym_mana] = ACTIONS(15),
    [anon_sym_m] = ACTIONS(15),
    [anon_sym_cmc] = ACTIONS(17),
    [anon_sym_mv] = ACTIONS(17),
    [anon_sym_manavalue] = ACTIONS(17),
    [anon_sym_oracle] = ACTIONS(19),
    [anon_sym_o] = ACTIONS(19),
    [anon_sym_text] = ACTIONS(19),
    [anon_sym_fo] = ACTIONS(21),
    [anon_sym_kw] = ACTIONS(23),
    [anon_sym_keyword] = ACTIONS(23),
    [sym_keyword_count_filter] = ACTIONS(25),
    [anon_sym_t] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(27),
    [anon_sym_pow] = ACTIONS(29),
    [anon_sym_power] = ACTIONS(29),
    [anon_sym_tou] = ACTIONS(31),
    [anon_sym_toughness] = ACTIONS(31),
    [anon_sym_pt] = ACTIONS(33),
    [anon_sym_powtou] = ACTIONS(33),
    [anon_sym_loyalty] = ACTIONS(35),
    [anon_sym_loy] = ACTIONS(35),
    [anon_sym_defense] = ACTIONS(37),
    [anon_sym_def] = ACTIONS(37),
    [sym_layout_filter] = ACTIONS(39),
    [anon_sym_format] = ACTIONS(41),
    [anon_sym_f] = ACTIONS(41),
    [sym_banned_filter] = ACTIONS(43),
    [sym_restricted_filter] = ACTIONS(45),
    [anon_sym_is] = ACTIONS(47),
    [anon_sym_has] = ACTIONS(47),
    [sym_not_filter] = ACTIONS(49),
    [sym_print_count_filter] = ACTIONS(51),
    [sym_paper_print_count_filter] = ACTIONS(53),
    [sym_in_filter] = ACTIONS(55),
    [sym_produces_filter] = ACTIONS(57),
    [sym_devotion_filter] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(61),
    [anon_sym_AT_AT] = ACTIONS(61),
    [sym_unique_filter] = ACTIONS(63),
    [sym_order_filter] = ACTIONS(65),
    [sym_direction_filter] = ACTIONS(67),
    [anon_sym_r] = ACTIONS(69),
    [anon_sym_rarity] = ACTIONS(69),
    [anon_sym_s] = ACTIONS(71),
    [anon_sym_set] = ACTIONS(71),
    [anon_sym_e] = ACTIONS(71),
    [anon_sym_edition] = ACTIONS(71),
    [sym_set_type_filter] = ACTIONS(73),
    [anon_sym_b] = ACTIONS(75),
    [anon_sym_block] = ACTIONS(75),
    [anon_sym_a] = ACTIONS(77),
    [anon_sym_artist] = ACTIONS(77),
    [anon_sym_cn] = ACTIONS(79),
    [anon_sym_number] = ACTIONS(79),
    [sym_border_filter] = ACTIONS(81),
    [anon_sym_year] = ACTIONS(83),
    [anon_sym_date] = ACTIONS(83),
    [sym_frame_filter] = ACTIONS(85),
    [anon_sym_ft] = ACTIONS(87),
    [anon_sym_flavor] = ACTIONS(87),
    [sym_game_filter] = ACTIONS(89),
    [anon_sym_lang] = ACTIONS(91),
    [anon_sym_language] = ACTIONS(91),
    [sym_stamp_filter] = ACTIONS(93),
    [anon_sym_wm] = ACTIONS(95),
    [anon_sym_watermark] = ACTIONS(95),
    [sym_new_filter] = ACTIONS(97),
    [sym_prefer_filter] = ACTIONS(99),
    [anon_sym_cube] = ACTIONS(101),
    [anon_sym_ctag] = ACTIONS(101),
    [anon_sym_tag] = ACTIONS(101),
    [anon_sym_cube_PLUS] = ACTIONS(103),
    [anon_sym_ctag_PLUS] = ACTIONS(103),
    [anon_sym_tag_PLUS] = ACTIONS(103),
    [anon_sym_otag] = ACTIONS(105),
    [anon_sym_function] = ACTIONS(105),
    [anon_sym_oracletag] = ACTIONS(105),
    [anon_sym_atag] = ACTIONS(107),
    [anon_sym_arttag] = ACTIONS(107),
    [anon_sym_art] = ACTIONS(107),
    [sym_collection_filter] = ACTIONS(109),
    [sym_scryfall_id_filter] = ACTIONS(111),
    [sym_oracle_id_filter] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_name] = ACTIONS(117),
    [anon_sym_n] = ACTIONS(117),
    [sym_single_quote_string] = ACTIONS(119),
    [sym_double_quote_string] = ACTIONS(119),
    [sym_regex] = ACTIONS(119),
  },
  [2] = {
    [sym__filter] = STATE(144),
    [sym_unary_statement] = STATE(144),
    [sym_bool_statement] = STATE(144),
    [sym_parentheses] = STATE(69),
    [sym__condition] = STATE(69),
    [sym_color_condition] = STATE(69),
    [sym_color_filter] = STATE(70),
    [sym_color_identity_condition] = STATE(69),
    [sym_identity_filter] = STATE(71),
    [sym_mana_condition] = STATE(69),
    [sym_mana_filter] = STATE(72),
    [sym_cmc_condition] = STATE(69),
    [sym_cmc_filter] = STATE(73),
    [sym_oracle_condition] = STATE(69),
    [sym_oracle_filter] = STATE(74),
    [sym_full_oracle_condition] = STATE(69),
    [sym_full_oracle_filter] = STATE(75),
    [sym_keyword_condition] = STATE(69),
    [sym_keyword_filter] = STATE(200),
    [sym_keyword_count_condition] = STATE(69),
    [sym_type_condition] = STATE(69),
    [sym_type_filter] = STATE(199),
    [sym_power_condition] = STATE(69),
    [sym_power_filter] = STATE(78),
    [sym_toughness_condition] = STATE(69),
    [sym_toughness_filter] = STATE(79),
    [sym_pow_tou_condition] = STATE(69),
    [sym_pow_tou_filter] = STATE(80),
    [sym_loyalty_condition] = STATE(69),
    [sym_loyalty_filter] = STATE(81),
    [sym_defense_condition] = STATE(69),
    [sym_defense_filter] = STATE(82),
    [sym_layout_condition] = STATE(69),
    [sym_format_condition] = STATE(69),
    [sym_format_filter] = STATE(151),
    [sym_banned_condition] = STATE(69),
    [sym_restricted_condition] = STATE(69),
    [sym_is_condition] = STATE(69),
    [sym_is_filter] = STATE(198),
    [sym_not_condition] = STATE(69),
    [sym_print_count_condition] = STATE(69),
    [sym_paper_print_count_condition] = STATE(69),
    [sym_in_condition] = STATE(69),
    [sym_produces_condition] = STATE(69),
    [sym_devotion_condition] = STATE(69),
    [sym_unique_condition] = STATE(69),
    [sym_unique_symbol] = STATE(85),
    [sym_order_condition] = STATE(69),
    [sym_direction_condition] = STATE(69),
    [sym_rarity_condition] = STATE(69),
    [sym_rarity_filter] = STATE(86),
    [sym_set_condition] = STATE(69),
    [sym_set_filter] = STATE(197),
    [sym_set_type_condition] = STATE(69),
    [sym_block_condition] = STATE(69),
    [sym_block_filter] = STATE(196),
    [sym_artist_condition] = STATE(69),
    [sym_artist_filter] = STATE(195),
    [sym_collector_number_condition] = STATE(69),
    [sym_collector_number_filter] = STATE(90),
    [sym_border_condition] = STATE(69),
    [sym_date_condition] = STATE(69),
    [sym_date_filter] = STATE(194),
    [sym_price_condition] = STATE(5),
    [sym_frame_condition] = STATE(69),
    [sym_flavor_condition] = STATE(69),
    [sym_flavor_filter] = STATE(92),
    [sym_game_condition] = STATE(69),
    [sym_language_condition] = STATE(69),
    [sym_language_filter] = STATE(193),
    [sym_stamp_condition] = STATE(69),
    [sym_watermark_condition] = STATE(69),
    [sym_watermark_filter] = STATE(192),
    [sym_new_condition] = STATE(69),
    [sym_prefer_condition] = STATE(69),
    [sym_cube_oracle_condition] = STATE(69),
    [sym_cube_oracle_filter] = STATE(191),
    [sym_cube_print_condition] = STATE(69),
    [sym_cube_print_filter] = STATE(190),
    [sym_oracle_tag_condition] = STATE(69),
    [sym_oracle_tag_filter] = STATE(189),
    [sym_art_tag_condition] = STATE(69),
    [sym_art_tag_filter] = STATE(188),
    [sym_collection_condition] = STATE(69),
    [sym_scryfall_id_condition] = STATE(69),
    [sym_oracle_id_condition] = STATE(69),
    [sym_exact_name_condition] = STATE(69),
    [sym_name_condition] = STATE(69),
    [sym_name_filter] = STATE(187),
    [sym__stringish_value] = STATE(100),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_identity_condition] = ACTIONS(9),
    [anon_sym_c] = ACTIONS(11),
    [anon_sym_color] = ACTIONS(11),
    [anon_sym_id] = ACTIONS(13),
    [anon_sym_ci] = ACTIONS(13),
    [anon_sym_commander] = ACTIONS(13),
    [anon_sym_identity] = ACTIONS(13),
    [anon_sym_mana] = ACTIONS(15),
    [anon_sym_m] = ACTIONS(15),
    [anon_sym_cmc] = ACTIONS(17),
    [anon_sym_mv] = ACTIONS(17),
    [anon_sym_manavalue] = ACTIONS(17),
    [anon_sym_oracle] = ACTIONS(19),
    [anon_sym_o] = ACTIONS(19),
    [anon_sym_text] = ACTIONS(19),
    [anon_sym_fo] = ACTIONS(21),
    [anon_sym_kw] = ACTIONS(23),
    [anon_sym_keyword] = ACTIONS(23),
    [sym_keyword_count_filter] = ACTIONS(25),
    [anon_sym_t] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(27),
    [anon_sym_pow] = ACTIONS(29),
    [anon_sym_power] = ACTIONS(29),
    [anon_sym_tou] = ACTIONS(31),
    [anon_sym_toughness] = ACTIONS(31),
    [anon_sym_pt] = ACTIONS(33),
    [anon_sym_powtou] = ACTIONS(33),
    [anon_sym_loyalty] = ACTIONS(35),
    [anon_sym_loy] = ACTIONS(35),
    [anon_sym_defense] = ACTIONS(37),
    [anon_sym_def] = ACTIONS(37),
    [sym_layout_filter] = ACTIONS(39),
    [anon_sym_format] = ACTIONS(41),
    [anon_sym_f] = ACTIONS(41),
    [sym_banned_filter] = ACTIONS(43),
    [sym_restricted_filter] = ACTIONS(45),
    [anon_sym_is] = ACTIONS(47),
    [anon_sym_has] = ACTIONS(47),
    [sym_not_filter] = ACTIONS(49),
    [sym_print_count_filter] = ACTIONS(51),
    [sym_paper_print_count_filter] = ACTIONS(53),
    [sym_in_filter] = ACTIONS(55),
    [sym_produces_filter] = ACTIONS(57),
    [sym_devotion_filter] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(61),
    [anon_sym_AT_AT] = ACTIONS(61),
    [sym_unique_filter] = ACTIONS(63),
    [sym_order_filter] = ACTIONS(65),
    [sym_direction_filter] = ACTIONS(67),
    [anon_sym_r] = ACTIONS(69),
    [anon_sym_rarity] = ACTIONS(69),
    [anon_sym_s] = ACTIONS(71),
    [anon_sym_set] = ACTIONS(71),
    [anon_sym_e] = ACTIONS(71),
    [anon_sym_edition] = ACTIONS(71),
    [sym_set_type_filter] = ACTIONS(73),
    [anon_sym_b] = ACTIONS(75),
    [anon_sym_block] = ACTIONS(75),
    [anon_sym_a] = ACTIONS(77),
    [anon_sym_artist] = ACTIONS(77),
    [anon_sym_cn] = ACTIONS(79),
    [anon_sym_number] = ACTIONS(79),
    [sym_border_filter] = ACTIONS(81),
    [anon_sym_year] = ACTIONS(83),
    [anon_sym_date] = ACTIONS(83),
    [sym_frame_filter] = ACTIONS(85),
    [anon_sym_ft] = ACTIONS(87),
    [anon_sym_flavor] = ACTIONS(87),
    [sym_game_filter] = ACTIONS(89),
    [anon_sym_lang] = ACTIONS(91),
    [anon_sym_language] = ACTIONS(91),
    [sym_stamp_filter] = ACTIONS(93),
    [anon_sym_wm] = ACTIONS(95),
    [anon_sym_watermark] = ACTIONS(95),
    [sym_new_filter] = ACTIONS(97),
    [sym_prefer_filter] = ACTIONS(99),
    [anon_sym_cube] = ACTIONS(101),
    [anon_sym_ctag] = ACTIONS(101),
    [anon_sym_tag] = ACTIONS(101),
    [anon_sym_cube_PLUS] = ACTIONS(103),
    [anon_sym_ctag_PLUS] = ACTIONS(103),
    [anon_sym_tag_PLUS] = ACTIONS(103),
    [anon_sym_otag] = ACTIONS(105),
    [anon_sym_function] = ACTIONS(105),
    [anon_sym_oracletag] = ACTIONS(105),
    [anon_sym_atag] = ACTIONS(107),
    [anon_sym_arttag] = ACTIONS(107),
    [anon_sym_art] = ACTIONS(107),
    [sym_collection_filter] = ACTIONS(109),
    [sym_scryfall_id_filter] = ACTIONS(111),
    [sym_oracle_id_filter] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_name] = ACTIONS(117),
    [anon_sym_n] = ACTIONS(117),
    [sym_single_quote_string] = ACTIONS(119),
    [sym_double_quote_string] = ACTIONS(119),
    [sym_regex] = ACTIONS(119),
  },
  [3] = {
    [sym__filter] = STATE(103),
    [sym_unary_statement] = STATE(103),
    [sym_bool_statement] = STATE(103),
    [sym_parentheses] = STATE(69),
    [sym__condition] = STATE(69),
    [sym_color_condition] = STATE(69),
    [sym_color_filter] = STATE(70),
    [sym_color_identity_condition] = STATE(69),
    [sym_identity_filter] = STATE(71),
    [sym_mana_condition] = STATE(69),
    [sym_mana_filter] = STATE(72),
    [sym_cmc_condition] = STATE(69),
    [sym_cmc_filter] = STATE(73),
    [sym_oracle_condition] = STATE(69),
    [sym_oracle_filter] = STATE(74),
    [sym_full_oracle_condition] = STATE(69),
    [sym_full_oracle_filter] = STATE(75),
    [sym_keyword_condition] = STATE(69),
    [sym_keyword_filter] = STATE(200),
    [sym_keyword_count_condition] = STATE(69),
    [sym_type_condition] = STATE(69),
    [sym_type_filter] = STATE(199),
    [sym_power_condition] = STATE(69),
    [sym_power_filter] = STATE(78),
    [sym_toughness_condition] = STATE(69),
    [sym_toughness_filter] = STATE(79),
    [sym_pow_tou_condition] = STATE(69),
    [sym_pow_tou_filter] = STATE(80),
    [sym_loyalty_condition] = STATE(69),
    [sym_loyalty_filter] = STATE(81),
    [sym_defense_condition] = STATE(69),
    [sym_defense_filter] = STATE(82),
    [sym_layout_condition] = STATE(69),
    [sym_format_condition] = STATE(69),
    [sym_format_filter] = STATE(151),
    [sym_banned_condition] = STATE(69),
    [sym_restricted_condition] = STATE(69),
    [sym_is_condition] = STATE(69),
    [sym_is_filter] = STATE(198),
    [sym_not_condition] = STATE(69),
    [sym_print_count_condition] = STATE(69),
    [sym_paper_print_count_condition] = STATE(69),
    [sym_in_condition] = STATE(69),
    [sym_produces_condition] = STATE(69),
    [sym_devotion_condition] = STATE(69),
    [sym_unique_condition] = STATE(69),
    [sym_unique_symbol] = STATE(85),
    [sym_order_condition] = STATE(69),
    [sym_direction_condition] = STATE(69),
    [sym_rarity_condition] = STATE(69),
    [sym_rarity_filter] = STATE(86),
    [sym_set_condition] = STATE(69),
    [sym_set_filter] = STATE(197),
    [sym_set_type_condition] = STATE(69),
    [sym_block_condition] = STATE(69),
    [sym_block_filter] = STATE(196),
    [sym_artist_condition] = STATE(69),
    [sym_artist_filter] = STATE(195),
    [sym_collector_number_condition] = STATE(69),
    [sym_collector_number_filter] = STATE(90),
    [sym_border_condition] = STATE(69),
    [sym_date_condition] = STATE(69),
    [sym_date_filter] = STATE(194),
    [sym_price_condition] = STATE(5),
    [sym_frame_condition] = STATE(69),
    [sym_flavor_condition] = STATE(69),
    [sym_flavor_filter] = STATE(92),
    [sym_game_condition] = STATE(69),
    [sym_language_condition] = STATE(69),
    [sym_language_filter] = STATE(193),
    [sym_stamp_condition] = STATE(69),
    [sym_watermark_condition] = STATE(69),
    [sym_watermark_filter] = STATE(192),
    [sym_new_condition] = STATE(69),
    [sym_prefer_condition] = STATE(69),
    [sym_cube_oracle_condition] = STATE(69),
    [sym_cube_oracle_filter] = STATE(191),
    [sym_cube_print_condition] = STATE(69),
    [sym_cube_print_filter] = STATE(190),
    [sym_oracle_tag_condition] = STATE(69),
    [sym_oracle_tag_filter] = STATE(189),
    [sym_art_tag_condition] = STATE(69),
    [sym_art_tag_filter] = STATE(188),
    [sym_collection_condition] = STATE(69),
    [sym_scryfall_id_condition] = STATE(69),
    [sym_oracle_id_condition] = STATE(69),
    [sym_exact_name_condition] = STATE(69),
    [sym_name_condition] = STATE(69),
    [sym_name_filter] = STATE(187),
    [sym__stringish_value] = STATE(100),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_identity_condition] = ACTIONS(9),
    [anon_sym_c] = ACTIONS(11),
    [anon_sym_color] = ACTIONS(11),
    [anon_sym_id] = ACTIONS(13),
    [anon_sym_ci] = ACTIONS(13),
    [anon_sym_commander] = ACTIONS(13),
    [anon_sym_identity] = ACTIONS(13),
    [anon_sym_mana] = ACTIONS(15),
    [anon_sym_m] = ACTIONS(15),
    [anon_sym_cmc] = ACTIONS(17),
    [anon_sym_mv] = ACTIONS(17),
    [anon_sym_manavalue] = ACTIONS(17),
    [anon_sym_oracle] = ACTIONS(19),
    [anon_sym_o] = ACTIONS(19),
    [anon_sym_text] = ACTIONS(19),
    [anon_sym_fo] = ACTIONS(21),
    [anon_sym_kw] = ACTIONS(23),
    [anon_sym_keyword] = ACTIONS(23),
    [sym_keyword_count_filter] = ACTIONS(25),
    [anon_sym_t] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(27),
    [anon_sym_pow] = ACTIONS(29),
    [anon_sym_power] = ACTIONS(29),
    [anon_sym_tou] = ACTIONS(31),
    [anon_sym_toughness] = ACTIONS(31),
    [anon_sym_pt] = ACTIONS(33),
    [anon_sym_powtou] = ACTIONS(33),
    [anon_sym_loyalty] = ACTIONS(35),
    [anon_sym_loy] = ACTIONS(35),
    [anon_sym_defense] = ACTIONS(37),
    [anon_sym_def] = ACTIONS(37),
    [sym_layout_filter] = ACTIONS(39),
    [anon_sym_format] = ACTIONS(41),
    [anon_sym_f] = ACTIONS(41),
    [sym_banned_filter] = ACTIONS(43),
    [sym_restricted_filter] = ACTIONS(45),
    [anon_sym_is] = ACTIONS(47),
    [anon_sym_has] = ACTIONS(47),
    [sym_not_filter] = ACTIONS(49),
    [sym_print_count_filter] = ACTIONS(51),
    [sym_paper_print_count_filter] = ACTIONS(53),
    [sym_in_filter] = ACTIONS(55),
    [sym_produces_filter] = ACTIONS(57),
    [sym_devotion_filter] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(61),
    [anon_sym_AT_AT] = ACTIONS(61),
    [sym_unique_filter] = ACTIONS(63),
    [sym_order_filter] = ACTIONS(65),
    [sym_direction_filter] = ACTIONS(67),
    [anon_sym_r] = ACTIONS(69),
    [anon_sym_rarity] = ACTIONS(69),
    [anon_sym_s] = ACTIONS(71),
    [anon_sym_set] = ACTIONS(71),
    [anon_sym_e] = ACTIONS(71),
    [anon_sym_edition] = ACTIONS(71),
    [sym_set_type_filter] = ACTIONS(73),
    [anon_sym_b] = ACTIONS(75),
    [anon_sym_block] = ACTIONS(75),
    [anon_sym_a] = ACTIONS(77),
    [anon_sym_artist] = ACTIONS(77),
    [anon_sym_cn] = ACTIONS(79),
    [anon_sym_number] = ACTIONS(79),
    [sym_border_filter] = ACTIONS(81),
    [anon_sym_year] = ACTIONS(83),
    [anon_sym_date] = ACTIONS(83),
    [sym_frame_filter] = ACTIONS(85),
    [anon_sym_ft] = ACTIONS(87),
    [anon_sym_flavor] = ACTIONS(87),
    [sym_game_filter] = ACTIONS(89),
    [anon_sym_lang] = ACTIONS(91),
    [anon_sym_language] = ACTIONS(91),
    [sym_stamp_filter] = ACTIONS(93),
    [anon_sym_wm] = ACTIONS(95),
    [anon_sym_watermark] = ACTIONS(95),
    [sym_new_filter] = ACTIONS(97),
    [sym_prefer_filter] = ACTIONS(99),
    [anon_sym_cube] = ACTIONS(101),
    [anon_sym_ctag] = ACTIONS(101),
    [anon_sym_tag] = ACTIONS(101),
    [anon_sym_cube_PLUS] = ACTIONS(103),
    [anon_sym_ctag_PLUS] = ACTIONS(103),
    [anon_sym_tag_PLUS] = ACTIONS(103),
    [anon_sym_otag] = ACTIONS(105),
    [anon_sym_function] = ACTIONS(105),
    [anon_sym_oracletag] = ACTIONS(105),
    [anon_sym_atag] = ACTIONS(107),
    [anon_sym_arttag] = ACTIONS(107),
    [anon_sym_art] = ACTIONS(107),
    [sym_collection_filter] = ACTIONS(109),
    [sym_scryfall_id_filter] = ACTIONS(111),
    [sym_oracle_id_filter] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_name] = ACTIONS(117),
    [anon_sym_n] = ACTIONS(117),
    [sym_single_quote_string] = ACTIONS(119),
    [sym_double_quote_string] = ACTIONS(119),
    [sym_regex] = ACTIONS(119),
  },
  [4] = {
    [sym_parentheses] = STATE(101),
    [sym__condition] = STATE(101),
    [sym_color_condition] = STATE(101),
    [sym_color_filter] = STATE(70),
    [sym_color_identity_condition] = STATE(101),
    [sym_identity_filter] = STATE(71),
    [sym_mana_condition] = STATE(101),
    [sym_mana_filter] = STATE(72),
    [sym_cmc_condition] = STATE(101),
    [sym_cmc_filter] = STATE(73),
    [sym_oracle_condition] = STATE(101),
    [sym_oracle_filter] = STATE(74),
    [sym_full_oracle_condition] = STATE(101),
    [sym_full_oracle_filter] = STATE(75),
    [sym_keyword_condition] = STATE(101),
    [sym_keyword_filter] = STATE(200),
    [sym_keyword_count_condition] = STATE(101),
    [sym_type_condition] = STATE(101),
    [sym_type_filter] = STATE(199),
    [sym_power_condition] = STATE(101),
    [sym_power_filter] = STATE(78),
    [sym_toughness_condition] = STATE(101),
    [sym_toughness_filter] = STATE(79),
    [sym_pow_tou_condition] = STATE(101),
    [sym_pow_tou_filter] = STATE(80),
    [sym_loyalty_condition] = STATE(101),
    [sym_loyalty_filter] = STATE(81),
    [sym_defense_condition] = STATE(101),
    [sym_defense_filter] = STATE(82),
    [sym_layout_condition] = STATE(101),
    [sym_format_condition] = STATE(101),
    [sym_format_filter] = STATE(151),
    [sym_banned_condition] = STATE(101),
    [sym_restricted_condition] = STATE(101),
    [sym_is_condition] = STATE(101),
    [sym_is_filter] = STATE(198),
    [sym_not_condition] = STATE(101),
    [sym_print_count_condition] = STATE(101),
    [sym_paper_print_count_condition] = STATE(101),
    [sym_in_condition] = STATE(101),
    [sym_produces_condition] = STATE(101),
    [sym_devotion_condition] = STATE(101),
    [sym_unique_condition] = STATE(101),
    [sym_unique_symbol] = STATE(85),
    [sym_order_condition] = STATE(101),
    [sym_direction_condition] = STATE(101),
    [sym_rarity_condition] = STATE(101),
    [sym_rarity_filter] = STATE(86),
    [sym_set_condition] = STATE(101),
    [sym_set_filter] = STATE(197),
    [sym_set_type_condition] = STATE(101),
    [sym_block_condition] = STATE(101),
    [sym_block_filter] = STATE(196),
    [sym_artist_condition] = STATE(101),
    [sym_artist_filter] = STATE(195),
    [sym_collector_number_condition] = STATE(101),
    [sym_collector_number_filter] = STATE(90),
    [sym_border_condition] = STATE(101),
    [sym_date_condition] = STATE(101),
    [sym_date_filter] = STATE(194),
    [sym_price_condition] = STATE(5),
    [sym_frame_condition] = STATE(101),
    [sym_flavor_condition] = STATE(101),
    [sym_flavor_filter] = STATE(92),
    [sym_game_condition] = STATE(101),
    [sym_language_condition] = STATE(101),
    [sym_language_filter] = STATE(193),
    [sym_stamp_condition] = STATE(101),
    [sym_watermark_condition] = STATE(101),
    [sym_watermark_filter] = STATE(192),
    [sym_new_condition] = STATE(101),
    [sym_prefer_condition] = STATE(101),
    [sym_cube_oracle_condition] = STATE(101),
    [sym_cube_oracle_filter] = STATE(191),
    [sym_cube_print_condition] = STATE(101),
    [sym_cube_print_filter] = STATE(190),
    [sym_oracle_tag_condition] = STATE(101),
    [sym_oracle_tag_filter] = STATE(189),
    [sym_art_tag_condition] = STATE(101),
    [sym_art_tag_filter] = STATE(188),
    [sym_collection_condition] = STATE(101),
    [sym_scryfall_id_condition] = STATE(101),
    [sym_oracle_id_condition] = STATE(101),
    [sym_exact_name_condition] = STATE(101),
    [sym_name_condition] = STATE(101),
    [sym_name_filter] = STATE(187),
    [sym__stringish_value] = STATE(100),
    [sym_no_quote_string] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_identity_condition] = ACTIONS(121),
    [anon_sym_c] = ACTIONS(11),
    [anon_sym_color] = ACTIONS(11),
    [anon_sym_id] = ACTIONS(13),
    [anon_sym_ci] = ACTIONS(13),
    [anon_sym_commander] = ACTIONS(13),
    [anon_sym_identity] = ACTIONS(13),
    [anon_sym_mana] = ACTIONS(15),
    [anon_sym_m] = ACTIONS(15),
    [anon_sym_cmc] = ACTIONS(17),
    [anon_sym_mv] = ACTIONS(17),
    [anon_sym_manavalue] = ACTIONS(17),
    [anon_sym_oracle] = ACTIONS(19),
    [anon_sym_o] = ACTIONS(19),
    [anon_sym_text] = ACTIONS(19),
    [anon_sym_fo] = ACTIONS(21),
    [anon_sym_kw] = ACTIONS(23),
    [anon_sym_keyword] = ACTIONS(23),
    [sym_keyword_count_filter] = ACTIONS(25),
    [anon_sym_t] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(27),
    [anon_sym_pow] = ACTIONS(29),
    [anon_sym_power] = ACTIONS(29),
    [anon_sym_tou] = ACTIONS(31),
    [anon_sym_toughness] = ACTIONS(31),
    [anon_sym_pt] = ACTIONS(33),
    [anon_sym_powtou] = ACTIONS(33),
    [anon_sym_loyalty] = ACTIONS(35),
    [anon_sym_loy] = ACTIONS(35),
    [anon_sym_defense] = ACTIONS(37),
    [anon_sym_def] = ACTIONS(37),
    [sym_layout_filter] = ACTIONS(39),
    [anon_sym_format] = ACTIONS(41),
    [anon_sym_f] = ACTIONS(41),
    [sym_banned_filter] = ACTIONS(43),
    [sym_restricted_filter] = ACTIONS(45),
    [anon_sym_is] = ACTIONS(47),
    [anon_sym_has] = ACTIONS(47),
    [sym_not_filter] = ACTIONS(49),
    [sym_print_count_filter] = ACTIONS(51),
    [sym_paper_print_count_filter] = ACTIONS(53),
    [sym_in_filter] = ACTIONS(55),
    [sym_produces_filter] = ACTIONS(57),
    [sym_devotion_filter] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(61),
    [anon_sym_AT_AT] = ACTIONS(61),
    [sym_unique_filter] = ACTIONS(63),
    [sym_order_filter] = ACTIONS(65),
    [sym_direction_filter] = ACTIONS(67),
    [anon_sym_r] = ACTIONS(69),
    [anon_sym_rarity] = ACTIONS(69),
    [anon_sym_s] = ACTIONS(71),
    [anon_sym_set] = ACTIONS(71),
    [anon_sym_e] = ACTIONS(71),
    [anon_sym_edition] = ACTIONS(71),
    [sym_set_type_filter] = ACTIONS(73),
    [anon_sym_b] = ACTIONS(75),
    [anon_sym_block] = ACTIONS(75),
    [anon_sym_a] = ACTIONS(77),
    [anon_sym_artist] = ACTIONS(77),
    [anon_sym_cn] = ACTIONS(79),
    [anon_sym_number] = ACTIONS(79),
    [sym_border_filter] = ACTIONS(81),
    [anon_sym_year] = ACTIONS(83),
    [anon_sym_date] = ACTIONS(83),
    [sym_frame_filter] = ACTIONS(85),
    [anon_sym_ft] = ACTIONS(87),
    [anon_sym_flavor] = ACTIONS(87),
    [sym_game_filter] = ACTIONS(89),
    [anon_sym_lang] = ACTIONS(91),
    [anon_sym_language] = ACTIONS(91),
    [sym_stamp_filter] = ACTIONS(93),
    [anon_sym_wm] = ACTIONS(95),
    [anon_sym_watermark] = ACTIONS(95),
    [sym_new_filter] = ACTIONS(97),
    [sym_prefer_filter] = ACTIONS(99),
    [anon_sym_cube] = ACTIONS(101),
    [anon_sym_ctag] = ACTIONS(101),
    [anon_sym_tag] = ACTIONS(101),
    [anon_sym_cube_PLUS] = ACTIONS(103),
    [anon_sym_ctag_PLUS] = ACTIONS(103),
    [anon_sym_tag_PLUS] = ACTIONS(103),
    [anon_sym_otag] = ACTIONS(105),
    [anon_sym_function] = ACTIONS(105),
    [anon_sym_oracletag] = ACTIONS(105),
    [anon_sym_atag] = ACTIONS(107),
    [anon_sym_arttag] = ACTIONS(107),
    [anon_sym_art] = ACTIONS(107),
    [sym_collection_filter] = ACTIONS(109),
    [sym_scryfall_id_filter] = ACTIONS(111),
    [sym_oracle_id_filter] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_name] = ACTIONS(117),
    [anon_sym_n] = ACTIONS(117),
    [sym_single_quote_string] = ACTIONS(119),
    [sym_double_quote_string] = ACTIONS(119),
    [sym_regex] = ACTIONS(119),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym__num_or_equal_operator,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
    ACTIONS(127), 2,
      sym_number_operator,
      sym_equal_operator,
  [15] = 4,
    ACTIONS(129), 1,
      sym_no_quote_string,
    ACTIONS(131), 1,
      sym_natural_number,
    STATE(89), 1,
      sym__stringish_value,
    ACTIONS(133), 3,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [30] = 4,
    ACTIONS(131), 1,
      sym_natural_number,
    ACTIONS(135), 1,
      sym_no_quote_string,
    STATE(87), 1,
      sym__stringish_value,
    ACTIONS(137), 3,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [45] = 4,
    ACTIONS(131), 1,
      sym_natural_number,
    ACTIONS(139), 1,
      sym_no_quote_string,
    STATE(51), 1,
      sym__stringish_value,
    ACTIONS(141), 3,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [60] = 2,
    STATE(76), 1,
      sym__stringish_value,
    ACTIONS(143), 4,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [70] = 4,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      sym_mana_symbol,
    STATE(10), 1,
      aux_sym_mana_cost_repeat1,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [84] = 2,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      sym_bool_operator,
      sym_number_operator,
      sym_equal_operator,
  [94] = 4,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(160), 1,
      sym_mana_symbol,
    STATE(10), 1,
      aux_sym_mana_cost_repeat1,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [108] = 2,
    STATE(41), 1,
      sym__stringish_value,
    ACTIONS(162), 4,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [118] = 2,
    STATE(118), 1,
      sym__stringish_value,
    ACTIONS(164), 4,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
      sym_regex,
  [128] = 4,
    ACTIONS(131), 1,
      sym_natural_number,
    ACTIONS(166), 1,
      sym_no_quote_string,
    STATE(56), 1,
      sym__string_value,
    ACTIONS(168), 2,
      sym_single_quote_string,
      sym_double_quote_string,
  [142] = 2,
    STATE(57), 1,
      sym__string_value,
    ACTIONS(170), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [151] = 2,
    STATE(49), 1,
      sym__string_value,
    ACTIONS(172), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [160] = 2,
    STATE(54), 1,
      sym__string_value,
    ACTIONS(174), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [169] = 2,
    STATE(110), 1,
      sym__string_value,
    ACTIONS(176), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [178] = 2,
    STATE(58), 1,
      sym__string_value,
    ACTIONS(178), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [187] = 2,
    STATE(59), 1,
      sym__string_value,
    ACTIONS(180), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [196] = 2,
    STATE(77), 1,
      sym__string_value,
    ACTIONS(182), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [205] = 2,
    STATE(42), 1,
      sym__string_value,
    ACTIONS(184), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [214] = 2,
    STATE(47), 1,
      sym__string_value,
    ACTIONS(186), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [223] = 4,
    ACTIONS(188), 1,
      aux_sym_mana_cost_token1,
    ACTIONS(190), 1,
      sym_mana_symbol,
    STATE(12), 1,
      aux_sym_mana_cost_repeat1,
    STATE(38), 1,
      sym_mana_cost,
  [236] = 2,
    STATE(46), 1,
      sym__string_value,
    ACTIONS(192), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [245] = 2,
    STATE(106), 1,
      sym__string_value,
    ACTIONS(194), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [254] = 2,
    STATE(114), 1,
      sym__string_value,
    ACTIONS(196), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [263] = 2,
    STATE(40), 1,
      sym__string_value,
    ACTIONS(198), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [272] = 2,
    STATE(113), 1,
      sym__string_value,
    ACTIONS(200), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [281] = 2,
    STATE(102), 1,
      sym__string_value,
    ACTIONS(202), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [290] = 4,
    ACTIONS(188), 1,
      aux_sym_mana_cost_token1,
    ACTIONS(190), 1,
      sym_mana_symbol,
    STATE(12), 1,
      aux_sym_mana_cost_repeat1,
    STATE(125), 1,
      sym_mana_cost,
  [303] = 2,
    STATE(112), 1,
      sym__string_value,
    ACTIONS(204), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [312] = 2,
    STATE(111), 1,
      sym__string_value,
    ACTIONS(206), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [321] = 2,
    STATE(45), 1,
      sym__string_value,
    ACTIONS(208), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [330] = 2,
    STATE(44), 1,
      sym__string_value,
    ACTIONS(210), 3,
      sym_no_quote_string,
      sym_single_quote_string,
      sym_double_quote_string,
  [339] = 2,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [347] = 2,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [355] = 2,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [363] = 2,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [371] = 2,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [379] = 2,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [387] = 2,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [395] = 2,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [403] = 2,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [411] = 2,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [419] = 2,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [427] = 2,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [435] = 2,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [443] = 2,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [451] = 2,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [459] = 2,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [467] = 2,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [475] = 2,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [483] = 2,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [491] = 2,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [499] = 2,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [507] = 2,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [515] = 2,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [523] = 2,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [531] = 2,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [539] = 2,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [547] = 2,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [555] = 2,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [563] = 2,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [571] = 2,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [579] = 2,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [587] = 2,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [595] = 2,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [603] = 3,
    ACTIONS(336), 1,
      sym_number_operator,
    ACTIONS(338), 1,
      sym_equal_operator,
    STATE(173), 1,
      sym__num_or_equal_operator,
  [613] = 3,
    ACTIONS(340), 1,
      sym_number_operator,
    ACTIONS(342), 1,
      sym_equal_operator,
    STATE(172), 1,
      sym__num_or_equal_operator,
  [623] = 3,
    ACTIONS(344), 1,
      sym_number_operator,
    ACTIONS(346), 1,
      sym_equal_operator,
    STATE(25), 1,
      sym__num_or_equal_operator,
  [633] = 3,
    ACTIONS(348), 1,
      sym_number_operator,
    ACTIONS(350), 1,
      sym_equal_operator,
    STATE(127), 1,
      sym__num_or_equal_operator,
  [643] = 3,
    ACTIONS(352), 1,
      sym_number_operator,
    ACTIONS(354), 1,
      sym_equal_operator,
    STATE(170), 1,
      sym__num_or_equal_operator,
  [653] = 3,
    ACTIONS(356), 1,
      sym_number_operator,
    ACTIONS(358), 1,
      sym_equal_operator,
    STATE(169), 1,
      sym__num_or_equal_operator,
  [663] = 2,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [671] = 2,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [679] = 2,
    STATE(132), 1,
      sym__num_or_equal_operator,
    ACTIONS(368), 2,
      sym_number_operator,
      sym_equal_operator,
  [687] = 2,
    STATE(133), 1,
      sym__num_or_equal_operator,
    ACTIONS(370), 2,
      sym_number_operator,
      sym_equal_operator,
  [695] = 2,
    STATE(165), 1,
      sym__num_or_equal_operator,
    ACTIONS(372), 2,
      sym_number_operator,
      sym_equal_operator,
  [703] = 2,
    STATE(167), 1,
      sym__num_or_equal_operator,
    ACTIONS(374), 2,
      sym_number_operator,
      sym_equal_operator,
  [711] = 2,
    STATE(152), 1,
      sym__num_or_equal_operator,
    ACTIONS(376), 2,
      sym_number_operator,
      sym_equal_operator,
  [719] = 2,
    STATE(32), 1,
      sym__num_or_equal_operator,
    ACTIONS(378), 2,
      sym_number_operator,
      sym_equal_operator,
  [727] = 2,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [735] = 2,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [743] = 2,
    STATE(157), 1,
      sym__num_or_equal_operator,
    ACTIONS(388), 2,
      sym_number_operator,
      sym_equal_operator,
  [751] = 2,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [759] = 2,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [767] = 2,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [775] = 3,
    ACTIONS(394), 1,
      sym_number_operator,
    ACTIONS(396), 1,
      sym_equal_operator,
    STATE(162), 1,
      sym__num_or_equal_operator,
  [785] = 2,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(398), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [793] = 3,
    ACTIONS(402), 1,
      sym_number_operator,
    ACTIONS(404), 1,
      sym_equal_operator,
    STATE(166), 1,
      sym__num_or_equal_operator,
  [803] = 2,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(398), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [811] = 2,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [819] = 2,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [827] = 2,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [835] = 2,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [843] = 2,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [851] = 2,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [859] = 2,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    ACTIONS(414), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [867] = 2,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [875] = 2,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    ACTIONS(422), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [883] = 2,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [891] = 2,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(430), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [899] = 2,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [907] = 2,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [915] = 2,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [923] = 2,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [931] = 2,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    ACTIONS(450), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [939] = 2,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(454), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [947] = 2,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [955] = 2,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(462), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [963] = 2,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    ACTIONS(466), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [971] = 2,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    ACTIONS(470), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [979] = 2,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    ACTIONS(474), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [987] = 2,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    ACTIONS(478), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [995] = 2,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    ACTIONS(482), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [1003] = 2,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    ACTIONS(486), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [1011] = 2,
    STATE(143), 1,
      sym__num_or_equal_operator,
    ACTIONS(490), 2,
      sym_number_operator,
      sym_equal_operator,
  [1019] = 2,
    STATE(186), 1,
      sym__num_or_equal_operator,
    ACTIONS(492), 2,
      sym_number_operator,
      sym_equal_operator,
  [1027] = 2,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(494), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [1035] = 3,
    ACTIONS(498), 1,
      sym_positive_float,
    ACTIONS(500), 1,
      sym_natural_number,
    STATE(11), 1,
      sym__number,
  [1045] = 2,
    STATE(182), 1,
      sym__num_or_equal_operator,
    ACTIONS(502), 2,
      sym_number_operator,
      sym_equal_operator,
  [1053] = 2,
    ACTIONS(506), 1,
      sym_regex,
    ACTIONS(504), 2,
      aux_sym_mana_cost_token1,
      sym_mana_symbol,
  [1061] = 2,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    ACTIONS(508), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [1069] = 3,
    ACTIONS(131), 1,
      sym_natural_number,
    ACTIONS(504), 1,
      sym_positive_float,
    ACTIONS(512), 1,
      sym_odd_even,
  [1079] = 3,
    ACTIONS(514), 1,
      sym_positive_float,
    ACTIONS(516), 1,
      sym_natural_number,
    STATE(91), 1,
      sym__number,
  [1089] = 2,
    STATE(181), 1,
      sym__num_or_equal_operator,
    ACTIONS(518), 2,
      sym_number_operator,
      sym_equal_operator,
  [1097] = 2,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym_bool_operator,
  [1105] = 2,
    ACTIONS(504), 1,
      sym_color_count,
    ACTIONS(520), 1,
      sym_color_combination,
  [1112] = 1,
    ACTIONS(522), 2,
      sym_number_operator,
      sym_equal_operator,
  [1117] = 1,
    ACTIONS(524), 2,
      sym_toughness_value,
      sym_natural_number,
  [1122] = 1,
    ACTIONS(526), 2,
      sym_power_value,
      sym_natural_number,
  [1127] = 1,
    ACTIONS(528), 2,
      sym_number_operator,
      sym_equal_operator,
  [1132] = 2,
    ACTIONS(504), 1,
      sym_color_count,
    ACTIONS(530), 1,
      sym_color_combination,
  [1139] = 1,
    ACTIONS(532), 2,
      sym_number_operator,
      sym_equal_operator,
  [1144] = 1,
    ACTIONS(534), 2,
      sym_number_operator,
      sym_equal_operator,
  [1149] = 1,
    ACTIONS(536), 2,
      sym_number_operator,
      sym_equal_operator,
  [1154] = 1,
    ACTIONS(538), 2,
      sym_number_operator,
      sym_equal_operator,
  [1159] = 1,
    ACTIONS(540), 2,
      sym_number_operator,
      sym_equal_operator,
  [1164] = 1,
    ACTIONS(542), 2,
      sym_number_operator,
      sym_equal_operator,
  [1169] = 1,
    ACTIONS(544), 2,
      sym_number_operator,
      sym_equal_operator,
  [1174] = 2,
    ACTIONS(546), 1,
      sym_produces_combination,
    ACTIONS(548), 1,
      sym_produces_count,
  [1181] = 2,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(552), 1,
      sym_bool_operator,
  [1188] = 2,
    ACTIONS(552), 1,
      sym_bool_operator,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
  [1195] = 1,
    ACTIONS(556), 2,
      sym_number_operator,
      sym_equal_operator,
  [1200] = 1,
    ACTIONS(558), 2,
      sym_number_operator,
      sym_equal_operator,
  [1205] = 1,
    ACTIONS(560), 2,
      sym_number_operator,
      sym_equal_operator,
  [1210] = 1,
    ACTIONS(562), 2,
      sym_number_operator,
      sym_equal_operator,
  [1215] = 1,
    ACTIONS(564), 2,
      sym_number_operator,
      sym_equal_operator,
  [1220] = 1,
    ACTIONS(566), 1,
      sym_equal_operator,
  [1224] = 1,
    ACTIONS(568), 1,
      sym_natural_number,
  [1228] = 1,
    ACTIONS(570), 1,
      sym_format_value,
  [1232] = 1,
    ACTIONS(572), 1,
      sym_equal_operator,
  [1236] = 1,
    ACTIONS(574), 1,
      sym_is_value,
  [1240] = 1,
    ACTIONS(576), 1,
      sym_equal_operator,
  [1244] = 1,
    ACTIONS(578), 1,
      sym_rarity_value,
  [1248] = 1,
    ACTIONS(580), 1,
      sym_equal_operator,
  [1252] = 1,
    ACTIONS(582), 1,
      sym_equal_operator,
  [1256] = 1,
    ACTIONS(584), 1,
      sym_equal_operator,
  [1260] = 1,
    ACTIONS(586), 1,
      sym_equal_operator,
  [1264] = 1,
    ACTIONS(588), 1,
      sym_natural_number,
  [1268] = 1,
    ACTIONS(590), 1,
      sym_equal_operator,
  [1272] = 1,
    ACTIONS(592), 1,
      sym_equal_operator,
  [1276] = 1,
    ACTIONS(594), 1,
      sym_natural_number,
  [1280] = 1,
    ACTIONS(596), 1,
      sym_natural_number,
  [1284] = 1,
    ACTIONS(598), 1,
      sym_natural_number,
  [1288] = 1,
    ACTIONS(600), 1,
      sym_equal_operator,
  [1292] = 1,
    ACTIONS(602), 1,
      sym_natural_number,
  [1296] = 1,
    ACTIONS(604), 1,
      sym_natural_number,
  [1300] = 1,
    ACTIONS(606), 1,
      sym_equal_operator,
  [1304] = 1,
    ACTIONS(608), 1,
      sym_color_count,
  [1308] = 1,
    ACTIONS(610), 1,
      sym_color_count,
  [1312] = 1,
    ACTIONS(612), 1,
      sym_uuid,
  [1316] = 1,
    ACTIONS(614), 1,
      sym_uuid,
  [1320] = 1,
    ACTIONS(616), 1,
      sym_prefer_value,
  [1324] = 1,
    ACTIONS(618), 1,
      sym_new_value,
  [1328] = 1,
    ACTIONS(620), 1,
      sym_direction_value,
  [1332] = 1,
    ACTIONS(622), 1,
      sym_order_value,
  [1336] = 1,
    ACTIONS(624), 1,
      sym_unique_value,
  [1340] = 1,
    ACTIONS(626), 1,
      sym_natural_number,
  [1344] = 1,
    ACTIONS(628), 1,
      sym_natural_number,
  [1348] = 1,
    ACTIONS(630), 1,
      sym_is_value,
  [1352] = 1,
    ACTIONS(632), 1,
      sym_format_value,
  [1356] = 1,
    ACTIONS(634), 1,
      sym_format_value,
  [1360] = 1,
    ACTIONS(636), 1,
      sym_natural_number,
  [1364] = 1,
    ACTIONS(638), 1,
      sym_equal_operator,
  [1368] = 1,
    ACTIONS(640), 1,
      sym_equal_operator,
  [1372] = 1,
    ACTIONS(642), 1,
      sym_equal_operator,
  [1376] = 1,
    ACTIONS(644), 1,
      sym_equal_operator,
  [1380] = 1,
    ACTIONS(646), 1,
      sym_equal_operator,
  [1384] = 1,
    ACTIONS(648), 1,
      sym_equal_operator,
  [1388] = 1,
    ACTIONS(650), 1,
      sym_equal_operator,
  [1392] = 1,
    ACTIONS(652), 1,
      sym_equal_operator,
  [1396] = 1,
    ACTIONS(654), 1,
      sym_equal_operator,
  [1400] = 1,
    ACTIONS(656), 1,
      sym_equal_operator,
  [1404] = 1,
    ACTIONS(658), 1,
      sym_equal_operator,
  [1408] = 1,
    ACTIONS(660), 1,
      sym_equal_operator,
  [1412] = 1,
    ACTIONS(662), 1,
      sym_equal_operator,
  [1416] = 1,
    ACTIONS(664), 1,
      sym_equal_operator,
  [1420] = 1,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
  [1424] = 1,
    ACTIONS(668), 1,
      sym_equal_operator,
  [1428] = 1,
    ACTIONS(670), 1,
      sym_equal_operator,
  [1432] = 1,
    ACTIONS(672), 1,
      sym_equal_operator,
  [1436] = 1,
    ACTIONS(674), 1,
      sym_equal_operator,
  [1440] = 1,
    ACTIONS(676), 1,
      sym_equal_operator,
  [1444] = 1,
    ACTIONS(678), 1,
      sym_equal_operator,
  [1448] = 1,
    ACTIONS(680), 1,
      sym_equal_operator,
  [1452] = 1,
    ACTIONS(682), 1,
      sym_equal_operator,
  [1456] = 1,
    ACTIONS(684), 1,
      sym_equal_operator,
  [1460] = 1,
    ACTIONS(686), 1,
      sym_equal_operator,
  [1464] = 1,
    ACTIONS(688), 1,
      sym_equal_operator,
  [1468] = 1,
    ACTIONS(690), 1,
      sym_equal_operator,
  [1472] = 1,
    ACTIONS(692), 1,
      sym_equal_operator,
  [1476] = 1,
    ACTIONS(694), 1,
      sym_equal_operator,
  [1480] = 1,
    ACTIONS(696), 1,
      sym_equal_operator,
  [1484] = 1,
    ACTIONS(698), 1,
      sym_equal_operator,
  [1488] = 1,
    ACTIONS(700), 1,
      sym_equal_operator,
  [1492] = 1,
    ACTIONS(702), 1,
      sym_equal_operator,
  [1496] = 1,
    ACTIONS(704), 1,
      sym_equal_operator,
  [1500] = 1,
    ACTIONS(706), 1,
      sym_equal_operator,
  [1504] = 1,
    ACTIONS(708), 1,
      sym_equal_operator,
  [1508] = 1,
    ACTIONS(710), 1,
      sym_equal_operator,
  [1512] = 1,
    ACTIONS(712), 1,
      sym_equal_operator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 15,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 70,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 94,
  [SMALL_STATE(13)] = 108,
  [SMALL_STATE(14)] = 118,
  [SMALL_STATE(15)] = 128,
  [SMALL_STATE(16)] = 142,
  [SMALL_STATE(17)] = 151,
  [SMALL_STATE(18)] = 160,
  [SMALL_STATE(19)] = 169,
  [SMALL_STATE(20)] = 178,
  [SMALL_STATE(21)] = 187,
  [SMALL_STATE(22)] = 196,
  [SMALL_STATE(23)] = 205,
  [SMALL_STATE(24)] = 214,
  [SMALL_STATE(25)] = 223,
  [SMALL_STATE(26)] = 236,
  [SMALL_STATE(27)] = 245,
  [SMALL_STATE(28)] = 254,
  [SMALL_STATE(29)] = 263,
  [SMALL_STATE(30)] = 272,
  [SMALL_STATE(31)] = 281,
  [SMALL_STATE(32)] = 290,
  [SMALL_STATE(33)] = 303,
  [SMALL_STATE(34)] = 312,
  [SMALL_STATE(35)] = 321,
  [SMALL_STATE(36)] = 330,
  [SMALL_STATE(37)] = 339,
  [SMALL_STATE(38)] = 347,
  [SMALL_STATE(39)] = 355,
  [SMALL_STATE(40)] = 363,
  [SMALL_STATE(41)] = 371,
  [SMALL_STATE(42)] = 379,
  [SMALL_STATE(43)] = 387,
  [SMALL_STATE(44)] = 395,
  [SMALL_STATE(45)] = 403,
  [SMALL_STATE(46)] = 411,
  [SMALL_STATE(47)] = 419,
  [SMALL_STATE(48)] = 427,
  [SMALL_STATE(49)] = 435,
  [SMALL_STATE(50)] = 443,
  [SMALL_STATE(51)] = 451,
  [SMALL_STATE(52)] = 459,
  [SMALL_STATE(53)] = 467,
  [SMALL_STATE(54)] = 475,
  [SMALL_STATE(55)] = 483,
  [SMALL_STATE(56)] = 491,
  [SMALL_STATE(57)] = 499,
  [SMALL_STATE(58)] = 507,
  [SMALL_STATE(59)] = 515,
  [SMALL_STATE(60)] = 523,
  [SMALL_STATE(61)] = 531,
  [SMALL_STATE(62)] = 539,
  [SMALL_STATE(63)] = 547,
  [SMALL_STATE(64)] = 555,
  [SMALL_STATE(65)] = 563,
  [SMALL_STATE(66)] = 571,
  [SMALL_STATE(67)] = 579,
  [SMALL_STATE(68)] = 587,
  [SMALL_STATE(69)] = 595,
  [SMALL_STATE(70)] = 603,
  [SMALL_STATE(71)] = 613,
  [SMALL_STATE(72)] = 623,
  [SMALL_STATE(73)] = 633,
  [SMALL_STATE(74)] = 643,
  [SMALL_STATE(75)] = 653,
  [SMALL_STATE(76)] = 663,
  [SMALL_STATE(77)] = 671,
  [SMALL_STATE(78)] = 679,
  [SMALL_STATE(79)] = 687,
  [SMALL_STATE(80)] = 695,
  [SMALL_STATE(81)] = 703,
  [SMALL_STATE(82)] = 711,
  [SMALL_STATE(83)] = 719,
  [SMALL_STATE(84)] = 727,
  [SMALL_STATE(85)] = 735,
  [SMALL_STATE(86)] = 743,
  [SMALL_STATE(87)] = 751,
  [SMALL_STATE(88)] = 759,
  [SMALL_STATE(89)] = 767,
  [SMALL_STATE(90)] = 775,
  [SMALL_STATE(91)] = 785,
  [SMALL_STATE(92)] = 793,
  [SMALL_STATE(93)] = 803,
  [SMALL_STATE(94)] = 811,
  [SMALL_STATE(95)] = 819,
  [SMALL_STATE(96)] = 827,
  [SMALL_STATE(97)] = 835,
  [SMALL_STATE(98)] = 843,
  [SMALL_STATE(99)] = 851,
  [SMALL_STATE(100)] = 859,
  [SMALL_STATE(101)] = 867,
  [SMALL_STATE(102)] = 875,
  [SMALL_STATE(103)] = 883,
  [SMALL_STATE(104)] = 891,
  [SMALL_STATE(105)] = 899,
  [SMALL_STATE(106)] = 907,
  [SMALL_STATE(107)] = 915,
  [SMALL_STATE(108)] = 923,
  [SMALL_STATE(109)] = 931,
  [SMALL_STATE(110)] = 939,
  [SMALL_STATE(111)] = 947,
  [SMALL_STATE(112)] = 955,
  [SMALL_STATE(113)] = 963,
  [SMALL_STATE(114)] = 971,
  [SMALL_STATE(115)] = 979,
  [SMALL_STATE(116)] = 987,
  [SMALL_STATE(117)] = 995,
  [SMALL_STATE(118)] = 1003,
  [SMALL_STATE(119)] = 1011,
  [SMALL_STATE(120)] = 1019,
  [SMALL_STATE(121)] = 1027,
  [SMALL_STATE(122)] = 1035,
  [SMALL_STATE(123)] = 1045,
  [SMALL_STATE(124)] = 1053,
  [SMALL_STATE(125)] = 1061,
  [SMALL_STATE(126)] = 1069,
  [SMALL_STATE(127)] = 1079,
  [SMALL_STATE(128)] = 1089,
  [SMALL_STATE(129)] = 1097,
  [SMALL_STATE(130)] = 1105,
  [SMALL_STATE(131)] = 1112,
  [SMALL_STATE(132)] = 1117,
  [SMALL_STATE(133)] = 1122,
  [SMALL_STATE(134)] = 1127,
  [SMALL_STATE(135)] = 1132,
  [SMALL_STATE(136)] = 1139,
  [SMALL_STATE(137)] = 1144,
  [SMALL_STATE(138)] = 1149,
  [SMALL_STATE(139)] = 1154,
  [SMALL_STATE(140)] = 1159,
  [SMALL_STATE(141)] = 1164,
  [SMALL_STATE(142)] = 1169,
  [SMALL_STATE(143)] = 1174,
  [SMALL_STATE(144)] = 1181,
  [SMALL_STATE(145)] = 1188,
  [SMALL_STATE(146)] = 1195,
  [SMALL_STATE(147)] = 1200,
  [SMALL_STATE(148)] = 1205,
  [SMALL_STATE(149)] = 1210,
  [SMALL_STATE(150)] = 1215,
  [SMALL_STATE(151)] = 1220,
  [SMALL_STATE(152)] = 1224,
  [SMALL_STATE(153)] = 1228,
  [SMALL_STATE(154)] = 1232,
  [SMALL_STATE(155)] = 1236,
  [SMALL_STATE(156)] = 1240,
  [SMALL_STATE(157)] = 1244,
  [SMALL_STATE(158)] = 1248,
  [SMALL_STATE(159)] = 1252,
  [SMALL_STATE(160)] = 1256,
  [SMALL_STATE(161)] = 1260,
  [SMALL_STATE(162)] = 1264,
  [SMALL_STATE(163)] = 1268,
  [SMALL_STATE(164)] = 1272,
  [SMALL_STATE(165)] = 1276,
  [SMALL_STATE(166)] = 1280,
  [SMALL_STATE(167)] = 1284,
  [SMALL_STATE(168)] = 1288,
  [SMALL_STATE(169)] = 1292,
  [SMALL_STATE(170)] = 1296,
  [SMALL_STATE(171)] = 1300,
  [SMALL_STATE(172)] = 1304,
  [SMALL_STATE(173)] = 1308,
  [SMALL_STATE(174)] = 1312,
  [SMALL_STATE(175)] = 1316,
  [SMALL_STATE(176)] = 1320,
  [SMALL_STATE(177)] = 1324,
  [SMALL_STATE(178)] = 1328,
  [SMALL_STATE(179)] = 1332,
  [SMALL_STATE(180)] = 1336,
  [SMALL_STATE(181)] = 1340,
  [SMALL_STATE(182)] = 1344,
  [SMALL_STATE(183)] = 1348,
  [SMALL_STATE(184)] = 1352,
  [SMALL_STATE(185)] = 1356,
  [SMALL_STATE(186)] = 1360,
  [SMALL_STATE(187)] = 1364,
  [SMALL_STATE(188)] = 1368,
  [SMALL_STATE(189)] = 1372,
  [SMALL_STATE(190)] = 1376,
  [SMALL_STATE(191)] = 1380,
  [SMALL_STATE(192)] = 1384,
  [SMALL_STATE(193)] = 1388,
  [SMALL_STATE(194)] = 1392,
  [SMALL_STATE(195)] = 1396,
  [SMALL_STATE(196)] = 1400,
  [SMALL_STATE(197)] = 1404,
  [SMALL_STATE(198)] = 1408,
  [SMALL_STATE(199)] = 1412,
  [SMALL_STATE(200)] = 1416,
  [SMALL_STATE(201)] = 1420,
  [SMALL_STATE(202)] = 1424,
  [SMALL_STATE(203)] = 1428,
  [SMALL_STATE(204)] = 1432,
  [SMALL_STATE(205)] = 1436,
  [SMALL_STATE(206)] = 1440,
  [SMALL_STATE(207)] = 1444,
  [SMALL_STATE(208)] = 1448,
  [SMALL_STATE(209)] = 1452,
  [SMALL_STATE(210)] = 1456,
  [SMALL_STATE(211)] = 1460,
  [SMALL_STATE(212)] = 1464,
  [SMALL_STATE(213)] = 1468,
  [SMALL_STATE(214)] = 1472,
  [SMALL_STATE(215)] = 1476,
  [SMALL_STATE(216)] = 1480,
  [SMALL_STATE(217)] = 1484,
  [SMALL_STATE(218)] = 1488,
  [SMALL_STATE(219)] = 1492,
  [SMALL_STATE(220)] = 1496,
  [SMALL_STATE(221)] = 1500,
  [SMALL_STATE(222)] = 1504,
  [SMALL_STATE(223)] = 1508,
  [SMALL_STATE(224)] = 1512,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__num_or_equal_operator, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mana_cost_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mana_cost_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mana_cost_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_condition, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price_condition, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mana_cost, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mana_cost, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_produces_condition, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_produces_condition, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mana_condition, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mana_condition, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_symbol, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unique_symbol, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_condition, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_condition, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_condition, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_condition, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_art_tag_condition, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_art_tag_condition, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paper_print_count_condition, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paper_print_count_condition, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_tag_condition, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oracle_tag_condition, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cube_print_condition, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cube_print_condition, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cube_oracle_condition, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cube_oracle_condition, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_watermark_condition, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_watermark_condition, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_count_condition, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_count_condition, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_condition, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_condition, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flavor_condition, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flavor_condition, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_condition, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_condition, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restricted_condition, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restricted_condition, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_condition, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_condition, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collector_number_condition, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collector_number_condition, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_artist_condition, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_artist_condition, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_condition, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_condition, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_condition, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_condition, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rarity_condition, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rarity_condition, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_condition, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_condition, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_condition, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_condition, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defense_condition, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defense_condition, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loyalty_condition, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loyalty_condition, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pow_tou_condition, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pow_tou_condition, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toughness_condition, 3, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_toughness_condition, 3, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_power_condition, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_power_condition, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_banned_condition, 3, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_banned_condition, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_statement, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_statement, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_condition, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_condition, 3, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_condition, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_condition, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_oracle_condition, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_oracle_condition, 3, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_condition, 1, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unique_condition, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_condition, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oracle_condition, 3, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmc_condition, 3, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmc_condition, 3, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_identity_condition, 3, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_identity_condition, 3, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_condition, 3, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_condition, 3, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_name_condition, 1, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact_name_condition, 1, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_statement, 2, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_statement, 2, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_condition, 3, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layout_condition, 3, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_statement, 3, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_statement, 3, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_id_condition, 3, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oracle_id_condition, 3, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scryfall_id_condition, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scryfall_id_condition, 3, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_condition, 3, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_condition, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefer_condition, 3, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefer_condition, 3, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_condition, 3, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_condition, 3, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_count_condition, 3, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_count_condition, 3, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stamp_condition, 3, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stamp_condition, 3, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_condition, 3, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game_condition, 3, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_condition, 3, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame_condition, 3, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_border_condition, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_border_condition, 3, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_type_condition, 3, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_type_condition, 3, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parentheses, 3, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parentheses, 3, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_condition, 3, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_condition, 3, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_condition, 3, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_condition, 3, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact_name_condition, 2, 0, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact_name_condition, 2, 0, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_condition, 3, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unique_condition, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__num_or_equal_operator, 1, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_devotion_condition, 3, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_devotion_condition, 3, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_filter, 1, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defense_filter, 1, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loyalty_filter, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pow_tou_filter, 1, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toughness_filter, 1, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_power_filter, 1, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmc_filter, 1, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_oracle_filter, 1, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_filter, 1, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mana_filter, 1, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flavor_filter, 1, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collector_number_filter, 1, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rarity_filter, 1, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_filter, 1, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_filter, 1, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_filter, 1, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_filter, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_filter, 1, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [666] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_filter, 1, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_art_tag_filter, 1, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oracle_tag_filter, 1, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cube_print_filter, 1, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cube_oracle_filter, 1, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_watermark_filter, 1, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_filter, 1, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_filter, 1, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_artist_filter, 1, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_filter, 1, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_filter, 1, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
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
