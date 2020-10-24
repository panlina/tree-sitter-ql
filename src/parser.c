#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_identifier = 1,
  anon_sym_PIPE = 2,
  anon_sym_AMP = 3,
  anon_sym_BANG = 4,
  anon_sym_LT_EQ = 5,
  anon_sym_EQ = 6,
  anon_sym_GT_EQ = 7,
  anon_sym_LT = 8,
  anon_sym_BANG_EQ = 9,
  anon_sym_GT = 10,
  anon_sym_in = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_STAR = 14,
  anon_sym_SLASH = 15,
  anon_sym_POUND = 16,
  anon_sym_DOT = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_this = 20,
  anon_sym_COLON_COLON = 21,
  sym_number = 22,
  anon_sym_DQUOTE = 23,
  sym_char_literal = 24,
  sym_char_escaped = 25,
  sym_expression = 26,
  sym_expression_binary = 27,
  sym_expression_unary = 28,
  sym_expression_count = 29,
  sym_expression_property = 30,
  sym_expression_id = 31,
  sym_expression_parentheses = 32,
  sym_expression_this = 33,
  sym_expression_name = 34,
  sym_string = 35,
  sym__char = 36,
  aux_sym_string_repeat1 = 37,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_BANG] = "!",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ] = "=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_in] = "in",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_POUND] = "#",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_this] = "this",
  [anon_sym_COLON_COLON] = "::",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [sym_char_literal] = "char_literal",
  [sym_char_escaped] = "char_escaped",
  [sym_expression] = "expression",
  [sym_expression_binary] = "expression_binary",
  [sym_expression_unary] = "expression_unary",
  [sym_expression_count] = "expression_count",
  [sym_expression_property] = "expression_property",
  [sym_expression_id] = "expression_id",
  [sym_expression_parentheses] = "expression_parentheses",
  [sym_expression_this] = "expression_this",
  [sym_expression_name] = "expression_name",
  [sym_string] = "string",
  [sym__char] = "_char",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_char_literal] = sym_char_literal,
  [sym_char_escaped] = sym_char_escaped,
  [sym_expression] = sym_expression,
  [sym_expression_binary] = sym_expression_binary,
  [sym_expression_unary] = sym_expression_unary,
  [sym_expression_count] = sym_expression_count,
  [sym_expression_property] = sym_expression_property,
  [sym_expression_id] = sym_expression_id,
  [sym_expression_parentheses] = sym_expression_parentheses,
  [sym_expression_this] = sym_expression_this,
  [sym_expression_name] = sym_expression_name,
  [sym_string] = sym_string,
  [sym__char] = sym__char,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_unary] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_count] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_property] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_id] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_parentheses] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_this] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_name] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__char] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_id = 1,
  field_identifier = 2,
  field_left = 3,
  field_operator = 4,
  field_property = 5,
  field_right = 6,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_id] = "id",
  [field_identifier] = "identifier",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_property] = "property",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[6] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
    {field_right, 1},
  [2] =
    {field_left, 0},
    {field_operator, 1},
  [4] =
    {field_id, 2},
    {field_identifier, 0},
  [6] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [9] =
    {field_property, 2},
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_char_escaped);
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
      if (lookahead == 'i') ADVANCE(1);
      if (lookahead == 't') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'h') ADVANCE(4);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_char_escaped] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(28),
    [sym_expression_binary] = STATE(7),
    [sym_expression_unary] = STATE(7),
    [sym_expression_count] = STATE(7),
    [sym_expression_property] = STATE(7),
    [sym_expression_id] = STATE(7),
    [sym_expression_parentheses] = STATE(7),
    [sym_expression_this] = STATE(7),
    [sym_expression_name] = STATE(7),
    [sym_string] = STATE(7),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_this] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(19), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [23] = 9,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_this,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 9,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [60] = 2,
    ACTIONS(23), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [83] = 4,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(27), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [110] = 3,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(35), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [135] = 2,
    ACTIONS(41), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [158] = 5,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(27), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
  [187] = 9,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_this,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 9,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [224] = 4,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(47), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 13,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [251] = 6,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_RPAREN,
  [282] = 9,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_this,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 9,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [319] = 2,
    ACTIONS(53), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [342] = 9,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_this,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 9,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [379] = 2,
    ACTIONS(57), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [402] = 8,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
    ACTIONS(59), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [437] = 9,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_this,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 9,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [474] = 8,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_BANG,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
    ACTIONS(59), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [509] = 9,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_this,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 9,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [546] = 2,
    ACTIONS(67), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [569] = 9,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_this,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 9,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [606] = 9,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_this,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 9,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [643] = 2,
    ACTIONS(71), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [666] = 9,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_BANG,
    ACTIONS(73), 1,
      anon_sym_AMP,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(59), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [703] = 2,
    ACTIONS(77), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [726] = 2,
    ACTIONS(81), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [749] = 9,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_this,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 9,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [786] = 10,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_BANG,
    ACTIONS(73), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [824] = 10,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_BANG,
    ACTIONS(73), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [862] = 4,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_char_literal,
    ACTIONS(94), 1,
      sym_char_escaped,
    STATE(30), 2,
      sym__char,
      aux_sym_string_repeat1,
  [876] = 4,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      sym_char_literal,
    ACTIONS(101), 1,
      sym_char_escaped,
    STATE(30), 2,
      sym__char,
      aux_sym_string_repeat1,
  [890] = 4,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym_char_literal,
    ACTIONS(107), 1,
      sym_char_escaped,
    STATE(31), 2,
      sym__char,
      aux_sym_string_repeat1,
  [904] = 1,
    ACTIONS(109), 1,
      sym_identifier,
  [908] = 1,
    ACTIONS(111), 1,
      sym_identifier,
  [912] = 1,
    ACTIONS(113), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 83,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 158,
  [SMALL_STATE(9)] = 187,
  [SMALL_STATE(10)] = 224,
  [SMALL_STATE(11)] = 251,
  [SMALL_STATE(12)] = 282,
  [SMALL_STATE(13)] = 319,
  [SMALL_STATE(14)] = 342,
  [SMALL_STATE(15)] = 379,
  [SMALL_STATE(16)] = 402,
  [SMALL_STATE(17)] = 437,
  [SMALL_STATE(18)] = 474,
  [SMALL_STATE(19)] = 509,
  [SMALL_STATE(20)] = 546,
  [SMALL_STATE(21)] = 569,
  [SMALL_STATE(22)] = 606,
  [SMALL_STATE(23)] = 643,
  [SMALL_STATE(24)] = 666,
  [SMALL_STATE(25)] = 703,
  [SMALL_STATE(26)] = 726,
  [SMALL_STATE(27)] = 749,
  [SMALL_STATE(28)] = 786,
  [SMALL_STATE(29)] = 824,
  [SMALL_STATE(30)] = 862,
  [SMALL_STATE(31)] = 876,
  [SMALL_STATE(32)] = 890,
  [SMALL_STATE(33)] = 904,
  [SMALL_STATE(34)] = 908,
  [SMALL_STATE(35)] = 912,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_property, 3, .production_id = 5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_property, 3, .production_id = 5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_binary, 3, .production_id = 4),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_binary, 3, .production_id = 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_name, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_name, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_unary, 2, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_unary, 2, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_name, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_name, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_this, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_this, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_count, 2, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_count, 2, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_parentheses, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_parentheses, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_id, 3, .production_id = 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_id, 3, .production_id = 3),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(30),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(30),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ql(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
