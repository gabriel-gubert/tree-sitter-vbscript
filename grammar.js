module.exports = grammar({
  name: 'vbscript',

  extras: $ => [
    $._horizontal_whitespace,
    seq('_', /[\n\r]*/),
    $.comment
  ],

  precedences: $ => [
    [
      "call",
      "member",
      "multiplicative",
      "additive",
      "boolean",
      $.unary_expression,
      $.binary_expression,
      $._expression
    ],
    [
      "assign",
      "branch",
      "invocation",
      $._expression
    ],
  ],

  rules: {
    source_file: $ => repeat(
      seq($._statement, $._whitespace),
    ),

    _statement: $ => choice(
      $.subroutine,
      $.function,
      $.ptrsafe_function_declaration,
      $._inline_statement
    ),

    _inline_statement: $ => choice(
      $.variable_assignment,
      $.if_statement,
      $.for_statement,
      $.while_statement,
      $.do_statement,
      $.variable_declaration,
      $.invocation_statement,
    ),

    variable_assignment: $ => prec.left('assign',seq(
      $.identifier,
      $._equal,
      $._expression
    )),

    _inline_statement_block: $ => choice(
      repeat1(
        seq($._inline_statement, $._whitespace)
      ),
      $._whitespace
    ),

    invocation_statement: $ => prec.left('invocation',seq(
      $._expression,
      optional($.argument_list)
    )),

    comment: $ => token(seq("'", /.*/)),

    if_statement: $ => prec('branch',seq(
      'If',
      $._expression,
      'Then',
      $._whitespace,
      $._inline_statement_block,
      optional(seq(
        'Else',
        $._inline_statement_block
      )),
      'End If'
    )),

    for_statement: $ => prec('branch',seq(
      'For',
      $.identifier,
      $._equal,
      $._expression,
      'To',
      $._expression,
      optional(seq(
        'Step',
        $._expression
      )),
      $._whitespace,
      $._inline_statement_block,
      'Next',
      $.identifier
    )),

    while_statement: $ => prec('branch',seq(
      'While',
      $._expression,
      $._whitespace,
      $._inline_statement_block,
      'Wend'
    )),

    do_statement: $ => prec('branch',seq(
      'Do',
      $._whitespace,
      $._inline_statement_block,
      'Loop Until',
      $._expression
    )),

    subroutine: $ => seq(
      'Sub',
      $.identifier,
      '(',
      optional($.parameter_list),
      ')',
      $._whitespace,
      $._inline_statement_block,
      'End Sub'
    ),

    function: $ => seq(
      'Function',
      $.identifier,
      '(',
      optional($.parameter_list),
      ')',
      $._inline_statement_block,
      'End Function'
    ),

    variable_declaration: $ => seq(
      'Dim',
      choice(
        $._variable_declaration_assignment,
        $.variable_list
      )
    ),

    _variable_declaration_assignment: $ => seq(
      $.identifier,
      optional(seq(
        'As',
        $.type
      )),
      $._equal,
      $._expression
    ),

    type_definition: $=> seq(
      'As',
      $.type
    ),

    variable_list: $ => seq(
      $.identifier,
      repeat(seq(
        ',',
        $.identifier
      )),
      optional($.type_definition)
    ),

    ptrsafe_function_declaration: $ => seq(
      'Private',
      'Declare',
      'PtrSafe',
      'Function',
      $.identifier,
      'Lib',
      $.string,
      optional(seq('Alias', $.string)),
      '(',
      optional($.parameter_list),
      ')',
      $.type_definition
    ),

    parameter_list: $ => seq(
      $.parameter,
      repeat(seq(
        ',',
        $.parameter
      ))
    ),

    parameter: $ => seq(
      optional($.modifier),
      $.identifier,
      'As',
      $.type
    ),

    modifier: $ => choice(
      'ByVal',
      'ByRef',
      'Optional',
      'ParamArray'
    ),

    type: $ => choice(
      'Any',
      'Boolean',
      'Byte',
      'Collection',
      'Currency',
      'Date',
      'Decimal',
      'Dictionary',
      'Double',
      'Integer',
      'Long',
      'LongLong',
      'LongPtr',
      'Object',
      'Single',
      'String',
      'Variant'
    ),

    _expression: $ => choice(
      $.member_expression,
      $.function_call,
      seq('(',$._expression, ')'),
      $.literal,
      $.binary_expression,
      $.unary_expression,
      $.identifier
    ),

    member_expression: $ => prec('member',seq(
      $._expression,
      '.',
      choice(
        $.function_call,
        $.identifier
      )
    )),

    binary_expression: $ => prec.left(choice(
      prec('additive',seq($._expression, '+', $._expression)),
      prec('additive',seq($._expression, '-', $._expression)),
      prec('multiplicative',seq($._expression, '*', $._expression)),
      prec('multiplicative',seq($._expression, '/', $._expression)),
      prec('boolean',seq($._expression, '&', $._expression)),
      prec('boolean',seq($._expression, 'and', $._expression)),
      prec('boolean',seq($._expression, 'or', $._expression)),
      prec('boolean',seq($._expression, $._equal, $._expression)),
      prec('boolean',seq($._expression, '<>', $._expression)),
      prec('boolean',seq($._expression, '<', $._expression)),
      prec('boolean',seq($._expression, '>', $._expression)),
      prec('boolean',seq($._expression, '<=', $._expression)),
      prec('boolean',seq($._expression, '>=', $._expression))
    )),

    unary_expression: $ => prec.right(choice(
      seq('-', $._expression),
      seq('Not', $._expression)
    )),

    function_call: $ => prec('call',seq(
      optional('Call'),
      $.identifier,
      '(',
      optional($.argument_list),
      ')'
    )),

    argument_list: $ => seq(
      $.argument,
      repeat(seq(
        ',',
        $.argument
      ))
    ),

    argument: $ => choice(
        $._expression,
        $.keyword_argument
    ),

    keyword_argument: $ => seq(
      $.identifier,
      ':=',
      $._expression
    ),

    literal: $ => choice(
      $.number,
      $.string,
      $.boolean
    ),

    number: $ => /\d+/,

    string: $ => seq('"', /[^"]*/, '"'),

    boolean: $ => choice('True', 'False'),

    identifier: $ => /[a-zA-Z_]\w*/,

    _equal: $ => '=',

    _whitespace: $ => repeat1(/[\n\r]/),

    _horizontal_whitespace: $=> /[ \t]+/
  }
});

