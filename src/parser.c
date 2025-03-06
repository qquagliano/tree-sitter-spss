#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_command_token1 = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  sym_identifier = 4,
  sym_subidentifier = 5,
  sym_keyword = 6,
  sym_variable = 7,
  sym_string = 8,
  sym_number = 9,
  sym_equals_assignment = 10,
  sym_comment = 11,
  sym_source_file = 12,
  sym_command = 13,
  sym_subcommand = 14,
  sym_arguments = 15,
  sym_parenthetical = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_command_repeat1 = 18,
  aux_sym_arguments_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_command_token1] = "command_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_subidentifier] = "subidentifier",
  [sym_keyword] = "keyword",
  [sym_variable] = "variable",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_equals_assignment] = "equals_assignment",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_command] = "command",
  [sym_subcommand] = "subcommand",
  [sym_arguments] = "arguments",
  [sym_parenthetical] = "parenthetical",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [sym_subidentifier] = sym_subidentifier,
  [sym_keyword] = sym_keyword,
  [sym_variable] = sym_variable,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_equals_assignment] = sym_equals_assignment,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_command] = sym_command,
  [sym_subcommand] = sym_subcommand,
  [sym_arguments] = sym_arguments,
  [sym_parenthetical] = sym_parenthetical,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_command_token1] = {
    .visible = false,
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
  [sym_equals_assignment] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      ADVANCE_MAP(
        '"', 4,
        '\'', 5,
        '(', 18,
        ')', 19,
        '*', 45,
        '-', 7,
        '.', 2,
        '/', 6,
        '=', 44,
        'C', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 4,
        '$', 37,
        '\'', 5,
        '(', 18,
        ')', 19,
        '*', 45,
        '-', 7,
        '.', 2,
        '/', 6,
        '=', 44,
        'C', 33,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'M') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'M') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '.') ADVANCE(1);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'C') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_command_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_subidentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == 'E') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == 'M') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == 'M') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == 'N') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == 'O') ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_equals_assignment);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_command_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_subidentifier] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_equals_assignment] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym_command] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_subcommand] = STATE(10),
    [sym_arguments] = STATE(9),
    [sym_parenthetical] = STATE(4),
    [aux_sym_command_repeat1] = STATE(10),
    [aux_sym_arguments_repeat1] = STATE(4),
    [aux_sym_command_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_subidentifier] = ACTIONS(13),
    [sym_keyword] = ACTIONS(15),
    [sym_variable] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [sym_number] = ACTIONS(17),
    [sym_equals_assignment] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_arguments] = STATE(15),
    [sym_parenthetical] = STATE(4),
    [aux_sym_arguments_repeat1] = STATE(4),
    [aux_sym_command_token1] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_subidentifier] = ACTIONS(19),
    [sym_keyword] = ACTIONS(15),
    [sym_variable] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [sym_number] = ACTIONS(17),
    [sym_equals_assignment] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_parenthetical] = STATE(5),
    [aux_sym_arguments_repeat1] = STATE(5),
    [aux_sym_command_token1] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(21),
    [sym_subidentifier] = ACTIONS(21),
    [sym_keyword] = ACTIONS(23),
    [sym_variable] = ACTIONS(23),
    [sym_string] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [sym_equals_assignment] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_parenthetical] = STATE(5),
    [aux_sym_arguments_repeat1] = STATE(5),
    [aux_sym_command_token1] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_subidentifier] = ACTIONS(27),
    [sym_keyword] = ACTIONS(32),
    [sym_variable] = ACTIONS(32),
    [sym_string] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
    [sym_equals_assignment] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_arguments,
    ACTIONS(15), 2,
      sym_keyword,
      sym_variable,
    STATE(4), 2,
      sym_parenthetical,
      aux_sym_arguments_repeat1,
    ACTIONS(17), 3,
      sym_string,
      sym_number,
      sym_equals_assignment,
  [23] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 2,
      sym_keyword,
      sym_variable,
    ACTIONS(38), 7,
      aux_sym_command_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_subidentifier,
      sym_string,
      sym_number,
      sym_equals_assignment,
  [40] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [54] = 4,
    ACTIONS(13), 1,
      sym_subidentifier,
    ACTIONS(44), 1,
      aux_sym_command_token1,
    ACTIONS(46), 1,
      sym_comment,
    STATE(12), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [68] = 4,
    ACTIONS(13), 1,
      sym_subidentifier,
    ACTIONS(44), 1,
      aux_sym_command_token1,
    ACTIONS(46), 1,
      sym_comment,
    STATE(13), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [82] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(11), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [96] = 4,
    ACTIONS(13), 1,
      sym_subidentifier,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym_command_token1,
    STATE(13), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [110] = 4,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_command_token1,
    ACTIONS(57), 1,
      sym_subidentifier,
    STATE(13), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      sym_identifier,
  [134] = 2,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(64), 2,
      aux_sym_command_token1,
      sym_subidentifier,
  [142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      sym_identifier,
  [152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      sym_identifier,
  [162] = 2,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
  [169] = 2,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 23,
  [SMALL_STATE(8)] = 40,
  [SMALL_STATE(9)] = 54,
  [SMALL_STATE(10)] = 68,
  [SMALL_STATE(11)] = 82,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 110,
  [SMALL_STATE(14)] = 124,
  [SMALL_STATE(15)] = 134,
  [SMALL_STATE(16)] = 142,
  [SMALL_STATE(17)] = 152,
  [SMALL_STATE(18)] = 162,
  [SMALL_STATE(19)] = 169,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcommand, 1, 0, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcommand, 2, 0, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4, 0, 1),
  [74] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
