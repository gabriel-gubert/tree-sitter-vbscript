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
#define STATE_COUNT 340
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  aux_sym_exit_statement_token1 = 2,
  aux_sym_exit_statement_token2 = 3,
  aux_sym_exit_statement_token3 = 4,
  aux_sym_exit_statement_token4 = 5,
  aux_sym_exit_statement_token5 = 6,
  aux_sym_exit_statement_token6 = 7,
  aux_sym_error_statement_token1 = 8,
  aux_sym_error_statement_token2 = 9,
  aux_sym_error_statement_token3 = 10,
  aux_sym_if_statement_token1 = 11,
  aux_sym_if_statement_token2 = 12,
  aux_sym_if_statement_token3 = 13,
  aux_sym_if_statement_token4 = 14,
  aux_sym_if_statement_token5 = 15,
  aux_sym_for_statement_token1 = 16,
  aux_sym_for_statement_token2 = 17,
  aux_sym_for_statement_token3 = 18,
  aux_sym_while_statement_token1 = 19,
  aux_sym_do_statement_token1 = 20,
  aux_sym_do_statement_token2 = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  aux_sym_subroutine_token1 = 24,
  aux_sym_function_token1 = 25,
  aux_sym_function_token2 = 26,
  aux_sym_const_declaration_token1 = 27,
  aux_sym_variable_declaration_token1 = 28,
  aux_sym_redim_token1 = 29,
  aux_sym_redim_token2 = 30,
  anon_sym_COMMA = 31,
  aux_sym_ptrsafe_function_declaration_token1 = 32,
  aux_sym_ptrsafe_function_declaration_token2 = 33,
  aux_sym_ptrsafe_function_declaration_token3 = 34,
  aux_sym_ptrsafe_function_declaration_token4 = 35,
  aux_sym_modifier_token1 = 36,
  aux_sym_modifier_token2 = 37,
  aux_sym_modifier_token3 = 38,
  aux_sym_modifier_token4 = 39,
  aux_sym_new_expression_token1 = 40,
  anon_sym_DOT = 41,
  anon_sym_PLUS = 42,
  anon_sym_DASH = 43,
  anon_sym_STAR = 44,
  anon_sym_SLASH = 45,
  aux_sym_binary_expression_token1 = 46,
  anon_sym_CARET = 47,
  anon_sym_AMP = 48,
  aux_sym_binary_expression_token2 = 49,
  aux_sym_binary_expression_token3 = 50,
  aux_sym_binary_expression_token4 = 51,
  anon_sym_LT_GT = 52,
  anon_sym_LT = 53,
  anon_sym_GT = 54,
  anon_sym_LT_EQ = 55,
  anon_sym_GT_EQ = 56,
  aux_sym_unary_expression_token1 = 57,
  aux_sym_function_call_token1 = 58,
  anon_sym_COLON_EQ = 59,
  sym_number = 60,
  anon_sym_DQUOTE = 61,
  aux_sym_string_literal_token1 = 62,
  aux_sym_boolean_token1 = 63,
  aux_sym_boolean_token2 = 64,
  sym_identifier = 65,
  anon_sym_EQ = 66,
  aux_sym__whitespace_token1 = 67,
  sym__horizontal_whitespace = 68,
  sym_source_file = 69,
  sym__statement = 70,
  sym__inline_statement = 71,
  sym_variable_assignment = 72,
  sym__inline_statement_block = 73,
  sym_invocation_statement = 74,
  sym_exit_statement = 75,
  sym_error_statement = 76,
  sym_if_statement = 77,
  sym_for_statement = 78,
  sym_while_statement = 79,
  sym_do_statement = 80,
  sym_subroutine = 81,
  sym_function = 82,
  sym_const_declaration = 83,
  sym__const_declaration_assignment = 84,
  sym_const_declaration_identifier = 85,
  sym_variable_declaration = 86,
  sym_redim = 87,
  sym_variable_declaration_identifier = 88,
  sym_array_identifier = 89,
  sym_variable_list = 90,
  sym_ptrsafe_function_declaration = 91,
  sym_parameter_list = 92,
  sym_parameter = 93,
  sym_modifier = 94,
  sym__expression = 95,
  sym_new_expression = 96,
  sym_type_member_expression = 97,
  sym_member_expression = 98,
  sym_binary_expression = 99,
  sym_unary_expression = 100,
  sym_function_call = 101,
  sym_argument_list = 102,
  sym_argument = 103,
  sym_keyword_argument = 104,
  sym_array_element = 105,
  sym_literal = 106,
  sym_string_literal = 107,
  sym_boolean = 108,
  sym_new_identifier = 109,
  sym__equal = 110,
  aux_sym__whitespace = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym__inline_statement_block_repeat1 = 113,
  aux_sym_if_statement_repeat1 = 114,
  aux_sym_variable_list_repeat1 = 115,
  aux_sym_parameter_list_repeat1 = 116,
  aux_sym_argument_list_repeat1 = 117,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [aux_sym_exit_statement_token1] = "exit_statement_token1",
  [aux_sym_exit_statement_token2] = "exit_statement_token2",
  [aux_sym_exit_statement_token3] = "exit_statement_token3",
  [aux_sym_exit_statement_token4] = "exit_statement_token4",
  [aux_sym_exit_statement_token5] = "exit_statement_token5",
  [aux_sym_exit_statement_token6] = "exit_statement_token6",
  [aux_sym_error_statement_token1] = "error_statement_token1",
  [aux_sym_error_statement_token2] = "error_statement_token2",
  [aux_sym_error_statement_token3] = "error_statement_token3",
  [aux_sym_if_statement_token1] = "if_statement_token1",
  [aux_sym_if_statement_token2] = "if_statement_token2",
  [aux_sym_if_statement_token3] = "if_statement_token3",
  [aux_sym_if_statement_token4] = "if_statement_token4",
  [aux_sym_if_statement_token5] = "if_statement_token5",
  [aux_sym_for_statement_token1] = "for_statement_token1",
  [aux_sym_for_statement_token2] = "for_statement_token2",
  [aux_sym_for_statement_token3] = "for_statement_token3",
  [aux_sym_while_statement_token1] = "while_statement_token1",
  [aux_sym_do_statement_token1] = "do_statement_token1",
  [aux_sym_do_statement_token2] = "do_statement_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_subroutine_token1] = "subroutine_token1",
  [aux_sym_function_token1] = "function_token1",
  [aux_sym_function_token2] = "function_token2",
  [aux_sym_const_declaration_token1] = "const_declaration_token1",
  [aux_sym_variable_declaration_token1] = "variable_declaration_token1",
  [aux_sym_redim_token1] = "redim_token1",
  [aux_sym_redim_token2] = "redim_token2",
  [anon_sym_COMMA] = ",",
  [aux_sym_ptrsafe_function_declaration_token1] = "ptrsafe_function_declaration_token1",
  [aux_sym_ptrsafe_function_declaration_token2] = "ptrsafe_function_declaration_token2",
  [aux_sym_ptrsafe_function_declaration_token3] = "ptrsafe_function_declaration_token3",
  [aux_sym_ptrsafe_function_declaration_token4] = "ptrsafe_function_declaration_token4",
  [aux_sym_modifier_token1] = "modifier_token1",
  [aux_sym_modifier_token2] = "modifier_token2",
  [aux_sym_modifier_token3] = "modifier_token3",
  [aux_sym_modifier_token4] = "modifier_token4",
  [aux_sym_new_expression_token1] = "new_expression_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [aux_sym_binary_expression_token1] = "binary_expression_token1",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [aux_sym_binary_expression_token2] = "binary_expression_token2",
  [aux_sym_binary_expression_token3] = "binary_expression_token3",
  [aux_sym_binary_expression_token4] = "binary_expression_token4",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_unary_expression_token1] = "unary_expression_token1",
  [aux_sym_function_call_token1] = "function_call_token1",
  [anon_sym_COLON_EQ] = ":=",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym_boolean_token1] = "boolean_token1",
  [aux_sym_boolean_token2] = "boolean_token2",
  [sym_identifier] = "identifier",
  [anon_sym_EQ] = "=",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__horizontal_whitespace] = "_horizontal_whitespace",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__inline_statement] = "_inline_statement",
  [sym_variable_assignment] = "variable_assignment",
  [sym__inline_statement_block] = "_inline_statement_block",
  [sym_invocation_statement] = "invocation_statement",
  [sym_exit_statement] = "exit_statement",
  [sym_error_statement] = "error_statement",
  [sym_if_statement] = "if_statement",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_do_statement] = "do_statement",
  [sym_subroutine] = "subroutine",
  [sym_function] = "function",
  [sym_const_declaration] = "const_declaration",
  [sym__const_declaration_assignment] = "_const_declaration_assignment",
  [sym_const_declaration_identifier] = "const_declaration_identifier",
  [sym_variable_declaration] = "variable_declaration",
  [sym_redim] = "redim",
  [sym_variable_declaration_identifier] = "variable_declaration_identifier",
  [sym_array_identifier] = "array_identifier",
  [sym_variable_list] = "variable_list",
  [sym_ptrsafe_function_declaration] = "ptrsafe_function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_modifier] = "modifier",
  [sym__expression] = "_expression",
  [sym_new_expression] = "new_expression",
  [sym_type_member_expression] = "type_member_expression",
  [sym_member_expression] = "member_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym_keyword_argument] = "keyword_argument",
  [sym_array_element] = "array_element",
  [sym_literal] = "literal",
  [sym_string_literal] = "string_literal",
  [sym_boolean] = "boolean",
  [sym_new_identifier] = "new_identifier",
  [sym__equal] = "_equal",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__inline_statement_block_repeat1] = "_inline_statement_block_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_variable_list_repeat1] = "variable_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [aux_sym_exit_statement_token1] = aux_sym_exit_statement_token1,
  [aux_sym_exit_statement_token2] = aux_sym_exit_statement_token2,
  [aux_sym_exit_statement_token3] = aux_sym_exit_statement_token3,
  [aux_sym_exit_statement_token4] = aux_sym_exit_statement_token4,
  [aux_sym_exit_statement_token5] = aux_sym_exit_statement_token5,
  [aux_sym_exit_statement_token6] = aux_sym_exit_statement_token6,
  [aux_sym_error_statement_token1] = aux_sym_error_statement_token1,
  [aux_sym_error_statement_token2] = aux_sym_error_statement_token2,
  [aux_sym_error_statement_token3] = aux_sym_error_statement_token3,
  [aux_sym_if_statement_token1] = aux_sym_if_statement_token1,
  [aux_sym_if_statement_token2] = aux_sym_if_statement_token2,
  [aux_sym_if_statement_token3] = aux_sym_if_statement_token3,
  [aux_sym_if_statement_token4] = aux_sym_if_statement_token4,
  [aux_sym_if_statement_token5] = aux_sym_if_statement_token5,
  [aux_sym_for_statement_token1] = aux_sym_for_statement_token1,
  [aux_sym_for_statement_token2] = aux_sym_for_statement_token2,
  [aux_sym_for_statement_token3] = aux_sym_for_statement_token3,
  [aux_sym_while_statement_token1] = aux_sym_while_statement_token1,
  [aux_sym_do_statement_token1] = aux_sym_do_statement_token1,
  [aux_sym_do_statement_token2] = aux_sym_do_statement_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_subroutine_token1] = aux_sym_subroutine_token1,
  [aux_sym_function_token1] = aux_sym_function_token1,
  [aux_sym_function_token2] = aux_sym_function_token2,
  [aux_sym_const_declaration_token1] = aux_sym_const_declaration_token1,
  [aux_sym_variable_declaration_token1] = aux_sym_variable_declaration_token1,
  [aux_sym_redim_token1] = aux_sym_redim_token1,
  [aux_sym_redim_token2] = aux_sym_redim_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_ptrsafe_function_declaration_token1] = aux_sym_ptrsafe_function_declaration_token1,
  [aux_sym_ptrsafe_function_declaration_token2] = aux_sym_ptrsafe_function_declaration_token2,
  [aux_sym_ptrsafe_function_declaration_token3] = aux_sym_ptrsafe_function_declaration_token3,
  [aux_sym_ptrsafe_function_declaration_token4] = aux_sym_ptrsafe_function_declaration_token4,
  [aux_sym_modifier_token1] = aux_sym_modifier_token1,
  [aux_sym_modifier_token2] = aux_sym_modifier_token2,
  [aux_sym_modifier_token3] = aux_sym_modifier_token3,
  [aux_sym_modifier_token4] = aux_sym_modifier_token4,
  [aux_sym_new_expression_token1] = aux_sym_new_expression_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_binary_expression_token1] = aux_sym_binary_expression_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [aux_sym_binary_expression_token2] = aux_sym_binary_expression_token2,
  [aux_sym_binary_expression_token3] = aux_sym_binary_expression_token3,
  [aux_sym_binary_expression_token4] = aux_sym_binary_expression_token4,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [aux_sym_unary_expression_token1] = aux_sym_unary_expression_token1,
  [aux_sym_function_call_token1] = aux_sym_function_call_token1,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [sym_identifier] = sym_identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__horizontal_whitespace] = sym__horizontal_whitespace,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__inline_statement] = sym__inline_statement,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym__inline_statement_block] = sym__inline_statement_block,
  [sym_invocation_statement] = sym_invocation_statement,
  [sym_exit_statement] = sym_exit_statement,
  [sym_error_statement] = sym_error_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_do_statement] = sym_do_statement,
  [sym_subroutine] = sym_subroutine,
  [sym_function] = sym_function,
  [sym_const_declaration] = sym_const_declaration,
  [sym__const_declaration_assignment] = sym__const_declaration_assignment,
  [sym_const_declaration_identifier] = sym_const_declaration_identifier,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_redim] = sym_redim,
  [sym_variable_declaration_identifier] = sym_variable_declaration_identifier,
  [sym_array_identifier] = sym_array_identifier,
  [sym_variable_list] = sym_variable_list,
  [sym_ptrsafe_function_declaration] = sym_ptrsafe_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_modifier] = sym_modifier,
  [sym__expression] = sym__expression,
  [sym_new_expression] = sym_new_expression,
  [sym_type_member_expression] = sym_type_member_expression,
  [sym_member_expression] = sym_member_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym_keyword_argument] = sym_keyword_argument,
  [sym_array_element] = sym_array_element,
  [sym_literal] = sym_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_boolean] = sym_boolean,
  [sym_new_identifier] = sym_new_identifier,
  [sym__equal] = sym__equal,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__inline_statement_block_repeat1] = aux_sym__inline_statement_block_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_variable_list_repeat1] = aux_sym_variable_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_exit_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exit_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exit_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exit_statement_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exit_statement_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exit_statement_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_error_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_error_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_error_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_while_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_do_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_do_statement_token2] = {
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
  [aux_sym_subroutine_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_const_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_redim_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_redim_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ptrsafe_function_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ptrsafe_function_declaration_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ptrsafe_function_declaration_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ptrsafe_function_declaration_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifier_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifier_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_new_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [aux_sym_binary_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_expression_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_expression_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_expression_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_GT] = {
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
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unary_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
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
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__horizontal_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_statement_block] = {
    .visible = false,
    .named = true,
  },
  [sym_invocation_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_error_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_do_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutine] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_const_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__const_declaration_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_const_declaration_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_redim] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_array_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_list] = {
    .visible = true,
    .named = true,
  },
  [sym_ptrsafe_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_new_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_array_element] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_new_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__equal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inline_statement_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [18] = 15,
  [19] = 16,
  [20] = 15,
  [21] = 16,
  [22] = 15,
  [23] = 16,
  [24] = 15,
  [25] = 15,
  [26] = 16,
  [27] = 16,
  [28] = 15,
  [29] = 16,
  [30] = 15,
  [31] = 16,
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
  [56] = 53,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 59,
  [61] = 46,
  [62] = 62,
  [63] = 58,
  [64] = 58,
  [65] = 55,
  [66] = 57,
  [67] = 53,
  [68] = 59,
  [69] = 57,
  [70] = 55,
  [71] = 33,
  [72] = 35,
  [73] = 34,
  [74] = 55,
  [75] = 55,
  [76] = 52,
  [77] = 57,
  [78] = 55,
  [79] = 53,
  [80] = 57,
  [81] = 57,
  [82] = 55,
  [83] = 53,
  [84] = 57,
  [85] = 55,
  [86] = 53,
  [87] = 36,
  [88] = 53,
  [89] = 53,
  [90] = 57,
  [91] = 41,
  [92] = 53,
  [93] = 45,
  [94] = 37,
  [95] = 47,
  [96] = 33,
  [97] = 35,
  [98] = 34,
  [99] = 99,
  [100] = 100,
  [101] = 48,
  [102] = 44,
  [103] = 103,
  [104] = 41,
  [105] = 103,
  [106] = 99,
  [107] = 50,
  [108] = 49,
  [109] = 40,
  [110] = 39,
  [111] = 43,
  [112] = 45,
  [113] = 36,
  [114] = 52,
  [115] = 51,
  [116] = 37,
  [117] = 117,
  [118] = 39,
  [119] = 119,
  [120] = 48,
  [121] = 121,
  [122] = 46,
  [123] = 123,
  [124] = 50,
  [125] = 43,
  [126] = 49,
  [127] = 127,
  [128] = 119,
  [129] = 129,
  [130] = 44,
  [131] = 47,
  [132] = 51,
  [133] = 117,
  [134] = 117,
  [135] = 40,
  [136] = 136,
  [137] = 129,
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
  [149] = 148,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 150,
  [155] = 151,
  [156] = 152,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 148,
  [161] = 150,
  [162] = 151,
  [163] = 152,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 157,
  [170] = 138,
  [171] = 171,
  [172] = 172,
  [173] = 147,
  [174] = 138,
  [175] = 147,
  [176] = 176,
  [177] = 167,
  [178] = 167,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 181,
  [183] = 181,
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
  [198] = 191,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 201,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 203,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 199,
  [212] = 204,
  [213] = 199,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 217,
  [220] = 215,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 215,
  [250] = 250,
  [251] = 229,
  [252] = 226,
  [253] = 253,
  [254] = 215,
  [255] = 255,
  [256] = 215,
  [257] = 257,
  [258] = 215,
  [259] = 215,
  [260] = 215,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 223,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 262,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 301,
  [309] = 297,
  [310] = 280,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 262,
  [315] = 315,
  [316] = 227,
  [317] = 317,
  [318] = 306,
  [319] = 319,
  [320] = 301,
  [321] = 297,
  [322] = 306,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 284,
  [329] = 329,
  [330] = 299,
  [331] = 267,
  [332] = 332,
  [333] = 284,
  [334] = 334,
  [335] = 299,
  [336] = 268,
  [337] = 292,
  [338] = 268,
  [339] = 339,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(178);
      ADVANCE_MAP(
        '"', 270,
        '&', 251,
        '\'', 181,
        '(', 214,
        ')', 215,
        '*', 246,
        '+', 244,
        ',', 228,
        '-', 245,
        '.', 243,
        '/', 247,
        ':', 31,
        '<', 259,
        '=', 421,
        '>', 260,
        '^', 250,
      );
      if (lookahead == '_') SKIP(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(435);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(173);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(121);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(69);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 270,
        '&', 251,
        '\'', 181,
        '(', 214,
        '*', 246,
        '+', 244,
        ',', 228,
        '-', 245,
        '.', 243,
        '/', 247,
        '<', 259,
        '=', 421,
        '>', 260,
        '^', 250,
        '_', 289,
        '\t', 435,
        ' ', 435,
        '\n', 422,
        '\r', 422,
        'A', 376,
        'a', 376,
        'C', 311,
        'c', 311,
        'F', 314,
        'f', 314,
        'M', 383,
        'm', 383,
        'N', 331,
        'n', 331,
        'O', 389,
        'o', 389,
        'R', 341,
        'r', 341,
        'T', 391,
        't', 391,
        'X', 384,
        'x', 384,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        ')', 215,
        '-', 245,
        '_', 291,
        '\t', 435,
        ' ', 435,
        'C', 311,
        'c', 311,
        'F', 314,
        'f', 314,
        'N', 331,
        'n', 331,
        'R', 341,
        'r', 341,
        'T', 391,
        't', 391,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 286,
        '\t', 435,
        ' ', 435,
        '\n', 422,
        '\r', 422,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 287,
        '\t', 435,
        ' ', 435,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 364,
        'e', 364,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 288,
        '\t', 435,
        ' ', 435,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'L', 381,
        'l', 381,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 292,
        '\t', 435,
        ' ', 435,
        '\n', 422,
        '\r', 422,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'L', 381,
        'l', 381,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 293,
        '\t', 435,
        ' ', 435,
        'C', 311,
        'c', 311,
        'F', 314,
        'f', 314,
        'N', 331,
        'n', 331,
        'P', 396,
        'p', 396,
        'R', 341,
        'r', 341,
        'T', 391,
        't', 391,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 297,
        '\t', 435,
        ' ', 435,
        '\n', 422,
        '\r', 422,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 364,
        'e', 364,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 298,
        '\t', 435,
        ' ', 435,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 378,
        'e', 378,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 299,
        '\t', 435,
        ' ', 435,
        '\n', 422,
        '\r', 422,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 374,
        'e', 374,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 300,
        '\t', 435,
        ' ', 435,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 342,
        'w', 342,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 301,
        '\t', 435,
        ' ', 435,
        '\n', 422,
        '\r', 422,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 342,
        'w', 342,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 302,
        '\t', 435,
        ' ', 435,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 338,
        'n', 338,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 303,
        '\t', 435,
        ' ', 435,
        '\n', 422,
        '\r', 422,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 338,
        'n', 338,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 304,
        '\t', 435,
        ' ', 435,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 374,
        'e', 374,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 305,
        '\t', 435,
        ' ', 435,
        '\n', 422,
        '\r', 422,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 379,
        'e', 379,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 306,
        '\t', 435,
        ' ', 435,
        '\n', 422,
        '\r', 422,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 365,
        'e', 365,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 307,
        '\t', 435,
        ' ', 435,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 379,
        'e', 379,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 308,
        '\t', 435,
        ' ', 435,
        '\n', 422,
        '\r', 422,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 378,
        'e', 378,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 309,
        '\t', 435,
        ' ', 435,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 365,
        'e', 365,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '&', 251,
        '\'', 181,
        '(', 214,
        '*', 246,
        '+', 244,
        ',', 228,
        '-', 245,
        '.', 243,
        '/', 247,
        ':', 31,
        '<', 259,
        '=', 421,
        '>', 260,
        '^', 250,
      );
      if (lookahead == '_') SKIP(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(435);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(422);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '&', 251,
        '\'', 181,
        '(', 214,
        '*', 246,
        '+', 244,
        ',', 228,
        '-', 245,
        '.', 243,
        '/', 247,
        ':', 31,
        '<', 259,
        '=', 421,
        '>', 260,
        '^', 250,
      );
      if (lookahead == '_') SKIP(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(435);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(434);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\'', 181,
        ')', 215,
        '_', 294,
        '\t', 435,
        ' ', 435,
        'B', 418,
        'b', 418,
        'O', 387,
        'o', 387,
        'P', 320,
        'p', 320,
        'R', 341,
        'r', 341,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(181);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(435);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '\'', 181,
        '_', 296,
        '\t', 435,
        ' ', 435,
        'C', 311,
        'c', 311,
        'R', 341,
        'r', 341,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 30:
      if (lookahead == '0') ADVANCE(195);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 44:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(231);
      END_STATE();
    case 45:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(188);
      END_STATE();
    case 46:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(216);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 50:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 51:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 52:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 53:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 54:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(181);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 76:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(197);
      END_STATE();
    case 77:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(235);
      END_STATE();
    case 78:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(200);
      END_STATE();
    case 79:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      END_STATE();
    case 80:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(168);
      END_STATE();
    case 81:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(168);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 82:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 83:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(71);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 84:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 85:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 86:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(89);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 104:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 105:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 106:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 107:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 130:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 131:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(232);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      END_STATE();
    case 148:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(38);
      END_STATE();
    case 149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(60);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 160:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 161:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 163:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 164:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 165:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 166:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 167:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 168:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 169:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 170:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 171:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(241);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 172:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(156);
      END_STATE();
    case 173:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 174:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 175:
      if (eof) ADVANCE(178);
      ADVANCE_MAP(
        '"', 270,
        '&', 251,
        '\'', 181,
        '(', 214,
        ')', 215,
        '*', 246,
        '+', 244,
        ',', 228,
        '-', 245,
        '.', 243,
        '/', 247,
        ':', 31,
        '<', 259,
        '=', 421,
        '>', 260,
        '^', 250,
      );
      if (lookahead == '_') SKIP(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(435);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(175);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(173);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(121);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(36);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(69);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 176:
      if (eof) ADVANCE(178);
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 285,
        '\t', 435,
        ' ', 435,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 312,
        'f', 312,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'P', 392,
        'p', 392,
        'R', 332,
        'r', 332,
        'S', 411,
        's', 411,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 177:
      if (eof) ADVANCE(178);
      ADVANCE_MAP(
        '"', 270,
        '\'', 181,
        '(', 214,
        '-', 245,
        '_', 290,
        '\t', 435,
        ' ', 435,
        '\n', 422,
        '\r', 422,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 312,
        'f', 312,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'P', 392,
        'p', 392,
        'R', 332,
        'r', 332,
        'S', 411,
        's', 411,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '"') ADVANCE(181);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_exit_statement_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_exit_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_exit_statement_token2);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_exit_statement_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_exit_statement_token3);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_exit_statement_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_exit_statement_token4);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_exit_statement_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_exit_statement_token5);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_exit_statement_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_exit_statement_token6);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_exit_statement_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_error_statement_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_error_statement_token2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_error_statement_token3);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_if_statement_token2);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_if_statement_token3);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_if_statement_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_if_statement_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_if_statement_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_if_statement_token5);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_for_statement_token2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_for_statement_token3);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_for_statement_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_while_statement_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_while_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_do_statement_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_do_statement_token2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_subroutine_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_function_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_function_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_function_token2);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_const_declaration_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_const_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_redim_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_redim_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_redim_token2);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_redim_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_ptrsafe_function_declaration_token1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_ptrsafe_function_declaration_token2);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_ptrsafe_function_declaration_token3);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_ptrsafe_function_declaration_token4);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_modifier_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_modifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_modifier_token2);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_modifier_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_modifier_token3);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_modifier_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_modifier_token4);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_modifier_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_new_expression_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_new_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_binary_expression_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_binary_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_binary_expression_token2);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_binary_expression_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_binary_expression_token3);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_binary_expression_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_binary_expression_token4);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_binary_expression_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(261);
      if (lookahead == '>') ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(262);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      ADVANCE_MAP(
        '\'', 179,
        '_', 271,
        '\t', 273,
        ' ', 273,
        '\n', 271,
        '\r', 271,
        'R', 274,
        'r', 274,
      );
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(276);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(179);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(276);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(276);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 285,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 312,
        'f', 312,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'P', 392,
        'p', 392,
        'R', 332,
        'r', 332,
        'S', 411,
        's', 411,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 286,
        '\n', 423,
        '\r', 423,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 287,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 364,
        'e', 364,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 288,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'L', 381,
        'l', 381,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 289,
        '\n', 424,
        '\r', 424,
        'A', 376,
        'a', 376,
        'C', 311,
        'c', 311,
        'F', 314,
        'f', 314,
        'M', 383,
        'm', 383,
        'N', 331,
        'n', 331,
        'O', 389,
        'o', 389,
        'R', 341,
        'r', 341,
        'T', 391,
        't', 391,
        'X', 384,
        'x', 384,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 290,
        '\n', 425,
        '\r', 425,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 312,
        'f', 312,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'P', 392,
        'p', 392,
        'R', 332,
        'r', 332,
        'S', 411,
        's', 411,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 291,
        'C', 311,
        'c', 311,
        'F', 314,
        'f', 314,
        'N', 331,
        'n', 331,
        'R', 341,
        'r', 341,
        'T', 391,
        't', 391,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 292,
        '\n', 426,
        '\r', 426,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'L', 381,
        'l', 381,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 293,
        'C', 311,
        'c', 311,
        'F', 314,
        'f', 314,
        'N', 331,
        'n', 331,
        'P', 396,
        'p', 396,
        'R', 341,
        'r', 341,
        'T', 391,
        't', 391,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 294,
        'B', 418,
        'b', 418,
        'O', 387,
        'o', 387,
        'P', 320,
        'p', 320,
        'R', 341,
        'r', 341,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 297,
        '\n', 427,
        '\r', 427,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 364,
        'e', 364,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 298,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 378,
        'e', 378,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 299,
        '\n', 428,
        '\r', 428,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 374,
        'e', 374,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 300,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 342,
        'w', 342,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 301,
        '\n', 429,
        '\r', 429,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 342,
        'w', 342,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 302,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 338,
        'n', 338,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 303,
        '\n', 430,
        '\r', 430,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 417,
        'e', 417,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 338,
        'n', 338,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 304,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 374,
        'e', 374,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 305,
        '\n', 431,
        '\r', 431,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 379,
        'e', 379,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 306,
        '\n', 432,
        '\r', 432,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 365,
        'e', 365,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 307,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 379,
        'e', 379,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 308,
        '\n', 433,
        '\r', 433,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 378,
        'e', 378,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '_', 309,
        'C', 310,
        'c', 310,
        'D', 350,
        'd', 350,
        'E', 365,
        'e', 365,
        'F', 313,
        'f', 313,
        'I', 346,
        'i', 346,
        'N', 331,
        'n', 331,
        'O', 370,
        'o', 370,
        'R', 332,
        'r', 332,
        'T', 391,
        't', 391,
        'W', 349,
        'w', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(388);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(354);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(366);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(328);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(330);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(242);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(286);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(292);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(297);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(299);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(301);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(303);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(306);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(308);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__horizontal_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(435);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 176},
  [2] = {.lex_state = 176},
  [3] = {.lex_state = 176},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 177},
  [54] = {.lex_state = 177},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 21},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 23},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 25},
  [97] = {.lex_state = 25},
  [98] = {.lex_state = 25},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 25},
  [105] = {.lex_state = 25},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 25},
  [113] = {.lex_state = 25},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 25},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 25},
  [119] = {.lex_state = 25},
  [120] = {.lex_state = 25},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 25},
  [123] = {.lex_state = 25},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 25},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 25},
  [131] = {.lex_state = 25},
  [132] = {.lex_state = 25},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 25},
  [136] = {.lex_state = 25},
  [137] = {.lex_state = 25},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 25},
  [142] = {.lex_state = 25},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 25},
  [165] = {.lex_state = 25},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 25},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 27},
  [185] = {.lex_state = 27},
  [186] = {.lex_state = 27},
  [187] = {.lex_state = 27},
  [188] = {.lex_state = 27},
  [189] = {.lex_state = 27},
  [190] = {.lex_state = 28},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 28},
  [194] = {.lex_state = 28},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 25},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 25},
  [199] = {.lex_state = 29},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 25},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 25},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 25},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 25},
  [211] = {.lex_state = 29},
  [212] = {.lex_state = 25},
  [213] = {.lex_state = 29},
  [214] = {.lex_state = 25},
  [215] = {.lex_state = 25},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 28},
  [219] = {.lex_state = 25},
  [220] = {.lex_state = 25},
  [221] = {.lex_state = 28},
  [222] = {.lex_state = 25},
  [223] = {.lex_state = 25},
  [224] = {.lex_state = 25},
  [225] = {.lex_state = 25},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 25},
  [228] = {.lex_state = 25},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 25},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 25},
  [240] = {.lex_state = 28},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 25},
  [243] = {.lex_state = 28},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 25},
  [246] = {.lex_state = 28},
  [247] = {.lex_state = 25},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 25},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 25},
  [253] = {.lex_state = 25},
  [254] = {.lex_state = 25},
  [255] = {.lex_state = 25},
  [256] = {.lex_state = 25},
  [257] = {.lex_state = 25},
  [258] = {.lex_state = 25},
  [259] = {.lex_state = 25},
  [260] = {.lex_state = 25},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 25},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 25},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 28},
  [269] = {.lex_state = 25},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 25},
  [273] = {.lex_state = 25},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 25},
  [276] = {.lex_state = 28},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 25},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 25},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 25},
  [284] = {.lex_state = 272},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 25},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 28},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 25},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 25},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 25},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 28},
  [306] = {.lex_state = 28},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 25},
  [312] = {.lex_state = 25},
  [313] = {.lex_state = 25},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 25},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 28},
  [318] = {.lex_state = 28},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 28},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 25},
  [326] = {.lex_state = 25},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 272},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 272},
  [334] = {.lex_state = 25},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 28},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 28},
  [339] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_exit_statement_token1] = ACTIONS(1),
    [aux_sym_exit_statement_token2] = ACTIONS(1),
    [aux_sym_exit_statement_token3] = ACTIONS(1),
    [aux_sym_exit_statement_token4] = ACTIONS(1),
    [aux_sym_exit_statement_token5] = ACTIONS(1),
    [aux_sym_exit_statement_token6] = ACTIONS(1),
    [aux_sym_error_statement_token1] = ACTIONS(1),
    [aux_sym_error_statement_token2] = ACTIONS(1),
    [aux_sym_error_statement_token3] = ACTIONS(1),
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [aux_sym_if_statement_token2] = ACTIONS(1),
    [aux_sym_if_statement_token3] = ACTIONS(1),
    [aux_sym_if_statement_token4] = ACTIONS(1),
    [aux_sym_if_statement_token5] = ACTIONS(1),
    [aux_sym_for_statement_token1] = ACTIONS(1),
    [aux_sym_for_statement_token2] = ACTIONS(1),
    [aux_sym_for_statement_token3] = ACTIONS(1),
    [aux_sym_while_statement_token1] = ACTIONS(1),
    [aux_sym_do_statement_token1] = ACTIONS(1),
    [aux_sym_do_statement_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_subroutine_token1] = ACTIONS(1),
    [aux_sym_function_token1] = ACTIONS(1),
    [aux_sym_function_token2] = ACTIONS(1),
    [aux_sym_const_declaration_token1] = ACTIONS(1),
    [aux_sym_variable_declaration_token1] = ACTIONS(1),
    [aux_sym_redim_token1] = ACTIONS(1),
    [aux_sym_redim_token2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_ptrsafe_function_declaration_token1] = ACTIONS(1),
    [aux_sym_ptrsafe_function_declaration_token2] = ACTIONS(1),
    [aux_sym_ptrsafe_function_declaration_token3] = ACTIONS(1),
    [aux_sym_ptrsafe_function_declaration_token4] = ACTIONS(1),
    [aux_sym_modifier_token1] = ACTIONS(1),
    [aux_sym_modifier_token2] = ACTIONS(1),
    [aux_sym_modifier_token3] = ACTIONS(1),
    [aux_sym_modifier_token4] = ACTIONS(1),
    [aux_sym_new_expression_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_binary_expression_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [aux_sym_binary_expression_token2] = ACTIONS(1),
    [aux_sym_binary_expression_token3] = ACTIONS(1),
    [aux_sym_binary_expression_token4] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym_unary_expression_token1] = ACTIONS(1),
    [aux_sym_function_call_token1] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__horizontal_whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(274),
    [sym__statement] = STATE(224),
    [sym__inline_statement] = STATE(224),
    [sym_variable_assignment] = STATE(224),
    [sym_invocation_statement] = STATE(224),
    [sym_exit_statement] = STATE(224),
    [sym_error_statement] = STATE(224),
    [sym_if_statement] = STATE(224),
    [sym_for_statement] = STATE(224),
    [sym_while_statement] = STATE(224),
    [sym_do_statement] = STATE(224),
    [sym_subroutine] = STATE(224),
    [sym_function] = STATE(224),
    [sym_const_declaration] = STATE(224),
    [sym_variable_declaration] = STATE(224),
    [sym_redim] = STATE(224),
    [sym_ptrsafe_function_declaration] = STATE(224),
    [sym__expression] = STATE(32),
    [sym_new_expression] = STATE(32),
    [sym_member_expression] = STATE(32),
    [sym_binary_expression] = STATE(32),
    [sym_unary_expression] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_array_element] = STATE(232),
    [sym_literal] = STATE(32),
    [sym_string_literal] = STATE(50),
    [sym_boolean] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym_exit_statement_token1] = ACTIONS(9),
    [aux_sym_exit_statement_token2] = ACTIONS(11),
    [aux_sym_exit_statement_token3] = ACTIONS(13),
    [aux_sym_exit_statement_token4] = ACTIONS(15),
    [aux_sym_exit_statement_token5] = ACTIONS(17),
    [aux_sym_exit_statement_token6] = ACTIONS(19),
    [aux_sym_error_statement_token1] = ACTIONS(21),
    [aux_sym_if_statement_token1] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [aux_sym_function_token1] = ACTIONS(27),
    [aux_sym_const_declaration_token1] = ACTIONS(29),
    [aux_sym_variable_declaration_token1] = ACTIONS(31),
    [aux_sym_redim_token1] = ACTIONS(33),
    [aux_sym_new_expression_token1] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_unary_expression_token1] = ACTIONS(37),
    [aux_sym_function_call_token1] = ACTIONS(39),
    [sym_number] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [aux_sym_boolean_token1] = ACTIONS(45),
    [aux_sym_boolean_token2] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym__horizontal_whitespace] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(13), 1,
      aux_sym_exit_statement_token3,
    ACTIONS(15), 1,
      aux_sym_exit_statement_token4,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym_function_token1,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(224), 16,
      sym__statement,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_subroutine,
      sym_function,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
      sym_ptrsafe_function_declaration,
  [107] = 27,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(56), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(59), 1,
      aux_sym_exit_statement_token3,
    ACTIONS(62), 1,
      aux_sym_exit_statement_token4,
    ACTIONS(65), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(68), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(71), 1,
      aux_sym_error_statement_token1,
    ACTIONS(74), 1,
      aux_sym_if_statement_token1,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      aux_sym_function_token1,
    ACTIONS(83), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(86), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(89), 1,
      aux_sym_redim_token1,
    ACTIONS(92), 1,
      aux_sym_new_expression_token1,
    ACTIONS(98), 1,
      aux_sym_function_call_token1,
    ACTIONS(101), 1,
      sym_number,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(95), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(107), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(224), 16,
      sym__statement,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_subroutine,
      sym_function,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
      sym_ptrsafe_function_declaration,
  [214] = 26,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(113), 1,
      aux_sym__whitespace_token1,
    STATE(24), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(74), 1,
      aux_sym__whitespace,
    STATE(232), 1,
      sym_array_element,
    STATE(324), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(220), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [314] = 26,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(115), 1,
      aux_sym__whitespace_token1,
    STATE(22), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(70), 1,
      aux_sym__whitespace,
    STATE(232), 1,
      sym_array_element,
    STATE(286), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(249), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [414] = 26,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(117), 1,
      aux_sym__whitespace_token1,
    STATE(15), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(55), 1,
      aux_sym__whitespace,
    STATE(195), 1,
      sym__inline_statement_block,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(254), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [514] = 26,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(119), 1,
      aux_sym__whitespace_token1,
    STATE(25), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(75), 1,
      aux_sym__whitespace,
    STATE(232), 1,
      sym_array_element,
    STATE(307), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(256), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [614] = 26,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(121), 1,
      aux_sym__whitespace_token1,
    STATE(20), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(78), 1,
      aux_sym__whitespace,
    STATE(232), 1,
      sym_array_element,
    STATE(294), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(215), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [714] = 26,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(119), 1,
      aux_sym__whitespace_token1,
    STATE(25), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(75), 1,
      aux_sym__whitespace,
    STATE(232), 1,
      sym_array_element,
    STATE(295), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(256), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [814] = 26,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(121), 1,
      aux_sym__whitespace_token1,
    STATE(20), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(78), 1,
      aux_sym__whitespace,
    STATE(232), 1,
      sym_array_element,
    STATE(323), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(215), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [914] = 26,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(123), 1,
      aux_sym__whitespace_token1,
    STATE(28), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(82), 1,
      aux_sym__whitespace,
    STATE(232), 1,
      sym_array_element,
    STATE(302), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(258), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [1014] = 26,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(119), 1,
      aux_sym__whitespace_token1,
    STATE(25), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(75), 1,
      aux_sym__whitespace,
    STATE(232), 1,
      sym_array_element,
    STATE(271), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(256), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [1114] = 26,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(123), 1,
      aux_sym__whitespace_token1,
    STATE(28), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(82), 1,
      aux_sym__whitespace,
    STATE(232), 1,
      sym_array_element,
    STATE(332), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(258), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [1214] = 26,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(125), 1,
      aux_sym__whitespace_token1,
    STATE(18), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(65), 1,
      aux_sym__whitespace,
    STATE(232), 1,
      sym_array_element,
    STATE(261), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(260), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [1314] = 24,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    ACTIONS(127), 3,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_if_statement_token5,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(254), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [1410] = 24,
    ACTIONS(129), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(132), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(135), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(138), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(141), 1,
      aux_sym_error_statement_token1,
    ACTIONS(144), 1,
      aux_sym_if_statement_token1,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(155), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(158), 1,
      aux_sym_redim_token1,
    ACTIONS(161), 1,
      aux_sym_new_expression_token1,
    ACTIONS(167), 1,
      aux_sym_function_call_token1,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(164), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(176), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    ACTIONS(147), 3,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_if_statement_token5,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(254), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [1506] = 26,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(182), 1,
      aux_sym__whitespace_token1,
    STATE(30), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(85), 1,
      aux_sym__whitespace,
    STATE(232), 1,
      sym_array_element,
    STATE(270), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(259), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [1606] = 24,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(19), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(127), 2,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token5,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(260), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [1701] = 24,
    ACTIONS(129), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(132), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(135), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(138), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(141), 1,
      aux_sym_error_statement_token1,
    ACTIONS(144), 1,
      aux_sym_if_statement_token1,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(155), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(158), 1,
      aux_sym_redim_token1,
    ACTIONS(161), 1,
      aux_sym_new_expression_token1,
    ACTIONS(167), 1,
      aux_sym_function_call_token1,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(19), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(147), 2,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token5,
    ACTIONS(164), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(176), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(260), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [1796] = 24,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(127), 1,
      aux_sym_subroutine_token1,
    STATE(27), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(215), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [1890] = 24,
    ACTIONS(129), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(132), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(135), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(138), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(141), 1,
      aux_sym_error_statement_token1,
    ACTIONS(144), 1,
      aux_sym_if_statement_token1,
    ACTIONS(147), 1,
      aux_sym_do_statement_token1,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(155), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(158), 1,
      aux_sym_redim_token1,
    ACTIONS(161), 1,
      aux_sym_new_expression_token1,
    ACTIONS(167), 1,
      aux_sym_function_call_token1,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(164), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(176), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(220), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [1984] = 24,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(127), 1,
      aux_sym_while_statement_token1,
    STATE(23), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(249), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [2078] = 24,
    ACTIONS(129), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(132), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(135), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(138), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(141), 1,
      aux_sym_error_statement_token1,
    ACTIONS(144), 1,
      aux_sym_if_statement_token1,
    ACTIONS(147), 1,
      aux_sym_while_statement_token1,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(155), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(158), 1,
      aux_sym_redim_token1,
    ACTIONS(161), 1,
      aux_sym_new_expression_token1,
    ACTIONS(167), 1,
      aux_sym_function_call_token1,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(164), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(176), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(249), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [2172] = 24,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(127), 1,
      aux_sym_do_statement_token1,
    STATE(21), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(220), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [2266] = 24,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(127), 1,
      aux_sym_function_token2,
    STATE(26), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(256), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [2360] = 24,
    ACTIONS(129), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(132), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(135), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(138), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(141), 1,
      aux_sym_error_statement_token1,
    ACTIONS(144), 1,
      aux_sym_if_statement_token1,
    ACTIONS(147), 1,
      aux_sym_function_token2,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(155), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(158), 1,
      aux_sym_redim_token1,
    ACTIONS(161), 1,
      aux_sym_new_expression_token1,
    ACTIONS(167), 1,
      aux_sym_function_call_token1,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(164), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(176), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(256), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [2454] = 24,
    ACTIONS(129), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(132), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(135), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(138), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(141), 1,
      aux_sym_error_statement_token1,
    ACTIONS(144), 1,
      aux_sym_if_statement_token1,
    ACTIONS(147), 1,
      aux_sym_subroutine_token1,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(155), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(158), 1,
      aux_sym_redim_token1,
    ACTIONS(161), 1,
      aux_sym_new_expression_token1,
    ACTIONS(167), 1,
      aux_sym_function_call_token1,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(164), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(176), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(215), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [2548] = 24,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(127), 1,
      aux_sym_for_statement_token3,
    STATE(29), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(258), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [2642] = 24,
    ACTIONS(129), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(132), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(135), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(138), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(141), 1,
      aux_sym_error_statement_token1,
    ACTIONS(144), 1,
      aux_sym_if_statement_token1,
    ACTIONS(147), 1,
      aux_sym_for_statement_token3,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(155), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(158), 1,
      aux_sym_redim_token1,
    ACTIONS(161), 1,
      aux_sym_new_expression_token1,
    ACTIONS(167), 1,
      aux_sym_function_call_token1,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(29), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(164), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(176), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(258), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [2736] = 24,
    ACTIONS(9), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(11), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(17), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(19), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(21), 1,
      aux_sym_error_statement_token1,
    ACTIONS(23), 1,
      aux_sym_if_statement_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(31), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(33), 1,
      aux_sym_redim_token1,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(127), 1,
      aux_sym_if_statement_token5,
    STATE(31), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(259), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [2830] = 24,
    ACTIONS(129), 1,
      aux_sym_exit_statement_token1,
    ACTIONS(132), 1,
      aux_sym_exit_statement_token2,
    ACTIONS(135), 1,
      aux_sym_exit_statement_token5,
    ACTIONS(138), 1,
      aux_sym_exit_statement_token6,
    ACTIONS(141), 1,
      aux_sym_error_statement_token1,
    ACTIONS(144), 1,
      aux_sym_if_statement_token1,
    ACTIONS(147), 1,
      aux_sym_if_statement_token5,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      aux_sym_const_declaration_token1,
    ACTIONS(155), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(158), 1,
      aux_sym_redim_token1,
    ACTIONS(161), 1,
      aux_sym_new_expression_token1,
    ACTIONS(167), 1,
      aux_sym_function_call_token1,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(31), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(232), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(164), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(176), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(32), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(259), 12,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_exit_statement,
      sym_error_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_const_declaration,
      sym_variable_declaration,
      sym_redim,
  [2924] = 22,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      anon_sym_PLUS,
    ACTIONS(192), 1,
      anon_sym_DASH,
    ACTIONS(196), 1,
      anon_sym_CARET,
    ACTIONS(200), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      aux_sym__whitespace_token1,
    STATE(156), 1,
      sym__equal,
    STATE(202), 1,
      sym_argument,
    STATE(219), 1,
      sym_keyword_argument,
    STATE(275), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    ACTIONS(194), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    STATE(119), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    ACTIONS(198), 10,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [3011] = 5,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(196), 1,
      anon_sym_CARET,
    STATE(156), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 26,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3053] = 7,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(196), 1,
      anon_sym_CARET,
    STATE(156), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(190), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(194), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(214), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3099] = 4,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(156), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 27,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3139] = 8,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(196), 1,
      anon_sym_CARET,
    STATE(156), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(190), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(194), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(198), 10,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
    ACTIONS(216), 11,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      aux_sym__whitespace_token1,
  [3187] = 6,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(196), 1,
      anon_sym_CARET,
    STATE(156), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(194), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(214), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3231] = 7,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(196), 1,
      anon_sym_CARET,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(194), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(214), 22,
      anon_sym_LPAREN,
      aux_sym_new_expression_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3277] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(218), 28,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3312] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 28,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3347] = 3,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(224), 27,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3384] = 5,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_EQ,
    STATE(146), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(224), 25,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      aux_sym__whitespace_token1,
  [3425] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(230), 28,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3460] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(232), 28,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3495] = 3,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(234), 27,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3532] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(236), 28,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3567] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(238), 28,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3602] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(240), 28,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3637] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(242), 28,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3672] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(244), 28,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3707] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(234), 28,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3742] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 28,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_new_expression_token1,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
      anon_sym_EQ,
      aux_sym__whitespace_token1,
  [3777] = 5,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 1,
      aux_sym__whitespace_token1,
    STATE(53), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 22,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token3,
      aux_sym_exit_statement_token4,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_function_token1,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [3815] = 5,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 1,
      aux_sym__whitespace_token1,
    STATE(53), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(253), 22,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token3,
      aux_sym_exit_statement_token4,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_function_token1,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [3853] = 5,
    ACTIONS(257), 1,
      aux_sym__whitespace_token1,
    STATE(56), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(127), 3,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_if_statement_token5,
    ACTIONS(248), 19,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [3890] = 4,
    ACTIONS(257), 1,
      aux_sym__whitespace_token1,
    STATE(56), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 22,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_if_statement_token5,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [3925] = 4,
    ACTIONS(260), 1,
      aux_sym__whitespace_token1,
    STATE(56), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(147), 22,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token4,
      aux_sym_if_statement_token5,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [3960] = 15,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      sym_identifier,
    STATE(201), 1,
      sym_argument,
    STATE(217), 1,
      sym_keyword_argument,
    STATE(309), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(128), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4016] = 15,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_argument,
    STATE(217), 1,
      sym_keyword_argument,
    STATE(301), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(128), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4072] = 15,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_argument,
    STATE(217), 1,
      sym_keyword_argument,
    STATE(308), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(128), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4128] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(236), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(284), 21,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_ptrsafe_function_declaration_token4,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [4160] = 15,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_argument,
    STATE(217), 1,
      sym_keyword_argument,
    STATE(301), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(121), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4216] = 15,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_argument,
    STATE(217), 1,
      sym_keyword_argument,
    STATE(297), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(128), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4272] = 15,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_argument,
    STATE(217), 1,
      sym_keyword_argument,
    STATE(321), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(128), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4328] = 5,
    ACTIONS(290), 1,
      aux_sym__whitespace_token1,
    STATE(67), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(127), 2,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token5,
    ACTIONS(248), 19,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [4364] = 4,
    ACTIONS(293), 1,
      aux_sym__whitespace_token1,
    STATE(67), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(147), 21,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token5,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [4398] = 4,
    ACTIONS(290), 1,
      aux_sym__whitespace_token1,
    STATE(67), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 21,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token5,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [4432] = 15,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_argument,
    STATE(217), 1,
      sym_keyword_argument,
    STATE(320), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(128), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4488] = 4,
    ACTIONS(297), 1,
      aux_sym__whitespace_token1,
    STATE(89), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(147), 20,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token5,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [4521] = 5,
    ACTIONS(127), 1,
      aux_sym_while_statement_token1,
    ACTIONS(299), 1,
      aux_sym__whitespace_token1,
    STATE(92), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 19,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [4556] = 6,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 17,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [4593] = 5,
    ACTIONS(304), 1,
      anon_sym_DOT,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(302), 18,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [4628] = 8,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(302), 12,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [4669] = 5,
    ACTIONS(127), 1,
      aux_sym_do_statement_token1,
    ACTIONS(312), 1,
      aux_sym__whitespace_token1,
    STATE(88), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 19,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [4704] = 5,
    ACTIONS(127), 1,
      aux_sym_function_token2,
    ACTIONS(315), 1,
      aux_sym__whitespace_token1,
    STATE(79), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 19,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [4739] = 4,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 19,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [4772] = 4,
    ACTIONS(322), 1,
      aux_sym__whitespace_token1,
    STATE(79), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(147), 20,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_function_token2,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [4805] = 5,
    ACTIONS(127), 1,
      aux_sym_subroutine_token1,
    ACTIONS(324), 1,
      aux_sym__whitespace_token1,
    STATE(83), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 19,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [4840] = 4,
    ACTIONS(315), 1,
      aux_sym__whitespace_token1,
    STATE(79), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 20,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_function_token2,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [4873] = 4,
    ACTIONS(327), 1,
      aux_sym__whitespace_token1,
    STATE(83), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(147), 20,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_subroutine_token1,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [4906] = 4,
    ACTIONS(329), 1,
      aux_sym__whitespace_token1,
    STATE(88), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(147), 20,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [4939] = 5,
    ACTIONS(127), 1,
      aux_sym_for_statement_token3,
    ACTIONS(331), 1,
      aux_sym__whitespace_token1,
    STATE(86), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 19,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [4974] = 4,
    ACTIONS(324), 1,
      aux_sym__whitespace_token1,
    STATE(83), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 20,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_subroutine_token1,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [5007] = 4,
    ACTIONS(334), 1,
      aux_sym__whitespace_token1,
    STATE(86), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(147), 20,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_for_statement_token3,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [5040] = 5,
    ACTIONS(127), 1,
      aux_sym_if_statement_token5,
    ACTIONS(336), 1,
      aux_sym__whitespace_token1,
    STATE(89), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 19,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [5075] = 4,
    ACTIONS(331), 1,
      aux_sym__whitespace_token1,
    STATE(86), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 20,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_for_statement_token3,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [5108] = 9,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(339), 4,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(341), 8,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5151] = 4,
    ACTIONS(312), 1,
      aux_sym__whitespace_token1,
    STATE(88), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 20,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_do_statement_token1,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [5184] = 4,
    ACTIONS(336), 1,
      aux_sym__whitespace_token1,
    STATE(89), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 20,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_if_statement_token5,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [5217] = 4,
    ACTIONS(345), 1,
      aux_sym__whitespace_token1,
    STATE(92), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(147), 20,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [5250] = 4,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(347), 19,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5283] = 4,
    ACTIONS(299), 1,
      aux_sym__whitespace_token1,
    STATE(92), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(248), 20,
      aux_sym_exit_statement_token1,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
      aux_sym_error_statement_token1,
      aux_sym_if_statement_token1,
      aux_sym_while_statement_token1,
      anon_sym_LPAREN,
      aux_sym_const_declaration_token1,
      aux_sym_variable_declaration_token1,
      aux_sym_redim_token1,
      aux_sym_new_expression_token1,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
      aux_sym_function_call_token1,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [5316] = 4,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(234), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(349), 19,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5349] = 7,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(302), 14,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5388] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(238), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(351), 19,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5418] = 6,
    ACTIONS(302), 1,
      aux_sym__whitespace_token1,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 17,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5454] = 5,
    ACTIONS(302), 1,
      aux_sym__whitespace_token1,
    ACTIONS(353), 1,
      anon_sym_DOT,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 18,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5488] = 8,
    ACTIONS(302), 1,
      aux_sym__whitespace_token1,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(214), 12,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5528] = 13,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 1,
      sym_identifier,
    STATE(217), 1,
      sym_keyword_argument,
    STATE(226), 1,
      sym_argument,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(128), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5578] = 10,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    ACTIONS(361), 1,
      aux_sym_for_statement_token2,
    ACTIONS(365), 1,
      aux_sym__whitespace_token1,
    STATE(11), 1,
      aux_sym__whitespace,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(363), 10,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5622] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(240), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 19,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5652] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(369), 19,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5682] = 5,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(347), 17,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5716] = 4,
    ACTIONS(347), 1,
      aux_sym__whitespace_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(224), 19,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5748] = 5,
    ACTIONS(347), 1,
      aux_sym__whitespace_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_COLON_EQ,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(224), 18,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5782] = 13,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(219), 1,
      sym_keyword_argument,
    STATE(252), 1,
      sym_argument,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(119), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5832] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(244), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(377), 19,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5862] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(242), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(379), 19,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5892] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 19,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5922] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(381), 19,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5952] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(230), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(383), 19,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [5982] = 4,
    ACTIONS(349), 1,
      aux_sym__whitespace_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(234), 19,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6014] = 9,
    ACTIONS(339), 1,
      aux_sym__whitespace_token1,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(216), 2,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(363), 10,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6056] = 4,
    ACTIONS(318), 1,
      aux_sym__whitespace_token1,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 19,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6088] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(234), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(349), 19,
      aux_sym_if_statement_token2,
      aux_sym_for_statement_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6118] = 7,
    ACTIONS(302), 1,
      aux_sym__whitespace_token1,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(359), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(214), 14,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6156] = 13,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 1,
      sym_identifier,
    STATE(135), 1,
      sym_type_member_expression,
    STATE(183), 1,
      sym_member_expression,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(180), 6,
      sym__expression,
      sym_new_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [6205] = 3,
    ACTIONS(381), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(218), 19,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6234] = 9,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      aux_sym__whitespace_token1,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(363), 10,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6275] = 3,
    ACTIONS(367), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(240), 19,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6304] = 10,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(341), 8,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6347] = 3,
    ACTIONS(284), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(236), 19,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6376] = 9,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    ACTIONS(395), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(363), 10,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6417] = 3,
    ACTIONS(377), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(244), 19,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6446] = 3,
    ACTIONS(383), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(230), 19,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6475] = 3,
    ACTIONS(379), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(242), 19,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6504] = 12,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 1,
      aux_sym_redim_token2,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(141), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [6551] = 9,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(341), 8,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6592] = 9,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(401), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(341), 8,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6633] = 3,
    ACTIONS(369), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(232), 19,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6662] = 3,
    ACTIONS(351), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(238), 19,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6691] = 3,
    ACTIONS(349), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(234), 19,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6720] = 13,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(40), 1,
      sym_type_member_expression,
    STATE(182), 1,
      sym_member_expression,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(180), 6,
      sym__expression,
      sym_new_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [6769] = 13,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      sym_identifier,
    STATE(109), 1,
      sym_type_member_expression,
    STATE(181), 1,
      sym_member_expression,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(180), 6,
      sym__expression,
      sym_new_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [6818] = 3,
    ACTIONS(318), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 19,
      aux_sym_for_statement_token2,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6847] = 9,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    ACTIONS(407), 1,
      aux_sym__whitespace_token1,
    STATE(13), 1,
      aux_sym__whitespace,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(363), 10,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6888] = 9,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    ACTIONS(401), 1,
      aux_sym__whitespace_token1,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(363), 10,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6929] = 9,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(341), 8,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [6969] = 11,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(142), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7013] = 11,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(164), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7057] = 8,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      aux_sym__whitespace_token1,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(363), 10,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [7095] = 8,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    ACTIONS(415), 1,
      aux_sym__whitespace_token1,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(363), 10,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [7133] = 11,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(145), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7177] = 11,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(136), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7221] = 9,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    ACTIONS(419), 1,
      aux_sym_if_statement_token2,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(341), 8,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [7261] = 11,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(165), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7305] = 11,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(36), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7349] = 11,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(37), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7393] = 11,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(116), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7437] = 11,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(96), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7481] = 11,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(97), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7525] = 11,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(98), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7569] = 11,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(38), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7613] = 11,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(33), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7657] = 11,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(35), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7701] = 11,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      aux_sym_new_expression_token1,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(37), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(45), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(50), 2,
      sym_string_literal,
      sym_boolean,
    STATE(34), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7745] = 11,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(129), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7789] = 11,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(123), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7833] = 11,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(172), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7877] = 11,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(94), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7921] = 11,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(71), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [7965] = 11,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(72), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [8009] = 11,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(73), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [8053] = 8,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    ACTIONS(423), 1,
      aux_sym__whitespace_token1,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(363), 10,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [8091] = 8,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    ACTIONS(425), 1,
      aux_sym__whitespace_token1,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(363), 10,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [8129] = 11,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(168), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [8173] = 11,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(170), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [8217] = 9,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    ACTIONS(427), 1,
      aux_sym_if_statement_token2,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(341), 8,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [8257] = 11,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(137), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [8301] = 9,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(341), 8,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [8341] = 9,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    ACTIONS(431), 1,
      aux_sym_for_statement_token1,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(341), 8,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [8381] = 8,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_CARET,
    ACTIONS(433), 1,
      aux_sym__whitespace_token1,
    STATE(152), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(363), 10,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [8419] = 11,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(113), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [8463] = 9,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(341), 8,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [8503] = 11,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(87), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [8547] = 11,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_new_expression_token1,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(208), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(124), 2,
      sym_string_literal,
      sym_boolean,
    STATE(100), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [8591] = 11,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(174), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [8635] = 11,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(138), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [8679] = 11,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_new_expression_token1,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(272), 1,
      sym_number,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(268), 2,
      anon_sym_DASH,
      aux_sym_unary_expression_token1,
    ACTIONS(276), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(107), 2,
      sym_string_literal,
      sym_boolean,
    STATE(171), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [8723] = 8,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      anon_sym_CARET,
    STATE(163), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
    ACTIONS(341), 8,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [8760] = 4,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(347), 14,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [8788] = 4,
    ACTIONS(439), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(347), 14,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [8816] = 4,
    ACTIONS(441), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(347), 14,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_binary_expression_token1,
      anon_sym_CARET,
      anon_sym_AMP,
      aux_sym_binary_expression_token2,
      aux_sym_binary_expression_token3,
      aux_sym_binary_expression_token4,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [8844] = 8,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(208), 1,
      sym_parameter,
    STATE(240), 1,
      sym_modifier,
    STATE(241), 1,
      sym_new_identifier,
    STATE(282), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(445), 4,
      aux_sym_modifier_token1,
      aux_sym_modifier_token2,
      aux_sym_modifier_token3,
      aux_sym_modifier_token4,
  [8873] = 8,
    ACTIONS(447), 1,
      sym_identifier,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_parameter,
    STATE(240), 1,
      sym_modifier,
    STATE(241), 1,
      sym_new_identifier,
    STATE(339), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(445), 4,
      aux_sym_modifier_token1,
      aux_sym_modifier_token2,
      aux_sym_modifier_token3,
      aux_sym_modifier_token4,
  [8902] = 8,
    ACTIONS(447), 1,
      sym_identifier,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_parameter,
    STATE(240), 1,
      sym_modifier,
    STATE(241), 1,
      sym_new_identifier,
    STATE(279), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(445), 4,
      aux_sym_modifier_token1,
      aux_sym_modifier_token2,
      aux_sym_modifier_token3,
      aux_sym_modifier_token4,
  [8931] = 8,
    ACTIONS(447), 1,
      sym_identifier,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_parameter,
    STATE(240), 1,
      sym_modifier,
    STATE(241), 1,
      sym_new_identifier,
    STATE(277), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(445), 4,
      aux_sym_modifier_token1,
      aux_sym_modifier_token2,
      aux_sym_modifier_token3,
      aux_sym_modifier_token4,
  [8960] = 8,
    ACTIONS(447), 1,
      sym_identifier,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_parameter,
    STATE(240), 1,
      sym_modifier,
    STATE(241), 1,
      sym_new_identifier,
    STATE(327), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(445), 4,
      aux_sym_modifier_token1,
      aux_sym_modifier_token2,
      aux_sym_modifier_token3,
      aux_sym_modifier_token4,
  [8989] = 6,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(237), 1,
      sym_parameter,
    STATE(240), 1,
      sym_modifier,
    STATE(241), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(445), 4,
      aux_sym_modifier_token1,
      aux_sym_modifier_token2,
      aux_sym_modifier_token3,
      aux_sym_modifier_token4,
  [9012] = 6,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(196), 1,
      sym_new_identifier,
    STATE(214), 1,
      sym_variable_declaration_identifier,
    STATE(245), 1,
      sym_array_identifier,
    STATE(283), 1,
      sym_variable_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9032] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(459), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_ptrsafe_function_declaration_token3,
      anon_sym_EQ,
  [9044] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(461), 5,
      aux_sym_exit_statement_token2,
      aux_sym_exit_statement_token3,
      aux_sym_exit_statement_token4,
      aux_sym_exit_statement_token5,
      aux_sym_exit_statement_token6,
  [9056] = 6,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(248), 1,
      sym_const_declaration_identifier,
    STATE(250), 1,
      sym_new_identifier,
    STATE(287), 1,
      sym__const_declaration_assignment,
    STATE(296), 1,
      sym_array_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9076] = 5,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(196), 1,
      sym_new_identifier,
    STATE(245), 1,
      sym_array_identifier,
    STATE(247), 1,
      sym_variable_declaration_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9093] = 5,
    ACTIONS(463), 1,
      aux_sym_if_statement_token3,
    ACTIONS(465), 1,
      aux_sym_if_statement_token4,
    ACTIONS(467), 1,
      aux_sym_if_statement_token5,
    STATE(200), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9110] = 4,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    ACTIONS(473), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9124] = 4,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9138] = 3,
    ACTIONS(459), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(479), 2,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [9150] = 4,
    ACTIONS(39), 1,
      aux_sym_function_call_token1,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(51), 1,
      sym_function_call,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9164] = 4,
    ACTIONS(463), 1,
      aux_sym_if_statement_token3,
    ACTIONS(483), 1,
      aux_sym_if_statement_token5,
    STATE(206), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9178] = 4,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9192] = 4,
    ACTIONS(485), 1,
      aux_sym__whitespace_token1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9206] = 4,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9220] = 4,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9234] = 4,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      aux_sym__whitespace_token1,
    STATE(210), 1,
      aux_sym_variable_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9248] = 4,
    ACTIONS(502), 1,
      aux_sym_if_statement_token3,
    ACTIONS(505), 1,
      aux_sym_if_statement_token5,
    STATE(206), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9262] = 4,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      aux_sym__whitespace_token1,
    STATE(212), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9276] = 4,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9290] = 4,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9304] = 4,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      aux_sym__whitespace_token1,
    STATE(210), 1,
      aux_sym_variable_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9318] = 4,
    ACTIONS(202), 1,
      aux_sym_function_call_token1,
    ACTIONS(519), 1,
      sym_identifier,
    STATE(132), 1,
      sym_function_call,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9332] = 4,
    ACTIONS(493), 1,
      aux_sym__whitespace_token1,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9346] = 4,
    ACTIONS(270), 1,
      aux_sym_function_call_token1,
    ACTIONS(524), 1,
      sym_identifier,
    STATE(115), 1,
      sym_function_call,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9360] = 4,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      aux_sym__whitespace_token1,
    STATE(205), 1,
      aux_sym_variable_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9374] = 3,
    ACTIONS(528), 1,
      aux_sym__whitespace_token1,
    STATE(80), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9385] = 3,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9396] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(391), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9405] = 3,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(264), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9416] = 3,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9427] = 3,
    ACTIONS(532), 1,
      aux_sym__whitespace_token1,
    STATE(81), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9438] = 3,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(265), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9449] = 3,
    ACTIONS(534), 1,
      aux_sym__whitespace_token1,
    STATE(4), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9460] = 3,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9471] = 3,
    ACTIONS(540), 1,
      aux_sym__whitespace_token1,
    STATE(54), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9482] = 3,
    ACTIONS(542), 1,
      aux_sym__whitespace_token1,
    STATE(6), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9493] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(493), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9502] = 3,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9513] = 3,
    ACTIONS(548), 1,
      aux_sym__whitespace_token1,
    STATE(10), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9524] = 3,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(552), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9535] = 3,
    ACTIONS(554), 1,
      anon_sym_LPAREN,
    ACTIONS(556), 1,
      aux_sym_ptrsafe_function_declaration_token4,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9546] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(558), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9555] = 3,
    ACTIONS(560), 1,
      anon_sym_EQ,
    STATE(146), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9566] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(562), 2,
      aux_sym_error_statement_token2,
      aux_sym_error_statement_token3,
  [9575] = 3,
    ACTIONS(564), 1,
      anon_sym_EQ,
    STATE(179), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9586] = 3,
    ACTIONS(566), 1,
      aux_sym__whitespace_token1,
    STATE(14), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9597] = 3,
    ACTIONS(568), 1,
      aux_sym_exit_statement_token3,
    ACTIONS(570), 1,
      aux_sym_ptrsafe_function_declaration_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9608] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(509), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9617] = 3,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    STATE(329), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9628] = 3,
    ACTIONS(572), 1,
      aux_sym__whitespace_token1,
    STATE(7), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9639] = 3,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(231), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9650] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(574), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9659] = 3,
    ACTIONS(576), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9670] = 3,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(288), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9681] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(578), 2,
      aux_sym_exit_statement_token6,
      aux_sym_do_statement_token2,
  [9690] = 3,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    ACTIONS(473), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9701] = 3,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(319), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9712] = 3,
    ACTIONS(517), 1,
      aux_sym__whitespace_token1,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9723] = 3,
    ACTIONS(582), 1,
      anon_sym_EQ,
    STATE(159), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9734] = 3,
    ACTIONS(584), 1,
      aux_sym__whitespace_token1,
    STATE(90), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9745] = 3,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9756] = 3,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    ACTIONS(592), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9767] = 3,
    ACTIONS(493), 1,
      aux_sym__whitespace_token1,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9778] = 3,
    ACTIONS(596), 1,
      aux_sym__whitespace_token1,
    STATE(17), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9789] = 3,
    ACTIONS(598), 1,
      aux_sym__whitespace_token1,
    STATE(57), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9800] = 3,
    ACTIONS(600), 1,
      aux_sym__whitespace_token1,
    STATE(9), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9811] = 3,
    ACTIONS(602), 1,
      aux_sym__whitespace_token1,
    STATE(77), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9822] = 3,
    ACTIONS(604), 1,
      aux_sym__whitespace_token1,
    STATE(12), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9833] = 3,
    ACTIONS(606), 1,
      aux_sym__whitespace_token1,
    STATE(84), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9844] = 3,
    ACTIONS(608), 1,
      aux_sym__whitespace_token1,
    STATE(69), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9855] = 3,
    ACTIONS(610), 1,
      aux_sym__whitespace_token1,
    STATE(66), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9866] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(612), 2,
      aux_sym_if_statement_token3,
      aux_sym_if_statement_token5,
  [9875] = 2,
    ACTIONS(614), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9883] = 2,
    ACTIONS(616), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9891] = 2,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9899] = 2,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9907] = 2,
    ACTIONS(622), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9915] = 2,
    ACTIONS(624), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9923] = 2,
    ACTIONS(626), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9931] = 2,
    ACTIONS(628), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9939] = 2,
    ACTIONS(630), 1,
      aux_sym_if_statement_token5,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9947] = 2,
    ACTIONS(632), 1,
      aux_sym_function_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9955] = 2,
    ACTIONS(634), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9963] = 2,
    ACTIONS(636), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9971] = 2,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9979] = 2,
    ACTIONS(640), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9987] = 2,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9995] = 2,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10003] = 2,
    ACTIONS(646), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10011] = 2,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10019] = 2,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10027] = 2,
    ACTIONS(652), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10035] = 2,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10043] = 2,
    ACTIONS(656), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10051] = 2,
    ACTIONS(658), 1,
      aux_sym_string_literal_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10059] = 2,
    ACTIONS(660), 1,
      aux_sym_ptrsafe_function_declaration_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10067] = 2,
    ACTIONS(662), 1,
      aux_sym_while_statement_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10075] = 2,
    ACTIONS(664), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10083] = 2,
    ACTIONS(666), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10091] = 2,
    ACTIONS(668), 1,
      aux_sym_exit_statement_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10099] = 2,
    ACTIONS(670), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10107] = 2,
    ACTIONS(538), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10115] = 2,
    ACTIONS(672), 1,
      aux_sym_for_statement_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10123] = 2,
    ACTIONS(674), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10131] = 2,
    ACTIONS(676), 1,
      aux_sym_subroutine_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10139] = 2,
    ACTIONS(678), 1,
      aux_sym_function_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10147] = 2,
    ACTIONS(588), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10155] = 2,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10163] = 2,
    ACTIONS(682), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10171] = 2,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10179] = 2,
    ACTIONS(686), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10187] = 2,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10195] = 2,
    ACTIONS(690), 1,
      aux_sym_for_statement_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10203] = 2,
    ACTIONS(692), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10211] = 2,
    ACTIONS(694), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10219] = 2,
    ACTIONS(696), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10227] = 2,
    ACTIONS(698), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10235] = 2,
    ACTIONS(700), 1,
      aux_sym_function_token2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10243] = 2,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10251] = 2,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10259] = 2,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10267] = 2,
    ACTIONS(708), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10275] = 2,
    ACTIONS(710), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10283] = 2,
    ACTIONS(712), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10291] = 2,
    ACTIONS(714), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10299] = 2,
    ACTIONS(716), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10307] = 2,
    ACTIONS(546), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10315] = 2,
    ACTIONS(718), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10323] = 2,
    ACTIONS(720), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10331] = 2,
    ACTIONS(722), 1,
      aux_sym_ptrsafe_function_declaration_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10339] = 2,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10347] = 2,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10355] = 2,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10363] = 2,
    ACTIONS(730), 1,
      aux_sym_subroutine_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10371] = 2,
    ACTIONS(732), 1,
      aux_sym_do_statement_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10379] = 2,
    ACTIONS(734), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10387] = 2,
    ACTIONS(736), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10395] = 2,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10403] = 2,
    ACTIONS(740), 1,
      aux_sym_string_literal_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10411] = 2,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10419] = 2,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10427] = 2,
    ACTIONS(746), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10435] = 2,
    ACTIONS(748), 1,
      aux_sym_for_statement_token3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10443] = 2,
    ACTIONS(750), 1,
      aux_sym_string_literal_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10451] = 2,
    ACTIONS(752), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10459] = 2,
    ACTIONS(754), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10467] = 2,
    ACTIONS(756), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10475] = 2,
    ACTIONS(758), 1,
      aux_sym_for_statement_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10483] = 2,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [10491] = 2,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 107,
  [SMALL_STATE(4)] = 214,
  [SMALL_STATE(5)] = 314,
  [SMALL_STATE(6)] = 414,
  [SMALL_STATE(7)] = 514,
  [SMALL_STATE(8)] = 614,
  [SMALL_STATE(9)] = 714,
  [SMALL_STATE(10)] = 814,
  [SMALL_STATE(11)] = 914,
  [SMALL_STATE(12)] = 1014,
  [SMALL_STATE(13)] = 1114,
  [SMALL_STATE(14)] = 1214,
  [SMALL_STATE(15)] = 1314,
  [SMALL_STATE(16)] = 1410,
  [SMALL_STATE(17)] = 1506,
  [SMALL_STATE(18)] = 1606,
  [SMALL_STATE(19)] = 1701,
  [SMALL_STATE(20)] = 1796,
  [SMALL_STATE(21)] = 1890,
  [SMALL_STATE(22)] = 1984,
  [SMALL_STATE(23)] = 2078,
  [SMALL_STATE(24)] = 2172,
  [SMALL_STATE(25)] = 2266,
  [SMALL_STATE(26)] = 2360,
  [SMALL_STATE(27)] = 2454,
  [SMALL_STATE(28)] = 2548,
  [SMALL_STATE(29)] = 2642,
  [SMALL_STATE(30)] = 2736,
  [SMALL_STATE(31)] = 2830,
  [SMALL_STATE(32)] = 2924,
  [SMALL_STATE(33)] = 3011,
  [SMALL_STATE(34)] = 3053,
  [SMALL_STATE(35)] = 3099,
  [SMALL_STATE(36)] = 3139,
  [SMALL_STATE(37)] = 3187,
  [SMALL_STATE(38)] = 3231,
  [SMALL_STATE(39)] = 3277,
  [SMALL_STATE(40)] = 3312,
  [SMALL_STATE(41)] = 3347,
  [SMALL_STATE(42)] = 3384,
  [SMALL_STATE(43)] = 3425,
  [SMALL_STATE(44)] = 3460,
  [SMALL_STATE(45)] = 3495,
  [SMALL_STATE(46)] = 3532,
  [SMALL_STATE(47)] = 3567,
  [SMALL_STATE(48)] = 3602,
  [SMALL_STATE(49)] = 3637,
  [SMALL_STATE(50)] = 3672,
  [SMALL_STATE(51)] = 3707,
  [SMALL_STATE(52)] = 3742,
  [SMALL_STATE(53)] = 3777,
  [SMALL_STATE(54)] = 3815,
  [SMALL_STATE(55)] = 3853,
  [SMALL_STATE(56)] = 3890,
  [SMALL_STATE(57)] = 3925,
  [SMALL_STATE(58)] = 3960,
  [SMALL_STATE(59)] = 4016,
  [SMALL_STATE(60)] = 4072,
  [SMALL_STATE(61)] = 4128,
  [SMALL_STATE(62)] = 4160,
  [SMALL_STATE(63)] = 4216,
  [SMALL_STATE(64)] = 4272,
  [SMALL_STATE(65)] = 4328,
  [SMALL_STATE(66)] = 4364,
  [SMALL_STATE(67)] = 4398,
  [SMALL_STATE(68)] = 4432,
  [SMALL_STATE(69)] = 4488,
  [SMALL_STATE(70)] = 4521,
  [SMALL_STATE(71)] = 4556,
  [SMALL_STATE(72)] = 4593,
  [SMALL_STATE(73)] = 4628,
  [SMALL_STATE(74)] = 4669,
  [SMALL_STATE(75)] = 4704,
  [SMALL_STATE(76)] = 4739,
  [SMALL_STATE(77)] = 4772,
  [SMALL_STATE(78)] = 4805,
  [SMALL_STATE(79)] = 4840,
  [SMALL_STATE(80)] = 4873,
  [SMALL_STATE(81)] = 4906,
  [SMALL_STATE(82)] = 4939,
  [SMALL_STATE(83)] = 4974,
  [SMALL_STATE(84)] = 5007,
  [SMALL_STATE(85)] = 5040,
  [SMALL_STATE(86)] = 5075,
  [SMALL_STATE(87)] = 5108,
  [SMALL_STATE(88)] = 5151,
  [SMALL_STATE(89)] = 5184,
  [SMALL_STATE(90)] = 5217,
  [SMALL_STATE(91)] = 5250,
  [SMALL_STATE(92)] = 5283,
  [SMALL_STATE(93)] = 5316,
  [SMALL_STATE(94)] = 5349,
  [SMALL_STATE(95)] = 5388,
  [SMALL_STATE(96)] = 5418,
  [SMALL_STATE(97)] = 5454,
  [SMALL_STATE(98)] = 5488,
  [SMALL_STATE(99)] = 5528,
  [SMALL_STATE(100)] = 5578,
  [SMALL_STATE(101)] = 5622,
  [SMALL_STATE(102)] = 5652,
  [SMALL_STATE(103)] = 5682,
  [SMALL_STATE(104)] = 5716,
  [SMALL_STATE(105)] = 5748,
  [SMALL_STATE(106)] = 5782,
  [SMALL_STATE(107)] = 5832,
  [SMALL_STATE(108)] = 5862,
  [SMALL_STATE(109)] = 5892,
  [SMALL_STATE(110)] = 5922,
  [SMALL_STATE(111)] = 5952,
  [SMALL_STATE(112)] = 5982,
  [SMALL_STATE(113)] = 6014,
  [SMALL_STATE(114)] = 6056,
  [SMALL_STATE(115)] = 6088,
  [SMALL_STATE(116)] = 6118,
  [SMALL_STATE(117)] = 6156,
  [SMALL_STATE(118)] = 6205,
  [SMALL_STATE(119)] = 6234,
  [SMALL_STATE(120)] = 6275,
  [SMALL_STATE(121)] = 6304,
  [SMALL_STATE(122)] = 6347,
  [SMALL_STATE(123)] = 6376,
  [SMALL_STATE(124)] = 6417,
  [SMALL_STATE(125)] = 6446,
  [SMALL_STATE(126)] = 6475,
  [SMALL_STATE(127)] = 6504,
  [SMALL_STATE(128)] = 6551,
  [SMALL_STATE(129)] = 6592,
  [SMALL_STATE(130)] = 6633,
  [SMALL_STATE(131)] = 6662,
  [SMALL_STATE(132)] = 6691,
  [SMALL_STATE(133)] = 6720,
  [SMALL_STATE(134)] = 6769,
  [SMALL_STATE(135)] = 6818,
  [SMALL_STATE(136)] = 6847,
  [SMALL_STATE(137)] = 6888,
  [SMALL_STATE(138)] = 6929,
  [SMALL_STATE(139)] = 6969,
  [SMALL_STATE(140)] = 7013,
  [SMALL_STATE(141)] = 7057,
  [SMALL_STATE(142)] = 7095,
  [SMALL_STATE(143)] = 7133,
  [SMALL_STATE(144)] = 7177,
  [SMALL_STATE(145)] = 7221,
  [SMALL_STATE(146)] = 7261,
  [SMALL_STATE(147)] = 7305,
  [SMALL_STATE(148)] = 7349,
  [SMALL_STATE(149)] = 7393,
  [SMALL_STATE(150)] = 7437,
  [SMALL_STATE(151)] = 7481,
  [SMALL_STATE(152)] = 7525,
  [SMALL_STATE(153)] = 7569,
  [SMALL_STATE(154)] = 7613,
  [SMALL_STATE(155)] = 7657,
  [SMALL_STATE(156)] = 7701,
  [SMALL_STATE(157)] = 7745,
  [SMALL_STATE(158)] = 7789,
  [SMALL_STATE(159)] = 7833,
  [SMALL_STATE(160)] = 7877,
  [SMALL_STATE(161)] = 7921,
  [SMALL_STATE(162)] = 7965,
  [SMALL_STATE(163)] = 8009,
  [SMALL_STATE(164)] = 8053,
  [SMALL_STATE(165)] = 8091,
  [SMALL_STATE(166)] = 8129,
  [SMALL_STATE(167)] = 8173,
  [SMALL_STATE(168)] = 8217,
  [SMALL_STATE(169)] = 8257,
  [SMALL_STATE(170)] = 8301,
  [SMALL_STATE(171)] = 8341,
  [SMALL_STATE(172)] = 8381,
  [SMALL_STATE(173)] = 8419,
  [SMALL_STATE(174)] = 8463,
  [SMALL_STATE(175)] = 8503,
  [SMALL_STATE(176)] = 8547,
  [SMALL_STATE(177)] = 8591,
  [SMALL_STATE(178)] = 8635,
  [SMALL_STATE(179)] = 8679,
  [SMALL_STATE(180)] = 8723,
  [SMALL_STATE(181)] = 8760,
  [SMALL_STATE(182)] = 8788,
  [SMALL_STATE(183)] = 8816,
  [SMALL_STATE(184)] = 8844,
  [SMALL_STATE(185)] = 8873,
  [SMALL_STATE(186)] = 8902,
  [SMALL_STATE(187)] = 8931,
  [SMALL_STATE(188)] = 8960,
  [SMALL_STATE(189)] = 8989,
  [SMALL_STATE(190)] = 9012,
  [SMALL_STATE(191)] = 9032,
  [SMALL_STATE(192)] = 9044,
  [SMALL_STATE(193)] = 9056,
  [SMALL_STATE(194)] = 9076,
  [SMALL_STATE(195)] = 9093,
  [SMALL_STATE(196)] = 9110,
  [SMALL_STATE(197)] = 9124,
  [SMALL_STATE(198)] = 9138,
  [SMALL_STATE(199)] = 9150,
  [SMALL_STATE(200)] = 9164,
  [SMALL_STATE(201)] = 9178,
  [SMALL_STATE(202)] = 9192,
  [SMALL_STATE(203)] = 9206,
  [SMALL_STATE(204)] = 9220,
  [SMALL_STATE(205)] = 9234,
  [SMALL_STATE(206)] = 9248,
  [SMALL_STATE(207)] = 9262,
  [SMALL_STATE(208)] = 9276,
  [SMALL_STATE(209)] = 9290,
  [SMALL_STATE(210)] = 9304,
  [SMALL_STATE(211)] = 9318,
  [SMALL_STATE(212)] = 9332,
  [SMALL_STATE(213)] = 9346,
  [SMALL_STATE(214)] = 9360,
  [SMALL_STATE(215)] = 9374,
  [SMALL_STATE(216)] = 9385,
  [SMALL_STATE(217)] = 9396,
  [SMALL_STATE(218)] = 9405,
  [SMALL_STATE(219)] = 9416,
  [SMALL_STATE(220)] = 9427,
  [SMALL_STATE(221)] = 9438,
  [SMALL_STATE(222)] = 9449,
  [SMALL_STATE(223)] = 9460,
  [SMALL_STATE(224)] = 9471,
  [SMALL_STATE(225)] = 9482,
  [SMALL_STATE(226)] = 9493,
  [SMALL_STATE(227)] = 9502,
  [SMALL_STATE(228)] = 9513,
  [SMALL_STATE(229)] = 9524,
  [SMALL_STATE(230)] = 9535,
  [SMALL_STATE(231)] = 9546,
  [SMALL_STATE(232)] = 9555,
  [SMALL_STATE(233)] = 9566,
  [SMALL_STATE(234)] = 9575,
  [SMALL_STATE(235)] = 9586,
  [SMALL_STATE(236)] = 9597,
  [SMALL_STATE(237)] = 9608,
  [SMALL_STATE(238)] = 9617,
  [SMALL_STATE(239)] = 9628,
  [SMALL_STATE(240)] = 9639,
  [SMALL_STATE(241)] = 9650,
  [SMALL_STATE(242)] = 9659,
  [SMALL_STATE(243)] = 9670,
  [SMALL_STATE(244)] = 9681,
  [SMALL_STATE(245)] = 9690,
  [SMALL_STATE(246)] = 9701,
  [SMALL_STATE(247)] = 9712,
  [SMALL_STATE(248)] = 9723,
  [SMALL_STATE(249)] = 9734,
  [SMALL_STATE(250)] = 9745,
  [SMALL_STATE(251)] = 9756,
  [SMALL_STATE(252)] = 9767,
  [SMALL_STATE(253)] = 9778,
  [SMALL_STATE(254)] = 9789,
  [SMALL_STATE(255)] = 9800,
  [SMALL_STATE(256)] = 9811,
  [SMALL_STATE(257)] = 9822,
  [SMALL_STATE(258)] = 9833,
  [SMALL_STATE(259)] = 9844,
  [SMALL_STATE(260)] = 9855,
  [SMALL_STATE(261)] = 9866,
  [SMALL_STATE(262)] = 9875,
  [SMALL_STATE(263)] = 9883,
  [SMALL_STATE(264)] = 9891,
  [SMALL_STATE(265)] = 9899,
  [SMALL_STATE(266)] = 9907,
  [SMALL_STATE(267)] = 9915,
  [SMALL_STATE(268)] = 9923,
  [SMALL_STATE(269)] = 9931,
  [SMALL_STATE(270)] = 9939,
  [SMALL_STATE(271)] = 9947,
  [SMALL_STATE(272)] = 9955,
  [SMALL_STATE(273)] = 9963,
  [SMALL_STATE(274)] = 9971,
  [SMALL_STATE(275)] = 9979,
  [SMALL_STATE(276)] = 9987,
  [SMALL_STATE(277)] = 9995,
  [SMALL_STATE(278)] = 10003,
  [SMALL_STATE(279)] = 10011,
  [SMALL_STATE(280)] = 10019,
  [SMALL_STATE(281)] = 10027,
  [SMALL_STATE(282)] = 10035,
  [SMALL_STATE(283)] = 10043,
  [SMALL_STATE(284)] = 10051,
  [SMALL_STATE(285)] = 10059,
  [SMALL_STATE(286)] = 10067,
  [SMALL_STATE(287)] = 10075,
  [SMALL_STATE(288)] = 10083,
  [SMALL_STATE(289)] = 10091,
  [SMALL_STATE(290)] = 10099,
  [SMALL_STATE(291)] = 10107,
  [SMALL_STATE(292)] = 10115,
  [SMALL_STATE(293)] = 10123,
  [SMALL_STATE(294)] = 10131,
  [SMALL_STATE(295)] = 10139,
  [SMALL_STATE(296)] = 10147,
  [SMALL_STATE(297)] = 10155,
  [SMALL_STATE(298)] = 10163,
  [SMALL_STATE(299)] = 10171,
  [SMALL_STATE(300)] = 10179,
  [SMALL_STATE(301)] = 10187,
  [SMALL_STATE(302)] = 10195,
  [SMALL_STATE(303)] = 10203,
  [SMALL_STATE(304)] = 10211,
  [SMALL_STATE(305)] = 10219,
  [SMALL_STATE(306)] = 10227,
  [SMALL_STATE(307)] = 10235,
  [SMALL_STATE(308)] = 10243,
  [SMALL_STATE(309)] = 10251,
  [SMALL_STATE(310)] = 10259,
  [SMALL_STATE(311)] = 10267,
  [SMALL_STATE(312)] = 10275,
  [SMALL_STATE(313)] = 10283,
  [SMALL_STATE(314)] = 10291,
  [SMALL_STATE(315)] = 10299,
  [SMALL_STATE(316)] = 10307,
  [SMALL_STATE(317)] = 10315,
  [SMALL_STATE(318)] = 10323,
  [SMALL_STATE(319)] = 10331,
  [SMALL_STATE(320)] = 10339,
  [SMALL_STATE(321)] = 10347,
  [SMALL_STATE(322)] = 10355,
  [SMALL_STATE(323)] = 10363,
  [SMALL_STATE(324)] = 10371,
  [SMALL_STATE(325)] = 10379,
  [SMALL_STATE(326)] = 10387,
  [SMALL_STATE(327)] = 10395,
  [SMALL_STATE(328)] = 10403,
  [SMALL_STATE(329)] = 10411,
  [SMALL_STATE(330)] = 10419,
  [SMALL_STATE(331)] = 10427,
  [SMALL_STATE(332)] = 10435,
  [SMALL_STATE(333)] = 10443,
  [SMALL_STATE(334)] = 10451,
  [SMALL_STATE(335)] = 10459,
  [SMALL_STATE(336)] = 10467,
  [SMALL_STATE(337)] = 10475,
  [SMALL_STATE(338)] = 10483,
  [SMALL_STATE(339)] = 10491,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_statement_block, 1, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation_statement, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_expression, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_member_expression, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(53),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(56),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(67),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(92),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(88),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(79),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_expression, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(83),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(86),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(89),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_expression, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_argument, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_argument, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redim, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 6, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redim, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__const_declaration_assignment, 3, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_identifier, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_identifier, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_identifier, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_identifier, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 2, 0, 0),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 1, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_identifier, 3, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_identifier, 3, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_identifier, 6, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_identifier, 6, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration_identifier, 1, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 5, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 8, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_statement, 2, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 11, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 10, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation_statement, 2, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 12, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 2, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 4, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 7, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 9, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 2, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 12, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 10, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
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

TS_PUBLIC const TSLanguage *tree_sitter_vbscript(void) {
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
