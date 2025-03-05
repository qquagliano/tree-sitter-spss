#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_command_token1 = 1,
  aux_sym_identifier_token1 = 2,
  sym_subidentifier = 3,
  aux_sym_cmd_variable_token1 = 4,
  sym_string = 5,
  sym_number = 6,
  sym_equals_assignment = 7,
  sym_comment = 8,
  sym_source_file = 9,
  sym_command = 10,
  sym_subcommand = 11,
  sym_argument = 12,
  sym_identifier = 13,
  sym_keyword = 14,
  sym_cmd_variable = 15,
  sym_subcmd_variable = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_command_repeat1 = 18,
  aux_sym_command_repeat2 = 19,
  aux_sym_command_repeat3 = 20,
  aux_sym_subcommand_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_command_token1] = "command_token1",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_subidentifier] = "subidentifier",
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
  [sym_cmd_variable] = "cmd_variable",
  [sym_subcmd_variable] = "subcmd_variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_command_repeat3] = "command_repeat3",
  [aux_sym_subcommand_repeat1] = "subcommand_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_subidentifier] = sym_subidentifier,
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
  [sym_cmd_variable] = sym_cmd_variable,
  [sym_subcmd_variable] = sym_subcmd_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
  [aux_sym_command_repeat3] = aux_sym_command_repeat3,
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
        '*', 49,
        '-', 8,
        '.', 2,
        '/', 7,
        '=', 48,
        'C', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '.') ADVANCE(1);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
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
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'C') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'C') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(27);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'M') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'M') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'M') ADVANCE(23);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(31);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O') ADVANCE(25);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_subidentifier);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == 'M') ADVANCE(37);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == 'M') ADVANCE(38);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_cmd_variable_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_equals_assignment);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_command_token1] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [sym_subidentifier] = ACTIONS(1),
    [aux_sym_cmd_variable_token1] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_equals_assignment] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym_command] = STATE(13),
    [sym_identifier] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_argument] = STATE(4),
    [sym_keyword] = STATE(9),
    [sym_subcmd_variable] = STATE(9),
    [aux_sym_subcommand_repeat1] = STATE(4),
    [aux_sym_command_token1] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [sym_subidentifier] = ACTIONS(9),
    [aux_sym_cmd_variable_token1] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_equals_assignment] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_argument] = STATE(3),
    [sym_keyword] = STATE(9),
    [sym_subcmd_variable] = STATE(9),
    [aux_sym_subcommand_repeat1] = STATE(3),
    [aux_sym_command_token1] = ACTIONS(17),
    [aux_sym_identifier_token1] = ACTIONS(19),
    [sym_subidentifier] = ACTIONS(17),
    [aux_sym_cmd_variable_token1] = ACTIONS(22),
    [sym_string] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [sym_equals_assignment] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_argument] = STATE(3),
    [sym_keyword] = STATE(9),
    [sym_subcmd_variable] = STATE(9),
    [aux_sym_subcommand_repeat1] = STATE(3),
    [aux_sym_command_token1] = ACTIONS(28),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [sym_subidentifier] = ACTIONS(28),
    [aux_sym_cmd_variable_token1] = ACTIONS(30),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_equals_assignment] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(32), 1,
      aux_sym_command_token1,
    ACTIONS(34), 1,
      sym_subidentifier,
    ACTIONS(36), 1,
      aux_sym_cmd_variable_token1,
    STATE(6), 2,
      sym_keyword,
      aux_sym_command_repeat1,
    STATE(8), 2,
      sym_subcommand,
      aux_sym_command_repeat2,
    STATE(17), 2,
      sym_cmd_variable,
      aux_sym_command_repeat3,
  [28] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(34), 1,
      sym_subidentifier,
    ACTIONS(36), 1,
      aux_sym_cmd_variable_token1,
    ACTIONS(38), 1,
      aux_sym_command_token1,
    STATE(10), 2,
      sym_subcommand,
      aux_sym_command_repeat2,
    STATE(12), 2,
      sym_keyword,
      aux_sym_command_repeat1,
    STATE(18), 2,
      sym_cmd_variable,
      aux_sym_command_repeat3,
  [56] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 2,
      aux_sym_identifier_token1,
      aux_sym_cmd_variable_token1,
    ACTIONS(40), 5,
      aux_sym_command_token1,
      sym_subidentifier,
      sym_string,
      sym_number,
      sym_equals_assignment,
  [71] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      sym_subidentifier,
    ACTIONS(36), 1,
      aux_sym_cmd_variable_token1,
    ACTIONS(38), 1,
      aux_sym_command_token1,
    STATE(14), 2,
      sym_subcommand,
      aux_sym_command_repeat2,
    STATE(18), 2,
      sym_cmd_variable,
      aux_sym_command_repeat3,
  [92] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 2,
      aux_sym_identifier_token1,
      aux_sym_cmd_variable_token1,
    ACTIONS(44), 5,
      aux_sym_command_token1,
      sym_subidentifier,
      sym_string,
      sym_number,
      sym_equals_assignment,
  [107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      sym_subidentifier,
    ACTIONS(36), 1,
      aux_sym_cmd_variable_token1,
    ACTIONS(48), 1,
      aux_sym_command_token1,
    STATE(14), 2,
      sym_subcommand,
      aux_sym_command_repeat2,
    STATE(19), 2,
      sym_cmd_variable,
      aux_sym_command_repeat3,
  [128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 2,
      aux_sym_identifier_token1,
      aux_sym_cmd_variable_token1,
    ACTIONS(50), 5,
      aux_sym_command_token1,
      sym_subidentifier,
      sym_string,
      sym_number,
      sym_equals_assignment,
  [143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      aux_sym_identifier_token1,
    ACTIONS(59), 1,
      aux_sym_cmd_variable_token1,
    ACTIONS(54), 2,
      aux_sym_command_token1,
      sym_subidentifier,
    STATE(12), 2,
      sym_keyword,
      aux_sym_command_repeat1,
  [161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_identifier,
    STATE(15), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_command_token1,
    ACTIONS(65), 1,
      sym_subidentifier,
    ACTIONS(68), 1,
      aux_sym_cmd_variable_token1,
    STATE(14), 2,
      sym_subcommand,
      aux_sym_command_repeat2,
  [195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      sym_identifier,
    STATE(15), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      aux_sym_command_token1,
      sym_subidentifier,
    ACTIONS(77), 2,
      aux_sym_identifier_token1,
      aux_sym_cmd_variable_token1,
  [224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      aux_sym_cmd_variable_token1,
    ACTIONS(38), 1,
      aux_sym_command_token1,
    STATE(20), 2,
      sym_cmd_variable,
      aux_sym_command_repeat3,
  [238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      aux_sym_cmd_variable_token1,
    ACTIONS(48), 1,
      aux_sym_command_token1,
    STATE(20), 2,
      sym_cmd_variable,
      aux_sym_command_repeat3,
  [252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      aux_sym_cmd_variable_token1,
    ACTIONS(79), 1,
      aux_sym_command_token1,
    STATE(20), 2,
      sym_cmd_variable,
      aux_sym_command_repeat3,
  [266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_command_token1,
    ACTIONS(83), 1,
      aux_sym_cmd_variable_token1,
    STATE(20), 2,
      sym_cmd_variable,
      aux_sym_command_repeat3,
  [280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      aux_sym_identifier_token1,
  [290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym_command_token1,
    ACTIONS(92), 1,
      aux_sym_cmd_variable_token1,
  [300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      aux_sym_identifier_token1,
  [310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      aux_sym_identifier_token1,
  [320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      aux_sym_identifier_token1,
  [330] = 2,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 71,
  [SMALL_STATE(9)] = 92,
  [SMALL_STATE(10)] = 107,
  [SMALL_STATE(11)] = 128,
  [SMALL_STATE(12)] = 143,
  [SMALL_STATE(13)] = 161,
  [SMALL_STATE(14)] = 178,
  [SMALL_STATE(15)] = 195,
  [SMALL_STATE(16)] = 212,
  [SMALL_STATE(17)] = 224,
  [SMALL_STATE(18)] = 238,
  [SMALL_STATE(19)] = 252,
  [SMALL_STATE(20)] = 266,
  [SMALL_STATE(21)] = 280,
  [SMALL_STATE(22)] = 290,
  [SMALL_STATE(23)] = 300,
  [SMALL_STATE(24)] = 310,
  [SMALL_STATE(25)] = 320,
  [SMALL_STATE(26)] = 330,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcommand, 1, 0, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subcommand, 1, 0, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subcommand_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subcommand_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subcommand_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subcommand_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcommand, 2, 0, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subcommand, 2, 0, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcmd_variable, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subcmd_variable, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat3, 2, 0, 0), SHIFT_REPEAT(22),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_variable, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_variable, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, 0, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, 0, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4, 0, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, 0, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 5, 0, 1),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
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
