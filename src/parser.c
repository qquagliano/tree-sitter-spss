#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_command_token1 = 1,
  aux_sym_identifier_token1 = 2,
  sym_subidentifier = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  aux_sym_cmd_variable_token1 = 6,
  sym_string = 7,
  sym_number = 8,
  sym_equals_assignment = 9,
  sym_comment = 10,
  sym_source_file = 11,
  sym_command = 12,
  sym_subcommand = 13,
  sym_argument = 14,
  sym_identifier = 15,
  sym_keyword = 16,
  sym_parenthetical = 17,
  sym_cmd_variable = 18,
  sym_subcmd_variable = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_command_repeat1 = 21,
  aux_sym_command_repeat2 = 22,
  aux_sym_command_repeat3 = 23,
  aux_sym_command_repeat4 = 24,
  aux_sym_subcommand_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_command_token1] = "command_token1",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_subidentifier] = "subidentifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_cmd_variable_token1] = "cmd_variable_token1",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_equals_assignment] = "equals_assignment",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_command] = "command",
  [sym_subcommand] = "subcommand",
  [sym_argument] = "argument",
  [sym_identifier] = "identifier",
  [sym_keyword] = "keyword",
  [sym_parenthetical] = "parenthetical",
  [sym_cmd_variable] = "cmd_variable",
  [sym_subcmd_variable] = "subcmd_variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_command_repeat3] = "command_repeat3",
  [aux_sym_command_repeat4] = "command_repeat4",
  [aux_sym_subcommand_repeat1] = "subcommand_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_subidentifier] = sym_subidentifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_cmd_variable_token1] = aux_sym_cmd_variable_token1,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_equals_assignment] = sym_equals_assignment,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_command] = sym_command,
  [sym_subcommand] = sym_subcommand,
  [sym_argument] = sym_argument,
  [sym_identifier] = sym_identifier,
  [sym_keyword] = sym_keyword,
  [sym_parenthetical] = sym_parenthetical,
  [sym_cmd_variable] = sym_cmd_variable,
  [sym_subcmd_variable] = sym_subcmd_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
  [aux_sym_command_repeat3] = aux_sym_command_repeat3,
  [aux_sym_command_repeat4] = aux_sym_command_repeat4,
  [aux_sym_subcommand_repeat1] = aux_sym_subcommand_repeat1,
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
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_subidentifier] = {
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
  [aux_sym_cmd_variable_token1] = {
    .visible = false,
    .named = false,
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
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthetical] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_subcmd_variable] = {
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
  [aux_sym_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subcommand_repeat1] = {
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
  [8] = 7,
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
  [30] = 10,
  [31] = 31,
  [32] = 9,
  [33] = 11,
  [34] = 12,
  [35] = 35,
  [36] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '"', 3,
        '\'', 4,
        '(', 37,
        ')', 38,
        '*', 51,
        '-', 8,
        '.', 2,
        '/', 7,
        '=', 50,
        'C', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '.') ADVANCE(1);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'C') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
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
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '.') ADVANCE(1);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'C') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_command_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'M') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'M') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'M') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'M') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_subidentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == 'E') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == 'M') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == 'M') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == 'N') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == 'O') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == 'T') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_equals_assignment);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_command_token1] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [sym_subidentifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_cmd_variable_token1] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_equals_assignment] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym_command] = STATE(14),
    [sym_identifier] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_argument] = STATE(2),
    [sym_keyword] = STATE(11),
    [sym_parenthetical] = STATE(11),
    [sym_subcmd_variable] = STATE(11),
    [aux_sym_subcommand_repeat1] = STATE(2),
    [aux_sym_command_token1] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [sym_subidentifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(14),
    [aux_sym_cmd_variable_token1] = ACTIONS(17),
    [sym_string] = ACTIONS(20),
    [sym_number] = ACTIONS(20),
    [sym_equals_assignment] = ACTIONS(20),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_argument] = STATE(4),
    [sym_keyword] = STATE(11),
    [sym_parenthetical] = STATE(11),
    [sym_subcmd_variable] = STATE(11),
    [aux_sym_subcommand_repeat1] = STATE(4),
    [aux_sym_command_token1] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym_subidentifier] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_cmd_variable_token1] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_equals_assignment] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_argument] = STATE(2),
    [sym_keyword] = STATE(11),
    [sym_parenthetical] = STATE(11),
    [sym_subcmd_variable] = STATE(11),
    [aux_sym_subcommand_repeat1] = STATE(2),
    [aux_sym_command_token1] = ACTIONS(33),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym_subidentifier] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_cmd_variable_token1] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_equals_assignment] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym_identifier_token1,
    ACTIONS(35), 1,
      aux_sym_command_token1,
    ACTIONS(37), 1,
      sym_subidentifier,
    ACTIONS(39), 1,
      aux_sym_cmd_variable_token1,
    ACTIONS(41), 1,
      sym_string,
    STATE(24), 1,
      aux_sym_command_repeat4,
    STATE(13), 2,
      sym_keyword,
      aux_sym_command_repeat1,
    STATE(19), 2,
      sym_cmd_variable,
      aux_sym_command_repeat3,
    STATE(21), 2,
      sym_subcommand,
      aux_sym_command_repeat2,
  [34] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym_identifier_token1,
    ACTIONS(37), 1,
      sym_subidentifier,
    ACTIONS(39), 1,
      aux_sym_cmd_variable_token1,
    ACTIONS(43), 1,
      aux_sym_command_token1,
    ACTIONS(45), 1,
      sym_string,
    STATE(23), 1,
      aux_sym_command_repeat4,
    STATE(5), 2,
      sym_keyword,
      aux_sym_command_repeat1,
    STATE(17), 2,
      sym_subcommand,
      aux_sym_command_repeat2,
    STATE(18), 2,
      sym_cmd_variable,
      aux_sym_command_repeat3,
  [68] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym_cmd_variable_token1,
    STATE(36), 1,
      sym_argument,
    ACTIONS(53), 3,
      sym_string,
      sym_number,
      sym_equals_assignment,
    STATE(33), 3,
      sym_keyword,
      sym_parenthetical,
      sym_subcmd_variable,
  [94] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym_cmd_variable_token1,
    STATE(35), 1,
      sym_argument,
    ACTIONS(53), 3,
      sym_string,
      sym_number,
      sym_equals_assignment,
    STATE(33), 3,
      sym_keyword,
      sym_parenthetical,
      sym_subcmd_variable,
  [120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      aux_sym_identifier_token1,
      aux_sym_cmd_variable_token1,
    ACTIONS(55), 6,
      aux_sym_command_token1,
      sym_subidentifier,
      anon_sym_LPAREN,
      sym_string,
      sym_number,
      sym_equals_assignment,
  [136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 2,
      aux_sym_identifier_token1,
      aux_sym_cmd_variable_token1,
    ACTIONS(59), 6,
      aux_sym_command_token1,
      sym_subidentifier,
      anon_sym_LPAREN,
      sym_string,
      sym_number,
      sym_equals_assignment,
  [152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 2,
      aux_sym_identifier_token1,
      aux_sym_cmd_variable_token1,
    ACTIONS(63), 6,
      aux_sym_command_token1,
      sym_subidentifier,
      anon_sym_LPAREN,
      sym_string,
      sym_number,
      sym_equals_assignment,
  [168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      aux_sym_identifier_token1,
      aux_sym_cmd_variable_token1,
    ACTIONS(67), 6,
      aux_sym_command_token1,
      sym_subidentifier,
      anon_sym_LPAREN,
      sym_string,
      sym_number,
      sym_equals_assignment,
  [184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_identifier_token1,
    ACTIONS(76), 1,
      aux_sym_cmd_variable_token1,
    STATE(13), 2,
      sym_keyword,
      aux_sym_command_repeat1,
    ACTIONS(71), 3,
      aux_sym_command_token1,
      sym_subidentifier,
      sym_string,
  [203] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_identifier,
    STATE(15), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      sym_identifier,
    STATE(15), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      aux_sym_identifier_token1,
      aux_sym_cmd_variable_token1,
    ACTIONS(85), 3,
      aux_sym_command_token1,
      sym_subidentifier,
      sym_string,
  [250] = 4,
    ACTIONS(35), 1,
      aux_sym_command_token1,
    ACTIONS(37), 1,
      sym_subidentifier,
    ACTIONS(89), 1,
      sym_comment,
    STATE(20), 2,
      sym_subcommand,
      aux_sym_command_repeat2,
  [264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_command_token1,
    ACTIONS(39), 1,
      aux_sym_cmd_variable_token1,
    STATE(22), 2,
      sym_cmd_variable,
      aux_sym_command_repeat3,
  [278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_cmd_variable_token1,
    ACTIONS(91), 1,
      aux_sym_command_token1,
    STATE(22), 2,
      sym_cmd_variable,
      aux_sym_command_repeat3,
  [292] = 4,
    ACTIONS(89), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_command_token1,
    ACTIONS(95), 1,
      sym_subidentifier,
    STATE(20), 2,
      sym_subcommand,
      aux_sym_command_repeat2,
  [306] = 4,
    ACTIONS(37), 1,
      sym_subidentifier,
    ACTIONS(89), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_command_token1,
    STATE(20), 2,
      sym_subcommand,
      aux_sym_command_repeat2,
  [320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_command_token1,
    ACTIONS(100), 1,
      aux_sym_cmd_variable_token1,
    STATE(22), 2,
      sym_cmd_variable,
      aux_sym_command_repeat3,
  [334] = 4,
    ACTIONS(35), 1,
      aux_sym_command_token1,
    ACTIONS(89), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_string,
    STATE(25), 1,
      aux_sym_command_repeat4,
  [347] = 4,
    ACTIONS(89), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_command_token1,
    ACTIONS(103), 1,
      sym_string,
    STATE(25), 1,
      aux_sym_command_repeat4,
  [360] = 4,
    ACTIONS(89), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_command_token1,
    ACTIONS(107), 1,
      sym_string,
    STATE(25), 1,
      aux_sym_command_repeat4,
  [373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      aux_sym_identifier_token1,
  [383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      aux_sym_command_token1,
    ACTIONS(116), 1,
      aux_sym_cmd_variable_token1,
  [393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      aux_sym_identifier_token1,
  [403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      aux_sym_identifier_token1,
  [413] = 2,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      sym_comment,
  [420] = 2,
    ACTIONS(89), 1,
      sym_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [427] = 2,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      sym_comment,
  [434] = 2,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      sym_comment,
  [441] = 2,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      sym_comment,
  [448] = 2,
    ACTIONS(89), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
  [455] = 2,
    ACTIONS(89), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 34,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 136,
  [SMALL_STATE(11)] = 152,
  [SMALL_STATE(12)] = 168,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 203,
  [SMALL_STATE(15)] = 220,
  [SMALL_STATE(16)] = 237,
  [SMALL_STATE(17)] = 250,
  [SMALL_STATE(18)] = 264,
  [SMALL_STATE(19)] = 278,
  [SMALL_STATE(20)] = 292,
  [SMALL_STATE(21)] = 306,
  [SMALL_STATE(22)] = 320,
  [SMALL_STATE(23)] = 334,
  [SMALL_STATE(24)] = 347,
  [SMALL_STATE(25)] = 360,
  [SMALL_STATE(26)] = 373,
  [SMALL_STATE(27)] = 383,
  [SMALL_STATE(28)] = 393,
  [SMALL_STATE(29)] = 403,
  [SMALL_STATE(30)] = 413,
  [SMALL_STATE(31)] = 420,
  [SMALL_STATE(32)] = 427,
  [SMALL_STATE(33)] = 434,
  [SMALL_STATE(34)] = 441,
  [SMALL_STATE(35)] = 448,
  [SMALL_STATE(36)] = 455,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subcommand_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subcommand_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subcommand_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subcommand_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subcommand_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcommand, 1, 0, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcommand, 2, 0, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcmd_variable, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subcmd_variable, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat3, 2, 0, 0), SHIFT_REPEAT(27),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2, 0, 0), SHIFT_REPEAT(25),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_variable, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_variable, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, 0, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, 0, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4, 0, 1),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
