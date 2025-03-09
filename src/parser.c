#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_end_of_command = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  sym_subidentifier = 4,
  sym_keyword = 5,
  sym_variable = 6,
  sym_string = 7,
  sym_number = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_STAR = 11,
  anon_sym_SLASH = 12,
  anon_sym_STAR_STAR = 13,
  anon_sym_LT = 14,
  anon_sym_GT = 15,
  anon_sym_EQ = 16,
  anon_sym_LT_GT = 17,
  anon_sym_LT_EQ = 18,
  anon_sym_GT_EQ = 19,
  anon_sym_AMP = 20,
  anon_sym_PIPE = 21,
  sym_comma = 22,
  sym_comment = 23,
  anon_sym_BEGINPROGRAM = 24,
  anon_sym_ENDPROGRAM_DOT = 25,
  sym_python = 26,
  sym_r = 27,
  aux_sym_injection_source_token1 = 28,
  sym_identifier = 29,
  sym_source_file = 30,
  sym_command = 31,
  sym_subcommand = 32,
  sym_arguments = 33,
  sym_parenthetical = 34,
  sym_arithmetic = 35,
  sym_comparison = 36,
  sym_logical = 37,
  sym_injection = 38,
  sym_language = 39,
  sym_injection_source = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_command_repeat1 = 42,
  aux_sym_arguments_repeat1 = 43,
  aux_sym_injection_source_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_end_of_command] = "end_of_command",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_subidentifier] = "subidentifier",
  [sym_keyword] = "keyword",
  [sym_variable] = "variable",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [sym_comma] = "comma",
  [sym_comment] = "comment",
  [anon_sym_BEGINPROGRAM] = "BEGIN PROGRAM",
  [anon_sym_ENDPROGRAM_DOT] = "END PROGRAM.",
  [sym_python] = "python",
  [sym_r] = "r",
  [aux_sym_injection_source_token1] = "injection_source_token1",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_command] = "command",
  [sym_subcommand] = "subcommand",
  [sym_arguments] = "arguments",
  [sym_parenthetical] = "parenthetical",
  [sym_arithmetic] = "arithmetic",
  [sym_comparison] = "comparison",
  [sym_logical] = "logical",
  [sym_injection] = "injection",
  [sym_language] = "language",
  [sym_injection_source] = "injection_source",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_injection_source_repeat1] = "injection_source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_end_of_command] = sym_end_of_command,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_subidentifier] = sym_subidentifier,
  [sym_keyword] = sym_keyword,
  [sym_variable] = sym_variable,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_comma] = sym_comma,
  [sym_comment] = sym_comment,
  [anon_sym_BEGINPROGRAM] = anon_sym_BEGINPROGRAM,
  [anon_sym_ENDPROGRAM_DOT] = anon_sym_ENDPROGRAM_DOT,
  [sym_python] = sym_python,
  [sym_r] = sym_r,
  [aux_sym_injection_source_token1] = aux_sym_injection_source_token1,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_command] = sym_command,
  [sym_subcommand] = sym_subcommand,
  [sym_arguments] = sym_arguments,
  [sym_parenthetical] = sym_parenthetical,
  [sym_arithmetic] = sym_arithmetic,
  [sym_comparison] = sym_comparison,
  [sym_logical] = sym_logical,
  [sym_injection] = sym_injection,
  [sym_language] = sym_language,
  [sym_injection_source] = sym_injection_source,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_injection_source_repeat1] = aux_sym_injection_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_end_of_command] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_subidentifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BEGINPROGRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENDPROGRAM_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_python] = {
    .visible = true,
    .named = true,
  },
  [sym_r] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_injection_source_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_subcommand] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthetical] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_logical] = {
    .visible = true,
    .named = true,
  },
  [sym_injection] = {
    .visible = true,
    .named = true,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [sym_injection_source] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_injection_source_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
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
  [7] = 5,
  [8] = 6,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 14,
  [17] = 12,
  [18] = 13,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      ADVANCE_MAP(
        '"', 9,
        '$', 61,
        '&', 80,
        '\'', 10,
        '(', 49,
        ')', 50,
        '*', 70,
        '+', 68,
        ',', 82,
        '-', 69,
        '.', 2,
        '/', 72,
        '<', 74,
        '=', 76,
        '>', 75,
        'C', 57,
        'R', 59,
        'r', 63,
        '|', 81,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(103);
      if (lookahead == 'E') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 9,
        '$', 61,
        '&', 80,
        '\'', 10,
        '(', 49,
        ')', 50,
        '*', 70,
        '+', 68,
        ',', 82,
        '-', 69,
        '.', 45,
        '/', 71,
        '<', 74,
        '=', 76,
        '>', 75,
        'C', 57,
        '|', 81,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 9,
        '$', 61,
        '&', 80,
        '\'', 10,
        '(', 49,
        '*', 70,
        '+', 68,
        ',', 82,
        '-', 69,
        '.', 2,
        '/', 72,
        '<', 74,
        '=', 76,
        '>', 75,
        'C', 57,
        '|', 81,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == '3') ADVANCE(87);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'G') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'G') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(84);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(6);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'P') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 36:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 40:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      ADVANCE_MAP(
        '*', 4,
        '.', 1,
        '/', 11,
        'B', 17,
        'C', 30,
        'E', 27,
        'P', 44,
        'p', 44,
        'R', 88,
        'r', 88,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_end_of_command);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_subidentifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == 'O') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '.') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '*') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(4);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BEGINPROGRAM);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ENDPROGRAM_DOT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_ENDPROGRAM_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_python);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_r);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(103);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(109);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'A') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'G') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'M') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'M') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'M') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'O') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'P') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'R') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'T') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 46, .external_lex_state = 1},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 46, .external_lex_state = 1},
  [20] = {.lex_state = 46, .external_lex_state = 1},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 46},
  [23] = {.lex_state = 46},
  [24] = {.lex_state = 46},
  [25] = {.lex_state = 46},
  [26] = {.lex_state = 46, .external_lex_state = 1},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 46, .external_lex_state = 1},
  [29] = {.lex_state = 46, .external_lex_state = 1},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 46, .external_lex_state = 1},
  [32] = {.lex_state = 46},
  [33] = {.lex_state = 46, .external_lex_state = 1},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 46},
  [36] = {.lex_state = 46},
  [37] = {.lex_state = 46},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_end_of_command] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_subidentifier] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_r] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym_command] = STATE(19),
    [sym_injection] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_BEGINPROGRAM] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
  [2] = {
    [sym_subcommand] = STATE(23),
    [sym_arguments] = STATE(24),
    [sym_parenthetical] = STATE(4),
    [sym_arithmetic] = STATE(4),
    [sym_comparison] = STATE(4),
    [sym_logical] = STATE(4),
    [aux_sym_command_repeat1] = STATE(23),
    [aux_sym_arguments_repeat1] = STATE(4),
    [sym_end_of_command] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_subidentifier] = ACTIONS(17),
    [sym_keyword] = ACTIONS(19),
    [sym_variable] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_STAR_STAR] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [sym_comma] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_arguments] = STATE(35),
    [sym_parenthetical] = STATE(4),
    [sym_arithmetic] = STATE(4),
    [sym_comparison] = STATE(4),
    [sym_logical] = STATE(4),
    [aux_sym_arguments_repeat1] = STATE(4),
    [sym_end_of_command] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_subidentifier] = ACTIONS(33),
    [sym_keyword] = ACTIONS(19),
    [sym_variable] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_STAR_STAR] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [sym_comma] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_parenthetical] = STATE(5),
    [sym_arithmetic] = STATE(5),
    [sym_comparison] = STATE(5),
    [sym_logical] = STATE(5),
    [aux_sym_arguments_repeat1] = STATE(5),
    [sym_end_of_command] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_subidentifier] = ACTIONS(35),
    [sym_keyword] = ACTIONS(37),
    [sym_variable] = ACTIONS(37),
    [sym_string] = ACTIONS(39),
    [sym_number] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_STAR_STAR] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [sym_comma] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_parenthetical] = STATE(5),
    [sym_arithmetic] = STATE(5),
    [sym_comparison] = STATE(5),
    [sym_logical] = STATE(5),
    [aux_sym_arguments_repeat1] = STATE(5),
    [sym_end_of_command] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [sym_subidentifier] = ACTIONS(41),
    [sym_keyword] = ACTIONS(46),
    [sym_variable] = ACTIONS(46),
    [sym_string] = ACTIONS(49),
    [sym_number] = ACTIONS(46),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_STAR_STAR] = ACTIONS(52),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_LT_GT] = ACTIONS(61),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_AMP] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [sym_comma] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_parenthetical] = STATE(7),
    [sym_arithmetic] = STATE(7),
    [sym_comparison] = STATE(7),
    [sym_logical] = STATE(7),
    [aux_sym_arguments_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(69),
    [sym_keyword] = ACTIONS(71),
    [sym_variable] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_number] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_STAR_STAR] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_LT_GT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [sym_comma] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_parenthetical] = STATE(7),
    [sym_arithmetic] = STATE(7),
    [sym_comparison] = STATE(7),
    [sym_logical] = STATE(7),
    [aux_sym_arguments_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(41),
    [sym_keyword] = ACTIONS(88),
    [sym_variable] = ACTIONS(88),
    [sym_string] = ACTIONS(91),
    [sym_number] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_STAR_STAR] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_AMP] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(106),
    [sym_comma] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_parenthetical] = STATE(7),
    [sym_arithmetic] = STATE(7),
    [sym_comparison] = STATE(7),
    [sym_logical] = STATE(7),
    [aux_sym_arguments_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(109),
    [sym_keyword] = ACTIONS(71),
    [sym_variable] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_number] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_STAR_STAR] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_LT_GT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [sym_comma] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_parenthetical] = STATE(6),
    [sym_arithmetic] = STATE(6),
    [sym_comparison] = STATE(6),
    [sym_logical] = STATE(6),
    [aux_sym_arguments_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_keyword] = ACTIONS(111),
    [sym_variable] = ACTIONS(111),
    [sym_string] = ACTIONS(113),
    [sym_number] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_STAR_STAR] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_LT_GT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [sym_comma] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_parenthetical] = STATE(8),
    [sym_arithmetic] = STATE(8),
    [sym_comparison] = STATE(8),
    [sym_logical] = STATE(8),
    [aux_sym_arguments_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_keyword] = ACTIONS(115),
    [sym_variable] = ACTIONS(115),
    [sym_string] = ACTIONS(117),
    [sym_number] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_STAR_STAR] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_LT_GT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [sym_comma] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 13,
      sym_end_of_command,
      anon_sym_LPAREN,
      sym_subidentifier,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [29] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 13,
      sym_end_of_command,
      anon_sym_LPAREN,
      sym_subidentifier,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [58] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 13,
      sym_end_of_command,
      anon_sym_LPAREN,
      sym_subidentifier,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [87] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 13,
      sym_end_of_command,
      anon_sym_LPAREN,
      sym_subidentifier,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [228] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BEGINPROGRAM,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(20), 3,
      sym_command,
      sym_injection,
      aux_sym_source_file_repeat1,
  [246] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      anon_sym_BEGINPROGRAM,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(20), 3,
      sym_command,
      sym_injection,
      aux_sym_source_file_repeat1,
  [264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_ENDPROGRAM_DOT,
    ACTIONS(147), 1,
      aux_sym_injection_source_token1,
    STATE(27), 1,
      aux_sym_injection_source_repeat1,
    STATE(36), 1,
      sym_injection_source,
  [280] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_end_of_command,
    ACTIONS(151), 1,
      sym_subidentifier,
    STATE(22), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [294] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_subidentifier,
    ACTIONS(154), 1,
      sym_end_of_command,
    STATE(22), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [308] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_subidentifier,
    ACTIONS(154), 1,
      sym_end_of_command,
    STATE(25), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [322] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_subidentifier,
    ACTIONS(156), 1,
      sym_end_of_command,
    STATE(22), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [336] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(158), 3,
      sym_identifier,
      ts_builtin_sym_end,
      anon_sym_BEGINPROGRAM,
  [345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_ENDPROGRAM_DOT,
    ACTIONS(162), 1,
      aux_sym_injection_source_token1,
    STATE(30), 1,
      aux_sym_injection_source_repeat1,
  [358] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(164), 3,
      sym_identifier,
      ts_builtin_sym_end,
      anon_sym_BEGINPROGRAM,
  [367] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(166), 3,
      sym_identifier,
      ts_builtin_sym_end,
      anon_sym_BEGINPROGRAM,
  [376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_ENDPROGRAM_DOT,
    ACTIONS(170), 1,
      aux_sym_injection_source_token1,
    STATE(30), 1,
      aux_sym_injection_source_repeat1,
  [389] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(173), 3,
      sym_identifier,
      ts_builtin_sym_end,
      anon_sym_BEGINPROGRAM,
  [398] = 3,
    ACTIONS(7), 1,
      sym_comment,
    STATE(21), 1,
      sym_language,
    ACTIONS(175), 2,
      sym_python,
      sym_r,
  [409] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(177), 3,
      sym_identifier,
      ts_builtin_sym_end,
      anon_sym_BEGINPROGRAM,
  [418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_ENDPROGRAM_DOT,
      aux_sym_injection_source_token1,
  [426] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(181), 2,
      sym_end_of_command,
      sym_subidentifier,
  [434] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_ENDPROGRAM_DOT,
  [441] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 29,
  [SMALL_STATE(13)] = 58,
  [SMALL_STATE(14)] = 87,
  [SMALL_STATE(15)] = 116,
  [SMALL_STATE(16)] = 144,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 200,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 246,
  [SMALL_STATE(21)] = 264,
  [SMALL_STATE(22)] = 280,
  [SMALL_STATE(23)] = 294,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 322,
  [SMALL_STATE(26)] = 336,
  [SMALL_STATE(27)] = 345,
  [SMALL_STATE(28)] = 358,
  [SMALL_STATE(29)] = 367,
  [SMALL_STATE(30)] = 376,
  [SMALL_STATE(31)] = 389,
  [SMALL_STATE(32)] = 398,
  [SMALL_STATE(33)] = 409,
  [SMALL_STATE(34)] = 418,
  [SMALL_STATE(35)] = 426,
  [SMALL_STATE(36)] = 434,
  [SMALL_STATE(37)] = 441,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcommand, 1, 0, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injection, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injection_source, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, 0, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_injection_source_repeat1, 2, 0, 0),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_injection_source_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injection, 4, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcommand, 2, 0, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_identifier = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_identifier] = sym_identifier,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_identifier] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_spss_external_scanner_create(void);
void tree_sitter_spss_external_scanner_destroy(void *);
bool tree_sitter_spss_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_spss_external_scanner_serialize(void *, char *);
void tree_sitter_spss_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_spss(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_spss_external_scanner_create,
      tree_sitter_spss_external_scanner_destroy,
      tree_sitter_spss_external_scanner_scan,
      tree_sitter_spss_external_scanner_serialize,
      tree_sitter_spss_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
