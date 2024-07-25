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
#define STATE_COUNT 312
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
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
  anon_sym_LPAREN_RPAREN = 50,
  anon_sym_New = 51,
  anon_sym_DOT = 52,
  anon_sym_PLUS = 53,
  anon_sym_DASH = 54,
  anon_sym_STAR = 55,
  anon_sym_SLASH = 56,
  anon_sym_Mod = 57,
  anon_sym_AMP = 58,
  anon_sym_and = 59,
  anon_sym_or = 60,
  anon_sym_Xor = 61,
  anon_sym_LT_GT = 62,
  anon_sym_LT = 63,
  anon_sym_GT = 64,
  anon_sym_LT_EQ = 65,
  anon_sym_GT_EQ = 66,
  anon_sym_Not = 67,
  anon_sym_Call = 68,
  anon_sym_COLON_EQ = 69,
  sym_number = 70,
  anon_sym_DQUOTE = 71,
  aux_sym_string_literal_token1 = 72,
  anon_sym_True = 73,
  anon_sym_False = 74,
  sym_identifier = 75,
  sym__equal = 76,
  aux_sym__whitespace_token1 = 77,
  sym__horizontal_whitespace = 78,
  sym_source_file = 79,
  sym__statement = 80,
  sym__inline_statement = 81,
  sym_variable_assignment = 82,
  sym__inline_statement_block = 83,
  sym_invocation_statement = 84,
  sym_if_statement = 85,
  sym_for_statement = 86,
  sym_while_statement = 87,
  sym_do_statement = 88,
  sym_subroutine = 89,
  sym_function = 90,
  sym_variable_declaration = 91,
  sym__variable_declaration_assignment = 92,
  sym_type_definition = 93,
  sym_variable_list = 94,
  sym_ptrsafe_function_declaration = 95,
  sym_parameter_list = 96,
  sym_parameter = 97,
  sym_modifier = 98,
  sym_type = 99,
  sym_type_terminal = 100,
  sym_array_type = 101,
  sym__expression = 102,
  sym_new_expression = 103,
  sym_type_member_expression = 104,
  sym_member_expression = 105,
  sym_binary_expression = 106,
  sym_unary_expression = 107,
  sym_function_call = 108,
  sym_argument_list = 109,
  sym_argument = 110,
  sym_keyword_argument = 111,
  sym_array_element = 112,
  sym_literal = 113,
  sym_string_literal = 114,
  sym_boolean = 115,
  sym_new_identifier = 116,
  aux_sym__whitespace = 117,
  aux_sym_source_file_repeat1 = 118,
  aux_sym__inline_statement_block_repeat1 = 119,
  aux_sym_variable_list_repeat1 = 120,
  aux_sym_parameter_list_repeat1 = 121,
  aux_sym_argument_list_repeat1 = 122,
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
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_New] = "New",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_Mod] = "Mod",
  [anon_sym_AMP] = "&",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_Xor] = "Xor",
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
  [sym_type_terminal] = "type_terminal",
  [sym_array_type] = "array_type",
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
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_New] = anon_sym_New,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_Mod] = anon_sym_Mod,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_Xor] = anon_sym_Xor,
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
  [sym_type_terminal] = sym_type_terminal,
  [sym_array_type] = sym_array_type,
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
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_New] = {
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
  [anon_sym_Mod] = {
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
  [anon_sym_Xor] = {
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
  [sym_type_terminal] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 19,
  [23] = 20,
  [24] = 19,
  [25] = 19,
  [26] = 20,
  [27] = 19,
  [28] = 20,
  [29] = 20,
  [30] = 19,
  [31] = 20,
  [32] = 19,
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
  [54] = 52,
  [55] = 55,
  [56] = 53,
  [57] = 53,
  [58] = 52,
  [59] = 48,
  [60] = 35,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 41,
  [65] = 65,
  [66] = 50,
  [67] = 45,
  [68] = 39,
  [69] = 44,
  [70] = 70,
  [71] = 43,
  [72] = 36,
  [73] = 38,
  [74] = 74,
  [75] = 74,
  [76] = 70,
  [77] = 45,
  [78] = 42,
  [79] = 40,
  [80] = 50,
  [81] = 47,
  [82] = 37,
  [83] = 70,
  [84] = 35,
  [85] = 33,
  [86] = 41,
  [87] = 49,
  [88] = 34,
  [89] = 44,
  [90] = 90,
  [91] = 91,
  [92] = 47,
  [93] = 48,
  [94] = 34,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 90,
  [99] = 99,
  [100] = 39,
  [101] = 37,
  [102] = 102,
  [103] = 103,
  [104] = 33,
  [105] = 49,
  [106] = 99,
  [107] = 107,
  [108] = 108,
  [109] = 65,
  [110] = 97,
  [111] = 111,
  [112] = 111,
  [113] = 90,
  [114] = 91,
  [115] = 97,
  [116] = 43,
  [117] = 117,
  [118] = 36,
  [119] = 119,
  [120] = 38,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 42,
  [125] = 111,
  [126] = 126,
  [127] = 40,
  [128] = 126,
  [129] = 129,
  [130] = 126,
  [131] = 99,
  [132] = 132,
  [133] = 121,
  [134] = 65,
  [135] = 96,
  [136] = 136,
  [137] = 137,
  [138] = 65,
  [139] = 137,
  [140] = 121,
  [141] = 121,
  [142] = 65,
  [143] = 143,
  [144] = 96,
  [145] = 96,
  [146] = 121,
  [147] = 136,
  [148] = 96,
  [149] = 65,
  [150] = 96,
  [151] = 65,
  [152] = 121,
  [153] = 121,
  [154] = 154,
  [155] = 65,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 161,
  [163] = 163,
  [164] = 164,
  [165] = 161,
  [166] = 159,
  [167] = 167,
  [168] = 168,
  [169] = 168,
  [170] = 170,
  [171] = 168,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 179,
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
  [197] = 192,
  [198] = 185,
  [199] = 199,
  [200] = 194,
  [201] = 195,
  [202] = 199,
  [203] = 203,
  [204] = 204,
  [205] = 65,
  [206] = 206,
  [207] = 207,
  [208] = 196,
  [209] = 186,
  [210] = 199,
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
  [222] = 213,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 219,
  [228] = 213,
  [229] = 213,
  [230] = 213,
  [231] = 231,
  [232] = 213,
  [233] = 233,
  [234] = 211,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 213,
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
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 246,
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
  [282] = 247,
  [283] = 283,
  [284] = 278,
  [285] = 264,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 246,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 247,
  [294] = 294,
  [295] = 278,
  [296] = 264,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 283,
  [303] = 303,
  [304] = 262,
  [305] = 305,
  [306] = 306,
  [307] = 283,
  [308] = 308,
  [309] = 262,
  [310] = 286,
  [311] = 286,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(215);
      ADVANCE_MAP(
        '"', 328,
        '&', 309,
        '\'', 217,
        '(', 241,
        ')', 242,
        '*', 305,
        '+', 303,
        ',', 250,
        '-', 304,
        '.', 302,
        '/', 306,
        ':', 31,
        '<', 317,
        '=', 527,
        '>', 318,
        'A', 122,
        'B', 159,
        'C', 39,
        'D', 40,
        'E', 123,
        'F', 41,
        'I', 96,
        'L', 107,
        'M', 158,
        'N', 73,
        'O', 56,
        'P', 45,
        'S', 112,
        'T', 106,
        'U', 149,
        'V', 48,
        'W', 93,
        'X', 161,
      );
      if (lookahead == '_') SKIP(212);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 328,
        '&', 309,
        '\'', 217,
        '(', 241,
        '*', 305,
        '+', 303,
        ',', 250,
        '-', 304,
        '.', 302,
        '/', 306,
        '<', 317,
        '=', 527,
        '>', 318,
        'C', 366,
        'F', 369,
        'M', 471,
        'N', 397,
        'T', 491,
        'X', 478,
        '_', 360,
        'a', 459,
        'o', 489,
        '\t', 540,
        ' ', 540,
        '\n', 528,
        '\r', 528,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        ')', 242,
        '-', 304,
        'C', 366,
        'F', 369,
        'N', 397,
        'T', 491,
        '_', 361,
        '\t', 540,
        ' ', 540,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'A', 454,
        'B', 474,
        'C', 365,
        'D', 381,
        'F', 369,
        'I', 469,
        'L', 476,
        'N', 397,
        'O', 383,
        'S', 430,
        'T', 491,
        'V', 380,
        '_', 340,
        '\t', 540,
        ' ', 540,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'E', 446,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 343,
        '\t', 540,
        ' ', 540,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'E', 446,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 344,
        '\t', 540,
        ' ', 540,
        '\n', 528,
        '\r', 528,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'E', 466,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 345,
        '\t', 540,
        ' ', 540,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'E', 466,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 346,
        '\t', 540,
        ' ', 540,
        '\n', 528,
        '\r', 528,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'E', 468,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 347,
        '\t', 540,
        ' ', 540,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'E', 468,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 348,
        '\t', 540,
        ' ', 540,
        '\n', 528,
        '\r', 528,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'E', 461,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 349,
        '\t', 540,
        ' ', 540,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'E', 461,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 350,
        '\t', 540,
        ' ', 540,
        '\n', 528,
        '\r', 528,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'L', 477,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 353,
        '\t', 540,
        ' ', 540,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'L', 477,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 354,
        '\t', 540,
        ' ', 540,
        '\n', 528,
        '\r', 528,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 355,
        '\t', 540,
        ' ', 540,
        '\n', 528,
        '\r', 528,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 411,
        '_', 356,
        '\t', 540,
        ' ', 540,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 411,
        '_', 357,
        '\t', 540,
        ' ', 540,
        '\n', 528,
        '\r', 528,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'N', 407,
        'T', 491,
        'W', 423,
        '_', 358,
        '\t', 540,
        ' ', 540,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'N', 407,
        'T', 491,
        'W', 423,
        '_', 359,
        '\t', 540,
        ' ', 540,
        '\n', 528,
        '\r', 528,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '&', 309,
        '\'', 217,
        '(', 241,
        '*', 305,
        '+', 303,
        ',', 250,
        '-', 304,
        '.', 302,
        '/', 306,
        ':', 31,
        '<', 317,
        '=', 527,
        '>', 318,
        'A', 184,
        'E', 154,
        'M', 158,
        'S', 197,
        'X', 161,
      );
      if (lookahead == '_') SKIP(22);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(528);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '&', 309,
        '\'', 217,
        '(', 241,
        '*', 305,
        '+', 303,
        ',', 250,
        '-', 304,
        '.', 302,
        '/', 306,
        ':', 31,
        '<', 317,
        '=', 527,
        '>', 318,
        'A', 184,
        'E', 154,
        'M', 158,
        'S', 197,
        'X', 161,
      );
      if (lookahead == '_') SKIP(22);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(539);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '&', 309,
        '\'', 217,
        '(', 30,
        ')', 242,
        '*', 305,
        '+', 303,
        ',', 250,
        '-', 304,
        '.', 302,
        '/', 306,
        '<', 317,
        '=', 527,
        '>', 318,
        'M', 158,
        'T', 105,
        'X', 161,
      );
      if (lookahead == '_') SKIP(24);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '&', 309,
        '\'', 217,
        '(', 30,
        ')', 242,
        '*', 305,
        '+', 303,
        ',', 250,
        '-', 304,
        '.', 302,
        '/', 306,
        '<', 317,
        '=', 527,
        '>', 318,
        'M', 158,
        'T', 105,
        'X', 161,
      );
      if (lookahead == '_') SKIP(24);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '&', 309,
        '\'', 217,
        '(', 30,
        '*', 305,
        '+', 303,
        ',', 250,
        '-', 304,
        '.', 302,
        '/', 306,
        '<', 317,
        '=', 527,
        '>', 318,
        'M', 158,
        'S', 197,
        'X', 161,
      );
      if (lookahead == '_') SKIP(26);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(528);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '&', 309,
        '\'', 217,
        '(', 30,
        '*', 305,
        '+', 303,
        ',', 250,
        '-', 304,
        '.', 302,
        '/', 306,
        '<', 317,
        '=', 527,
        '>', 318,
        'M', 158,
        'S', 197,
        'X', 161,
      );
      if (lookahead == '_') SKIP(26);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(539);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\'', 217,
        ')', 242,
        'B', 524,
        'O', 484,
        'P', 379,
        '_', 342,
        '\t', 540,
        ' ', 540,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == '_') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead == '_') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(299);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(325);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(180);
      END_STATE();
    case 33:
      if (lookahead == 'F') ADVANCE(205);
      END_STATE();
    case 34:
      if (lookahead == 'F') ADVANCE(205);
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(203);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 36:
      if (lookahead == 'R') ADVANCE(74);
      if (lookahead == 'V') ADVANCE(47);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(203);
      END_STATE();
    case 38:
      if (lookahead == 'S') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(239);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(243);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 'm') ADVANCE(247);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(307);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(259);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(223);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(287);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 121:
      if (lookahead == 'j') ADVANCE(94);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 206:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 207:
      if (lookahead == 'w') ADVANCE(300);
      if (lookahead == 'x') ADVANCE(189);
      END_STATE();
    case 208:
      if (lookahead == 'y') ADVANCE(265);
      END_STATE();
    case 209:
      if (lookahead == 'y') ADVANCE(273);
      END_STATE();
    case 210:
      if (lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 211:
      if (lookahead == 'y') ADVANCE(263);
      END_STATE();
    case 212:
      if (eof) ADVANCE(215);
      ADVANCE_MAP(
        '"', 328,
        '&', 309,
        '\'', 217,
        '(', 241,
        ')', 242,
        '*', 305,
        '+', 303,
        ',', 250,
        '-', 304,
        '.', 302,
        '/', 306,
        ':', 31,
        '<', 317,
        '=', 527,
        '>', 318,
        'A', 122,
        'B', 159,
        'C', 39,
        'D', 40,
        'E', 123,
        'F', 41,
        'I', 96,
        'L', 107,
        'M', 158,
        'N', 73,
        'O', 56,
        'P', 45,
        'S', 112,
        'T', 106,
        'U', 149,
        'V', 48,
        'W', 93,
        'X', 161,
      );
      if (lookahead == '_') SKIP(212);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 213:
      if (eof) ADVANCE(215);
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'F', 367,
        'I', 416,
        'N', 397,
        'P', 485,
        'S', 515,
        'T', 491,
        'W', 423,
        '_', 351,
        '\t', 540,
        ' ', 540,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 214:
      if (eof) ADVANCE(215);
      ADVANCE_MAP(
        '"', 328,
        '\'', 217,
        '(', 241,
        '-', 304,
        'C', 366,
        'D', 424,
        'F', 367,
        'I', 416,
        'N', 397,
        'P', 485,
        'S', 515,
        'T', 491,
        'W', 423,
        '_', 352,
        '\t', 540,
        ' ', 540,
        '\n', 528,
        '\r', 528,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_If);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_If);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_Then);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_Else);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_Else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_EndIf);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_For);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_For);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_To);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_Step);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_Next);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_While);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_While);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_Wend);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_Wend);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_Do);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_Loop);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Until);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Sub);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_Sub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_EndSub);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_Function);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_Function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_EndFunction);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_Dim);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_Dim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_As);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Private);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_Private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_Declare);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_PtrSafe);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Lib);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_ByVal);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_ByVal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ByRef);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_ByRef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_Optional);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_Optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_ParamArray);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_ParamArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_Any);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_Any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_Byte);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_Byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_Collection);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_Collection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_Currency);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_Currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Date);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Date);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_Decimal);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_Decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Integer);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_Long);
      if (lookahead == 'L') ADVANCE(164);
      if (lookahead == 'P') ADVANCE(195);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_Long);
      if (lookahead == 'L') ADVANCE(480);
      if (lookahead == 'P') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LongLong);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LongLong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LongPtr);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LongPtr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_Object);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_Object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_Single);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_Single);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_Variant);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_Variant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_New);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_New);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_Mod);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_Mod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_Xor);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_Xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(319);
      if (lookahead == '>') ADVANCE(316);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(320);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_Not);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_Not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_Call);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_Call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'A', 454,
        'B', 474,
        'C', 365,
        'D', 381,
        'F', 369,
        'I', 469,
        'L', 476,
        'N', 397,
        'O', 383,
        'S', 430,
        'T', 491,
        'V', 380,
        '_', 340,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('E' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(524);
      if (lookahead == 'O') ADVANCE(484);
      if (lookahead == 'P') ADVANCE(379);
      if (lookahead == '_') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'E', 446,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 343,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'E', 446,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 344,
        '\n', 532,
        '\r', 532,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'E', 466,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 345,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'E', 466,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 346,
        '\n', 535,
        '\r', 535,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'E', 468,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 347,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'E', 468,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 348,
        '\n', 537,
        '\r', 537,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'E', 461,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 349,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'E', 461,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 350,
        '\n', 538,
        '\r', 538,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'F', 367,
        'I', 416,
        'N', 397,
        'P', 485,
        'S', 515,
        'T', 491,
        'W', 423,
        '_', 351,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'F', 367,
        'I', 416,
        'N', 397,
        'P', 485,
        'S', 515,
        'T', 491,
        'W', 423,
        '_', 352,
        '\n', 531,
        '\r', 531,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'L', 477,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 353,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'L', 477,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 354,
        '\n', 533,
        '\r', 533,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 423,
        '_', 355,
        '\n', 530,
        '\r', 530,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 411,
        '_', 356,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'N', 397,
        'T', 491,
        'W', 411,
        '_', 357,
        '\n', 534,
        '\r', 534,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'N', 407,
        'T', 491,
        'W', 423,
        '_', 358,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'D', 424,
        'F', 368,
        'I', 416,
        'N', 407,
        'T', 491,
        'W', 423,
        '_', 359,
        '\n', 536,
        '\r', 536,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'C', 366,
        'F', 369,
        'M', 471,
        'N', 397,
        'T', 491,
        'X', 478,
        '_', 360,
        'a', 459,
        'o', 489,
        '\n', 529,
        '\r', 529,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == 'F') ADVANCE(369);
      if (lookahead == 'N') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(491);
      if (lookahead == '_') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(366);
      if (lookahead == '_') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'V') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == 'u') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'o') ADVANCE(486);
      if (lookahead == 'u') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'o') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(509);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == 'o') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == 'o') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'h') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(458);
      if (lookahead == 't') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(475);
      if (lookahead == 'y') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(301);
      if (lookahead == 'x') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__equal);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(355);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(352);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(344);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(354);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(357);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(346);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(535);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(359);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(348);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(539);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__horizontal_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(540);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 213},
  [2] = {.lex_state = 213},
  [3] = {.lex_state = 213},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 8},
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
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 214},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 214},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 25},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 21},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 21},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 21},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 21},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 21},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 21},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 15},
  [135] = {.lex_state = 18},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 21},
  [138] = {.lex_state = 18},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 18},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 20},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 15},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 21},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 20},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 20},
  [154] = {.lex_state = 21},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 21},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 21},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 21},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 21},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 27},
  [173] = {.lex_state = 27},
  [174] = {.lex_state = 27},
  [175] = {.lex_state = 27},
  [176] = {.lex_state = 27},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 21},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 29},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 21},
  [183] = {.lex_state = 21},
  [184] = {.lex_state = 21},
  [185] = {.lex_state = 25},
  [186] = {.lex_state = 23},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 23},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 21},
  [191] = {.lex_state = 25},
  [192] = {.lex_state = 25},
  [193] = {.lex_state = 21},
  [194] = {.lex_state = 21},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 21},
  [197] = {.lex_state = 23},
  [198] = {.lex_state = 23},
  [199] = {.lex_state = 28},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 21},
  [202] = {.lex_state = 28},
  [203] = {.lex_state = 23},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 21},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 25},
  [210] = {.lex_state = 28},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 21},
  [213] = {.lex_state = 21},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 21},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 21},
  [219] = {.lex_state = 21},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 21},
  [223] = {.lex_state = 21},
  [224] = {.lex_state = 29},
  [225] = {.lex_state = 29},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 21},
  [229] = {.lex_state = 21},
  [230] = {.lex_state = 21},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 21},
  [233] = {.lex_state = 29},
  [234] = {.lex_state = 21},
  [235] = {.lex_state = 21},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 29},
  [238] = {.lex_state = 21},
  [239] = {.lex_state = 21},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 21},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 29},
  [244] = {.lex_state = 21},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 29},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 21},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 21},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 29},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 21},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 21},
  [260] = {.lex_state = 21},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 29},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 21},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 21},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 21},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 21},
  [277] = {.lex_state = 21},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 29},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 29},
  [283] = {.lex_state = 330},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 29},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 21},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 21},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 29},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 21},
  [298] = {.lex_state = 21},
  [299] = {.lex_state = 21},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 21},
  [302] = {.lex_state = 330},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 29},
  [306] = {.lex_state = 21},
  [307] = {.lex_state = 330},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 29},
  [311] = {.lex_state = 29},
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
    [anon_sym_New] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_Mod] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_Xor] = ACTIONS(1),
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
    [sym_source_file] = STATE(280),
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
    [sym__expression] = STATE(7),
    [sym_new_expression] = STATE(7),
    [sym_member_expression] = STATE(7),
    [sym_binary_expression] = STATE(7),
    [sym_unary_expression] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_array_element] = STATE(275),
    [sym_literal] = STATE(7),
    [sym_string_literal] = STATE(49),
    [sym_boolean] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [anon_sym_New] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_Not] = ACTIONS(29),
    [anon_sym_Call] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_True] = ACTIONS(37),
    [anon_sym_False] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym__horizontal_whitespace] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
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
    ACTIONS(70), 1,
      anon_sym_New,
    ACTIONS(76), 1,
      anon_sym_Call,
    ACTIONS(79), 1,
      sym_number,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(73), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(85), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
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
  [91] = 23,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
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
  [182] = 16,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(169), 1,
      sym_member_expression,
    STATE(188), 1,
      sym_type,
    STATE(198), 1,
      sym_type_member_expression,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
      sym_string_literal,
      sym_boolean,
    STATE(197), 2,
      sym_type_terminal,
      sym_array_type,
    STATE(170), 6,
      sym__expression,
      sym_new_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    ACTIONS(95), 17,
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
      anon_sym_Long,
      anon_sym_LongLong,
      anon_sym_LongPtr,
      anon_sym_Object,
      anon_sym_Single,
      anon_sym_String,
      anon_sym_Variant,
  [257] = 16,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(168), 1,
      sym_member_expression,
    STATE(185), 1,
      sym_type_member_expression,
    STATE(191), 1,
      sym_type,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
      sym_string_literal,
      sym_boolean,
    STATE(192), 2,
      sym_type_terminal,
      sym_array_type,
    STATE(170), 6,
      sym__expression,
      sym_new_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    ACTIONS(111), 17,
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
      anon_sym_Long,
      anon_sym_LongLong,
      anon_sym_LongPtr,
      anon_sym_Object,
      anon_sym_Single,
      anon_sym_String,
      anon_sym_Variant,
  [332] = 16,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(169), 1,
      sym_member_expression,
    STATE(198), 1,
      sym_type_member_expression,
    STATE(203), 1,
      sym_type,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
      sym_string_literal,
      sym_boolean,
    STATE(197), 2,
      sym_type_terminal,
      sym_array_type,
    STATE(170), 6,
      sym__expression,
      sym_new_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    ACTIONS(95), 17,
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
      anon_sym_Long,
      anon_sym_LongLong,
      anon_sym_LongPtr,
      anon_sym_Object,
      anon_sym_Single,
      anon_sym_String,
      anon_sym_Variant,
  [407] = 20,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(129), 1,
      anon_sym_Not,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      aux_sym__whitespace_token1,
    STATE(196), 1,
      sym_argument,
    STATE(234), 1,
      sym_keyword_argument,
    STATE(259), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
      sym_string_literal,
      sym_boolean,
    ACTIONS(125), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    STATE(147), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    ACTIONS(127), 10,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [488] = 22,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(143), 1,
      aux_sym__whitespace_token1,
    STATE(23), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(148), 1,
      aux_sym__whitespace,
    STATE(275), 1,
      sym_array_element,
    STATE(292), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(229), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [572] = 22,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(145), 1,
      aux_sym__whitespace_token1,
    STATE(21), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(144), 1,
      aux_sym__whitespace,
    STATE(254), 1,
      sym__inline_statement_block,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(239), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [656] = 22,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__whitespace_token1,
    STATE(28), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(145), 1,
      aux_sym__whitespace,
    STATE(275), 1,
      sym_array_element,
    STATE(290), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(228), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [740] = 22,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(149), 1,
      aux_sym__whitespace_token1,
    STATE(31), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(190), 1,
      aux_sym__whitespace,
    STATE(275), 1,
      sym_array_element,
    STATE(294), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(230), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [824] = 22,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(143), 1,
      aux_sym__whitespace_token1,
    STATE(23), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(148), 1,
      aux_sym__whitespace,
    STATE(266), 1,
      sym__inline_statement_block,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(229), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [908] = 22,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__whitespace_token1,
    STATE(28), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(145), 1,
      aux_sym__whitespace,
    STATE(275), 1,
      sym_array_element,
    STATE(308), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(228), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [992] = 22,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(151), 1,
      aux_sym__whitespace_token1,
    STATE(29), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(150), 1,
      aux_sym__whitespace,
    STATE(248), 1,
      sym__inline_statement_block,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(232), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1076] = 22,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(143), 1,
      aux_sym__whitespace_token1,
    STATE(23), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(148), 1,
      aux_sym__whitespace,
    STATE(275), 1,
      sym_array_element,
    STATE(303), 1,
      sym__inline_statement_block,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(229), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1160] = 22,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(153), 1,
      aux_sym__whitespace_token1,
    STATE(20), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(96), 1,
      aux_sym__whitespace,
    STATE(217), 1,
      sym__inline_statement_block,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(222), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1244] = 22,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(151), 1,
      aux_sym__whitespace_token1,
    STATE(29), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(150), 1,
      aux_sym__whitespace,
    STATE(274), 1,
      sym__inline_statement_block,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(232), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1328] = 22,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(155), 1,
      aux_sym__whitespace_token1,
    STATE(26), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(135), 1,
      aux_sym__whitespace,
    STATE(252), 1,
      sym__inline_statement_block,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(213), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1412] = 20,
    ACTIONS(157), 1,
      anon_sym_If,
    ACTIONS(162), 1,
      anon_sym_For,
    ACTIONS(165), 1,
      anon_sym_While,
    ACTIONS(168), 1,
      anon_sym_Do,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_Dim,
    ACTIONS(177), 1,
      anon_sym_New,
    ACTIONS(183), 1,
      anon_sym_Call,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(19), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(160), 2,
      anon_sym_Else,
      anon_sym_EndIf,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(192), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(222), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1491] = 20,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(19), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(198), 2,
      anon_sym_Else,
      anon_sym_EndIf,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(222), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1570] = 20,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_Loop,
    STATE(24), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(239), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1648] = 20,
    ACTIONS(157), 1,
      anon_sym_If,
    ACTIONS(160), 1,
      anon_sym_Wend,
    ACTIONS(162), 1,
      anon_sym_For,
    ACTIONS(165), 1,
      anon_sym_While,
    ACTIONS(168), 1,
      anon_sym_Do,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_Dim,
    ACTIONS(177), 1,
      anon_sym_New,
    ACTIONS(183), 1,
      anon_sym_Call,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(192), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(213), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1726] = 20,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_EndFunction,
    STATE(32), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(229), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1804] = 20,
    ACTIONS(157), 1,
      anon_sym_If,
    ACTIONS(160), 1,
      anon_sym_Loop,
    ACTIONS(162), 1,
      anon_sym_For,
    ACTIONS(165), 1,
      anon_sym_While,
    ACTIONS(168), 1,
      anon_sym_Do,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_Dim,
    ACTIONS(177), 1,
      anon_sym_New,
    ACTIONS(183), 1,
      anon_sym_Call,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(192), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(239), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1882] = 20,
    ACTIONS(157), 1,
      anon_sym_If,
    ACTIONS(160), 1,
      anon_sym_Next,
    ACTIONS(162), 1,
      anon_sym_For,
    ACTIONS(165), 1,
      anon_sym_While,
    ACTIONS(168), 1,
      anon_sym_Do,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_Dim,
    ACTIONS(177), 1,
      anon_sym_New,
    ACTIONS(183), 1,
      anon_sym_Call,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(192), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(232), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [1960] = 20,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_Wend,
    STATE(22), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(213), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [2038] = 20,
    ACTIONS(157), 1,
      anon_sym_If,
    ACTIONS(160), 1,
      anon_sym_EndSub,
    ACTIONS(162), 1,
      anon_sym_For,
    ACTIONS(165), 1,
      anon_sym_While,
    ACTIONS(168), 1,
      anon_sym_Do,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_Dim,
    ACTIONS(177), 1,
      anon_sym_New,
    ACTIONS(183), 1,
      anon_sym_Call,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(192), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(228), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [2116] = 20,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_EndSub,
    STATE(27), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(228), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [2194] = 20,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_Next,
    STATE(25), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(232), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [2272] = 20,
    ACTIONS(157), 1,
      anon_sym_If,
    ACTIONS(160), 1,
      anon_sym_EndIf,
    ACTIONS(162), 1,
      anon_sym_For,
    ACTIONS(165), 1,
      anon_sym_While,
    ACTIONS(168), 1,
      anon_sym_Do,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_Dim,
    ACTIONS(177), 1,
      anon_sym_New,
    ACTIONS(183), 1,
      anon_sym_Call,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(30), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(192), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(230), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [2350] = 20,
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
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_EndIf,
    STATE(30), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(230), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [2428] = 20,
    ACTIONS(157), 1,
      anon_sym_If,
    ACTIONS(160), 1,
      anon_sym_EndFunction,
    ACTIONS(162), 1,
      anon_sym_For,
    ACTIONS(165), 1,
      anon_sym_While,
    ACTIONS(168), 1,
      anon_sym_Do,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_Dim,
    ACTIONS(177), 1,
      anon_sym_New,
    ACTIONS(183), 1,
      anon_sym_Call,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(32), 1,
      aux_sym__inline_statement_block_repeat1,
    STATE(275), 1,
      sym_array_element,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(192), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(7), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
    STATE(229), 8,
      sym__inline_statement,
      sym_variable_assignment,
      sym_invocation_statement,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_do_statement,
      sym_variable_declaration,
  [2506] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 27,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [2540] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(202), 27,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [2574] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(204), 27,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [2608] = 3,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(206), 26,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [2644] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(204), 27,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [2678] = 5,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(125), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(206), 21,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [2718] = 6,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(125), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(127), 10,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
    ACTIONS(208), 11,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2760] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(210), 27,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [2794] = 3,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 26,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [2830] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(216), 27,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [2864] = 4,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(125), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(206), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [2902] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(218), 27,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [2936] = 3,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(218), 26,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [2972] = 5,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(125), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(206), 22,
      anon_sym_LPAREN,
      anon_sym_New,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [3012] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 27,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [3046] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(222), 27,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [3080] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(224), 27,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [3114] = 2,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(226), 27,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [3148] = 4,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 24,
      anon_sym_New,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
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
  [3185] = 15,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(234), 1,
      sym_identifier,
    STATE(208), 1,
      sym_argument,
    STATE(211), 1,
      sym_keyword_argument,
    STATE(285), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
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
  [3241] = 15,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_argument,
    STATE(211), 1,
      sym_keyword_argument,
    STATE(295), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
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
  [3297] = 15,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_argument,
    STATE(211), 1,
      sym_keyword_argument,
    STATE(264), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
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
  [3353] = 15,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_argument,
    STATE(211), 1,
      sym_keyword_argument,
    STATE(278), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
      sym_string_literal,
      sym_boolean,
    STATE(143), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [3409] = 15,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_argument,
    STATE(211), 1,
      sym_keyword_argument,
    STATE(284), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
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
  [3465] = 15,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_argument,
    STATE(211), 1,
      sym_keyword_argument,
    STATE(278), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
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
  [3521] = 15,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_argument,
    STATE(211), 1,
      sym_keyword_argument,
    STATE(296), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
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
  [3577] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 20,
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
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3608] = 4,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(248), 18,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3640] = 13,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      sym_identifier,
    STATE(211), 1,
      sym_keyword_argument,
    STATE(227), 1,
      sym_argument,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
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
  [3690] = 13,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(219), 1,
      sym_argument,
    STATE(234), 1,
      sym_keyword_argument,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
      sym_string_literal,
      sym_boolean,
    STATE(147), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [3740] = 5,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 1,
      aux_sym__whitespace_token1,
    STATE(65), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(252), 18,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_Sub,
      anon_sym_LPAREN,
      anon_sym_Function,
      anon_sym_Dim,
      anon_sym_Private,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3774] = 4,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 18,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3806] = 5,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    STATE(65), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(260), 18,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_Sub,
      anon_sym_LPAREN,
      anon_sym_Function,
      anon_sym_Dim,
      anon_sym_Private,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3840] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 19,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3870] = 4,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 18,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3902] = 7,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(269), 4,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(277), 8,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3939] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 18,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [3968] = 13,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(37), 1,
      sym_type_member_expression,
    STATE(171), 1,
      sym_member_expression,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
      sym_string_literal,
      sym_boolean,
    STATE(170), 6,
      sym__expression,
      sym_new_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4017] = 5,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(206), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(283), 14,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4050] = 4,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(206), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(283), 17,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4081] = 6,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(206), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(283), 12,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4116] = 5,
    ACTIONS(256), 1,
      aux_sym__whitespace_token1,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_COLON_EQ,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 17,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4149] = 5,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4182] = 13,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(82), 1,
      sym_type_member_expression,
    STATE(169), 1,
      sym_member_expression,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
      sym_string_literal,
      sym_boolean,
    STATE(170), 6,
      sym__expression,
      sym_new_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4231] = 4,
    ACTIONS(267), 1,
      aux_sym__whitespace_token1,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(218), 18,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4262] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(216), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 18,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4291] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(295), 18,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4320] = 3,
    ACTIONS(265), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(226), 19,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4349] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(297), 18,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4378] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(248), 18,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4407] = 13,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(101), 1,
      sym_type_member_expression,
    STATE(168), 1,
      sym_member_expression,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
      sym_string_literal,
      sym_boolean,
    STATE(170), 6,
      sym__expression,
      sym_new_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4456] = 4,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(204), 18,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4487] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(303), 18,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4516] = 4,
    ACTIONS(256), 1,
      aux_sym__whitespace_token1,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 18,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4547] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(305), 18,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4576] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(202), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 18,
      anon_sym_Then,
      anon_sym_To,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4605] = 3,
    ACTIONS(267), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(218), 18,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4633] = 11,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
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
  [4677] = 11,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
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
  [4721] = 3,
    ACTIONS(297), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(220), 18,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4749] = 3,
    ACTIONS(246), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(222), 18,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4777] = 3,
    ACTIONS(307), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(202), 18,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [4805] = 11,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
      sym_string_literal,
      sym_boolean,
    STATE(156), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4849] = 5,
    ACTIONS(313), 1,
      aux_sym__whitespace_token1,
    STATE(109), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(198), 2,
      anon_sym_Else,
      anon_sym_EndIf,
    ACTIONS(260), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4881] = 11,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
      sym_string_literal,
      sym_boolean,
    STATE(120), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4925] = 11,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
      sym_string_literal,
      sym_boolean,
    STATE(118), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [4969] = 11,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
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
  [5013] = 7,
    ACTIONS(269), 1,
      aux_sym__whitespace_token1,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(208), 2,
      anon_sym_Step,
      anon_sym_COMMA,
    ACTIONS(318), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(322), 10,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5049] = 3,
    ACTIONS(248), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(204), 18,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5077] = 11,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
      sym_string_literal,
      sym_boolean,
    STATE(158), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5121] = 11,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
      sym_string_literal,
      sym_boolean,
    STATE(157), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5165] = 3,
    ACTIONS(303), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(200), 18,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5193] = 3,
    ACTIONS(305), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(224), 18,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5221] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(43), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5265] = 11,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
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
  [5309] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(46), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5353] = 4,
    ACTIONS(313), 1,
      aux_sym__whitespace_token1,
    STATE(109), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(260), 17,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_EndIf,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [5383] = 11,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
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
  [5427] = 11,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
      sym_string_literal,
      sym_boolean,
    STATE(68), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5471] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean,
    STATE(39), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5515] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
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
  [5559] = 11,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
      sym_string_literal,
      sym_boolean,
    STATE(139), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5603] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_New,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(37), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 2,
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
  [5647] = 5,
    ACTIONS(283), 1,
      aux_sym__whitespace_token1,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(206), 14,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5679] = 11,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
      sym_string_literal,
      sym_boolean,
    STATE(132), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5723] = 4,
    ACTIONS(283), 1,
      aux_sym__whitespace_token1,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(206), 17,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5753] = 11,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
      sym_string_literal,
      sym_boolean,
    STATE(160), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5797] = 6,
    ACTIONS(283), 1,
      aux_sym__whitespace_token1,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(318), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(206), 12,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5831] = 4,
    ACTIONS(326), 1,
      aux_sym__whitespace_token1,
    STATE(109), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(160), 17,
      anon_sym_If,
      anon_sym_Else,
      anon_sym_EndIf,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [5861] = 11,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
      sym_string_literal,
      sym_boolean,
    STATE(167), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5905] = 11,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
      sym_string_literal,
      sym_boolean,
    STATE(163), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [5949] = 3,
    ACTIONS(293), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(216), 18,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [5977] = 11,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
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
  [6021] = 11,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
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
  [6065] = 3,
    ACTIONS(295), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(210), 18,
      anon_sym_Step,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6093] = 11,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
      sym_string_literal,
      sym_boolean,
    STATE(162), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [6137] = 11,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_New,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(129), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(137), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(105), 2,
      sym_string_literal,
      sym_boolean,
    STATE(154), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [6181] = 11,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
      sym_string_literal,
      sym_boolean,
    STATE(161), 7,
      sym__expression,
      sym_new_expression,
      sym_member_expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_function_call,
      sym_literal,
  [6225] = 11,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_New,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(99), 2,
      anon_sym_DASH,
      anon_sym_Not,
    ACTIONS(107), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 2,
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
  [6269] = 8,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_Step,
    ACTIONS(330), 1,
      aux_sym__whitespace_token1,
    STATE(17), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(318), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(322), 10,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6307] = 4,
    ACTIONS(332), 1,
      aux_sym__whitespace_token1,
    STATE(151), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(160), 16,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_EndFunction,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6336] = 4,
    ACTIONS(334), 1,
      aux_sym__whitespace_token1,
    STATE(134), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(260), 16,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_Loop,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6365] = 5,
    ACTIONS(198), 1,
      anon_sym_Wend,
    ACTIONS(337), 1,
      aux_sym__whitespace_token1,
    STATE(138), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(260), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6396] = 7,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(277), 8,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6431] = 7,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(318), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(322), 10,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6466] = 4,
    ACTIONS(337), 1,
      aux_sym__whitespace_token1,
    STATE(138), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(260), 16,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Wend,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6495] = 7,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(344), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(277), 8,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6530] = 4,
    ACTIONS(346), 1,
      aux_sym__whitespace_token1,
    STATE(138), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(160), 16,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Wend,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6559] = 4,
    ACTIONS(348), 1,
      aux_sym__whitespace_token1,
    STATE(134), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(160), 16,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_Loop,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6588] = 4,
    ACTIONS(350), 1,
      aux_sym__whitespace_token1,
    STATE(142), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(260), 16,
      anon_sym_If,
      anon_sym_For,
      anon_sym_Next,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6617] = 8,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(277), 8,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6654] = 5,
    ACTIONS(198), 1,
      anon_sym_Loop,
    ACTIONS(334), 1,
      aux_sym__whitespace_token1,
    STATE(134), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(260), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6685] = 5,
    ACTIONS(198), 1,
      anon_sym_EndSub,
    ACTIONS(355), 1,
      aux_sym__whitespace_token1,
    STATE(149), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(260), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6716] = 4,
    ACTIONS(358), 1,
      aux_sym__whitespace_token1,
    STATE(149), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(160), 16,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_EndSub,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6745] = 7,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(340), 1,
      aux_sym__whitespace_token1,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(318), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(322), 10,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6780] = 5,
    ACTIONS(198), 1,
      anon_sym_EndFunction,
    ACTIONS(362), 1,
      aux_sym__whitespace_token1,
    STATE(151), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(260), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6811] = 4,
    ACTIONS(355), 1,
      aux_sym__whitespace_token1,
    STATE(149), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(260), 16,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_EndSub,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6840] = 5,
    ACTIONS(198), 1,
      anon_sym_Next,
    ACTIONS(350), 1,
      aux_sym__whitespace_token1,
    STATE(142), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(260), 15,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6871] = 4,
    ACTIONS(362), 1,
      aux_sym__whitespace_token1,
    STATE(151), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(260), 16,
      anon_sym_If,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_EndFunction,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6900] = 4,
    ACTIONS(365), 1,
      aux_sym__whitespace_token1,
    STATE(155), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(160), 16,
      anon_sym_If,
      anon_sym_EndIf,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6929] = 4,
    ACTIONS(367), 1,
      aux_sym__whitespace_token1,
    STATE(142), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(160), 16,
      anon_sym_If,
      anon_sym_For,
      anon_sym_Next,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [6958] = 7,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(369), 1,
      aux_sym__whitespace_token1,
    STATE(18), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(318), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(322), 10,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [6993] = 4,
    ACTIONS(371), 1,
      aux_sym__whitespace_token1,
    STATE(155), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(260), 16,
      anon_sym_If,
      anon_sym_EndIf,
      anon_sym_For,
      anon_sym_While,
      anon_sym_Do,
      anon_sym_LPAREN,
      anon_sym_Dim,
      anon_sym_New,
      anon_sym_DASH,
      anon_sym_Not,
      anon_sym_Call,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [7022] = 7,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      aux_sym__whitespace_token1,
    STATE(14), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(318), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(322), 10,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7057] = 6,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(318), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(322), 10,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7089] = 7,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_To,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(277), 8,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7123] = 5,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7153] = 6,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(318), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(322), 10,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7185] = 7,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(277), 8,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7219] = 7,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(277), 8,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7253] = 7,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      anon_sym_Then,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(277), 8,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7287] = 6,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(390), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(318), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(322), 10,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7319] = 7,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(277), 8,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7353] = 5,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7383] = 6,
    ACTIONS(316), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(318), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(322), 10,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7415] = 4,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7442] = 4,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7469] = 6,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(273), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
    ACTIONS(277), 8,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7500] = 4,
    ACTIONS(398), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_Mod,
      anon_sym_AMP,
      anon_sym_and,
      anon_sym_or,
      anon_sym_Xor,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__equal,
  [7527] = 8,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(404), 1,
      sym_identifier,
    STATE(187), 1,
      sym_parameter,
    STATE(189), 1,
      sym_new_identifier,
    STATE(237), 1,
      sym_modifier,
    STATE(249), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(402), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [7556] = 8,
    ACTIONS(404), 1,
      sym_identifier,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_parameter,
    STATE(189), 1,
      sym_new_identifier,
    STATE(237), 1,
      sym_modifier,
    STATE(258), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(402), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [7585] = 8,
    ACTIONS(404), 1,
      sym_identifier,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_parameter,
    STATE(189), 1,
      sym_new_identifier,
    STATE(237), 1,
      sym_modifier,
    STATE(256), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(402), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [7614] = 8,
    ACTIONS(404), 1,
      sym_identifier,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_parameter,
    STATE(189), 1,
      sym_new_identifier,
    STATE(237), 1,
      sym_modifier,
    STATE(300), 1,
      sym_parameter_list,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(402), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [7643] = 6,
    ACTIONS(404), 1,
      sym_identifier,
    STATE(189), 1,
      sym_new_identifier,
    STATE(216), 1,
      sym_parameter,
    STATE(237), 1,
      sym_modifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(402), 4,
      anon_sym_ByVal,
      anon_sym_ByRef,
      anon_sym_Optional,
      anon_sym_ParamArray,
  [7666] = 7,
    ACTIONS(412), 1,
      anon_sym_As,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      sym__equal,
    ACTIONS(418), 1,
      aux_sym__whitespace_token1,
    STATE(178), 1,
      aux_sym_variable_list_repeat1,
    STATE(244), 1,
      sym_type_definition,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7689] = 6,
    ACTIONS(412), 1,
      anon_sym_As,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      aux_sym__whitespace_token1,
    STATE(184), 1,
      aux_sym_variable_list_repeat1,
    STATE(260), 1,
      sym_type_definition,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7709] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(422), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_As,
      anon_sym_COMMA,
      anon_sym_Lib,
  [7721] = 4,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(177), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    STATE(267), 2,
      sym__variable_declaration_assignment,
      sym_variable_list,
  [7736] = 5,
    ACTIONS(412), 1,
      anon_sym_As,
    ACTIONS(426), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__whitespace,
    STATE(223), 1,
      sym_type_definition,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7753] = 5,
    ACTIONS(412), 1,
      anon_sym_As,
    ACTIONS(428), 1,
      aux_sym__whitespace_token1,
    STATE(15), 1,
      aux_sym__whitespace,
    STATE(218), 1,
      sym_type_definition,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7770] = 3,
    ACTIONS(422), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(430), 3,
      anon_sym_As,
      anon_sym_COMMA,
      sym__equal,
  [7783] = 5,
    ACTIONS(432), 1,
      anon_sym_As,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      aux_sym__whitespace_token1,
    STATE(184), 1,
      aux_sym_variable_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7800] = 3,
    ACTIONS(441), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(439), 2,
      anon_sym_LPAREN_RPAREN,
      sym__equal,
  [7812] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(443), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
  [7822] = 4,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7836] = 3,
    ACTIONS(451), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(449), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7848] = 3,
    ACTIONS(455), 1,
      anon_sym_As,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(453), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7860] = 4,
    ACTIONS(198), 1,
      anon_sym_EndIf,
    ACTIONS(457), 1,
      aux_sym__whitespace_token1,
    STATE(205), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7874] = 4,
    ACTIONS(459), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(461), 1,
      sym__equal,
    ACTIONS(463), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7888] = 3,
    ACTIONS(467), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(465), 2,
      anon_sym_LPAREN_RPAREN,
      sym__equal,
  [7900] = 3,
    ACTIONS(437), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(432), 2,
      anon_sym_As,
      anon_sym_COMMA,
  [7912] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      aux_sym__whitespace_token1,
    STATE(201), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7926] = 4,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7940] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      aux_sym__whitespace_token1,
    STATE(194), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7954] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(467), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
  [7964] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(441), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
  [7974] = 4,
    ACTIONS(31), 1,
      anon_sym_Call,
    ACTIONS(480), 1,
      sym_identifier,
    STATE(44), 1,
      sym_function_call,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [7988] = 4,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8002] = 4,
    ACTIONS(473), 1,
      aux_sym__whitespace_token1,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8016] = 4,
    ACTIONS(131), 1,
      anon_sym_Call,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(89), 1,
      sym_function_call,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8030] = 3,
    ACTIONS(451), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(489), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8042] = 4,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8056] = 4,
    ACTIONS(260), 1,
      anon_sym_EndIf,
    ACTIONS(496), 1,
      aux_sym__whitespace_token1,
    STATE(205), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8070] = 4,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8084] = 3,
    ACTIONS(503), 1,
      anon_sym_As,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(501), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8096] = 4,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8110] = 3,
    ACTIONS(443), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(505), 2,
      anon_sym_LPAREN_RPAREN,
      sym__equal,
  [8122] = 4,
    ACTIONS(101), 1,
      anon_sym_Call,
    ACTIONS(507), 1,
      sym_identifier,
    STATE(69), 1,
      sym_function_call,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8136] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(340), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8145] = 3,
    ACTIONS(509), 1,
      aux_sym__whitespace_token1,
    STATE(63), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8156] = 3,
    ACTIONS(511), 1,
      aux_sym__whitespace_token1,
    STATE(140), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8167] = 3,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_Alias,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8178] = 3,
    ACTIONS(517), 1,
      aux_sym__whitespace_token1,
    STATE(13), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8189] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(491), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8198] = 3,
    ACTIONS(519), 1,
      anon_sym_Else,
    ACTIONS(521), 1,
      anon_sym_EndIf,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8209] = 3,
    ACTIONS(523), 1,
      aux_sym__whitespace_token1,
    STATE(12), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8220] = 3,
    ACTIONS(473), 1,
      aux_sym__whitespace_token1,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8231] = 3,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    STATE(214), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8242] = 3,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    STATE(251), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8253] = 3,
    ACTIONS(529), 1,
      aux_sym__whitespace_token1,
    STATE(121), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8264] = 3,
    ACTIONS(428), 1,
      aux_sym__whitespace_token1,
    STATE(15), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8275] = 3,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(268), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8286] = 3,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(281), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8297] = 3,
    ACTIONS(533), 1,
      anon_sym_As,
    STATE(297), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8308] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(473), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8317] = 3,
    ACTIONS(535), 1,
      aux_sym__whitespace_token1,
    STATE(146), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8328] = 3,
    ACTIONS(537), 1,
      aux_sym__whitespace_token1,
    STATE(133), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8339] = 3,
    ACTIONS(539), 1,
      aux_sym__whitespace_token1,
    STATE(152), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8350] = 3,
    ACTIONS(533), 1,
      anon_sym_As,
    STATE(298), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8361] = 3,
    ACTIONS(541), 1,
      aux_sym__whitespace_token1,
    STATE(153), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8372] = 3,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(271), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8383] = 3,
    ACTIONS(340), 1,
      aux_sym__whitespace_token1,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8394] = 3,
    ACTIONS(543), 1,
      aux_sym__whitespace_token1,
    STATE(16), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8405] = 3,
    ACTIONS(533), 1,
      anon_sym_As,
    STATE(301), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8416] = 3,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(207), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8427] = 3,
    ACTIONS(545), 1,
      aux_sym__whitespace_token1,
    STATE(9), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8438] = 3,
    ACTIONS(547), 1,
      aux_sym__whitespace_token1,
    STATE(141), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8449] = 3,
    ACTIONS(533), 1,
      anon_sym_As,
    STATE(306), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8460] = 3,
    ACTIONS(549), 1,
      aux_sym__whitespace_token1,
    STATE(10), 1,
      aux_sym__whitespace,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8471] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
    ACTIONS(551), 2,
      anon_sym_While,
      anon_sym_Until,
  [8480] = 3,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(193), 1,
      sym_new_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8491] = 3,
    ACTIONS(420), 1,
      aux_sym__whitespace_token1,
    ACTIONS(553), 1,
      sym__equal,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8502] = 2,
    ACTIONS(555), 1,
      anon_sym_Function,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8510] = 2,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8518] = 2,
    ACTIONS(559), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8526] = 2,
    ACTIONS(561), 1,
      anon_sym_Next,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8534] = 2,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8542] = 2,
    ACTIONS(565), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8550] = 2,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8558] = 2,
    ACTIONS(569), 1,
      anon_sym_Wend,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8566] = 2,
    ACTIONS(571), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8574] = 2,
    ACTIONS(573), 1,
      anon_sym_Loop,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8582] = 2,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8590] = 2,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8598] = 2,
    ACTIONS(579), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8606] = 2,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8614] = 2,
    ACTIONS(583), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8622] = 2,
    ACTIONS(585), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8630] = 2,
    ACTIONS(587), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8638] = 2,
    ACTIONS(589), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8646] = 2,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8654] = 2,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8662] = 2,
    ACTIONS(595), 1,
      anon_sym_PtrSafe,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8670] = 2,
    ACTIONS(597), 1,
      anon_sym_EndFunction,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8678] = 2,
    ACTIONS(599), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8686] = 2,
    ACTIONS(601), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8694] = 2,
    ACTIONS(603), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8702] = 2,
    ACTIONS(605), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8710] = 2,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8718] = 2,
    ACTIONS(609), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8726] = 2,
    ACTIONS(611), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8734] = 2,
    ACTIONS(613), 1,
      anon_sym_Next,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8742] = 2,
    ACTIONS(615), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8750] = 2,
    ACTIONS(617), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8758] = 2,
    ACTIONS(619), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8766] = 2,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8774] = 2,
    ACTIONS(623), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8782] = 2,
    ACTIONS(625), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8790] = 2,
    ACTIONS(627), 1,
      anon_sym_Lib,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8798] = 2,
    ACTIONS(629), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8806] = 2,
    ACTIONS(631), 1,
      aux_sym_string_literal_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8814] = 2,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8822] = 2,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8830] = 2,
    ACTIONS(637), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8838] = 2,
    ACTIONS(639), 1,
      anon_sym_Declare,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8846] = 2,
    ACTIONS(641), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8854] = 2,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8862] = 2,
    ACTIONS(645), 1,
      anon_sym_EndSub,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8870] = 2,
    ACTIONS(647), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8878] = 2,
    ACTIONS(649), 1,
      anon_sym_EndFunction,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8886] = 2,
    ACTIONS(651), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8894] = 2,
    ACTIONS(653), 1,
      anon_sym_EndIf,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8902] = 2,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8910] = 2,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8918] = 2,
    ACTIONS(659), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8926] = 2,
    ACTIONS(661), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8934] = 2,
    ACTIONS(663), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8942] = 2,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8950] = 2,
    ACTIONS(667), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8958] = 2,
    ACTIONS(669), 1,
      aux_sym_string_literal_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8966] = 2,
    ACTIONS(671), 1,
      anon_sym_EndFunction,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8974] = 2,
    ACTIONS(673), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8982] = 2,
    ACTIONS(675), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8990] = 2,
    ACTIONS(677), 1,
      aux_sym__whitespace_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [8998] = 2,
    ACTIONS(679), 1,
      aux_sym_string_literal_token1,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9006] = 2,
    ACTIONS(681), 1,
      anon_sym_EndSub,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9014] = 2,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9022] = 2,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
  [9030] = 2,
    ACTIONS(687), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_comment,
      sym__horizontal_whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 257,
  [SMALL_STATE(6)] = 332,
  [SMALL_STATE(7)] = 407,
  [SMALL_STATE(8)] = 488,
  [SMALL_STATE(9)] = 572,
  [SMALL_STATE(10)] = 656,
  [SMALL_STATE(11)] = 740,
  [SMALL_STATE(12)] = 824,
  [SMALL_STATE(13)] = 908,
  [SMALL_STATE(14)] = 992,
  [SMALL_STATE(15)] = 1076,
  [SMALL_STATE(16)] = 1160,
  [SMALL_STATE(17)] = 1244,
  [SMALL_STATE(18)] = 1328,
  [SMALL_STATE(19)] = 1412,
  [SMALL_STATE(20)] = 1491,
  [SMALL_STATE(21)] = 1570,
  [SMALL_STATE(22)] = 1648,
  [SMALL_STATE(23)] = 1726,
  [SMALL_STATE(24)] = 1804,
  [SMALL_STATE(25)] = 1882,
  [SMALL_STATE(26)] = 1960,
  [SMALL_STATE(27)] = 2038,
  [SMALL_STATE(28)] = 2116,
  [SMALL_STATE(29)] = 2194,
  [SMALL_STATE(30)] = 2272,
  [SMALL_STATE(31)] = 2350,
  [SMALL_STATE(32)] = 2428,
  [SMALL_STATE(33)] = 2506,
  [SMALL_STATE(34)] = 2540,
  [SMALL_STATE(35)] = 2574,
  [SMALL_STATE(36)] = 2608,
  [SMALL_STATE(37)] = 2644,
  [SMALL_STATE(38)] = 2678,
  [SMALL_STATE(39)] = 2718,
  [SMALL_STATE(40)] = 2760,
  [SMALL_STATE(41)] = 2794,
  [SMALL_STATE(42)] = 2830,
  [SMALL_STATE(43)] = 2864,
  [SMALL_STATE(44)] = 2902,
  [SMALL_STATE(45)] = 2936,
  [SMALL_STATE(46)] = 2972,
  [SMALL_STATE(47)] = 3012,
  [SMALL_STATE(48)] = 3046,
  [SMALL_STATE(49)] = 3080,
  [SMALL_STATE(50)] = 3114,
  [SMALL_STATE(51)] = 3148,
  [SMALL_STATE(52)] = 3185,
  [SMALL_STATE(53)] = 3241,
  [SMALL_STATE(54)] = 3297,
  [SMALL_STATE(55)] = 3353,
  [SMALL_STATE(56)] = 3409,
  [SMALL_STATE(57)] = 3465,
  [SMALL_STATE(58)] = 3521,
  [SMALL_STATE(59)] = 3577,
  [SMALL_STATE(60)] = 3608,
  [SMALL_STATE(61)] = 3640,
  [SMALL_STATE(62)] = 3690,
  [SMALL_STATE(63)] = 3740,
  [SMALL_STATE(64)] = 3774,
  [SMALL_STATE(65)] = 3806,
  [SMALL_STATE(66)] = 3840,
  [SMALL_STATE(67)] = 3870,
  [SMALL_STATE(68)] = 3902,
  [SMALL_STATE(69)] = 3939,
  [SMALL_STATE(70)] = 3968,
  [SMALL_STATE(71)] = 4017,
  [SMALL_STATE(72)] = 4050,
  [SMALL_STATE(73)] = 4081,
  [SMALL_STATE(74)] = 4116,
  [SMALL_STATE(75)] = 4149,
  [SMALL_STATE(76)] = 4182,
  [SMALL_STATE(77)] = 4231,
  [SMALL_STATE(78)] = 4262,
  [SMALL_STATE(79)] = 4291,
  [SMALL_STATE(80)] = 4320,
  [SMALL_STATE(81)] = 4349,
  [SMALL_STATE(82)] = 4378,
  [SMALL_STATE(83)] = 4407,
  [SMALL_STATE(84)] = 4456,
  [SMALL_STATE(85)] = 4487,
  [SMALL_STATE(86)] = 4516,
  [SMALL_STATE(87)] = 4547,
  [SMALL_STATE(88)] = 4576,
  [SMALL_STATE(89)] = 4605,
  [SMALL_STATE(90)] = 4633,
  [SMALL_STATE(91)] = 4677,
  [SMALL_STATE(92)] = 4721,
  [SMALL_STATE(93)] = 4749,
  [SMALL_STATE(94)] = 4777,
  [SMALL_STATE(95)] = 4805,
  [SMALL_STATE(96)] = 4849,
  [SMALL_STATE(97)] = 4881,
  [SMALL_STATE(98)] = 4925,
  [SMALL_STATE(99)] = 4969,
  [SMALL_STATE(100)] = 5013,
  [SMALL_STATE(101)] = 5049,
  [SMALL_STATE(102)] = 5077,
  [SMALL_STATE(103)] = 5121,
  [SMALL_STATE(104)] = 5165,
  [SMALL_STATE(105)] = 5193,
  [SMALL_STATE(106)] = 5221,
  [SMALL_STATE(107)] = 5265,
  [SMALL_STATE(108)] = 5309,
  [SMALL_STATE(109)] = 5353,
  [SMALL_STATE(110)] = 5383,
  [SMALL_STATE(111)] = 5427,
  [SMALL_STATE(112)] = 5471,
  [SMALL_STATE(113)] = 5515,
  [SMALL_STATE(114)] = 5559,
  [SMALL_STATE(115)] = 5603,
  [SMALL_STATE(116)] = 5647,
  [SMALL_STATE(117)] = 5679,
  [SMALL_STATE(118)] = 5723,
  [SMALL_STATE(119)] = 5753,
  [SMALL_STATE(120)] = 5797,
  [SMALL_STATE(121)] = 5831,
  [SMALL_STATE(122)] = 5861,
  [SMALL_STATE(123)] = 5905,
  [SMALL_STATE(124)] = 5949,
  [SMALL_STATE(125)] = 5977,
  [SMALL_STATE(126)] = 6021,
  [SMALL_STATE(127)] = 6065,
  [SMALL_STATE(128)] = 6093,
  [SMALL_STATE(129)] = 6137,
  [SMALL_STATE(130)] = 6181,
  [SMALL_STATE(131)] = 6225,
  [SMALL_STATE(132)] = 6269,
  [SMALL_STATE(133)] = 6307,
  [SMALL_STATE(134)] = 6336,
  [SMALL_STATE(135)] = 6365,
  [SMALL_STATE(136)] = 6396,
  [SMALL_STATE(137)] = 6431,
  [SMALL_STATE(138)] = 6466,
  [SMALL_STATE(139)] = 6495,
  [SMALL_STATE(140)] = 6530,
  [SMALL_STATE(141)] = 6559,
  [SMALL_STATE(142)] = 6588,
  [SMALL_STATE(143)] = 6617,
  [SMALL_STATE(144)] = 6654,
  [SMALL_STATE(145)] = 6685,
  [SMALL_STATE(146)] = 6716,
  [SMALL_STATE(147)] = 6745,
  [SMALL_STATE(148)] = 6780,
  [SMALL_STATE(149)] = 6811,
  [SMALL_STATE(150)] = 6840,
  [SMALL_STATE(151)] = 6871,
  [SMALL_STATE(152)] = 6900,
  [SMALL_STATE(153)] = 6929,
  [SMALL_STATE(154)] = 6958,
  [SMALL_STATE(155)] = 6993,
  [SMALL_STATE(156)] = 7022,
  [SMALL_STATE(157)] = 7057,
  [SMALL_STATE(158)] = 7089,
  [SMALL_STATE(159)] = 7123,
  [SMALL_STATE(160)] = 7153,
  [SMALL_STATE(161)] = 7185,
  [SMALL_STATE(162)] = 7219,
  [SMALL_STATE(163)] = 7253,
  [SMALL_STATE(164)] = 7287,
  [SMALL_STATE(165)] = 7319,
  [SMALL_STATE(166)] = 7353,
  [SMALL_STATE(167)] = 7383,
  [SMALL_STATE(168)] = 7415,
  [SMALL_STATE(169)] = 7442,
  [SMALL_STATE(170)] = 7469,
  [SMALL_STATE(171)] = 7500,
  [SMALL_STATE(172)] = 7527,
  [SMALL_STATE(173)] = 7556,
  [SMALL_STATE(174)] = 7585,
  [SMALL_STATE(175)] = 7614,
  [SMALL_STATE(176)] = 7643,
  [SMALL_STATE(177)] = 7666,
  [SMALL_STATE(178)] = 7689,
  [SMALL_STATE(179)] = 7709,
  [SMALL_STATE(180)] = 7721,
  [SMALL_STATE(181)] = 7736,
  [SMALL_STATE(182)] = 7753,
  [SMALL_STATE(183)] = 7770,
  [SMALL_STATE(184)] = 7783,
  [SMALL_STATE(185)] = 7800,
  [SMALL_STATE(186)] = 7812,
  [SMALL_STATE(187)] = 7822,
  [SMALL_STATE(188)] = 7836,
  [SMALL_STATE(189)] = 7848,
  [SMALL_STATE(190)] = 7860,
  [SMALL_STATE(191)] = 7874,
  [SMALL_STATE(192)] = 7888,
  [SMALL_STATE(193)] = 7900,
  [SMALL_STATE(194)] = 7912,
  [SMALL_STATE(195)] = 7926,
  [SMALL_STATE(196)] = 7940,
  [SMALL_STATE(197)] = 7954,
  [SMALL_STATE(198)] = 7964,
  [SMALL_STATE(199)] = 7974,
  [SMALL_STATE(200)] = 7988,
  [SMALL_STATE(201)] = 8002,
  [SMALL_STATE(202)] = 8016,
  [SMALL_STATE(203)] = 8030,
  [SMALL_STATE(204)] = 8042,
  [SMALL_STATE(205)] = 8056,
  [SMALL_STATE(206)] = 8070,
  [SMALL_STATE(207)] = 8084,
  [SMALL_STATE(208)] = 8096,
  [SMALL_STATE(209)] = 8110,
  [SMALL_STATE(210)] = 8122,
  [SMALL_STATE(211)] = 8136,
  [SMALL_STATE(212)] = 8145,
  [SMALL_STATE(213)] = 8156,
  [SMALL_STATE(214)] = 8167,
  [SMALL_STATE(215)] = 8178,
  [SMALL_STATE(216)] = 8189,
  [SMALL_STATE(217)] = 8198,
  [SMALL_STATE(218)] = 8209,
  [SMALL_STATE(219)] = 8220,
  [SMALL_STATE(220)] = 8231,
  [SMALL_STATE(221)] = 8242,
  [SMALL_STATE(222)] = 8253,
  [SMALL_STATE(223)] = 8264,
  [SMALL_STATE(224)] = 8275,
  [SMALL_STATE(225)] = 8286,
  [SMALL_STATE(226)] = 8297,
  [SMALL_STATE(227)] = 8308,
  [SMALL_STATE(228)] = 8317,
  [SMALL_STATE(229)] = 8328,
  [SMALL_STATE(230)] = 8339,
  [SMALL_STATE(231)] = 8350,
  [SMALL_STATE(232)] = 8361,
  [SMALL_STATE(233)] = 8372,
  [SMALL_STATE(234)] = 8383,
  [SMALL_STATE(235)] = 8394,
  [SMALL_STATE(236)] = 8405,
  [SMALL_STATE(237)] = 8416,
  [SMALL_STATE(238)] = 8427,
  [SMALL_STATE(239)] = 8438,
  [SMALL_STATE(240)] = 8449,
  [SMALL_STATE(241)] = 8460,
  [SMALL_STATE(242)] = 8471,
  [SMALL_STATE(243)] = 8480,
  [SMALL_STATE(244)] = 8491,
  [SMALL_STATE(245)] = 8502,
  [SMALL_STATE(246)] = 8510,
  [SMALL_STATE(247)] = 8518,
  [SMALL_STATE(248)] = 8526,
  [SMALL_STATE(249)] = 8534,
  [SMALL_STATE(250)] = 8542,
  [SMALL_STATE(251)] = 8550,
  [SMALL_STATE(252)] = 8558,
  [SMALL_STATE(253)] = 8566,
  [SMALL_STATE(254)] = 8574,
  [SMALL_STATE(255)] = 8582,
  [SMALL_STATE(256)] = 8590,
  [SMALL_STATE(257)] = 8598,
  [SMALL_STATE(258)] = 8606,
  [SMALL_STATE(259)] = 8614,
  [SMALL_STATE(260)] = 8622,
  [SMALL_STATE(261)] = 8630,
  [SMALL_STATE(262)] = 8638,
  [SMALL_STATE(263)] = 8646,
  [SMALL_STATE(264)] = 8654,
  [SMALL_STATE(265)] = 8662,
  [SMALL_STATE(266)] = 8670,
  [SMALL_STATE(267)] = 8678,
  [SMALL_STATE(268)] = 8686,
  [SMALL_STATE(269)] = 8694,
  [SMALL_STATE(270)] = 8702,
  [SMALL_STATE(271)] = 8710,
  [SMALL_STATE(272)] = 8718,
  [SMALL_STATE(273)] = 8726,
  [SMALL_STATE(274)] = 8734,
  [SMALL_STATE(275)] = 8742,
  [SMALL_STATE(276)] = 8750,
  [SMALL_STATE(277)] = 8758,
  [SMALL_STATE(278)] = 8766,
  [SMALL_STATE(279)] = 8774,
  [SMALL_STATE(280)] = 8782,
  [SMALL_STATE(281)] = 8790,
  [SMALL_STATE(282)] = 8798,
  [SMALL_STATE(283)] = 8806,
  [SMALL_STATE(284)] = 8814,
  [SMALL_STATE(285)] = 8822,
  [SMALL_STATE(286)] = 8830,
  [SMALL_STATE(287)] = 8838,
  [SMALL_STATE(288)] = 8846,
  [SMALL_STATE(289)] = 8854,
  [SMALL_STATE(290)] = 8862,
  [SMALL_STATE(291)] = 8870,
  [SMALL_STATE(292)] = 8878,
  [SMALL_STATE(293)] = 8886,
  [SMALL_STATE(294)] = 8894,
  [SMALL_STATE(295)] = 8902,
  [SMALL_STATE(296)] = 8910,
  [SMALL_STATE(297)] = 8918,
  [SMALL_STATE(298)] = 8926,
  [SMALL_STATE(299)] = 8934,
  [SMALL_STATE(300)] = 8942,
  [SMALL_STATE(301)] = 8950,
  [SMALL_STATE(302)] = 8958,
  [SMALL_STATE(303)] = 8966,
  [SMALL_STATE(304)] = 8974,
  [SMALL_STATE(305)] = 8982,
  [SMALL_STATE(306)] = 8990,
  [SMALL_STATE(307)] = 8998,
  [SMALL_STATE(308)] = 9006,
  [SMALL_STATE(309)] = 9014,
  [SMALL_STATE(310)] = 9022,
  [SMALL_STATE(311)] = 9030,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invocation_statement, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_statement_block_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_statement_block, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_expression, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_member_expression, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_expression, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(65),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_member_expression, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(109),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(134),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(138),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_argument, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_argument, 3, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(142),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(149),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(151),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(155),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 6, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declaration_assignment, 4, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declaration_assignment, 3, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 1, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 2, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_identifier, 1, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_identifier, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_terminal, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_terminal, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 2, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(205),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 10, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 7, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invocation_statement, 2, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 3, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 4, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine, 8, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [625] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 13, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 12, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 12, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 11, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptrsafe_function_declaration, 10, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
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
