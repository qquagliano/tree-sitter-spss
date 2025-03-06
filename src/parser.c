#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_end_of_command = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  sym_identifier = 4,
  sym_subidentifier = 5,
  sym_keyword = 6,
  sym_variable = 7,
  sym_string = 8,
  sym_number = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_STAR = 12,
  anon_sym_SLASH = 13,
  anon_sym_STAR_STAR = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  anon_sym_EQ = 17,
  anon_sym_LT_GT = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_AMP = 21,
  anon_sym_PIPE = 22,
  sym_comma = 23,
  sym_comment = 24,
  sym_source_file = 25,
  sym_command = 26,
  sym_subcommand = 27,
  sym_arguments = 28,
  sym_parenthetical = 29,
  sym_arithmetic = 30,
  sym_comparison = 31,
  sym_logical = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_command_repeat1 = 34,
  aux_sym_arguments_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_end_of_command] = "end_of_command",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
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
  [sym_source_file] = "source_file",
  [sym_command] = "command",
  [sym_subcommand] = "subcommand",
  [sym_arguments] = "arguments",
  [sym_parenthetical] = "parenthetical",
  [sym_arithmetic] = "arithmetic",
  [sym_comparison] = "comparison",
  [sym_logical] = "logical",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_end_of_command] = sym_end_of_command,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
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
  [sym_source_file] = sym_source_file,
  [sym_command] = sym_command,
  [sym_subcommand] = sym_subcommand,
  [sym_arguments] = sym_arguments,
  [sym_parenthetical] = sym_parenthetical,
  [sym_arithmetic] = sym_arithmetic,
  [sym_comparison] = sym_comparison,
  [sym_logical] = sym_logical,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [16] = 13,
  [17] = 14,
  [18] = 12,
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
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '"', 5,
        '$', 40,
        '&', 59,
        '\'', 6,
        '(', 20,
        ')', 21,
        '*', 49,
        '+', 47,
        ',', 61,
        '-', 48,
        '.', 2,
        '/', 51,
        '<', 53,
        '=', 55,
        '>', 54,
        'C', 36,
        '|', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 5,
        '$', 40,
        '&', 59,
        '\'', 6,
        '(', 20,
        ')', 21,
        '*', 49,
        '+', 47,
        ',', 61,
        '-', 48,
        '.', 15,
        '/', 50,
        '<', 53,
        '=', 55,
        '>', 54,
        'C', 36,
        '|', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'M') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'M') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '.') ADVANCE(1);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'C') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_end_of_command);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_subidentifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '.') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == 'E') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == 'M') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == 'M') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == 'O') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(3);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(30);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 16},
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
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_command] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_subcommand] = STATE(21),
    [sym_arguments] = STATE(20),
    [sym_parenthetical] = STATE(4),
    [sym_arithmetic] = STATE(4),
    [sym_comparison] = STATE(4),
    [sym_logical] = STATE(4),
    [aux_sym_command_repeat1] = STATE(21),
    [aux_sym_arguments_repeat1] = STATE(4),
    [sym_end_of_command] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_subidentifier] = ACTIONS(13),
    [sym_keyword] = ACTIONS(15),
    [sym_variable] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_STAR_STAR] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_LT_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [sym_comma] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_arguments] = STATE(28),
    [sym_parenthetical] = STATE(4),
    [sym_arithmetic] = STATE(4),
    [sym_comparison] = STATE(4),
    [sym_logical] = STATE(4),
    [aux_sym_arguments_repeat1] = STATE(4),
    [sym_end_of_command] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_subidentifier] = ACTIONS(29),
    [sym_keyword] = ACTIONS(15),
    [sym_variable] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_STAR_STAR] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_LT_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [sym_comma] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_parenthetical] = STATE(5),
    [sym_arithmetic] = STATE(5),
    [sym_comparison] = STATE(5),
    [sym_logical] = STATE(5),
    [aux_sym_arguments_repeat1] = STATE(5),
    [sym_end_of_command] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_subidentifier] = ACTIONS(31),
    [sym_keyword] = ACTIONS(33),
    [sym_variable] = ACTIONS(33),
    [sym_string] = ACTIONS(35),
    [sym_number] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_STAR_STAR] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_LT_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [sym_comma] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_parenthetical] = STATE(5),
    [sym_arithmetic] = STATE(5),
    [sym_comparison] = STATE(5),
    [sym_logical] = STATE(5),
    [aux_sym_arguments_repeat1] = STATE(5),
    [sym_end_of_command] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [sym_subidentifier] = ACTIONS(37),
    [sym_keyword] = ACTIONS(42),
    [sym_variable] = ACTIONS(42),
    [sym_string] = ACTIONS(45),
    [sym_number] = ACTIONS(42),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_STAR_STAR] = ACTIONS(48),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_EQ] = ACTIONS(57),
    [anon_sym_LT_GT] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [sym_comma] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_parenthetical] = STATE(7),
    [sym_arithmetic] = STATE(7),
    [sym_comparison] = STATE(7),
    [sym_logical] = STATE(7),
    [aux_sym_arguments_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(65),
    [sym_keyword] = ACTIONS(67),
    [sym_variable] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [sym_number] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_STAR_STAR] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym_comma] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_parenthetical] = STATE(7),
    [sym_arithmetic] = STATE(7),
    [sym_comparison] = STATE(7),
    [sym_logical] = STATE(7),
    [aux_sym_arguments_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(37),
    [sym_keyword] = ACTIONS(84),
    [sym_variable] = ACTIONS(84),
    [sym_string] = ACTIONS(87),
    [sym_number] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_STAR_STAR] = ACTIONS(90),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(99),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [sym_comma] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_parenthetical] = STATE(7),
    [sym_arithmetic] = STATE(7),
    [sym_comparison] = STATE(7),
    [sym_logical] = STATE(7),
    [aux_sym_arguments_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(105),
    [sym_keyword] = ACTIONS(67),
    [sym_variable] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [sym_number] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_STAR_STAR] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym_comma] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_parenthetical] = STATE(6),
    [sym_arithmetic] = STATE(6),
    [sym_comparison] = STATE(6),
    [sym_logical] = STATE(6),
    [aux_sym_arguments_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_keyword] = ACTIONS(107),
    [sym_variable] = ACTIONS(107),
    [sym_string] = ACTIONS(109),
    [sym_number] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_STAR_STAR] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym_comma] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_parenthetical] = STATE(8),
    [sym_arithmetic] = STATE(8),
    [sym_comparison] = STATE(8),
    [sym_logical] = STATE(8),
    [aux_sym_arguments_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_keyword] = ACTIONS(111),
    [sym_variable] = ACTIONS(111),
    [sym_string] = ACTIONS(113),
    [sym_number] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_STAR_STAR] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym_comma] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_end_of_command] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [sym_subidentifier] = ACTIONS(115),
    [sym_keyword] = ACTIONS(117),
    [sym_variable] = ACTIONS(117),
    [sym_string] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_STAR_STAR] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_LT_GT] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [sym_comma] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_end_of_command] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym_subidentifier] = ACTIONS(119),
    [sym_keyword] = ACTIONS(121),
    [sym_variable] = ACTIONS(121),
    [sym_string] = ACTIONS(119),
    [sym_number] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_STAR_STAR] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(119),
    [anon_sym_LT_GT] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_AMP] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(119),
    [sym_comma] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_end_of_command] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(123),
    [sym_subidentifier] = ACTIONS(123),
    [sym_keyword] = ACTIONS(125),
    [sym_variable] = ACTIONS(125),
    [sym_string] = ACTIONS(123),
    [sym_number] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_STAR_STAR] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(123),
    [anon_sym_LT_GT] = ACTIONS(123),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [sym_comma] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_end_of_command] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(127),
    [sym_subidentifier] = ACTIONS(127),
    [sym_keyword] = ACTIONS(129),
    [sym_variable] = ACTIONS(129),
    [sym_string] = ACTIONS(127),
    [sym_number] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_STAR_STAR] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_LT_GT] = ACTIONS(127),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [sym_comma] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [sym_keyword] = ACTIONS(117),
    [sym_variable] = ACTIONS(117),
    [sym_string] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_STAR_STAR] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_LT_GT] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [sym_comma] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [sym_keyword] = ACTIONS(125),
    [sym_variable] = ACTIONS(125),
    [sym_string] = ACTIONS(123),
    [sym_number] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_STAR_STAR] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(123),
    [anon_sym_LT_GT] = ACTIONS(123),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_AMP] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [sym_comma] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [sym_keyword] = ACTIONS(129),
    [sym_variable] = ACTIONS(129),
    [sym_string] = ACTIONS(127),
    [sym_number] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_STAR_STAR] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_LT_GT] = ACTIONS(127),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [sym_comma] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [sym_keyword] = ACTIONS(121),
    [sym_variable] = ACTIONS(121),
    [sym_string] = ACTIONS(119),
    [sym_number] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_STAR_STAR] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(119),
    [anon_sym_LT_GT] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_AMP] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(119),
    [sym_comma] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [14] = 4,
    ACTIONS(13), 1,
      sym_subidentifier,
    ACTIONS(133), 1,
      sym_end_of_command,
    ACTIONS(135), 1,
      sym_comment,
    STATE(23), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [28] = 4,
    ACTIONS(13), 1,
      sym_subidentifier,
    ACTIONS(133), 1,
      sym_end_of_command,
    ACTIONS(135), 1,
      sym_comment,
    STATE(24), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [42] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(22), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [56] = 4,
    ACTIONS(13), 1,
      sym_subidentifier,
    ACTIONS(135), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_end_of_command,
    STATE(24), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [70] = 4,
    ACTIONS(135), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_end_of_command,
    ACTIONS(146), 1,
      sym_subidentifier,
    STATE(24), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [84] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      sym_identifier,
  [94] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      sym_identifier,
  [104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      sym_identifier,
  [114] = 2,
    ACTIONS(135), 1,
      sym_comment,
    ACTIONS(161), 2,
      sym_end_of_command,
      sym_subidentifier,
  [122] = 2,
    ACTIONS(135), 1,
      sym_comment,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 14,
  [SMALL_STATE(21)] = 28,
  [SMALL_STATE(22)] = 42,
  [SMALL_STATE(23)] = 56,
  [SMALL_STATE(24)] = 70,
  [SMALL_STATE(25)] = 84,
  [SMALL_STATE(26)] = 94,
  [SMALL_STATE(27)] = 104,
  [SMALL_STATE(28)] = 114,
  [SMALL_STATE(29)] = 122,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcommand, 1, 0, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, 0, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, 0, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4, 0, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcommand, 2, 0, 1),
  [163] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
