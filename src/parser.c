#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
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
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_this = 19,
  anon_sym_COLON_COLON = 20,
  sym_number = 21,
  anon_sym_DQUOTE = 22,
  sym_char_literal = 23,
  sym_char_escaped = 24,
  sym_expression = 25,
  sym_expression_binary = 26,
  sym_expression_unary = 27,
  sym_expression_count = 28,
  sym_expression_parentheses = 29,
  sym_expression_this = 30,
  sym_expression_name = 31,
  sym_string = 32,
  sym__char = 33,
  aux_sym_string_repeat1 = 34,
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
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
    {field_right, 1},
  [2] =
    {field_left, 0},
    {field_operator, 1},
  [4] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(16);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(16);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 28:
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
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_char_escaped] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(25),
    [sym_expression_binary] = STATE(8),
    [sym_expression_unary] = STATE(8),
    [sym_expression_count] = STATE(8),
    [sym_expression_parentheses] = STATE(8),
    [sym_expression_this] = STATE(8),
    [sym_expression_name] = STATE(8),
    [sym_string] = STATE(8),
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
    ACTIONS(17), 14,
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
      anon_sym_RPAREN,
  [22] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(23), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 13,
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
  [46] = 4,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 11,
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
  [72] = 5,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_RPAREN,
  [100] = 7,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
    ACTIONS(31), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [132] = 2,
    ACTIONS(37), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 14,
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
      anon_sym_RPAREN,
  [154] = 2,
    ACTIONS(41), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 14,
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
      anon_sym_RPAREN,
  [176] = 7,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
    ACTIONS(31), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [208] = 8,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(31), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [242] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(49), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 13,
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
  [266] = 2,
    ACTIONS(53), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 14,
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
      anon_sym_RPAREN,
  [288] = 2,
    ACTIONS(57), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 14,
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
      anon_sym_RPAREN,
  [310] = 2,
    ACTIONS(61), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 14,
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
      anon_sym_RPAREN,
  [332] = 2,
    ACTIONS(65), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 14,
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
      anon_sym_RPAREN,
  [354] = 2,
    ACTIONS(69), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 14,
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
      anon_sym_RPAREN,
  [376] = 9,
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
    STATE(8), 7,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [411] = 9,
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
    STATE(6), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 7,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [446] = 9,
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
    STATE(8), 7,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [481] = 9,
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
    STATE(4), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 7,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [516] = 9,
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
    STATE(3), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 7,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [551] = 9,
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
    STATE(9), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 7,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [586] = 9,
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
    STATE(8), 7,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [621] = 9,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [656] = 9,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [691] = 9,
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
    STATE(8), 7,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [726] = 4,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_char_literal,
    ACTIONS(81), 1,
      sym_char_escaped,
    STATE(28), 2,
      sym__char,
      aux_sym_string_repeat1,
  [740] = 4,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_char_literal,
    ACTIONS(88), 1,
      sym_char_escaped,
    STATE(28), 2,
      sym__char,
      aux_sym_string_repeat1,
  [754] = 4,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_char_literal,
    ACTIONS(95), 1,
      sym_char_escaped,
    STATE(27), 2,
      sym__char,
      aux_sym_string_repeat1,
  [768] = 1,
    ACTIONS(97), 1,
      sym_identifier,
  [772] = 1,
    ACTIONS(99), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 154,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 208,
  [SMALL_STATE(11)] = 242,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 288,
  [SMALL_STATE(14)] = 310,
  [SMALL_STATE(15)] = 332,
  [SMALL_STATE(16)] = 354,
  [SMALL_STATE(17)] = 376,
  [SMALL_STATE(18)] = 411,
  [SMALL_STATE(19)] = 446,
  [SMALL_STATE(20)] = 481,
  [SMALL_STATE(21)] = 516,
  [SMALL_STATE(22)] = 551,
  [SMALL_STATE(23)] = 586,
  [SMALL_STATE(24)] = 621,
  [SMALL_STATE(25)] = 656,
  [SMALL_STATE(26)] = 691,
  [SMALL_STATE(27)] = 726,
  [SMALL_STATE(28)] = 740,
  [SMALL_STATE(29)] = 754,
  [SMALL_STATE(30)] = 768,
  [SMALL_STATE(31)] = 772,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_count, 2, .production_id = 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_count, 2, .production_id = 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_binary, 3, .production_id = 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_binary, 3, .production_id = 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_name, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_name, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_unary, 2, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_unary, 2, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_this, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_this, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_name, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_name, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_parentheses, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_parentheses, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(28),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(28),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
