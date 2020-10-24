#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
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
  anon_sym_AT = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_this = 21,
  anon_sym_COLON_COLON = 22,
  sym_number = 23,
  anon_sym_DQUOTE = 24,
  sym_char_literal = 25,
  sym_char_escaped = 26,
  sym_expression = 27,
  sym_expression_binary = 28,
  sym_expression_unary = 29,
  sym_expression_count = 30,
  sym_expression_property = 31,
  sym_expression_element = 32,
  sym_expression_id = 33,
  sym_expression_parentheses = 34,
  sym_expression_this = 35,
  sym_expression_name = 36,
  sym_string = 37,
  sym__char = 38,
  aux_sym_string_repeat1 = 39,
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
  [anon_sym_AT] = "@",
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
  [sym_expression_element] = "expression_element",
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
  [anon_sym_AT] = anon_sym_AT,
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
  [sym_expression_element] = sym_expression_element,
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
  [anon_sym_AT] = {
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
  [sym_expression_element] = {
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
  field_index = 3,
  field_left = 4,
  field_operator = 5,
  field_property = 6,
  field_right = 7,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_id] = "id",
  [field_identifier] = "identifier",
  [field_index] = "index",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_property] = "property",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[7] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 1},
  [6] = {.index = 10, .length = 1},
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
  [10] =
    {field_index, 2},
};

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
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
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 30:
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
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
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
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_char_escaped] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(31),
    [sym_expression_binary] = STATE(7),
    [sym_expression_unary] = STATE(7),
    [sym_expression_count] = STATE(7),
    [sym_expression_property] = STATE(7),
    [sym_expression_element] = STATE(7),
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
    ACTIONS(17), 16,
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
      anon_sym_AT,
      anon_sym_RPAREN,
  [24] = 9,
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
    STATE(20), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 10,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_element,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [62] = 2,
    ACTIONS(23), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 16,
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
      anon_sym_AT,
      anon_sym_RPAREN,
  [86] = 9,
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
    STATE(7), 10,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_element,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [124] = 3,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(27), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 15,
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
      anon_sym_AT,
      anon_sym_RPAREN,
  [150] = 2,
    ACTIONS(33), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 16,
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
      anon_sym_AT,
      anon_sym_RPAREN,
  [174] = 2,
    ACTIONS(37), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 16,
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
      anon_sym_AT,
      anon_sym_RPAREN,
  [198] = 5,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(41), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 13,
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
  [228] = 9,
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
    STATE(7), 10,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_element,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [266] = 6,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 11,
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
  [298] = 2,
    ACTIONS(53), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 16,
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
      anon_sym_AT,
      anon_sym_RPAREN,
  [322] = 2,
    ACTIONS(57), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 16,
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
      anon_sym_AT,
      anon_sym_RPAREN,
  [346] = 9,
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
    STATE(2), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 10,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_element,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [384] = 2,
    ACTIONS(61), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 16,
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
      anon_sym_AT,
      anon_sym_RPAREN,
  [408] = 7,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_RPAREN,
  [442] = 9,
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
    STATE(7), 10,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_element,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [480] = 9,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
    ACTIONS(65), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [518] = 9,
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
    STATE(7), 10,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_element,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [556] = 5,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(71), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 13,
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
    STATE(18), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 10,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_element,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [624] = 9,
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
    STATE(7), 10,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_element,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [662] = 2,
    ACTIONS(75), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 16,
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
      anon_sym_AT,
      anon_sym_RPAREN,
  [686] = 9,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(49), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_RPAREN,
    ACTIONS(65), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [724] = 9,
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
    STATE(7), 10,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_element,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [762] = 2,
    ACTIONS(81), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 16,
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
      anon_sym_AT,
      anon_sym_RPAREN,
  [786] = 9,
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
    STATE(30), 1,
      sym_expression,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 10,
      sym_expression_binary,
      sym_expression_unary,
      sym_expression_count,
      sym_expression_property,
      sym_expression_element,
      sym_expression_id,
      sym_expression_parentheses,
      sym_expression_this,
      sym_expression_name,
      sym_string,
  [824] = 2,
    ACTIONS(85), 3,
      anon_sym_BANG,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 16,
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
      anon_sym_AT,
      anon_sym_RPAREN,
  [848] = 10,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(87), 1,
      anon_sym_AMP,
    ACTIONS(49), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(65), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [888] = 11,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(87), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [929] = 11,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(87), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 5,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
  [970] = 4,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_char_literal,
    ACTIONS(100), 1,
      sym_char_escaped,
    STATE(32), 2,
      sym__char,
      aux_sym_string_repeat1,
  [984] = 4,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym_char_literal,
    ACTIONS(107), 1,
      sym_char_escaped,
    STATE(32), 2,
      sym__char,
      aux_sym_string_repeat1,
  [998] = 4,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_char_literal,
    ACTIONS(113), 1,
      sym_char_escaped,
    STATE(33), 2,
      sym__char,
      aux_sym_string_repeat1,
  [1012] = 1,
    ACTIONS(115), 1,
      sym_identifier,
  [1016] = 1,
    ACTIONS(117), 1,
      sym_identifier,
  [1020] = 1,
    ACTIONS(119), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 86,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 198,
  [SMALL_STATE(10)] = 228,
  [SMALL_STATE(11)] = 266,
  [SMALL_STATE(12)] = 298,
  [SMALL_STATE(13)] = 322,
  [SMALL_STATE(14)] = 346,
  [SMALL_STATE(15)] = 384,
  [SMALL_STATE(16)] = 408,
  [SMALL_STATE(17)] = 442,
  [SMALL_STATE(18)] = 480,
  [SMALL_STATE(19)] = 518,
  [SMALL_STATE(20)] = 556,
  [SMALL_STATE(21)] = 586,
  [SMALL_STATE(22)] = 624,
  [SMALL_STATE(23)] = 662,
  [SMALL_STATE(24)] = 686,
  [SMALL_STATE(25)] = 724,
  [SMALL_STATE(26)] = 762,
  [SMALL_STATE(27)] = 786,
  [SMALL_STATE(28)] = 824,
  [SMALL_STATE(29)] = 848,
  [SMALL_STATE(30)] = 888,
  [SMALL_STATE(31)] = 929,
  [SMALL_STATE(32)] = 970,
  [SMALL_STATE(33)] = 984,
  [SMALL_STATE(34)] = 998,
  [SMALL_STATE(35)] = 1012,
  [SMALL_STATE(36)] = 1016,
  [SMALL_STATE(37)] = 1020,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_id, 3, .production_id = 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_id, 3, .production_id = 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_element, 3, .production_id = 6),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_element, 3, .production_id = 6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_name, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_name, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_property, 3, .production_id = 5),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_property, 3, .production_id = 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_binary, 3, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_binary, 3, .production_id = 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_this, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_this, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_name, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_name, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_unary, 2, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_unary, 2, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_count, 2, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_count, 2, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_parentheses, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_parentheses, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [93] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(32),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(32),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
