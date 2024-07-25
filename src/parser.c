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
#define STATE_COUNT 274
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
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
  anon_sym_LoopUntil = 13,
  anon_sym_Sub = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_EndSub = 17,
  anon_sym_Function = 18,
  anon_sym_EndFunction = 19,
  anon_sym_Dim = 20,
  anon_sym_As = 21,
  anon_sym_COMMA = 22,
  anon_sym_Private = 23,
  anon_sym_Declare = 24,
  anon_sym_PtrSafe = 25,
  anon_sym_Lib = 26,
  anon_sym_Alias = 27,
  anon_sym_ByVal = 28,
  anon_sym_ByRef = 29,
  anon_sym_Optional = 30,
  anon_sym_ParamArray = 31,
  anon_sym_Any = 32,
  anon_sym_Boolean = 33,
  anon_sym_Byte = 34,
  anon_sym_Collection = 35,
  anon_sym_Currency = 36,
  anon_sym_Date = 37,
  anon_sym_Decimal = 38,
  anon_sym_Dictionary = 39,
  anon_sym_Double = 40,
  anon_sym_Integer = 41,
  anon_sym_Long = 42,
  anon_sym_LongLong = 43,
  anon_sym_LongPtr = 44,
  anon_sym_Object = 45,
  anon_sym_Single = 46,
  anon_sym_String = 47,
  anon_sym_Variant = 48,
  anon_sym_DOT = 49,
  anon_sym_PLUS = 50,
  anon_sym_DASH = 51,
  anon_sym_STAR = 52,
  anon_sym_SLASH = 53,
  anon_sym_AMP = 54,
  anon_sym_and = 55,
  anon_sym_or = 56,
  anon_sym_LT_GT = 57,
  anon_sym_LT = 58,
  anon_sym_GT = 59,
  anon_sym_LT_EQ = 60,
  anon_sym_GT_EQ = 61,
  anon_sym_Not = 62,
  anon_sym_Call = 63,
  anon_sym_COLON_EQ = 64,
  sym_number = 65,
  anon_sym_DQUOTE = 66,
  aux_sym_string_token1 = 67,
  anon_sym_True = 68,
  anon_sym_False = 69,
  sym_identifier = 70,
  sym__equal = 71,
  aux_sym__whitespace_token1 = 72,
  sym__horizontal_whitespace = 73,
  sym_source_file = 74,
  sym__statement = 75,
  sym__inline_statement = 76,
  sym_variable_assignment = 77,
  sym__inline_statement_block = 78,
  sym_invocation_statement = 79,
  sym_if_statement = 80,
  sym_for_statement = 81,
  sym_while_statement = 82,
  sym_do_statement = 83,
  sym_subroutine = 84,
  sym_function = 85,
  sym_variable_declaration = 86,
  sym__variable_declaration_assignment = 87,
  sym_type_definition = 88,
  sym_variable_list = 89,
  sym_ptrsafe_function_declaration = 90,
  sym_parameter_list = 91,
  sym_parameter = 92,
  sym_modifier = 93,
  sym_type = 94,
  sym__expression = 95,
  sym_member_expression = 96,
  sym_binary_expression = 97,
  sym_unary_expression = 98,
  sym_function_call = 99,
  sym_argument_list = 100,
  sym_argument = 101,
  sym_keyword_argument = 102,
  sym_literal = 103,
  sym_string = 104,
  sym_boolean = 105,
  aux_sym__whitespace = 106,
  aux_sym_source_file_repeat1 = 107,
  aux_sym__inline_statement_block_repeat1 = 108,
  aux_sym_variable_list_repeat1 = 109,
  aux_sym_parameter_list_repeat1 = 110,
  aux_sym_argument_list_repeat1 = 111,
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
  [anon_sym_LoopUntil] = "Loop Until",
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
  [aux_sym_string_token1] = "string_token1",
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
  [sym_string] = "string",
  [sym_boolean] = "boolean",
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
  [anon_sym_LoopUntil] = anon_sym_LoopUntil,
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
  [aux_sym_string_token1] = aux_sym_string_token1,
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
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
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
  [anon_sym_LoopUntil] = {
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
  [aux_sym_string_token1] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [17] = 15,
  [18] = 15,
  [19] = 16,
  [20] = 16,
  [21] = 16,
  [22] = 15,
  [23] = 15,
  [24] = 15,
  [25] = 16,
  [26] = 16,
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
  [51] = 51,
  [52] = 52,
  [53] = 36,
  [54] = 29,
  [55] = 55,
  [56] = 42,
  [57] = 55,
  [58] = 58,
  [59] = 59,
  [60] = 31,
  [61] = 34,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 32,
  [67] = 33,
  [68] = 29,
  [69] = 69,
  [70] = 51,
  [71] = 35,
  [72] = 30,
  [73] = 69,
  [74] = 39,
  [75] = 41,
  [76] = 43,
  [77] = 37,
  [78] = 38,
  [79] = 42,
  [80] = 62,
  [81] = 64,
  [82] = 51,
  [83] = 62,
  [84] = 84,
  [85] = 85,
  [86] = 37,
  [87] = 36,
  [88] = 32,
  [89] = 89,
  [90] = 41,
  [91] = 91,
  [92] = 39,
  [93] = 93,
  [94] = 94,
  [95] = 34,
  [96] = 35,
  [97] = 38,
  [98] = 98,
  [99] = 30,
  [100] = 33,
  [101] = 31,
  [102] = 64,
  [103] = 64,
  [104] = 62,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 85,
  [110] = 62,
  [111] = 43,
  [112] = 106,
  [113] = 91,
  [114] = 93,
  [115] = 115,
  [116] = 94,
  [117] = 51,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 51,
  [122] = 62,
  [123] = 51,
  [124] = 106,
  [125] = 62,
  [126] = 126,
  [127] = 64,
  [128] = 128,
  [129] = 51,
  [130] = 51,
  [131] = 91,
  [132] = 128,
  [133] = 93,
  [134] = 94,
  [135] = 128,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 136,
  [140] = 140,
  [141] = 140,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 146,
  [148] = 148,
  [149] = 146,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 51,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 163,
  [168] = 164,
  [169] = 169,
  [170] = 170,
  [171] = 169,
  [172] = 164,
  [173] = 173,
  [174] = 162,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 181,
  [183] = 183,
  [184] = 181,
  [185] = 181,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 181,
  [190] = 179,
  [191] = 181,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 181,
  [199] = 197,
  [200] = 200,
  [201] = 196,
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
  [213] = 213,
  [214] = 214,
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
  [246] = 233,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 218,
  [252] = 214,
  [253] = 253,
  [254] = 254,
  [255] = 233,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 218,
  [261] = 214,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 247,
  [268] = 234,
  [269] = 269,
  [270] = 247,
  [271] = 234,
  [272] = 250,
  [273] = 250,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(224);
      ADVANCE_MAP(
        '"', 311,
        '&', 294,
        '\'', 226,
        '(', 248,
        ')', 249,
        '*', 292,
        '+', 290,
        ',', 257,
        '-', 291,
        '.', 289,
        '/', 293,
        ':', 28,
        '<', 300,
        '=', 426,
        '>', 301,
        'A', 125,
        'B', 164,
        'C', 38,
        'D', 39,
        'E', 126,
        'F', 41,
        'I', 98,
        'L', 108,
        'N', 75,
        'O', 57,
        'P', 45,
        'S', 114,
        'T', 107,
        'V', 48,
        'W', 93,
      );
      if (lookahead == '_') SKIP(221);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 311,
        '&', 294,
        '\'', 226,
        '(', 248,
        '*', 292,
        '+', 290,
        ',', 257,
        '-', 291,
        '.', 289,
        '/', 293,
        '<', 300,
        '=', 426,
        '>', 301,
        'C', 348,
        'F', 351,
        'N', 398,
        'T', 408,
        '_', 343,
        'a', 392,
        'o', 407,
        '\t', 439,
        ' ', 439,
        '\n', 427,
        '\r', 427,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        ')', 249,
        '-', 291,
        'C', 348,
        'F', 351,
        'N', 398,
        'T', 408,
        '_', 344,
        '\t', 439,
        ' ', 439,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'E', 387,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 326,
        '\t', 439,
        ' ', 439,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'E', 387,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 327,
        '\t', 439,
        ' ', 439,
        '\n', 427,
        '\r', 427,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'E', 394,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 328,
        '\t', 439,
        ' ', 439,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'E', 394,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 329,
        '\t', 439,
        ' ', 439,
        '\n', 427,
        '\r', 427,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'E', 396,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 330,
        '\t', 439,
        ' ', 439,
        '\n', 427,
        '\r', 427,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'E', 396,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 331,
        '\t', 439,
        ' ', 439,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'E', 393,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 332,
        '\t', 439,
        ' ', 439,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'E', 393,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 333,
        '\t', 439,
        ' ', 439,
        '\n', 427,
        '\r', 427,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'L', 401,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 336,
        '\t', 439,
        ' ', 439,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'L', 401,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 337,
        '\t', 439,
        ' ', 439,
        '\n', 427,
        '\r', 427,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 338,
        '\t', 439,
        ' ', 439,
        '\n', 427,
        '\r', 427,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 372,
        '_', 339,
        '\t', 439,
        ' ', 439,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 372,
        '_', 340,
        '\t', 439,
        ' ', 439,
        '\n', 427,
        '\r', 427,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'N', 370,
        'T', 408,
        'W', 375,
        '_', 341,
        '\t', 439,
        ' ', 439,
        '\n', 427,
        '\r', 427,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'N', 370,
        'T', 408,
        'W', 375,
        '_', 342,
        '\t', 439,
        ' ', 439,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '&', 294,
        '\'', 226,
        '(', 248,
        '*', 292,
        '+', 290,
        ',', 257,
        '-', 291,
        '.', 289,
        '/', 293,
        ':', 28,
        '<', 300,
        '=', 426,
        '>', 301,
        'A', 191,
        'E', 160,
        'S', 205,
      );
      if (lookahead == '_') SKIP(22);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(439);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(427);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '&', 294,
        '\'', 226,
        '(', 248,
        '*', 292,
        '+', 290,
        ',', 257,
        '-', 291,
        '.', 289,
        '/', 293,
        ':', 28,
        '<', 300,
        '=', 426,
        '>', 301,
        'A', 191,
        'E', 160,
        'S', 205,
      );
      if (lookahead == '_') SKIP(22);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(439);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(438);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\'', 226,
        ')', 249,
        'B', 423,
        'O', 404,
        'P', 355,
        '_', 325,
        '\t', 439,
        ' ', 439,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\'', 226,
        'A', 142,
        'B', 165,
        'C', 174,
        'D', 40,
        'I', 159,
        'L', 173,
        'O', 56,
        'S', 115,
        'V', 48,
      );
      if (lookahead == '_') SKIP(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(439);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '\'', 226,
        'A', 142,
        'B', 165,
        'C', 174,
        'D', 40,
        'I', 159,
        'L', 173,
        'O', 56,
        'S', 115,
        'V', 48,
      );
      if (lookahead == '_') SKIP(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(439);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == 'C') ADVANCE(348);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(439);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 27:
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '_') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(439);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(308);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(187);
      END_STATE();
    case 30:
      if (lookahead == 'F') ADVANCE(214);
      END_STATE();
    case 31:
      if (lookahead == 'F') ADVANCE(214);
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 32:
      if (lookahead == 'F') ADVANCE(214);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(212);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(76);
      if (lookahead == 'V') ADVANCE(47);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(212);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'U') ADVANCE(158);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(262);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(246);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(250);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(135);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == 'm') ADVANCE(254);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(266);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(232);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(282);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(287);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(283);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 124:
      if (lookahead == 'j') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == 'y') ADVANCE(199);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(2);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 215:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 216:
      if (lookahead == 'x') ADVANCE(196);
      END_STATE();
    case 217:
      if (lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 218:
      if (lookahead == 'y') ADVANCE(276);
      END_STATE();
    case 219:
      if (lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 220:
      if (lookahead == 'y') ADVANCE(270);
      END_STATE();
    case 221:
      if (eof) ADVANCE(224);
      ADVANCE_MAP(
        '"', 311,
        '&', 294,
        '\'', 226,
        '(', 248,
        ')', 249,
        '*', 292,
        '+', 290,
        ',', 257,
        '-', 291,
        '.', 289,
        '/', 293,
        ':', 28,
        '<', 300,
        '=', 426,
        '>', 301,
        'A', 125,
        'B', 164,
        'C', 38,
        'D', 39,
        'E', 126,
        'F', 41,
        'I', 98,
        'L', 108,
        'N', 75,
        'O', 57,
        'P', 45,
        'S', 114,
        'T', 107,
        'V', 48,
        'W', 93,
      );
      if (lookahead == '_') SKIP(221);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(439);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 222:
      if (eof) ADVANCE(224);
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'F', 349,
        'I', 373,
        'N', 398,
        'P', 405,
        'S', 419,
        'T', 408,
        'W', 375,
        '_', 334,
        '\t', 439,
        ' ', 439,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 223:
      if (eof) ADVANCE(224);
      ADVANCE_MAP(
        '"', 311,
        '\'', 226,
        '(', 248,
        '-', 291,
        'C', 348,
        'D', 376,
        'F', 349,
        'I', 373,
        'N', 398,
        'P', 405,
        'S', 419,
        'T', 408,
        'W', 375,
        '_', 335,
        '\t', 439,
        ' ', 439,
        '\n', 427,
        '\r', 427,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_If);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_If);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_Then);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_Else);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_Else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_EndIf);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_For);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_For);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_To);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_Step);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Next);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_While);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_While);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_Wend);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_Wend);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_Do);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_Do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LoopUntil);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_Sub);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_Sub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EndSub);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Function);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_Function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_EndFunction);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_Dim);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Dim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_As);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Private);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_Declare);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_PtrSafe);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_Lib);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_ByVal);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_ByVal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_ByRef);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_ByRef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_Optional);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_Optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_ParamArray);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_ParamArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_Any);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_Byte);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Collection);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Currency);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_Date);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_Decimal);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_Integer);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Long);
      if (lookahead == 'L') ADVANCE(169);
      if (lookahead == 'P') ADVANCE(203);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LongLong);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LongPtr);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_Single);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_Variant);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(302);
      if (lookahead == '>') ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_Not);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_Not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_Call);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_Call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(315);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(315);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(423);
      if (lookahead == 'O') ADVANCE(404);
      if (lookahead == 'P') ADVANCE(355);
      if (lookahead == '_') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'E', 387,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 326,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'E', 387,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 327,
        '\n', 431,
        '\r', 431,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'E', 394,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 328,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'E', 394,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 329,
        '\n', 436,
        '\r', 436,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'E', 396,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 330,
        '\n', 434,
        '\r', 434,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'E', 396,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 331,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'E', 393,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 332,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'E', 393,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 333,
        '\n', 437,
        '\r', 437,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'F', 349,
        'I', 373,
        'N', 398,
        'P', 405,
        'S', 419,
        'T', 408,
        'W', 375,
        '_', 334,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'F', 349,
        'I', 373,
        'N', 398,
        'P', 405,
        'S', 419,
        'T', 408,
        'W', 375,
        '_', 335,
        '\n', 430,
        '\r', 430,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'L', 401,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 336,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'L', 401,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 337,
        '\n', 432,
        '\r', 432,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 375,
        '_', 338,
        '\n', 428,
        '\r', 428,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 372,
        '_', 339,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'N', 398,
        'T', 408,
        'W', 372,
        '_', 340,
        '\n', 435,
        '\r', 435,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'N', 370,
        'T', 408,
        'W', 375,
        '_', 341,
        '\n', 433,
        '\r', 433,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'D', 376,
        'F', 350,
        'I', 373,
        'N', 370,
        'T', 408,
        'W', 375,
        '_', 342,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 348,
        'F', 351,
        'N', 398,
        'T', 408,
        '_', 343,
        'a', 392,
        'o', 407,
        '\n', 429,
        '\r', 429,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(348);
      if (lookahead == 'F') ADVANCE(351);
      if (lookahead == 'N') ADVANCE(398);
      if (lookahead == 'T') ADVANCE(408);
      if (lookahead == '_') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(348);
      if (lookahead == '_') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(371);
      if (lookahead == 'V') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead == 'u') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 'h') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__equal);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(338);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(343);
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
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(337);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(341);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(330);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(340);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__horizontal_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(439);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 222},
  [2] = {.lex_state = 222},
  [3] = {.lex_state = 222},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 223},
  [52] = {.lex_state = 223},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 24},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 21},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 15},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 21},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 21},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 21},
  [100] = {.lex_state = 21},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 15},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 21},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 21},
  [127] = {.lex_state = 18},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 21},
  [138] = {.lex_state = 21},
  [139] = {.lex_state = 21},
  [140] = {.lex_state = 21},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 21},
  [144] = {.lex_state = 21},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 21},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 23},
  [152] = {.lex_state = 23},
  [153] = {.lex_state = 23},
  [154] = {.lex_state = 23},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 21},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 21},
  [159] = {.lex_state = 21},
  [160] = {.lex_state = 21},
  [161] = {.lex_state = 27},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 26},
  [165] = {.lex_state = 21},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 21},
  [168] = {.lex_state = 26},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 26},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 21},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 21},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 21},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 21},
  [185] = {.lex_state = 21},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 21},
  [190] = {.lex_state = 21},
  [191] = {.lex_state = 21},
  [192] = {.lex_state = 21},
  [193] = {.lex_state = 21},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 21},
  [198] = {.lex_state = 21},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 21},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 21},
  [204] = {.lex_state = 21},
  [205] = {.lex_state = 21},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 21},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 27},
  [210] = {.lex_state = 27},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 27},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 21},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 21},
  [222] = {.lex_state = 27},
  [223] = {.lex_state = 21},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 21},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 27},
  [229] = {.lex_state = 21},
  [230] = {.lex_state = 21},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 21},
  [237] = {.lex_state = 21},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 21},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 21},
  [243] = {.lex_state = 21},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 21},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 313},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 21},
  [250] = {.lex_state = 27},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 27},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 21},
  [257] = {.lex_state = 21},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 27},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 27},
  [265] = {.lex_state = 21},
  [266] = {.lex_state = 27},
  [267] = {.lex_state = 313},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 313},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 27},
  [273] = {.lex_state = 27},
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
    [anon_sym_LoopUntil] = ACTIONS(1),
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
    [sym_source_file] = STATE(244),
    [sym__statement] = STATE(193),
    [sym__inline_statement] = STATE(193),
    [sym_variable_assignment] = STATE(193),
    [sym_invocation_statement] = STATE(193),
    [sym_if_statement] = STATE(193),
    [sym_for_statement] = STATE(193),
    [sym_while_statement] = STATE(193),
    [sym_do_statement] = STATE(193),
    [sym_subroutine] = STATE(193),
    [sym_function] = STATE(193),
    [sym_variable_declaration] = STATE(193),
    [sym_ptrsafe_function_declaration] = STATE(193),
    [sym__expression] = STATE(10),
    [sym_member_expression] = STATE(10),
    [sym_binary_expression] = STATE(10),
    [sym_unary_expression] = STATE(10),
    [sym_function_call] = STATE(10),
    [sym_literal] = STATE(10),
    [sym_string] = STATE(30),
    [sym_boolean] = STATE(30),
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(193), 12,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(193), 12,
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
    STATE(19), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(160), 1,
      aux_sym__whitespace,
    STATE(220), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(182), 8,
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
    ACTIONS(88), 1,
      aux_sym__whitespace_token1,
    STATE(25), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(160), 1,
      aux_sym__whitespace,
    STATE(232), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(189), 8,
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
    ACTIONS(90), 1,
      aux_sym__whitespace_token1,
    STATE(21), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(102), 1,
      aux_sym__whitespace,
    STATE(225), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(181), 8,
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
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    STATE(27), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(81), 1,
      aux_sym__whitespace,
    STATE(269), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(191), 8,
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
    ACTIONS(88), 1,
      aux_sym__whitespace_token1,
    STATE(19), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(160), 1,
      aux_sym__whitespace,
    STATE(231), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(182), 8,
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
    ACTIONS(94), 1,
      aux_sym__whitespace_token1,
    STATE(16), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(64), 1,
      aux_sym__whitespace,
    STATE(194), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
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
  [630] = 19,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_DOT,
    ACTIONS(100), 1,
      anon_sym_PLUS,
    ACTIONS(102), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      anon_sym_Not,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      aux_sym__whitespace_token1,
    STATE(174), 1,
      sym_argument,
    STATE(190), 1,
      sym_keyword_argument,
    STATE(230), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(104), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(139), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    ACTIONS(106), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [705] = 20,
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
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    STATE(26), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(103), 1,
      aux_sym__whitespace,
    STATE(239), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
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
  [782] = 20,
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
    ACTIONS(124), 1,
      aux_sym__whitespace_token1,
    STATE(20), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(127), 1,
      aux_sym__whitespace,
    STATE(215), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
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
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    STATE(26), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(103), 1,
      aux_sym__whitespace,
    STATE(227), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
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
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    STATE(27), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(81), 1,
      aux_sym__whitespace,
    STATE(258), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(191), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1013] = 18,
    ACTIONS(126), 1,
      anon_sym_If,
    ACTIONS(131), 1,
      anon_sym_For,
    ACTIONS(134), 1,
      anon_sym_While,
    ACTIONS(137), 1,
      anon_sym_Do,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_Dim,
    ACTIONS(149), 1,
      anon_sym_Call,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_Else,
      anon_sym_EndIf,
    ACTIONS(146), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(158), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
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
    ACTIONS(164), 2,
      anon_sym_Else,
      anon_sym_EndIf,
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
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
  [1157] = 18,
    ACTIONS(126), 1,
      anon_sym_If,
    ACTIONS(129), 1,
      anon_sym_EndFunction,
    ACTIONS(131), 1,
      anon_sym_For,
    ACTIONS(134), 1,
      anon_sym_While,
    ACTIONS(137), 1,
      anon_sym_Do,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_Dim,
    ACTIONS(149), 1,
      anon_sym_Call,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(146), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(158), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(182), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1228] = 18,
    ACTIONS(126), 1,
      anon_sym_If,
    ACTIONS(129), 1,
      anon_sym_Wend,
    ACTIONS(131), 1,
      anon_sym_For,
    ACTIONS(134), 1,
      anon_sym_While,
    ACTIONS(137), 1,
      anon_sym_Do,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_Dim,
    ACTIONS(149), 1,
      anon_sym_Call,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(18), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(146), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(158), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
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
  [1299] = 18,
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
    ACTIONS(164), 1,
      anon_sym_EndFunction,
    STATE(17), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(182), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1370] = 18,
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
    ACTIONS(164), 1,
      anon_sym_Wend,
    STATE(18), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
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
    ACTIONS(164), 1,
      anon_sym_LoopUntil,
    STATE(22), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(181), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1512] = 18,
    ACTIONS(126), 1,
      anon_sym_If,
    ACTIONS(129), 1,
      anon_sym_LoopUntil,
    ACTIONS(131), 1,
      anon_sym_For,
    ACTIONS(134), 1,
      anon_sym_While,
    ACTIONS(137), 1,
      anon_sym_Do,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_Dim,
    ACTIONS(149), 1,
      anon_sym_Call,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(146), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(158), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(181), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1583] = 18,
    ACTIONS(126), 1,
      anon_sym_If,
    ACTIONS(129), 1,
      anon_sym_Next,
    ACTIONS(131), 1,
      anon_sym_For,
    ACTIONS(134), 1,
      anon_sym_While,
    ACTIONS(137), 1,
      anon_sym_Do,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_Dim,
    ACTIONS(149), 1,
      anon_sym_Call,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(146), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(158), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(191), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1654] = 18,
    ACTIONS(126), 1,
      anon_sym_If,
    ACTIONS(129), 1,
      anon_sym_EndSub,
    ACTIONS(131), 1,
      anon_sym_For,
    ACTIONS(134), 1,
      anon_sym_While,
    ACTIONS(137), 1,
      anon_sym_Do,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_Dim,
    ACTIONS(149), 1,
      anon_sym_Call,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(146), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(158), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
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
    ACTIONS(164), 1,
      anon_sym_EndIf,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(189), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1796] = 18,
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
    ACTIONS(164), 1,
      anon_sym_EndSub,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
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
    ACTIONS(164), 1,
      anon_sym_Next,
    STATE(23), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(191), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1938] = 18,
    ACTIONS(126), 1,
      anon_sym_If,
    ACTIONS(129), 1,
      anon_sym_EndIf,
    ACTIONS(131), 1,
      anon_sym_For,
    ACTIONS(134), 1,
      anon_sym_While,
    ACTIONS(137), 1,
      anon_sym_Do,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_Dim,
    ACTIONS(149), 1,
      anon_sym_Call,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym__inline_statement_block_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(146), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(158), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(10), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(189), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [2009] = 3,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(168), 23,
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
  [2042] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(170), 24,
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
  [2073] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(172), 24,
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
  [2104] = 2,
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
  [2135] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(176), 24,
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
  [2166] = 6,
    ACTIONS(98), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(100), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(104), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(106), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
    ACTIONS(178), 10,
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
  [2205] = 5,
    ACTIONS(98), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(100), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(104), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(180), 19,
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
  [2242] = 2,
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
  [2273] = 2,
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
  [2304] = 2,
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
  [2335] = 3,
    ACTIONS(98), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 23,
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
  [2368] = 5,
    ACTIONS(98), 1,
      anon_sym_DOT,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(104), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(180), 20,
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
  [2405] = 4,
    ACTIONS(98), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(104), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(180), 21,
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
  [2440] = 3,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(188), 23,
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
  [2504] = 4,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(168), 21,
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
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      sym_identifier,
    STATE(162), 1,
      sym_argument,
    STATE(179), 1,
      sym_keyword_argument,
    STATE(261), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(136), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [2590] = 14,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      sym_argument,
    STATE(179), 1,
      sym_keyword_argument,
    STATE(214), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(136), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [2642] = 14,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      sym_argument,
    STATE(179), 1,
      sym_keyword_argument,
    STATE(251), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(136), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [2694] = 14,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      sym_argument,
    STATE(179), 1,
      sym_keyword_argument,
    STATE(218), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(136), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [2746] = 14,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      sym_argument,
    STATE(179), 1,
      sym_keyword_argument,
    STATE(252), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(136), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [2798] = 14,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      sym_argument,
    STATE(179), 1,
      sym_keyword_argument,
    STATE(260), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(136), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [2850] = 5,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      aux_sym__whitespace_token1,
    STATE(51), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 17,
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
  [2883] = 5,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(227), 1,
      aux_sym__whitespace_token1,
    STATE(51), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(225), 17,
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
  [2916] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(182), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(229), 18,
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
  [2945] = 4,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(168), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 16,
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
  [2975] = 12,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      sym_identifier,
    STATE(179), 1,
      sym_keyword_argument,
    STATE(199), 1,
      sym_argument,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(136), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [3021] = 4,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(188), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 16,
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
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      sym_identifier,
    STATE(190), 1,
      sym_keyword_argument,
    STATE(197), 1,
      sym_argument,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(139), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [3097] = 4,
    ACTIONS(239), 1,
      anon_sym_Long,
    STATE(180), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(237), 16,
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
  [3126] = 4,
    ACTIONS(243), 1,
      anon_sym_Long,
    STATE(203), 1,
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
  [3155] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(172), 2,
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
  [3182] = 7,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(253), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 4,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(255), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3217] = 4,
    ACTIONS(259), 1,
      aux_sym__whitespace_token1,
    STATE(70), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 16,
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
  [3246] = 4,
    ACTIONS(239), 1,
      anon_sym_Long,
    STATE(202), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(237), 16,
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
  [3275] = 5,
    ACTIONS(261), 1,
      aux_sym__whitespace_token1,
    STATE(70), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(164), 2,
      anon_sym_Else,
      anon_sym_EndIf,
    ACTIONS(220), 14,
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
  [3306] = 4,
    ACTIONS(243), 1,
      anon_sym_Long,
    STATE(223), 1,
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
  [3335] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(174), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(264), 16,
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
  [3362] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(176), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(266), 16,
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
  [3389] = 4,
    ACTIONS(231), 1,
      aux_sym__whitespace_token1,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(168), 16,
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
  [3418] = 5,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(168), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 14,
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
  [3449] = 4,
    ACTIONS(261), 1,
      aux_sym__whitespace_token1,
    STATE(70), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 16,
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
  [3478] = 6,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(253), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(272), 11,
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
  [3511] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(170), 2,
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
  [3538] = 5,
    ACTIONS(231), 1,
      aux_sym__whitespace_token1,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_COLON_EQ,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(168), 15,
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
  [3569] = 4,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(272), 15,
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
  [3598] = 5,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(253), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(272), 13,
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
  [3629] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(188), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 16,
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
  [3656] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(184), 2,
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
  [3683] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(186), 2,
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
  [3710] = 4,
    ACTIONS(235), 1,
      aux_sym__whitespace_token1,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
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
  [3739] = 4,
    ACTIONS(282), 1,
      aux_sym__whitespace_token1,
    STATE(121), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 15,
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
  [3767] = 5,
    ACTIONS(164), 1,
      anon_sym_Next,
    ACTIONS(284), 1,
      aux_sym__whitespace_token1,
    STATE(130), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 14,
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
  [3797] = 4,
    ACTIONS(287), 1,
      aux_sym__whitespace_token1,
    STATE(82), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 15,
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
  [3825] = 4,
    ACTIONS(290), 1,
      aux_sym__whitespace_token1,
    STATE(117), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LoopUntil,
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
  [3853] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(144), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [3893] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(140), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [3933] = 3,
    ACTIONS(278), 1,
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
  [3959] = 3,
    ACTIONS(229), 1,
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
  [3985] = 3,
    ACTIONS(264), 1,
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
  [4011] = 10,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(150), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4051] = 5,
    ACTIONS(272), 1,
      aux_sym__whitespace_token1,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(298), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(180), 13,
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
  [4081] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(96), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4121] = 4,
    ACTIONS(272), 1,
      aux_sym__whitespace_token1,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 15,
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
  [4149] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(92), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4189] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(90), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4229] = 7,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(178), 2,
      anon_sym_Step,
      anon_sym_COMMA,
    ACTIONS(298), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4263] = 6,
    ACTIONS(272), 1,
      aux_sym__whitespace_token1,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(298), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(180), 11,
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
  [4295] = 3,
    ACTIONS(280), 1,
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
  [4321] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(143), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4361] = 3,
    ACTIONS(274), 1,
      aux_sym__whitespace_token1,
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
  [4387] = 3,
    ACTIONS(266), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(176), 16,
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
  [4413] = 3,
    ACTIONS(245), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(172), 16,
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
  [4439] = 5,
    ACTIONS(164), 1,
      anon_sym_LoopUntil,
    ACTIONS(304), 1,
      aux_sym__whitespace_token1,
    STATE(117), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 14,
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
  [4469] = 5,
    ACTIONS(164), 1,
      anon_sym_EndSub,
    ACTIONS(307), 1,
      aux_sym__whitespace_token1,
    STATE(121), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 14,
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
  [4499] = 4,
    ACTIONS(310), 1,
      aux_sym__whitespace_token1,
    STATE(82), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 15,
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
  [4527] = 10,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(145), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4567] = 10,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(149), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4607] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(137), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4647] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(126), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4687] = 10,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(141), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4727] = 4,
    ACTIONS(312), 1,
      aux_sym__whitespace_token1,
    STATE(123), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 15,
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
  [4755] = 3,
    ACTIONS(235), 1,
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
  [4781] = 10,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(147), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4821] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(35), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4861] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(39), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4901] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(40), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4941] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(41), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4981] = 4,
    ACTIONS(304), 1,
      aux_sym__whitespace_token1,
    STATE(117), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LoopUntil,
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
  [5009] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(142), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5049] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(138), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5089] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(148), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5129] = 4,
    ACTIONS(307), 1,
      aux_sym__whitespace_token1,
    STATE(121), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 15,
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
  [5157] = 4,
    ACTIONS(316), 1,
      aux_sym__whitespace_token1,
    STATE(129), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 15,
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
  [5185] = 4,
    ACTIONS(318), 1,
      aux_sym__whitespace_token1,
    STATE(123), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 15,
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
  [5213] = 10,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(146), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5253] = 4,
    ACTIONS(321), 1,
      aux_sym__whitespace_token1,
    STATE(130), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 15,
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
  [5281] = 8,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_Step,
    ACTIONS(325), 1,
      aux_sym__whitespace_token1,
    STATE(7), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(298), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5317] = 5,
    ACTIONS(164), 1,
      anon_sym_Wend,
    ACTIONS(287), 1,
      aux_sym__whitespace_token1,
    STATE(82), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 14,
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
  [5347] = 10,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(108), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(116), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    STATE(95), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5387] = 4,
    ACTIONS(327), 1,
      aux_sym__whitespace_token1,
    STATE(129), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 15,
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
  [5415] = 4,
    ACTIONS(284), 1,
      aux_sym__whitespace_token1,
    STATE(130), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 15,
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
  [5443] = 10,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(71), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5483] = 10,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(61), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5523] = 10,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(74), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5563] = 10,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(204), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(72), 2,
      sym_string,
      sym_boolean,
    STATE(75), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5603] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
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
    STATE(30), 2,
      sym_string,
      sym_boolean,
    STATE(34), 6,
      sym__expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5643] = 7,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(253), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(330), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(255), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5676] = 7,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      aux_sym__whitespace_token1,
    STATE(12), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(298), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5709] = 7,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      aux_sym__whitespace_token1,
    STATE(14), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(298), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5742] = 7,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      aux_sym__whitespace_token1,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(298), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5775] = 7,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(298), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5808] = 7,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(253), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(255), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5841] = 6,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(298), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5871] = 6,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(298), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5901] = 6,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(298), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5931] = 7,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(348), 1,
      anon_sym_To,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(253), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5963] = 7,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(253), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5995] = 7,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(253), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6027] = 6,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(354), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(298), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(302), 9,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6057] = 7,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(253), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6089] = 7,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_Then,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(251), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(253), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 7,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6121] = 7,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 1,
      sym_identifier,
    STATE(166), 1,
      sym_parameter,
    STATE(209), 1,
      sym_modifier,
    STATE(263), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(362), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [6147] = 7,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_parameter,
    STATE(208), 1,
      sym_parameter_list,
    STATE(209), 1,
      sym_modifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(362), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [6173] = 7,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_parameter,
    STATE(209), 1,
      sym_modifier,
    STATE(211), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(362), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [6199] = 7,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_parameter,
    STATE(209), 1,
      sym_modifier,
    STATE(248), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(362), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [6225] = 5,
    ACTIONS(364), 1,
      sym_identifier,
    STATE(178), 1,
      sym_parameter,
    STATE(209), 1,
      sym_modifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(362), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [6245] = 7,
    ACTIONS(372), 1,
      anon_sym_As,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      sym__equal,
    ACTIONS(378), 1,
      aux_sym__whitespace_token1,
    STATE(157), 1,
      aux_sym_variable_list_repeat1,
    STATE(221), 1,
      sym_type_definition,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6268] = 6,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_As,
    ACTIONS(382), 1,
      aux_sym__whitespace_token1,
    STATE(159), 1,
      aux_sym_variable_list_repeat1,
    STATE(240), 1,
      sym_type_definition,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6288] = 4,
    ACTIONS(384), 1,
      aux_sym__whitespace_token1,
    STATE(158), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 2,
      anon_sym_EndIf,
      anon_sym_EndFunction,
  [6303] = 5,
    ACTIONS(387), 1,
      anon_sym_As,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      aux_sym__whitespace_token1,
    STATE(159), 1,
      aux_sym_variable_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6320] = 4,
    ACTIONS(394), 1,
      aux_sym__whitespace_token1,
    STATE(158), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(164), 2,
      anon_sym_EndIf,
      anon_sym_EndFunction,
  [6335] = 3,
    ACTIONS(396), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(236), 2,
      sym__variable_declaration_assignment,
      sym_variable_list,
  [6347] = 4,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6361] = 4,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6375] = 4,
    ACTIONS(110), 1,
      anon_sym_Call,
    ACTIONS(407), 1,
      sym_identifier,
    STATE(111), 1,
      sym_function_call,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6389] = 3,
    ACTIONS(392), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(387), 2,
      anon_sym_As,
      anon_sym_COMMA,
  [6401] = 4,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6415] = 4,
    ACTIONS(402), 1,
      aux_sym__whitespace_token1,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6429] = 4,
    ACTIONS(198), 1,
      anon_sym_Call,
    ACTIONS(416), 1,
      sym_identifier,
    STATE(76), 1,
      sym_function_call,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6443] = 4,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6457] = 4,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6471] = 4,
    ACTIONS(418), 1,
      aux_sym__whitespace_token1,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6485] = 4,
    ACTIONS(29), 1,
      anon_sym_Call,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(43), 1,
      sym_function_call,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6499] = 4,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6513] = 4,
    ACTIONS(398), 1,
      aux_sym__whitespace_token1,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6527] = 3,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      anon_sym_Alias,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6538] = 3,
    ACTIONS(435), 1,
      aux_sym__whitespace_token1,
    STATE(11), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6549] = 3,
    ACTIONS(437), 1,
      aux_sym__whitespace_token1,
    STATE(9), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6560] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(426), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6569] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(330), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6578] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(439), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6587] = 3,
    ACTIONS(441), 1,
      aux_sym__whitespace_token1,
    STATE(83), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6598] = 3,
    ACTIONS(443), 1,
      aux_sym__whitespace_token1,
    STATE(110), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6609] = 3,
    ACTIONS(445), 1,
      anon_sym_As,
    STATE(256), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6620] = 3,
    ACTIONS(447), 1,
      aux_sym__whitespace_token1,
    STATE(80), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6631] = 3,
    ACTIONS(449), 1,
      aux_sym__whitespace_token1,
    STATE(62), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6642] = 3,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6653] = 3,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6664] = 3,
    ACTIONS(445), 1,
      anon_sym_As,
    STATE(242), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6675] = 3,
    ACTIONS(453), 1,
      aux_sym__whitespace_token1,
    STATE(122), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6686] = 3,
    ACTIONS(330), 1,
      aux_sym__whitespace_token1,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6697] = 3,
    ACTIONS(455), 1,
      aux_sym__whitespace_token1,
    STATE(125), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6708] = 3,
    ACTIONS(457), 1,
      aux_sym__whitespace_token1,
    STATE(13), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6719] = 3,
    ACTIONS(459), 1,
      aux_sym__whitespace_token1,
    STATE(52), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6730] = 3,
    ACTIONS(461), 1,
      anon_sym_Else,
    ACTIONS(463), 1,
      anon_sym_EndIf,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6741] = 3,
    ACTIONS(445), 1,
      anon_sym_As,
    STATE(243), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6752] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(465), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6761] = 3,
    ACTIONS(402), 1,
      aux_sym__whitespace_token1,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6772] = 3,
    ACTIONS(469), 1,
      aux_sym__whitespace_token1,
    STATE(104), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6783] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(402), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6792] = 3,
    ACTIONS(445), 1,
      anon_sym_As,
    STATE(249), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6803] = 3,
    ACTIONS(465), 1,
      aux_sym__whitespace_token1,
    ACTIONS(471), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6814] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(473), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6823] = 3,
    ACTIONS(475), 1,
      sym__equal,
    ACTIONS(477), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6834] = 3,
    ACTIONS(479), 1,
      aux_sym__whitespace_token1,
    STATE(6), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6845] = 2,
    ACTIONS(481), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6853] = 2,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6861] = 2,
    ACTIONS(485), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6869] = 2,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6877] = 2,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6885] = 2,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6893] = 2,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6901] = 2,
    ACTIONS(495), 1,
      anon_sym_As,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6909] = 2,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6917] = 2,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6925] = 2,
    ACTIONS(501), 1,
      anon_sym_Wend,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6933] = 2,
    ACTIONS(503), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6941] = 2,
    ACTIONS(505), 1,
      anon_sym_As,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6949] = 2,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6957] = 2,
    ACTIONS(509), 1,
      anon_sym_Function,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6965] = 2,
    ACTIONS(511), 1,
      anon_sym_EndFunction,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6973] = 2,
    ACTIONS(382), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6981] = 2,
    ACTIONS(513), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6989] = 2,
    ACTIONS(477), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [6997] = 2,
    ACTIONS(515), 1,
      anon_sym_Lib,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7005] = 2,
    ACTIONS(517), 1,
      anon_sym_LoopUntil,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7013] = 2,
    ACTIONS(519), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7021] = 2,
    ACTIONS(521), 1,
      anon_sym_EndSub,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7029] = 2,
    ACTIONS(523), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7037] = 2,
    ACTIONS(525), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7045] = 2,
    ACTIONS(527), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7053] = 2,
    ACTIONS(529), 1,
      anon_sym_EndFunction,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7061] = 2,
    ACTIONS(531), 1,
      anon_sym_EndIf,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7069] = 2,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7077] = 2,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7085] = 2,
    ACTIONS(537), 1,
      anon_sym_PtrSafe,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7093] = 2,
    ACTIONS(539), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7101] = 2,
    ACTIONS(541), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7109] = 2,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7117] = 2,
    ACTIONS(545), 1,
      anon_sym_EndSub,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7125] = 2,
    ACTIONS(547), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7133] = 2,
    ACTIONS(549), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7141] = 2,
    ACTIONS(551), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7149] = 2,
    ACTIONS(553), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7157] = 2,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7165] = 2,
    ACTIONS(557), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7173] = 2,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7181] = 2,
    ACTIONS(561), 1,
      aux_sym_string_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7189] = 2,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7197] = 2,
    ACTIONS(565), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7205] = 2,
    ACTIONS(567), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7213] = 2,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7221] = 2,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7229] = 2,
    ACTIONS(573), 1,
      anon_sym_Declare,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7237] = 2,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7245] = 2,
    ACTIONS(577), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7253] = 2,
    ACTIONS(579), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7261] = 2,
    ACTIONS(581), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7269] = 2,
    ACTIONS(583), 1,
      anon_sym_Next,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7277] = 2,
    ACTIONS(585), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7285] = 2,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7293] = 2,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7301] = 2,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7309] = 2,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7317] = 2,
    ACTIONS(595), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7325] = 2,
    ACTIONS(597), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7333] = 2,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7341] = 2,
    ACTIONS(601), 1,
      aux_sym_string_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7349] = 2,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7357] = 2,
    ACTIONS(605), 1,
      anon_sym_Next,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7365] = 2,
    ACTIONS(607), 1,
      aux_sym_string_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7373] = 2,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7381] = 2,
    ACTIONS(611), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7389] = 2,
    ACTIONS(613), 1,
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
  [SMALL_STATE(11)] = 705,
  [SMALL_STATE(12)] = 782,
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
  [SMALL_STATE(31)] = 2073,
  [SMALL_STATE(32)] = 2104,
  [SMALL_STATE(33)] = 2135,
  [SMALL_STATE(34)] = 2166,
  [SMALL_STATE(35)] = 2205,
  [SMALL_STATE(36)] = 2242,
  [SMALL_STATE(37)] = 2273,
  [SMALL_STATE(38)] = 2304,
  [SMALL_STATE(39)] = 2335,
  [SMALL_STATE(40)] = 2368,
  [SMALL_STATE(41)] = 2405,
  [SMALL_STATE(42)] = 2440,
  [SMALL_STATE(43)] = 2473,
  [SMALL_STATE(44)] = 2504,
  [SMALL_STATE(45)] = 2538,
  [SMALL_STATE(46)] = 2590,
  [SMALL_STATE(47)] = 2642,
  [SMALL_STATE(48)] = 2694,
  [SMALL_STATE(49)] = 2746,
  [SMALL_STATE(50)] = 2798,
  [SMALL_STATE(51)] = 2850,
  [SMALL_STATE(52)] = 2883,
  [SMALL_STATE(53)] = 2916,
  [SMALL_STATE(54)] = 2945,
  [SMALL_STATE(55)] = 2975,
  [SMALL_STATE(56)] = 3021,
  [SMALL_STATE(57)] = 3051,
  [SMALL_STATE(58)] = 3097,
  [SMALL_STATE(59)] = 3126,
  [SMALL_STATE(60)] = 3155,
  [SMALL_STATE(61)] = 3182,
  [SMALL_STATE(62)] = 3217,
  [SMALL_STATE(63)] = 3246,
  [SMALL_STATE(64)] = 3275,
  [SMALL_STATE(65)] = 3306,
  [SMALL_STATE(66)] = 3335,
  [SMALL_STATE(67)] = 3362,
  [SMALL_STATE(68)] = 3389,
  [SMALL_STATE(69)] = 3418,
  [SMALL_STATE(70)] = 3449,
  [SMALL_STATE(71)] = 3478,
  [SMALL_STATE(72)] = 3511,
  [SMALL_STATE(73)] = 3538,
  [SMALL_STATE(74)] = 3569,
  [SMALL_STATE(75)] = 3598,
  [SMALL_STATE(76)] = 3629,
  [SMALL_STATE(77)] = 3656,
  [SMALL_STATE(78)] = 3683,
  [SMALL_STATE(79)] = 3710,
  [SMALL_STATE(80)] = 3739,
  [SMALL_STATE(81)] = 3767,
  [SMALL_STATE(82)] = 3797,
  [SMALL_STATE(83)] = 3825,
  [SMALL_STATE(84)] = 3853,
  [SMALL_STATE(85)] = 3893,
  [SMALL_STATE(86)] = 3933,
  [SMALL_STATE(87)] = 3959,
  [SMALL_STATE(88)] = 3985,
  [SMALL_STATE(89)] = 4011,
  [SMALL_STATE(90)] = 4051,
  [SMALL_STATE(91)] = 4081,
  [SMALL_STATE(92)] = 4121,
  [SMALL_STATE(93)] = 4149,
  [SMALL_STATE(94)] = 4189,
  [SMALL_STATE(95)] = 4229,
  [SMALL_STATE(96)] = 4263,
  [SMALL_STATE(97)] = 4295,
  [SMALL_STATE(98)] = 4321,
  [SMALL_STATE(99)] = 4361,
  [SMALL_STATE(100)] = 4387,
  [SMALL_STATE(101)] = 4413,
  [SMALL_STATE(102)] = 4439,
  [SMALL_STATE(103)] = 4469,
  [SMALL_STATE(104)] = 4499,
  [SMALL_STATE(105)] = 4527,
  [SMALL_STATE(106)] = 4567,
  [SMALL_STATE(107)] = 4607,
  [SMALL_STATE(108)] = 4647,
  [SMALL_STATE(109)] = 4687,
  [SMALL_STATE(110)] = 4727,
  [SMALL_STATE(111)] = 4755,
  [SMALL_STATE(112)] = 4781,
  [SMALL_STATE(113)] = 4821,
  [SMALL_STATE(114)] = 4861,
  [SMALL_STATE(115)] = 4901,
  [SMALL_STATE(116)] = 4941,
  [SMALL_STATE(117)] = 4981,
  [SMALL_STATE(118)] = 5009,
  [SMALL_STATE(119)] = 5049,
  [SMALL_STATE(120)] = 5089,
  [SMALL_STATE(121)] = 5129,
  [SMALL_STATE(122)] = 5157,
  [SMALL_STATE(123)] = 5185,
  [SMALL_STATE(124)] = 5213,
  [SMALL_STATE(125)] = 5253,
  [SMALL_STATE(126)] = 5281,
  [SMALL_STATE(127)] = 5317,
  [SMALL_STATE(128)] = 5347,
  [SMALL_STATE(129)] = 5387,
  [SMALL_STATE(130)] = 5415,
  [SMALL_STATE(131)] = 5443,
  [SMALL_STATE(132)] = 5483,
  [SMALL_STATE(133)] = 5523,
  [SMALL_STATE(134)] = 5563,
  [SMALL_STATE(135)] = 5603,
  [SMALL_STATE(136)] = 5643,
  [SMALL_STATE(137)] = 5676,
  [SMALL_STATE(138)] = 5709,
  [SMALL_STATE(139)] = 5742,
  [SMALL_STATE(140)] = 5775,
  [SMALL_STATE(141)] = 5808,
  [SMALL_STATE(142)] = 5841,
  [SMALL_STATE(143)] = 5871,
  [SMALL_STATE(144)] = 5901,
  [SMALL_STATE(145)] = 5931,
  [SMALL_STATE(146)] = 5963,
  [SMALL_STATE(147)] = 5995,
  [SMALL_STATE(148)] = 6027,
  [SMALL_STATE(149)] = 6057,
  [SMALL_STATE(150)] = 6089,
  [SMALL_STATE(151)] = 6121,
  [SMALL_STATE(152)] = 6147,
  [SMALL_STATE(153)] = 6173,
  [SMALL_STATE(154)] = 6199,
  [SMALL_STATE(155)] = 6225,
  [SMALL_STATE(156)] = 6245,
  [SMALL_STATE(157)] = 6268,
  [SMALL_STATE(158)] = 6288,
  [SMALL_STATE(159)] = 6303,
  [SMALL_STATE(160)] = 6320,
  [SMALL_STATE(161)] = 6335,
  [SMALL_STATE(162)] = 6347,
  [SMALL_STATE(163)] = 6361,
  [SMALL_STATE(164)] = 6375,
  [SMALL_STATE(165)] = 6389,
  [SMALL_STATE(166)] = 6401,
  [SMALL_STATE(167)] = 6415,
  [SMALL_STATE(168)] = 6429,
  [SMALL_STATE(169)] = 6443,
  [SMALL_STATE(170)] = 6457,
  [SMALL_STATE(171)] = 6471,
  [SMALL_STATE(172)] = 6485,
  [SMALL_STATE(173)] = 6499,
  [SMALL_STATE(174)] = 6513,
  [SMALL_STATE(175)] = 6527,
  [SMALL_STATE(176)] = 6538,
  [SMALL_STATE(177)] = 6549,
  [SMALL_STATE(178)] = 6560,
  [SMALL_STATE(179)] = 6569,
  [SMALL_STATE(180)] = 6578,
  [SMALL_STATE(181)] = 6587,
  [SMALL_STATE(182)] = 6598,
  [SMALL_STATE(183)] = 6609,
  [SMALL_STATE(184)] = 6620,
  [SMALL_STATE(185)] = 6631,
  [SMALL_STATE(186)] = 6642,
  [SMALL_STATE(187)] = 6653,
  [SMALL_STATE(188)] = 6664,
  [SMALL_STATE(189)] = 6675,
  [SMALL_STATE(190)] = 6686,
  [SMALL_STATE(191)] = 6697,
  [SMALL_STATE(192)] = 6708,
  [SMALL_STATE(193)] = 6719,
  [SMALL_STATE(194)] = 6730,
  [SMALL_STATE(195)] = 6741,
  [SMALL_STATE(196)] = 6752,
  [SMALL_STATE(197)] = 6761,
  [SMALL_STATE(198)] = 6772,
  [SMALL_STATE(199)] = 6783,
  [SMALL_STATE(200)] = 6792,
  [SMALL_STATE(201)] = 6803,
  [SMALL_STATE(202)] = 6814,
  [SMALL_STATE(203)] = 6823,
  [SMALL_STATE(204)] = 6834,
  [SMALL_STATE(205)] = 6845,
  [SMALL_STATE(206)] = 6853,
  [SMALL_STATE(207)] = 6861,
  [SMALL_STATE(208)] = 6869,
  [SMALL_STATE(209)] = 6877,
  [SMALL_STATE(210)] = 6885,
  [SMALL_STATE(211)] = 6893,
  [SMALL_STATE(212)] = 6901,
  [SMALL_STATE(213)] = 6909,
  [SMALL_STATE(214)] = 6917,
  [SMALL_STATE(215)] = 6925,
  [SMALL_STATE(216)] = 6933,
  [SMALL_STATE(217)] = 6941,
  [SMALL_STATE(218)] = 6949,
  [SMALL_STATE(219)] = 6957,
  [SMALL_STATE(220)] = 6965,
  [SMALL_STATE(221)] = 6973,
  [SMALL_STATE(222)] = 6981,
  [SMALL_STATE(223)] = 6989,
  [SMALL_STATE(224)] = 6997,
  [SMALL_STATE(225)] = 7005,
  [SMALL_STATE(226)] = 7013,
  [SMALL_STATE(227)] = 7021,
  [SMALL_STATE(228)] = 7029,
  [SMALL_STATE(229)] = 7037,
  [SMALL_STATE(230)] = 7045,
  [SMALL_STATE(231)] = 7053,
  [SMALL_STATE(232)] = 7061,
  [SMALL_STATE(233)] = 7069,
  [SMALL_STATE(234)] = 7077,
  [SMALL_STATE(235)] = 7085,
  [SMALL_STATE(236)] = 7093,
  [SMALL_STATE(237)] = 7101,
  [SMALL_STATE(238)] = 7109,
  [SMALL_STATE(239)] = 7117,
  [SMALL_STATE(240)] = 7125,
  [SMALL_STATE(241)] = 7133,
  [SMALL_STATE(242)] = 7141,
  [SMALL_STATE(243)] = 7149,
  [SMALL_STATE(244)] = 7157,
  [SMALL_STATE(245)] = 7165,
  [SMALL_STATE(246)] = 7173,
  [SMALL_STATE(247)] = 7181,
  [SMALL_STATE(248)] = 7189,
  [SMALL_STATE(249)] = 7197,
  [SMALL_STATE(250)] = 7205,
  [SMALL_STATE(251)] = 7213,
  [SMALL_STATE(252)] = 7221,
  [SMALL_STATE(253)] = 7229,
  [SMALL_STATE(254)] = 7237,
  [SMALL_STATE(255)] = 7245,
  [SMALL_STATE(256)] = 7253,
  [SMALL_STATE(257)] = 7261,
  [SMALL_STATE(258)] = 7269,
  [SMALL_STATE(259)] = 7277,
  [SMALL_STATE(260)] = 7285,
  [SMALL_STATE(261)] = 7293,
  [SMALL_STATE(262)] = 7301,
  [SMALL_STATE(263)] = 7309,
  [SMALL_STATE(264)] = 7317,
  [SMALL_STATE(265)] = 7325,
  [SMALL_STATE(266)] = 7333,
  [SMALL_STATE(267)] = 7341,
  [SMALL_STATE(268)] = 7349,
  [SMALL_STATE(269)] = 7357,
  [SMALL_STATE(270)] = 7365,
  [SMALL_STATE(271)] = 7373,
  [SMALL_STATE(272)] = 7381,
  [SMALL_STATE(273)] = 7389,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation_statement, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_statement_block, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(51),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(70),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(130),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(82),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(117),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(121),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(123),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(129),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_argument, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_argument, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declaration_assignment, 3, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 5, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declaration_assignment, 5, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 1, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 2, 0, 0),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(158),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation_statement, 2, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 7, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 3, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 13, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 12, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 12, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 11, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 10, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 10, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 8, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
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
