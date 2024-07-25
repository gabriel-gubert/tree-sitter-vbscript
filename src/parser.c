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
#define STATE_COUNT 280
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_If = 2,
  anon_sym_Then = 3,
  anon_sym_Else = 4,
  anon_sym_EndIf = 5,
  anon_sym_For = 6,
  anon_sym_To = 7,
  anon_sym_Step = 8,
  anon_sym_Next = 9,
  anon_sym_While = 10,
  anon_sym_Wend = 11,
  anon_sym_Do = 12,
  anon_sym_Loop = 13,
  anon_sym_Until = 14,
  anon_sym_Sub = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_EndSub = 18,
  anon_sym_Function = 19,
  anon_sym_EndFunction = 20,
  anon_sym_Dim = 21,
  anon_sym_As = 22,
  anon_sym_COMMA = 23,
  anon_sym_Private = 24,
  anon_sym_Declare = 25,
  anon_sym_PtrSafe = 26,
  anon_sym_Lib = 27,
  anon_sym_Alias = 28,
  anon_sym_ByVal = 29,
  anon_sym_ByRef = 30,
  anon_sym_Optional = 31,
  anon_sym_ParamArray = 32,
  anon_sym_Any = 33,
  anon_sym_Boolean = 34,
  anon_sym_Byte = 35,
  anon_sym_Collection = 36,
  anon_sym_Currency = 37,
  anon_sym_Date = 38,
  anon_sym_Decimal = 39,
  anon_sym_Dictionary = 40,
  anon_sym_Double = 41,
  anon_sym_Integer = 42,
  anon_sym_Long = 43,
  anon_sym_LongLong = 44,
  anon_sym_LongPtr = 45,
  anon_sym_Object = 46,
  anon_sym_Single = 47,
  anon_sym_String = 48,
  anon_sym_Variant = 49,
  anon_sym_DOT = 50,
  anon_sym_PLUS = 51,
  anon_sym_DASH = 52,
  anon_sym_STAR = 53,
  anon_sym_SLASH = 54,
  anon_sym_AMP = 55,
  anon_sym_and = 56,
  anon_sym_or = 57,
  anon_sym_LT_GT = 58,
  anon_sym_LT = 59,
  anon_sym_GT = 60,
  anon_sym_LT_EQ = 61,
  anon_sym_GT_EQ = 62,
  anon_sym_Not = 63,
  anon_sym_Call = 64,
  anon_sym_COLON_EQ = 65,
  sym_number = 66,
  anon_sym_DQUOTE = 67,
  aux_sym_string_literal_token1 = 68,
  anon_sym_True = 69,
  anon_sym_False = 70,
  sym_identifier = 71,
  sym__equal = 72,
  aux_sym__whitespace_token1 = 73,
  sym__horizontal_whitespace = 74,
  sym_source_file = 75,
  sym__statement = 76,
  sym__inline_statement = 77,
  sym_variable_assignment = 78,
  sym__inline_statement_block = 79,
  sym_invocation_statement = 80,
  sym_if_statement = 81,
  sym_for_statement = 82,
  sym_while_statement = 83,
  sym_do_statement = 84,
  sym_subroutine = 85,
  sym_function = 86,
  sym_variable_declaration = 87,
  sym__variable_declaration_assignment = 88,
  sym_type_definition = 89,
  sym_variable_list = 90,
  sym_ptrsafe_function_declaration = 91,
  sym_parameter_list = 92,
  sym_parameter = 93,
  sym_modifier = 94,
  sym_type = 95,
  sym__expression = 96,
  sym_member_expression = 97,
  sym_binary_expression = 98,
  sym_unary_expression = 99,
  sym_function_call = 100,
  sym_argument_list = 101,
  sym_argument = 102,
  sym_keyword_argument = 103,
  sym_literal = 104,
  sym_string_literal = 105,
  sym_boolean = 106,
  sym_new_identifier = 107,
  aux_sym__whitespace = 108,
  aux_sym_source_file_repeat1 = 109,
  aux_sym__inline_statement_block_repeat1 = 110,
  aux_sym_variable_list_repeat1 = 111,
  aux_sym_parameter_list_repeat1 = 112,
  aux_sym_argument_list_repeat1 = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_If] = "If",
  [anon_sym_Then] = "Then",
  [anon_sym_Else] = "Else",
  [anon_sym_EndIf] = "End If",
  [anon_sym_For] = "For",
  [anon_sym_To] = "To",
  [anon_sym_Step] = "Step",
  [anon_sym_Next] = "Next",
  [anon_sym_While] = "While",
  [anon_sym_Wend] = "Wend",
  [anon_sym_Do] = "Do",
  [anon_sym_Loop] = "Loop",
  [anon_sym_Until] = "Until",
  [anon_sym_Sub] = "Sub",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EndSub] = "End Sub",
  [anon_sym_Function] = "Function",
  [anon_sym_EndFunction] = "End Function",
  [anon_sym_Dim] = "Dim",
  [anon_sym_As] = "As",
  [anon_sym_COMMA] = ",",
  [anon_sym_Private] = "Private",
  [anon_sym_Declare] = "Declare",
  [anon_sym_PtrSafe] = "PtrSafe",
  [anon_sym_Lib] = "Lib",
  [anon_sym_Alias] = "Alias",
  [anon_sym_ByVal] = "ByVal",
  [anon_sym_ByRef] = "ByRef",
  [anon_sym_Optional] = "Optional",
  [anon_sym_ParamArray] = "ParamArray",
  [anon_sym_Any] = "Any",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Byte] = "Byte",
  [anon_sym_Collection] = "Collection",
  [anon_sym_Currency] = "Currency",
  [anon_sym_Date] = "Date",
  [anon_sym_Decimal] = "Decimal",
  [anon_sym_Dictionary] = "Dictionary",
  [anon_sym_Double] = "Double",
  [anon_sym_Integer] = "Integer",
  [anon_sym_Long] = "Long",
  [anon_sym_LongLong] = "LongLong",
  [anon_sym_LongPtr] = "LongPtr",
  [anon_sym_Object] = "Object",
  [anon_sym_Single] = "Single",
  [anon_sym_String] = "String",
  [anon_sym_Variant] = "Variant",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_Not] = "Not",
  [anon_sym_Call] = "Call",
  [anon_sym_COLON_EQ] = ":=",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_identifier] = "identifier",
  [sym__equal] = "_equal",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__horizontal_whitespace] = "_horizontal_whitespace",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__inline_statement] = "_inline_statement",
  [sym_variable_assignment] = "variable_assignment",
  [sym__inline_statement_block] = "_inline_statement_block",
  [sym_invocation_statement] = "invocation_statement",
  [sym_if_statement] = "if_statement",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_do_statement] = "do_statement",
  [sym_subroutine] = "subroutine",
  [sym_function] = "function",
  [sym_variable_declaration] = "variable_declaration",
  [sym__variable_declaration_assignment] = "_variable_declaration_assignment",
  [sym_type_definition] = "type_definition",
  [sym_variable_list] = "variable_list",
  [sym_ptrsafe_function_declaration] = "ptrsafe_function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_modifier] = "modifier",
  [sym_type] = "type",
  [sym__expression] = "_expression",
  [sym_member_expression] = "member_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym_keyword_argument] = "keyword_argument",
  [sym_literal] = "literal",
  [sym_string_literal] = "string_literal",
  [sym_boolean] = "boolean",
  [sym_new_identifier] = "new_identifier",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__inline_statement_block_repeat1] = "_inline_statement_block_repeat1",
  [aux_sym_variable_list_repeat1] = "variable_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_If] = anon_sym_If,
  [anon_sym_Then] = anon_sym_Then,
  [anon_sym_Else] = anon_sym_Else,
  [anon_sym_EndIf] = anon_sym_EndIf,
  [anon_sym_For] = anon_sym_For,
  [anon_sym_To] = anon_sym_To,
  [anon_sym_Step] = anon_sym_Step,
  [anon_sym_Next] = anon_sym_Next,
  [anon_sym_While] = anon_sym_While,
  [anon_sym_Wend] = anon_sym_Wend,
  [anon_sym_Do] = anon_sym_Do,
  [anon_sym_Loop] = anon_sym_Loop,
  [anon_sym_Until] = anon_sym_Until,
  [anon_sym_Sub] = anon_sym_Sub,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EndSub] = anon_sym_EndSub,
  [anon_sym_Function] = anon_sym_Function,
  [anon_sym_EndFunction] = anon_sym_EndFunction,
  [anon_sym_Dim] = anon_sym_Dim,
  [anon_sym_As] = anon_sym_As,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_Private] = anon_sym_Private,
  [anon_sym_Declare] = anon_sym_Declare,
  [anon_sym_PtrSafe] = anon_sym_PtrSafe,
  [anon_sym_Lib] = anon_sym_Lib,
  [anon_sym_Alias] = anon_sym_Alias,
  [anon_sym_ByVal] = anon_sym_ByVal,
  [anon_sym_ByRef] = anon_sym_ByRef,
  [anon_sym_Optional] = anon_sym_Optional,
  [anon_sym_ParamArray] = anon_sym_ParamArray,
  [anon_sym_Any] = anon_sym_Any,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_Byte] = anon_sym_Byte,
  [anon_sym_Collection] = anon_sym_Collection,
  [anon_sym_Currency] = anon_sym_Currency,
  [anon_sym_Date] = anon_sym_Date,
  [anon_sym_Decimal] = anon_sym_Decimal,
  [anon_sym_Dictionary] = anon_sym_Dictionary,
  [anon_sym_Double] = anon_sym_Double,
  [anon_sym_Integer] = anon_sym_Integer,
  [anon_sym_Long] = anon_sym_Long,
  [anon_sym_LongLong] = anon_sym_LongLong,
  [anon_sym_LongPtr] = anon_sym_LongPtr,
  [anon_sym_Object] = anon_sym_Object,
  [anon_sym_Single] = anon_sym_Single,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Variant] = anon_sym_Variant,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_Not] = anon_sym_Not,
  [anon_sym_Call] = anon_sym_Call,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_identifier] = sym_identifier,
  [sym__equal] = sym__equal,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__horizontal_whitespace] = sym__horizontal_whitespace,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__inline_statement] = sym__inline_statement,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym__inline_statement_block] = sym__inline_statement_block,
  [sym_invocation_statement] = sym_invocation_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_do_statement] = sym_do_statement,
  [sym_subroutine] = sym_subroutine,
  [sym_function] = sym_function,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym__variable_declaration_assignment] = sym__variable_declaration_assignment,
  [sym_type_definition] = sym_type_definition,
  [sym_variable_list] = sym_variable_list,
  [sym_ptrsafe_function_declaration] = sym_ptrsafe_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_modifier] = sym_modifier,
  [sym_type] = sym_type,
  [sym__expression] = sym__expression,
  [sym_member_expression] = sym_member_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym_keyword_argument] = sym_keyword_argument,
  [sym_literal] = sym_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_boolean] = sym_boolean,
  [sym_new_identifier] = sym_new_identifier,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__inline_statement_block_repeat1] = aux_sym__inline_statement_block_repeat1,
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
  [anon_sym_If] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EndIf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_For] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_To] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Step] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_While] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Wend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Until] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sub] = {
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
  [anon_sym_EndSub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EndFunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_As] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrSafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Lib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ByVal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ByRef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ParamArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Collection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Currency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dictionary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LongLong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LongPtr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Single] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Variant] = {
    .visible = true,
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
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
  [anon_sym_Not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Call] = {
    .visible = true,
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
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__equal] = {
    .visible = false,
    .named = true,
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
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_declaration_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_type_definition] = {
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
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
  [17] = 16,
  [18] = 16,
  [19] = 15,
  [20] = 15,
  [21] = 15,
  [22] = 16,
  [23] = 16,
  [24] = 15,
  [25] = 16,
  [26] = 15,
  [27] = 16,
  [28] = 15,
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
  [46] = 45,
  [47] = 47,
  [48] = 47,
  [49] = 45,
  [50] = 47,
  [51] = 43,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 29,
  [56] = 34,
  [57] = 54,
  [58] = 37,
  [59] = 38,
  [60] = 60,
  [61] = 61,
  [62] = 36,
  [63] = 29,
  [64] = 64,
  [65] = 33,
  [66] = 53,
  [67] = 67,
  [68] = 67,
  [69] = 35,
  [70] = 42,
  [71] = 31,
  [72] = 30,
  [73] = 41,
  [74] = 40,
  [75] = 32,
  [76] = 76,
  [77] = 34,
  [78] = 78,
  [79] = 79,
  [80] = 33,
  [81] = 32,
  [82] = 82,
  [83] = 83,
  [84] = 82,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 53,
  [89] = 89,
  [90] = 53,
  [91] = 82,
  [92] = 79,
  [93] = 79,
  [94] = 79,
  [95] = 53,
  [96] = 76,
  [97] = 86,
  [98] = 79,
  [99] = 53,
  [100] = 76,
  [101] = 79,
  [102] = 76,
  [103] = 40,
  [104] = 41,
  [105] = 30,
  [106] = 31,
  [107] = 37,
  [108] = 53,
  [109] = 42,
  [110] = 43,
  [111] = 35,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 38,
  [117] = 117,
  [118] = 36,
  [119] = 79,
  [120] = 89,
  [121] = 121,
  [122] = 114,
  [123] = 123,
  [124] = 124,
  [125] = 53,
  [126] = 113,
  [127] = 127,
  [128] = 112,
  [129] = 76,
  [130] = 112,
  [131] = 113,
  [132] = 76,
  [133] = 114,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 138,
  [141] = 141,
  [142] = 141,
  [143] = 143,
  [144] = 143,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 143,
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
  [162] = 159,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 164,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 169,
  [172] = 172,
  [173] = 53,
  [174] = 165,
  [175] = 163,
  [176] = 165,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 184,
  [186] = 184,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 188,
  [192] = 184,
  [193] = 184,
  [194] = 184,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 184,
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
  [213] = 204,
  [214] = 201,
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
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 252,
  [257] = 250,
  [258] = 221,
  [259] = 259,
  [260] = 260,
  [261] = 252,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 250,
  [267] = 221,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 233,
  [274] = 255,
  [275] = 275,
  [276] = 233,
  [277] = 255,
  [278] = 235,
  [279] = 235,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(221);
      ADVANCE_MAP(
        '"', 310,
        '&', 293,
        '\'', 223,
        '(', 247,
        ')', 248,
        '*', 291,
        '+', 289,
        ',', 256,
        '-', 290,
        '.', 288,
        '/', 292,
        ':', 27,
        '<', 299,
        '=', 424,
        '>', 300,
        'A', 122,
        'B', 161,
        'C', 35,
        'D', 36,
        'E', 123,
        'F', 38,
        'I', 95,
        'L', 105,
        'N', 72,
        'O', 54,
        'P', 42,
        'S', 111,
        'T', 104,
        'U', 152,
        'V', 45,
        'W', 92,
      );
      if (lookahead == '_') SKIP(218);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 310,
        '&', 293,
        '\'', 223,
        '(', 247,
        '*', 291,
        '+', 289,
        ',', 256,
        '-', 290,
        '.', 288,
        '/', 292,
        '<', 299,
        '=', 424,
        '>', 300,
        'C', 346,
        'F', 349,
        'N', 396,
        'T', 406,
        '_', 341,
        'a', 390,
        'o', 405,
        '\t', 437,
        ' ', 437,
        '\n', 425,
        '\r', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        ')', 248,
        '-', 290,
        'C', 346,
        'F', 349,
        'N', 396,
        'T', 406,
        '_', 342,
        '\t', 437,
        ' ', 437,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'E', 385,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 324,
        '\t', 437,
        ' ', 437,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'E', 385,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 325,
        '\t', 437,
        ' ', 437,
        '\n', 425,
        '\r', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'E', 392,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 326,
        '\t', 437,
        ' ', 437,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'E', 392,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 327,
        '\t', 437,
        ' ', 437,
        '\n', 425,
        '\r', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'E', 393,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 328,
        '\t', 437,
        ' ', 437,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'E', 393,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 329,
        '\t', 437,
        ' ', 437,
        '\n', 425,
        '\r', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'E', 391,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 330,
        '\t', 437,
        ' ', 437,
        '\n', 425,
        '\r', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'E', 391,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 331,
        '\t', 437,
        ' ', 437,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'L', 399,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 334,
        '\t', 437,
        ' ', 437,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'L', 399,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 335,
        '\t', 437,
        ' ', 437,
        '\n', 425,
        '\r', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 336,
        '\t', 437,
        ' ', 437,
        '\n', 425,
        '\r', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 370,
        '_', 337,
        '\t', 437,
        ' ', 437,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 370,
        '_', 338,
        '\t', 437,
        ' ', 437,
        '\n', 425,
        '\r', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'N', 368,
        'T', 406,
        'W', 373,
        '_', 339,
        '\t', 437,
        ' ', 437,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'N', 368,
        'T', 406,
        'W', 373,
        '_', 340,
        '\t', 437,
        ' ', 437,
        '\n', 425,
        '\r', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '&', 293,
        '\'', 223,
        '(', 247,
        '*', 291,
        '+', 289,
        ',', 256,
        '-', 290,
        '.', 288,
        '/', 292,
        ':', 27,
        '<', 299,
        '=', 424,
        '>', 300,
        'A', 188,
        'E', 157,
        'S', 202,
      );
      if (lookahead == '_') SKIP(21);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(437);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(425);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '&', 293,
        '\'', 223,
        '(', 247,
        '*', 291,
        '+', 289,
        ',', 256,
        '-', 290,
        '.', 288,
        '/', 292,
        ':', 27,
        '<', 299,
        '=', 424,
        '>', 300,
        'A', 188,
        'E', 157,
        'S', 202,
      );
      if (lookahead == '_') SKIP(21);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(437);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(436);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\'', 223,
        ')', 248,
        'B', 421,
        'O', 402,
        'P', 353,
        '_', 323,
        '\t', 437,
        ' ', 437,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\'', 223,
        'A', 139,
        'B', 162,
        'C', 171,
        'D', 37,
        'I', 156,
        'L', 170,
        'O', 53,
        'S', 112,
        'V', 45,
      );
      if (lookahead == '_') SKIP(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(437);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\'', 223,
        'A', 139,
        'B', 162,
        'C', 171,
        'D', 37,
        'I', 156,
        'L', 170,
        'O', 53,
        'S', 112,
        'V', 45,
      );
      if (lookahead == '_') SKIP(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(437);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == 'C') ADVANCE(346);
      if (lookahead == '_') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(307);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(184);
      END_STATE();
    case 29:
      if (lookahead == 'F') ADVANCE(211);
      END_STATE();
    case 30:
      if (lookahead == 'F') ADVANCE(211);
      if (lookahead == 'I') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(209);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'V') ADVANCE(44);
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(209);
      END_STATE();
    case 34:
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(261);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(245);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(249);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(253);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(265);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(281);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(286);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(282);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 121:
      if (lookahead == 'j') ADVANCE(93);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 212:
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 213:
      if (lookahead == 'x') ADVANCE(193);
      END_STATE();
    case 214:
      if (lookahead == 'y') ADVANCE(271);
      END_STATE();
    case 215:
      if (lookahead == 'y') ADVANCE(275);
      END_STATE();
    case 216:
      if (lookahead == 'y') ADVANCE(278);
      END_STATE();
    case 217:
      if (lookahead == 'y') ADVANCE(269);
      END_STATE();
    case 218:
      if (eof) ADVANCE(221);
      ADVANCE_MAP(
        '"', 310,
        '&', 293,
        '\'', 223,
        '(', 247,
        ')', 248,
        '*', 291,
        '+', 289,
        ',', 256,
        '-', 290,
        '.', 288,
        '/', 292,
        ':', 27,
        '<', 299,
        '=', 424,
        '>', 300,
        'A', 122,
        'B', 161,
        'C', 35,
        'D', 36,
        'E', 123,
        'F', 38,
        'I', 95,
        'L', 105,
        'N', 72,
        'O', 54,
        'P', 42,
        'S', 111,
        'T', 104,
        'U', 152,
        'V', 45,
        'W', 92,
      );
      if (lookahead == '_') SKIP(218);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(437);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 219:
      if (eof) ADVANCE(221);
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'F', 347,
        'I', 371,
        'N', 396,
        'P', 403,
        'S', 417,
        'T', 406,
        'W', 373,
        '_', 332,
        '\t', 437,
        ' ', 437,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 220:
      if (eof) ADVANCE(221);
      ADVANCE_MAP(
        '"', 310,
        '\'', 223,
        '(', 247,
        '-', 290,
        'C', 346,
        'D', 374,
        'F', 347,
        'I', 371,
        'N', 396,
        'P', 403,
        'S', 417,
        'T', 406,
        'W', 373,
        '_', 333,
        '\t', 437,
        ' ', 437,
        '\n', 425,
        '\r', 425,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_If);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_If);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_Then);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_Else);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_Else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_EndIf);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_For);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_For);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_To);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_Step);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Next);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_While);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_While);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Wend);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Wend);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_Do);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_Do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_Loop);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_Loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_Until);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_Sub);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_Sub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_EndSub);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_Function);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_EndFunction);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_Dim);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_Dim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_As);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Private);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Declare);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_PtrSafe);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_Lib);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_ByVal);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_ByVal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_ByRef);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_ByRef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_Optional);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_Optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_ParamArray);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_ParamArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_Any);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_Byte);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_Collection);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Currency);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Date);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_Decimal);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Integer);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_Long);
      if (lookahead == 'L') ADVANCE(166);
      if (lookahead == 'P') ADVANCE(200);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LongLong);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LongPtr);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_Single);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_Variant);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead == '>') ADVANCE(298);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(302);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_Not);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_Not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_Call);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_Call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(314);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(421);
      if (lookahead == 'O') ADVANCE(402);
      if (lookahead == 'P') ADVANCE(353);
      if (lookahead == '_') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'E', 385,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 324,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'E', 385,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 325,
        '\n', 429,
        '\r', 429,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'E', 392,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 326,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'E', 392,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 327,
        '\n', 434,
        '\r', 434,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'E', 393,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 328,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'E', 393,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 329,
        '\n', 435,
        '\r', 435,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'E', 391,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 330,
        '\n', 432,
        '\r', 432,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'E', 391,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 331,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'F', 347,
        'I', 371,
        'N', 396,
        'P', 403,
        'S', 417,
        'T', 406,
        'W', 373,
        '_', 332,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'F', 347,
        'I', 371,
        'N', 396,
        'P', 403,
        'S', 417,
        'T', 406,
        'W', 373,
        '_', 333,
        '\n', 428,
        '\r', 428,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'L', 399,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 334,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'L', 399,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 335,
        '\n', 430,
        '\r', 430,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 373,
        '_', 336,
        '\n', 426,
        '\r', 426,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 370,
        '_', 337,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'N', 396,
        'T', 406,
        'W', 370,
        '_', 338,
        '\n', 433,
        '\r', 433,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'N', 368,
        'T', 406,
        'W', 373,
        '_', 339,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'D', 374,
        'F', 348,
        'I', 371,
        'N', 368,
        'T', 406,
        'W', 373,
        '_', 340,
        '\n', 431,
        '\r', 431,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 346,
        'F', 349,
        'N', 396,
        'T', 406,
        '_', 341,
        'a', 390,
        'o', 405,
        '\n', 427,
        '\r', 427,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(346);
      if (lookahead == 'F') ADVANCE(349);
      if (lookahead == 'N') ADVANCE(396);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == '_') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(346);
      if (lookahead == '_') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(369);
      if (lookahead == 'V') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead == 'u') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == 'o') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead == 'n') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__equal);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(336);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(341);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(325);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(335);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(340);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(330);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(338);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__horizontal_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(437);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 219},
  [2] = {.lex_state = 219},
  [3] = {.lex_state = 219},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 220},
  [53] = {.lex_state = 220},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 20},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 20},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 20},
  [138] = {.lex_state = 20},
  [139] = {.lex_state = 20},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 20},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 20},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 20},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 20},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 22},
  [153] = {.lex_state = 22},
  [154] = {.lex_state = 22},
  [155] = {.lex_state = 22},
  [156] = {.lex_state = 22},
  [157] = {.lex_state = 20},
  [158] = {.lex_state = 20},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 26},
  [161] = {.lex_state = 20},
  [162] = {.lex_state = 20},
  [163] = {.lex_state = 20},
  [164] = {.lex_state = 20},
  [165] = {.lex_state = 25},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 20},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 20},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 20},
  [174] = {.lex_state = 25},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 25},
  [177] = {.lex_state = 20},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 20},
  [181] = {.lex_state = 26},
  [182] = {.lex_state = 26},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 20},
  [185] = {.lex_state = 20},
  [186] = {.lex_state = 20},
  [187] = {.lex_state = 20},
  [188] = {.lex_state = 20},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 20},
  [193] = {.lex_state = 20},
  [194] = {.lex_state = 20},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 20},
  [197] = {.lex_state = 20},
  [198] = {.lex_state = 20},
  [199] = {.lex_state = 26},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 26},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 26},
  [210] = {.lex_state = 20},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 20},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 20},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 26},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 20},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 20},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 20},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 20},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 26},
  [233] = {.lex_state = 312},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 26},
  [236] = {.lex_state = 20},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 26},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 20},
  [242] = {.lex_state = 20},
  [243] = {.lex_state = 20},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 20},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 20},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 20},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 20},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 20},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 26},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 20},
  [269] = {.lex_state = 20},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 20},
  [273] = {.lex_state = 312},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 20},
  [276] = {.lex_state = 312},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 26},
  [279] = {.lex_state = 26},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_If] = ACTIONS(1),
    [anon_sym_Then] = ACTIONS(1),
    [anon_sym_Else] = ACTIONS(1),
    [anon_sym_EndIf] = ACTIONS(1),
    [anon_sym_For] = ACTIONS(1),
    [anon_sym_To] = ACTIONS(1),
    [anon_sym_Step] = ACTIONS(1),
    [anon_sym_Next] = ACTIONS(1),
    [anon_sym_While] = ACTIONS(1),
    [anon_sym_Wend] = ACTIONS(1),
    [anon_sym_Do] = ACTIONS(1),
    [anon_sym_Loop] = ACTIONS(1),
    [anon_sym_Until] = ACTIONS(1),
    [anon_sym_Sub] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EndSub] = ACTIONS(1),
    [anon_sym_Function] = ACTIONS(1),
    [anon_sym_EndFunction] = ACTIONS(1),
    [anon_sym_Dim] = ACTIONS(1),
    [anon_sym_As] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_Private] = ACTIONS(1),
    [anon_sym_Declare] = ACTIONS(1),
    [anon_sym_PtrSafe] = ACTIONS(1),
    [anon_sym_Lib] = ACTIONS(1),
    [anon_sym_Alias] = ACTIONS(1),
    [anon_sym_ByVal] = ACTIONS(1),
    [anon_sym_ByRef] = ACTIONS(1),
    [anon_sym_Optional] = ACTIONS(1),
    [anon_sym_ParamArray] = ACTIONS(1),
    [anon_sym_Any] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Byte] = ACTIONS(1),
    [anon_sym_Collection] = ACTIONS(1),
    [anon_sym_Currency] = ACTIONS(1),
    [anon_sym_Date] = ACTIONS(1),
    [anon_sym_Decimal] = ACTIONS(1),
    [anon_sym_Dictionary] = ACTIONS(1),
    [anon_sym_Double] = ACTIONS(1),
    [anon_sym_Integer] = ACTIONS(1),
    [anon_sym_Long] = ACTIONS(1),
    [anon_sym_LongLong] = ACTIONS(1),
    [anon_sym_LongPtr] = ACTIONS(1),
    [anon_sym_Object] = ACTIONS(1),
    [anon_sym_Single] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Variant] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_Not] = ACTIONS(1),
    [anon_sym_Call] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym__equal] = ACTIONS(1),
    [sym__horizontal_whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(231),
    [sym__statement] = STATE(212),
    [sym__inline_statement] = STATE(212),
    [sym_variable_assignment] = STATE(212),
    [sym_invocation_statement] = STATE(212),
    [sym_if_statement] = STATE(212),
    [sym_for_statement] = STATE(212),
    [sym_while_statement] = STATE(212),
    [sym_do_statement] = STATE(212),
    [sym_subroutine] = STATE(212),
    [sym_function] = STATE(212),
    [sym_variable_declaration] = STATE(212),
    [sym_ptrsafe_function_declaration] = STATE(212),
    [sym__expression] = STATE(12),
    [sym_member_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_unary_expression] = STATE(12),
    [sym_function_call] = STATE(12),
    [sym_literal] = STATE(12),
    [sym_string_literal] = STATE(36),
    [sym_boolean] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_If] = ACTIONS(9),
    [anon_sym_For] = ACTIONS(11),
    [anon_sym_While] = ACTIONS(13),
    [anon_sym_Do] = ACTIONS(15),
    [anon_sym_Sub] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_Function] = ACTIONS(21),
    [anon_sym_Dim] = ACTIONS(23),
    [anon_sym_Private] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_Not] = ACTIONS(27),
    [anon_sym_Call] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_True] = ACTIONS(35),
    [anon_sym_False] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym__horizontal_whitespace] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(17), 1,
      anon_sym_Sub,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_Function,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(25), 1,
      anon_sym_Private,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(212), 12,
      sym__statement,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_subroutine,
      sym_function,
      sym_variable_declaration,
      sym_ptrsafe_function_declaration,
  [84] = 21,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_If,
    ACTIONS(46), 1,
      anon_sym_For,
    ACTIONS(49), 1,
      anon_sym_While,
    ACTIONS(52), 1,
      anon_sym_Do,
    ACTIONS(55), 1,
      anon_sym_Sub,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_Function,
    ACTIONS(64), 1,
      anon_sym_Dim,
    ACTIONS(67), 1,
      anon_sym_Private,
    ACTIONS(73), 1,
      anon_sym_Call,
    ACTIONS(76), 1,
      sym_number,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(70), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(82), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(212), 12,
      sym__statement,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_subroutine,
      sym_function,
      sym_variable_declaration,
      sym_ptrsafe_function_declaration,
  [168] = 20,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(88), 1,
      aux_sym__whitespace_token1,
    STATE(27), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(96), 1,
      aux_sym__whitespace,
    STATE(247), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(184), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [245] = 20,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(90), 1,
      aux_sym__whitespace_token1,
    STATE(17), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(100), 1,
      aux_sym__whitespace,
    STATE(271), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(192), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [322] = 20,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    STATE(25), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(177), 1,
      aux_sym__whitespace,
    STATE(219), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(186), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [399] = 20,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(94), 1,
      aux_sym__whitespace_token1,
    STATE(23), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(132), 1,
      aux_sym__whitespace,
    STATE(234), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(185), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [476] = 20,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(96), 1,
      aux_sym__whitespace_token1,
    STATE(18), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(102), 1,
      aux_sym__whitespace,
    STATE(270), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(193), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [553] = 20,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(98), 1,
      aux_sym__whitespace_token1,
    STATE(16), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(76), 1,
      aux_sym__whitespace,
    STATE(211), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(194), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [630] = 20,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(96), 1,
      aux_sym__whitespace_token1,
    STATE(18), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(102), 1,
      aux_sym__whitespace,
    STATE(262), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(193), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [707] = 20,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(90), 1,
      aux_sym__whitespace_token1,
    STATE(17), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(100), 1,
      aux_sym__whitespace,
    STATE(251), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(192), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [784] = 19,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_PLUS,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_Not,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(124), 1,
      aux_sym__whitespace_token1,
    STATE(169), 1,
      sym_argument,
    STATE(188), 1,
      sym_keyword_argument,
    STATE(269), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(142), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    ACTIONS(110), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [859] = 20,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(88), 1,
      aux_sym__whitespace_token1,
    STATE(27), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(96), 1,
      aux_sym__whitespace,
    STATE(223), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(184), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [936] = 20,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(126), 1,
      aux_sym__whitespace_token1,
    STATE(22), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(129), 1,
      aux_sym__whitespace,
    STATE(246), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(198), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1013] = 18,
    ACTIONS(128), 1,
      anon_sym_If,
    ACTIONS(133), 1,
      anon_sym_For,
    ACTIONS(136), 1,
      anon_sym_While,
    ACTIONS(139), 1,
      anon_sym_Do,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_Dim,
    ACTIONS(151), 1,
      anon_sym_Call,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(131), 2,
      anon_sym_Else,
      anon_sym_EndIf,
    ACTIONS(148), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(160), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(194), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1085] = 18,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(166), 2,
      anon_sym_Else,
      anon_sym_EndIf,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(194), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1157] = 18,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_EndFunction,
    STATE(24), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(192), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1228] = 18,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_EndSub,
    STATE(21), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(193), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1299] = 18,
    ACTIONS(128), 1,
      anon_sym_If,
    ACTIONS(131), 1,
      anon_sym_Next,
    ACTIONS(133), 1,
      anon_sym_For,
    ACTIONS(136), 1,
      anon_sym_While,
    ACTIONS(139), 1,
      anon_sym_Do,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_Dim,
    ACTIONS(151), 1,
      anon_sym_Call,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(19), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(148), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(160), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(184), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1370] = 18,
    ACTIONS(128), 1,
      anon_sym_If,
    ACTIONS(131), 1,
      anon_sym_Wend,
    ACTIONS(133), 1,
      anon_sym_For,
    ACTIONS(136), 1,
      anon_sym_While,
    ACTIONS(139), 1,
      anon_sym_Do,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_Dim,
    ACTIONS(151), 1,
      anon_sym_Call,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(148), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(160), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(198), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1441] = 18,
    ACTIONS(128), 1,
      anon_sym_If,
    ACTIONS(131), 1,
      anon_sym_EndSub,
    ACTIONS(133), 1,
      anon_sym_For,
    ACTIONS(136), 1,
      anon_sym_While,
    ACTIONS(139), 1,
      anon_sym_Do,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_Dim,
    ACTIONS(151), 1,
      anon_sym_Call,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(148), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(160), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(193), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1512] = 18,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_Wend,
    STATE(20), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(198), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1583] = 18,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_Loop,
    STATE(28), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(185), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1654] = 18,
    ACTIONS(128), 1,
      anon_sym_If,
    ACTIONS(131), 1,
      anon_sym_EndFunction,
    ACTIONS(133), 1,
      anon_sym_For,
    ACTIONS(136), 1,
      anon_sym_While,
    ACTIONS(139), 1,
      anon_sym_Do,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_Dim,
    ACTIONS(151), 1,
      anon_sym_Call,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(148), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(160), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(192), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1725] = 18,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_EndIf,
    STATE(26), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(186), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1796] = 18,
    ACTIONS(128), 1,
      anon_sym_If,
    ACTIONS(131), 1,
      anon_sym_EndIf,
    ACTIONS(133), 1,
      anon_sym_For,
    ACTIONS(136), 1,
      anon_sym_While,
    ACTIONS(139), 1,
      anon_sym_Do,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_Dim,
    ACTIONS(151), 1,
      anon_sym_Call,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(148), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(160), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(186), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1867] = 18,
    ACTIONS(9), 1,
      anon_sym_If,
    ACTIONS(11), 1,
      anon_sym_For,
    ACTIONS(13), 1,
      anon_sym_While,
    ACTIONS(15), 1,
      anon_sym_Do,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_Dim,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_Next,
    STATE(19), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(184), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1938] = 18,
    ACTIONS(128), 1,
      anon_sym_If,
    ACTIONS(131), 1,
      anon_sym_Loop,
    ACTIONS(133), 1,
      anon_sym_For,
    ACTIONS(136), 1,
      anon_sym_While,
    ACTIONS(139), 1,
      anon_sym_Do,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_Dim,
    ACTIONS(151), 1,
      anon_sym_Call,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(148), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(160), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(12), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(185), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [2009] = 3,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(170), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2042] = 3,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(172), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2075] = 4,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2110] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(174), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2141] = 6,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(104), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(108), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(110), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
    ACTIONS(176), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2180] = 3,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(178), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2213] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2244] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(182), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2275] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(178), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2306] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(184), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2337] = 5,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 20,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2374] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(186), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2405] = 5,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(104), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(108), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 19,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2442] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(188), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2473] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(190), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym__equal,
      aux_sym__whitespace_token1,
  [2504] = 4,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(170), 21,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2538] = 14,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(171), 1,
      sym_argument,
    STATE(191), 1,
      sym_keyword_argument,
    STATE(267), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(141), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [2590] = 14,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_argument,
    STATE(191), 1,
      sym_keyword_argument,
    STATE(221), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(141), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [2642] = 14,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_argument,
    STATE(191), 1,
      sym_keyword_argument,
    STATE(250), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(141), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [2694] = 14,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_argument,
    STATE(191), 1,
      sym_keyword_argument,
    STATE(257), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(141), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [2746] = 14,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_argument,
    STATE(191), 1,
      sym_keyword_argument,
    STATE(258), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(141), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [2798] = 14,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_argument,
    STATE(191), 1,
      sym_keyword_argument,
    STATE(266), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(141), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [2850] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(190), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(220), 18,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_Alias,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [2879] = 5,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      aux_sym__whitespace_token1,
    STATE(53), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(222), 17,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_Sub,
      anon_sym_LPAREN,
      anon_sym_Function,
      anon_sym_Dim,
      anon_sym_Private,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [2912] = 5,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      aux_sym__whitespace_token1,
    STATE(53), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(228), 17,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_Sub,
      anon_sym_LPAREN,
      anon_sym_Function,
      anon_sym_Dim,
      anon_sym_Private,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [2945] = 12,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(191), 1,
      sym_keyword_argument,
    STATE(204), 1,
      sym_argument,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(141), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [2991] = 4,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(233), 16,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3021] = 4,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 16,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3051] = 12,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      sym_identifier,
    STATE(188), 1,
      sym_keyword_argument,
    STATE(213), 1,
      sym_argument,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(112), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(142), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [3097] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 16,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3124] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(184), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 16,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3151] = 4,
    ACTIONS(243), 1,
      anon_sym_Long,
    STATE(217), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(241), 16,
      anon_sym_Any,
      anon_sym_Boolean,
      anon_sym_Byte,
      anon_sym_Collection,
      anon_sym_Currency,
      anon_sym_Date,
      anon_sym_Decimal,
      anon_sym_Dictionary,
      anon_sym_Double,
      anon_sym_Integer,
      anon_sym_LongLong,
      anon_sym_LongPtr,
      anon_sym_Object,
      anon_sym_Single,
      anon_sym_String,
      anon_sym_Variant,
  [3180] = 4,
    ACTIONS(243), 1,
      anon_sym_Long,
    STATE(260), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(241), 16,
      anon_sym_Any,
      anon_sym_Boolean,
      anon_sym_Byte,
      anon_sym_Collection,
      anon_sym_Currency,
      anon_sym_Date,
      anon_sym_Decimal,
      anon_sym_Dictionary,
      anon_sym_Double,
      anon_sym_Integer,
      anon_sym_LongLong,
      anon_sym_LongPtr,
      anon_sym_Object,
      anon_sym_Single,
      anon_sym_String,
      anon_sym_Variant,
  [3209] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(182), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(245), 16,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3236] = 4,
    ACTIONS(233), 1,
      aux_sym__whitespace_token1,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(170), 16,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3265] = 4,
    ACTIONS(251), 1,
      anon_sym_Long,
    STATE(195), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(249), 16,
      anon_sym_Any,
      anon_sym_Boolean,
      anon_sym_Byte,
      anon_sym_Collection,
      anon_sym_Currency,
      anon_sym_Date,
      anon_sym_Decimal,
      anon_sym_Dictionary,
      anon_sym_Double,
      anon_sym_Integer,
      anon_sym_LongLong,
      anon_sym_LongPtr,
      anon_sym_Object,
      anon_sym_Single,
      anon_sym_String,
      anon_sym_Variant,
  [3294] = 7,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(263), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(253), 4,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(261), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3329] = 4,
    ACTIONS(265), 1,
      aux_sym__whitespace_token1,
    STATE(66), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(228), 16,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_EndIf,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3358] = 5,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(233), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3389] = 5,
    ACTIONS(233), 1,
      aux_sym__whitespace_token1,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      anon_sym_COLON_EQ,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(170), 15,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3420] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(272), 16,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3447] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(188), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 16,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3474] = 5,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(172), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(276), 13,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3505] = 4,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(172), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 15,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3534] = 6,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(172), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(276), 11,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3567] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(278), 16,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3594] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(174), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(280), 16,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3621] = 5,
    ACTIONS(265), 1,
      aux_sym__whitespace_token1,
    STATE(66), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(166), 2,
      anon_sym_Else,
      anon_sym_EndIf,
    ACTIONS(228), 14,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3652] = 4,
    ACTIONS(237), 1,
      aux_sym__whitespace_token1,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(178), 16,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3681] = 4,
    ACTIONS(251), 1,
      anon_sym_Long,
    STATE(189), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(249), 16,
      anon_sym_Any,
      anon_sym_Boolean,
      anon_sym_Byte,
      anon_sym_Collection,
      anon_sym_Currency,
      anon_sym_Date,
      anon_sym_Decimal,
      anon_sym_Dictionary,
      anon_sym_Double,
      anon_sym_Integer,
      anon_sym_LongLong,
      anon_sym_LongPtr,
      anon_sym_Object,
      anon_sym_Single,
      anon_sym_String,
      anon_sym_Variant,
  [3710] = 4,
    ACTIONS(282), 1,
      aux_sym__whitespace_token1,
    STATE(66), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(131), 16,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_EndIf,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3739] = 7,
    ACTIONS(253), 1,
      aux_sym__whitespace_token1,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(176), 2,
      anon_sym_Step,
      anon_sym_COMMA,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3773] = 3,
    ACTIONS(280), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(174), 16,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3799] = 10,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(143), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [3839] = 10,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(112), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(150), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [3879] = 10,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(144), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [3919] = 10,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(112), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(139), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [3959] = 10,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(112), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(80), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [3999] = 10,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(65), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4039] = 4,
    ACTIONS(296), 1,
      aux_sym__whitespace_token1,
    STATE(88), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(228), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_Next,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4067] = 10,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(112), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(138), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4107] = 4,
    ACTIONS(299), 1,
      aux_sym__whitespace_token1,
    STATE(90), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(228), 15,
      anon_sym_If,
      anon_sym_EndIf,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4135] = 10,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(149), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4175] = 4,
    ACTIONS(302), 1,
      aux_sym__whitespace_token1,
    STATE(88), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(131), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_Next,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4203] = 4,
    ACTIONS(304), 1,
      aux_sym__whitespace_token1,
    STATE(125), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(131), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_Loop,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4231] = 4,
    ACTIONS(306), 1,
      aux_sym__whitespace_token1,
    STATE(90), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(131), 15,
      anon_sym_If,
      anon_sym_EndIf,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4259] = 4,
    ACTIONS(308), 1,
      aux_sym__whitespace_token1,
    STATE(95), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(228), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_EndFunction,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4287] = 5,
    ACTIONS(166), 1,
      anon_sym_Next,
    ACTIONS(296), 1,
      aux_sym__whitespace_token1,
    STATE(88), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(228), 14,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4317] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(33), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4357] = 4,
    ACTIONS(313), 1,
      aux_sym__whitespace_token1,
    STATE(95), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(131), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_EndFunction,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4385] = 4,
    ACTIONS(315), 1,
      aux_sym__whitespace_token1,
    STATE(99), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(228), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_EndSub,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4413] = 5,
    ACTIONS(166), 1,
      anon_sym_EndFunction,
    ACTIONS(308), 1,
      aux_sym__whitespace_token1,
    STATE(95), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(228), 14,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4443] = 4,
    ACTIONS(318), 1,
      aux_sym__whitespace_token1,
    STATE(99), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(131), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_EndSub,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4471] = 5,
    ACTIONS(166), 1,
      anon_sym_EndSub,
    ACTIONS(315), 1,
      aux_sym__whitespace_token1,
    STATE(99), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(228), 14,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4501] = 3,
    ACTIONS(278), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(186), 16,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4527] = 6,
    ACTIONS(276), 1,
      aux_sym__whitespace_token1,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 11,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4559] = 4,
    ACTIONS(276), 1,
      aux_sym__whitespace_token1,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(172), 15,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4587] = 5,
    ACTIONS(276), 1,
      aux_sym__whitespace_token1,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(288), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 13,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4617] = 3,
    ACTIONS(237), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(178), 16,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4643] = 4,
    ACTIONS(320), 1,
      aux_sym__whitespace_token1,
    STATE(108), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(228), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Wend,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4671] = 3,
    ACTIONS(274), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(188), 16,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4697] = 3,
    ACTIONS(220), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(190), 16,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4723] = 3,
    ACTIONS(272), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 16,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4749] = 10,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(112), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(104), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4789] = 10,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(112), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(105), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4829] = 10,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(112), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(106), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4869] = 10,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(112), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(127), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4909] = 3,
    ACTIONS(239), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(184), 16,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4935] = 10,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(112), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(147), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4975] = 3,
    ACTIONS(245), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(182), 16,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5001] = 4,
    ACTIONS(323), 1,
      aux_sym__whitespace_token1,
    STATE(108), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(131), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Wend,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [5029] = 10,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(140), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5069] = 10,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(112), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(145), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5109] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(31), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5149] = 10,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(112), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(151), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5189] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(39), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5229] = 4,
    ACTIONS(325), 1,
      aux_sym__whitespace_token1,
    STATE(125), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(228), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_Loop,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [5257] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(30), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5297] = 8,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_Step,
    ACTIONS(330), 1,
      aux_sym__whitespace_token1,
    STATE(4), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5333] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(35), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(36), 2,
      sym_string_literal,
      sym_boolean,
    STATE(41), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5373] = 5,
    ACTIONS(166), 1,
      anon_sym_Wend,
    ACTIONS(320), 1,
      aux_sym__whitespace_token1,
    STATE(108), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(228), 14,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [5403] = 10,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(73), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5443] = 10,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(72), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5483] = 5,
    ACTIONS(166), 1,
      anon_sym_Loop,
    ACTIONS(325), 1,
      aux_sym__whitespace_token1,
    STATE(125), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(228), 14,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [5513] = 10,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(71), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5553] = 10,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(146), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5593] = 10,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(206), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(62), 2,
      sym_string_literal,
      sym_boolean,
    STATE(148), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5633] = 10,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(112), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(120), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(118), 2,
      sym_string_literal,
      sym_boolean,
    STATE(137), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5673] = 7,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      aux_sym__whitespace_token1,
    STATE(13), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5706] = 7,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5739] = 7,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(338), 1,
      aux_sym__whitespace_token1,
    STATE(14), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5772] = 7,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(263), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(261), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5805] = 7,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(263), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(261), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5838] = 7,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(340), 1,
      aux_sym__whitespace_token1,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5871] = 7,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(263), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(261), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5903] = 7,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(263), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(261), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5935] = 6,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(348), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5965] = 7,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_To,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(263), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(261), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5997] = 6,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6027] = 7,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(354), 1,
      anon_sym_Then,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(263), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(261), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6059] = 7,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(257), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(263), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(261), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6091] = 6,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6121] = 6,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(286), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(288), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6151] = 8,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(168), 1,
      sym_new_identifier,
    STATE(170), 1,
      sym_parameter,
    STATE(209), 1,
      sym_modifier,
    STATE(244), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(364), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [6180] = 8,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      sym_new_identifier,
    STATE(170), 1,
      sym_parameter,
    STATE(209), 1,
      sym_modifier,
    STATE(226), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(364), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [6209] = 8,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      sym_new_identifier,
    STATE(170), 1,
      sym_parameter,
    STATE(209), 1,
      sym_modifier,
    STATE(238), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(364), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [6238] = 8,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      sym_new_identifier,
    STATE(170), 1,
      sym_parameter,
    STATE(209), 1,
      sym_modifier,
    STATE(229), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(364), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [6267] = 6,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(168), 1,
      sym_new_identifier,
    STATE(190), 1,
      sym_parameter,
    STATE(209), 1,
      sym_modifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(364), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [6290] = 7,
    ACTIONS(374), 1,
      anon_sym_As,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      sym__equal,
    ACTIONS(380), 1,
      aux_sym__whitespace_token1,
    STATE(158), 1,
      aux_sym_variable_list_repeat1,
    STATE(272), 1,
      sym_type_definition,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6313] = 6,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_As,
    ACTIONS(384), 1,
      aux_sym__whitespace_token1,
    STATE(161), 1,
      aux_sym_variable_list_repeat1,
    STATE(224), 1,
      sym_type_definition,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6333] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(386), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_As,
      anon_sym_COMMA,
      anon_sym_Lib,
  [6345] = 4,
    ACTIONS(388), 1,
      sym_identifier,
    STATE(157), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(242), 2,
      sym__variable_declaration_assignment,
      sym_variable_list,
  [6360] = 5,
    ACTIONS(390), 1,
      anon_sym_As,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      aux_sym__whitespace_token1,
    STATE(161), 1,
      aux_sym_variable_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6377] = 3,
    ACTIONS(386), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(397), 3,
      anon_sym_As,
      anon_sym_COMMA,
      sym__equal,
  [6390] = 4,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      aux_sym__whitespace_token1,
    STATE(164), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6404] = 4,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      aux_sym__whitespace_token1,
    STATE(164), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6418] = 4,
    ACTIONS(114), 1,
      anon_sym_Call,
    ACTIONS(408), 1,
      sym_identifier,
    STATE(107), 1,
      sym_function_call,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6432] = 4,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6446] = 3,
    ACTIONS(395), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(390), 2,
      anon_sym_As,
      anon_sym_COMMA,
  [6458] = 3,
    ACTIONS(415), 1,
      anon_sym_As,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(413), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6470] = 4,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      aux_sym__whitespace_token1,
    STATE(163), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6484] = 4,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6498] = 4,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6512] = 4,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6526] = 4,
    ACTIONS(228), 1,
      anon_sym_EndIf,
    ACTIONS(427), 1,
      aux_sym__whitespace_token1,
    STATE(173), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6540] = 4,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(37), 1,
      sym_function_call,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6554] = 4,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6568] = 4,
    ACTIONS(200), 1,
      anon_sym_Call,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(58), 1,
      sym_function_call,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6582] = 4,
    ACTIONS(166), 1,
      anon_sym_EndIf,
    ACTIONS(434), 1,
      aux_sym__whitespace_token1,
    STATE(173), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6596] = 3,
    ACTIONS(438), 1,
      anon_sym_As,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(436), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6608] = 4,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6622] = 3,
    ACTIONS(445), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6633] = 3,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(264), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6644] = 3,
    ACTIONS(388), 1,
      sym_identifier,
    STATE(167), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6655] = 3,
    ACTIONS(449), 1,
      anon_sym_As,
    STATE(275), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6666] = 3,
    ACTIONS(451), 1,
      aux_sym__whitespace_token1,
    STATE(92), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6677] = 3,
    ACTIONS(453), 1,
      aux_sym__whitespace_token1,
    STATE(93), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6688] = 3,
    ACTIONS(455), 1,
      aux_sym__whitespace_token1,
    STATE(94), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6699] = 3,
    ACTIONS(457), 1,
      aux_sym__whitespace_token1,
    STATE(9), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6710] = 3,
    ACTIONS(340), 1,
      aux_sym__whitespace_token1,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6721] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(459), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6730] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(440), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6739] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(340), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6748] = 3,
    ACTIONS(461), 1,
      aux_sym__whitespace_token1,
    STATE(98), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6759] = 3,
    ACTIONS(463), 1,
      aux_sym__whitespace_token1,
    STATE(101), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6770] = 3,
    ACTIONS(465), 1,
      aux_sym__whitespace_token1,
    STATE(79), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6781] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(467), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6790] = 3,
    ACTIONS(469), 1,
      aux_sym__whitespace_token1,
    STATE(7), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6801] = 3,
    ACTIONS(471), 1,
      aux_sym__whitespace_token1,
    STATE(11), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6812] = 3,
    ACTIONS(473), 1,
      aux_sym__whitespace_token1,
    STATE(119), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6823] = 3,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(249), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6834] = 3,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      anon_sym_Alias,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6845] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(479), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6854] = 3,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(237), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6865] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(481), 2,
      anon_sym_While,
      anon_sym_Until,
  [6874] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(406), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6883] = 3,
    ACTIONS(449), 1,
      anon_sym_As,
    STATE(230), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6894] = 3,
    ACTIONS(483), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6905] = 3,
    ACTIONS(485), 1,
      aux_sym__whitespace_token1,
    STATE(10), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6916] = 3,
    ACTIONS(483), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6927] = 3,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(178), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6938] = 3,
    ACTIONS(487), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6949] = 3,
    ACTIONS(489), 1,
      anon_sym_Else,
    ACTIONS(491), 1,
      anon_sym_EndIf,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6960] = 3,
    ACTIONS(493), 1,
      aux_sym__whitespace_token1,
    STATE(52), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6971] = 3,
    ACTIONS(406), 1,
      aux_sym__whitespace_token1,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6982] = 3,
    ACTIONS(479), 1,
      aux_sym__whitespace_token1,
    ACTIONS(497), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6993] = 3,
    ACTIONS(449), 1,
      anon_sym_As,
    STATE(236), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7004] = 3,
    ACTIONS(449), 1,
      anon_sym_As,
    STATE(220), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7015] = 3,
    ACTIONS(499), 1,
      sym__equal,
    ACTIONS(501), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7026] = 2,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7034] = 2,
    ACTIONS(505), 1,
      anon_sym_EndIf,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7042] = 2,
    ACTIONS(507), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7050] = 2,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7058] = 2,
    ACTIONS(511), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7066] = 2,
    ACTIONS(513), 1,
      anon_sym_Next,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7074] = 2,
    ACTIONS(515), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7082] = 2,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7090] = 2,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7098] = 2,
    ACTIONS(521), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7106] = 2,
    ACTIONS(523), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7114] = 2,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7122] = 2,
    ACTIONS(527), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7130] = 2,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7138] = 2,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7146] = 2,
    ACTIONS(533), 1,
      aux_sym_string_literal_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7154] = 2,
    ACTIONS(535), 1,
      anon_sym_Loop,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7162] = 2,
    ACTIONS(537), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7170] = 2,
    ACTIONS(539), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7178] = 2,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7186] = 2,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7194] = 2,
    ACTIONS(545), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7202] = 2,
    ACTIONS(547), 1,
      anon_sym_Declare,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7210] = 2,
    ACTIONS(549), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7218] = 2,
    ACTIONS(551), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7226] = 2,
    ACTIONS(553), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7234] = 2,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7242] = 2,
    ACTIONS(557), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7250] = 2,
    ACTIONS(559), 1,
      anon_sym_Wend,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7258] = 2,
    ACTIONS(561), 1,
      anon_sym_Next,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7266] = 2,
    ACTIONS(563), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7274] = 2,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7282] = 2,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7290] = 2,
    ACTIONS(569), 1,
      anon_sym_EndFunction,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7298] = 2,
    ACTIONS(571), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7306] = 2,
    ACTIONS(573), 1,
      anon_sym_PtrSafe,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7314] = 2,
    ACTIONS(575), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7322] = 2,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7330] = 2,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7338] = 2,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7346] = 2,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7354] = 2,
    ACTIONS(585), 1,
      anon_sym_Function,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7362] = 2,
    ACTIONS(501), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7370] = 2,
    ACTIONS(587), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7378] = 2,
    ACTIONS(589), 1,
      anon_sym_EndSub,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7386] = 2,
    ACTIONS(591), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7394] = 2,
    ACTIONS(593), 1,
      anon_sym_Lib,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7402] = 2,
    ACTIONS(595), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7410] = 2,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7418] = 2,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7426] = 2,
    ACTIONS(601), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7434] = 2,
    ACTIONS(603), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7442] = 2,
    ACTIONS(605), 1,
      anon_sym_EndSub,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7450] = 2,
    ACTIONS(607), 1,
      anon_sym_EndFunction,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7458] = 2,
    ACTIONS(384), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7466] = 2,
    ACTIONS(609), 1,
      aux_sym_string_literal_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7474] = 2,
    ACTIONS(611), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7482] = 2,
    ACTIONS(613), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7490] = 2,
    ACTIONS(615), 1,
      aux_sym_string_literal_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7498] = 2,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7506] = 2,
    ACTIONS(619), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7514] = 2,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 84,
  [SMALL_STATE(4)] = 168,
  [SMALL_STATE(5)] = 245,
  [SMALL_STATE(6)] = 322,
  [SMALL_STATE(7)] = 399,
  [SMALL_STATE(8)] = 476,
  [SMALL_STATE(9)] = 553,
  [SMALL_STATE(10)] = 630,
  [SMALL_STATE(11)] = 707,
  [SMALL_STATE(12)] = 784,
  [SMALL_STATE(13)] = 859,
  [SMALL_STATE(14)] = 936,
  [SMALL_STATE(15)] = 1013,
  [SMALL_STATE(16)] = 1085,
  [SMALL_STATE(17)] = 1157,
  [SMALL_STATE(18)] = 1228,
  [SMALL_STATE(19)] = 1299,
  [SMALL_STATE(20)] = 1370,
  [SMALL_STATE(21)] = 1441,
  [SMALL_STATE(22)] = 1512,
  [SMALL_STATE(23)] = 1583,
  [SMALL_STATE(24)] = 1654,
  [SMALL_STATE(25)] = 1725,
  [SMALL_STATE(26)] = 1796,
  [SMALL_STATE(27)] = 1867,
  [SMALL_STATE(28)] = 1938,
  [SMALL_STATE(29)] = 2009,
  [SMALL_STATE(30)] = 2042,
  [SMALL_STATE(31)] = 2075,
  [SMALL_STATE(32)] = 2110,
  [SMALL_STATE(33)] = 2141,
  [SMALL_STATE(34)] = 2180,
  [SMALL_STATE(35)] = 2213,
  [SMALL_STATE(36)] = 2244,
  [SMALL_STATE(37)] = 2275,
  [SMALL_STATE(38)] = 2306,
  [SMALL_STATE(39)] = 2337,
  [SMALL_STATE(40)] = 2374,
  [SMALL_STATE(41)] = 2405,
  [SMALL_STATE(42)] = 2442,
  [SMALL_STATE(43)] = 2473,
  [SMALL_STATE(44)] = 2504,
  [SMALL_STATE(45)] = 2538,
  [SMALL_STATE(46)] = 2590,
  [SMALL_STATE(47)] = 2642,
  [SMALL_STATE(48)] = 2694,
  [SMALL_STATE(49)] = 2746,
  [SMALL_STATE(50)] = 2798,
  [SMALL_STATE(51)] = 2850,
  [SMALL_STATE(52)] = 2879,
  [SMALL_STATE(53)] = 2912,
  [SMALL_STATE(54)] = 2945,
  [SMALL_STATE(55)] = 2991,
  [SMALL_STATE(56)] = 3021,
  [SMALL_STATE(57)] = 3051,
  [SMALL_STATE(58)] = 3097,
  [SMALL_STATE(59)] = 3124,
  [SMALL_STATE(60)] = 3151,
  [SMALL_STATE(61)] = 3180,
  [SMALL_STATE(62)] = 3209,
  [SMALL_STATE(63)] = 3236,
  [SMALL_STATE(64)] = 3265,
  [SMALL_STATE(65)] = 3294,
  [SMALL_STATE(66)] = 3329,
  [SMALL_STATE(67)] = 3358,
  [SMALL_STATE(68)] = 3389,
  [SMALL_STATE(69)] = 3420,
  [SMALL_STATE(70)] = 3447,
  [SMALL_STATE(71)] = 3474,
  [SMALL_STATE(72)] = 3505,
  [SMALL_STATE(73)] = 3534,
  [SMALL_STATE(74)] = 3567,
  [SMALL_STATE(75)] = 3594,
  [SMALL_STATE(76)] = 3621,
  [SMALL_STATE(77)] = 3652,
  [SMALL_STATE(78)] = 3681,
  [SMALL_STATE(79)] = 3710,
  [SMALL_STATE(80)] = 3739,
  [SMALL_STATE(81)] = 3773,
  [SMALL_STATE(82)] = 3799,
  [SMALL_STATE(83)] = 3839,
  [SMALL_STATE(84)] = 3879,
  [SMALL_STATE(85)] = 3919,
  [SMALL_STATE(86)] = 3959,
  [SMALL_STATE(87)] = 3999,
  [SMALL_STATE(88)] = 4039,
  [SMALL_STATE(89)] = 4067,
  [SMALL_STATE(90)] = 4107,
  [SMALL_STATE(91)] = 4135,
  [SMALL_STATE(92)] = 4175,
  [SMALL_STATE(93)] = 4203,
  [SMALL_STATE(94)] = 4231,
  [SMALL_STATE(95)] = 4259,
  [SMALL_STATE(96)] = 4287,
  [SMALL_STATE(97)] = 4317,
  [SMALL_STATE(98)] = 4357,
  [SMALL_STATE(99)] = 4385,
  [SMALL_STATE(100)] = 4413,
  [SMALL_STATE(101)] = 4443,
  [SMALL_STATE(102)] = 4471,
  [SMALL_STATE(103)] = 4501,
  [SMALL_STATE(104)] = 4527,
  [SMALL_STATE(105)] = 4559,
  [SMALL_STATE(106)] = 4587,
  [SMALL_STATE(107)] = 4617,
  [SMALL_STATE(108)] = 4643,
  [SMALL_STATE(109)] = 4671,
  [SMALL_STATE(110)] = 4697,
  [SMALL_STATE(111)] = 4723,
  [SMALL_STATE(112)] = 4749,
  [SMALL_STATE(113)] = 4789,
  [SMALL_STATE(114)] = 4829,
  [SMALL_STATE(115)] = 4869,
  [SMALL_STATE(116)] = 4909,
  [SMALL_STATE(117)] = 4935,
  [SMALL_STATE(118)] = 4975,
  [SMALL_STATE(119)] = 5001,
  [SMALL_STATE(120)] = 5029,
  [SMALL_STATE(121)] = 5069,
  [SMALL_STATE(122)] = 5109,
  [SMALL_STATE(123)] = 5149,
  [SMALL_STATE(124)] = 5189,
  [SMALL_STATE(125)] = 5229,
  [SMALL_STATE(126)] = 5257,
  [SMALL_STATE(127)] = 5297,
  [SMALL_STATE(128)] = 5333,
  [SMALL_STATE(129)] = 5373,
  [SMALL_STATE(130)] = 5403,
  [SMALL_STATE(131)] = 5443,
  [SMALL_STATE(132)] = 5483,
  [SMALL_STATE(133)] = 5513,
  [SMALL_STATE(134)] = 5553,
  [SMALL_STATE(135)] = 5593,
  [SMALL_STATE(136)] = 5633,
  [SMALL_STATE(137)] = 5673,
  [SMALL_STATE(138)] = 5706,
  [SMALL_STATE(139)] = 5739,
  [SMALL_STATE(140)] = 5772,
  [SMALL_STATE(141)] = 5805,
  [SMALL_STATE(142)] = 5838,
  [SMALL_STATE(143)] = 5871,
  [SMALL_STATE(144)] = 5903,
  [SMALL_STATE(145)] = 5935,
  [SMALL_STATE(146)] = 5965,
  [SMALL_STATE(147)] = 5997,
  [SMALL_STATE(148)] = 6027,
  [SMALL_STATE(149)] = 6059,
  [SMALL_STATE(150)] = 6091,
  [SMALL_STATE(151)] = 6121,
  [SMALL_STATE(152)] = 6151,
  [SMALL_STATE(153)] = 6180,
  [SMALL_STATE(154)] = 6209,
  [SMALL_STATE(155)] = 6238,
  [SMALL_STATE(156)] = 6267,
  [SMALL_STATE(157)] = 6290,
  [SMALL_STATE(158)] = 6313,
  [SMALL_STATE(159)] = 6333,
  [SMALL_STATE(160)] = 6345,
  [SMALL_STATE(161)] = 6360,
  [SMALL_STATE(162)] = 6377,
  [SMALL_STATE(163)] = 6390,
  [SMALL_STATE(164)] = 6404,
  [SMALL_STATE(165)] = 6418,
  [SMALL_STATE(166)] = 6432,
  [SMALL_STATE(167)] = 6446,
  [SMALL_STATE(168)] = 6458,
  [SMALL_STATE(169)] = 6470,
  [SMALL_STATE(170)] = 6484,
  [SMALL_STATE(171)] = 6498,
  [SMALL_STATE(172)] = 6512,
  [SMALL_STATE(173)] = 6526,
  [SMALL_STATE(174)] = 6540,
  [SMALL_STATE(175)] = 6554,
  [SMALL_STATE(176)] = 6568,
  [SMALL_STATE(177)] = 6582,
  [SMALL_STATE(178)] = 6596,
  [SMALL_STATE(179)] = 6608,
  [SMALL_STATE(180)] = 6622,
  [SMALL_STATE(181)] = 6633,
  [SMALL_STATE(182)] = 6644,
  [SMALL_STATE(183)] = 6655,
  [SMALL_STATE(184)] = 6666,
  [SMALL_STATE(185)] = 6677,
  [SMALL_STATE(186)] = 6688,
  [SMALL_STATE(187)] = 6699,
  [SMALL_STATE(188)] = 6710,
  [SMALL_STATE(189)] = 6721,
  [SMALL_STATE(190)] = 6730,
  [SMALL_STATE(191)] = 6739,
  [SMALL_STATE(192)] = 6748,
  [SMALL_STATE(193)] = 6759,
  [SMALL_STATE(194)] = 6770,
  [SMALL_STATE(195)] = 6781,
  [SMALL_STATE(196)] = 6790,
  [SMALL_STATE(197)] = 6801,
  [SMALL_STATE(198)] = 6812,
  [SMALL_STATE(199)] = 6823,
  [SMALL_STATE(200)] = 6834,
  [SMALL_STATE(201)] = 6845,
  [SMALL_STATE(202)] = 6854,
  [SMALL_STATE(203)] = 6865,
  [SMALL_STATE(204)] = 6874,
  [SMALL_STATE(205)] = 6883,
  [SMALL_STATE(206)] = 6894,
  [SMALL_STATE(207)] = 6905,
  [SMALL_STATE(208)] = 6916,
  [SMALL_STATE(209)] = 6927,
  [SMALL_STATE(210)] = 6938,
  [SMALL_STATE(211)] = 6949,
  [SMALL_STATE(212)] = 6960,
  [SMALL_STATE(213)] = 6971,
  [SMALL_STATE(214)] = 6982,
  [SMALL_STATE(215)] = 6993,
  [SMALL_STATE(216)] = 7004,
  [SMALL_STATE(217)] = 7015,
  [SMALL_STATE(218)] = 7026,
  [SMALL_STATE(219)] = 7034,
  [SMALL_STATE(220)] = 7042,
  [SMALL_STATE(221)] = 7050,
  [SMALL_STATE(222)] = 7058,
  [SMALL_STATE(223)] = 7066,
  [SMALL_STATE(224)] = 7074,
  [SMALL_STATE(225)] = 7082,
  [SMALL_STATE(226)] = 7090,
  [SMALL_STATE(227)] = 7098,
  [SMALL_STATE(228)] = 7106,
  [SMALL_STATE(229)] = 7114,
  [SMALL_STATE(230)] = 7122,
  [SMALL_STATE(231)] = 7130,
  [SMALL_STATE(232)] = 7138,
  [SMALL_STATE(233)] = 7146,
  [SMALL_STATE(234)] = 7154,
  [SMALL_STATE(235)] = 7162,
  [SMALL_STATE(236)] = 7170,
  [SMALL_STATE(237)] = 7178,
  [SMALL_STATE(238)] = 7186,
  [SMALL_STATE(239)] = 7194,
  [SMALL_STATE(240)] = 7202,
  [SMALL_STATE(241)] = 7210,
  [SMALL_STATE(242)] = 7218,
  [SMALL_STATE(243)] = 7226,
  [SMALL_STATE(244)] = 7234,
  [SMALL_STATE(245)] = 7242,
  [SMALL_STATE(246)] = 7250,
  [SMALL_STATE(247)] = 7258,
  [SMALL_STATE(248)] = 7266,
  [SMALL_STATE(249)] = 7274,
  [SMALL_STATE(250)] = 7282,
  [SMALL_STATE(251)] = 7290,
  [SMALL_STATE(252)] = 7298,
  [SMALL_STATE(253)] = 7306,
  [SMALL_STATE(254)] = 7314,
  [SMALL_STATE(255)] = 7322,
  [SMALL_STATE(256)] = 7330,
  [SMALL_STATE(257)] = 7338,
  [SMALL_STATE(258)] = 7346,
  [SMALL_STATE(259)] = 7354,
  [SMALL_STATE(260)] = 7362,
  [SMALL_STATE(261)] = 7370,
  [SMALL_STATE(262)] = 7378,
  [SMALL_STATE(263)] = 7386,
  [SMALL_STATE(264)] = 7394,
  [SMALL_STATE(265)] = 7402,
  [SMALL_STATE(266)] = 7410,
  [SMALL_STATE(267)] = 7418,
  [SMALL_STATE(268)] = 7426,
  [SMALL_STATE(269)] = 7434,
  [SMALL_STATE(270)] = 7442,
  [SMALL_STATE(271)] = 7450,
  [SMALL_STATE(272)] = 7458,
  [SMALL_STATE(273)] = 7466,
  [SMALL_STATE(274)] = 7474,
  [SMALL_STATE(275)] = 7482,
  [SMALL_STATE(276)] = 7490,
  [SMALL_STATE(277)] = 7498,
  [SMALL_STATE(278)] = 7506,
  [SMALL_STATE(279)] = 7514,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation_statement, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_statement_block, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(53),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(66),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(88),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(90),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(95),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(99),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(108),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(125),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_argument, 3, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_argument, 3, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 6, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declaration_assignment, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declaration_assignment, 5, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 2, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_identifier, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_identifier, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(173),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 2, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 10, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 10, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 3, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 12, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 12, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 11, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 8, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 7, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation_statement, 2, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 13, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
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
