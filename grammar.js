module.exports = grammar({
  name: 'vbscript',

  extras: $ => [
    $._horizontal_whitespace,
    seq('_', /[\n\r]*/),
    $.comment
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
      prec(3,$.variable_assignment),
      prec(2,$.if_statement),
      prec(2,$.for_statement),
      prec(2,$.while_statement),
      prec(2,$.do_statement),
      prec(2,$.variable_declaration),
      $.invocation_statement,
    ),

    variable_assignment: $ => prec.left(seq(
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

    invocation_statement: $ => prec.left(seq(
      $._right_of_dot_expression,
      optional($.argument_list)
    )),

    comment: $ => token(seq("'", /.*/)),

    if_statement: $ => seq(
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
    ),

    for_statement: $ => seq(
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
    ),

    while_statement: $ => seq(
      'While',
      $._expression,
      $._whitespace,
      $._inline_statement_block,
      'Wend'
    ),

    do_statement: $ => seq(
      'Do',
      $._whitespace,
      $._inline_statement_block,
      'Loop Until',
      $._expression
    ),

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
      prec(2, $.attribute_expression),
      prec(1,seq('(',$._expression, ')')),
      prec(1,$.literal),
      prec(1,$.binary_expression),
      prec(1,$.unary_expression),
      prec(1,$.function_call),
      prec(1,$.identifier)
    ),

    _right_of_dot_expression: $ => choice(
      prec(3,$._attribute_expression_rest),
      prec(2,$.function_call),
      prec(1,$.identifier)
    ),

    attribute_expression: $ => seq(
      $.identifier,
      repeat1($._attribute_expression_rest)
    ),

    _attribute_expression_rest: $ =>
      prec.left(seq(token.immediate('.'), $._right_of_dot_expression)),

    binary_expression: $ => choice(
      prec.left(2,seq($._expression, '+', $._expression)),
      prec.left(2,seq($._expression, '-', $._expression)),
      prec.left(3,seq($._expression, '*', $._expression)),
      prec.left(3,seq($._expression, '/', $._expression)),
      prec.left(1,seq($._expression, '&', $._expression)),
      prec.left(1,seq($._expression, 'and', $._expression)),
      prec.left(1,seq($._expression, 'or', $._expression)),
      prec.left(1,seq($._expression, $._equal, $._expression)),
      prec.left(1,seq($._expression, '<>', $._expression)),
      prec.left(1,seq($._expression, '<', $._expression)),
      prec.left(1,seq($._expression, '>', $._expression)),
      prec.left(1,seq($._expression, '<=', $._expression)),
      prec.left(1,seq($._expression, '>=', $._expression))
    ),

    unary_expression: $ => choice(
      prec.right(seq('-', $._expression)),
      prec.right(seq('Not', $._expression))
    ),

    function_call: $ => seq(
      optional('Call'),
      $.identifier,
      '(',
      optional($.argument_list),
      ')'
    ),

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

    _horizontal_whitespace: $=> /[ \t]+/,

    _terminator: $ => prec(1,choice(
      '\n',
      ':'
    ))
  }
});

