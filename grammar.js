module.exports = grammar({
  name: 'vbscript',

  extras: $ => [
    $._horizontal_whitespace,
    seq('_', /[\n\r]*/),
    $.comment
  ],

  precedences: $ => [
    [
      "new",
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
    [
      $.array_element,
      $.argument,
      $.identifier
    ],
    [
      $.array_identifier,
      $.new_identifier
    ],
    [
        $._variable_declaration_assignment,
        $.variable_list
    ]
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
      $.exit_statement,
      $.variable_declaration,
      $.redim,
      $.invocation_statement,
    ),

    variable_assignment: $ => prec.left('assign',seq(
      choice(
        $.array_element,
        $.identifier
      ),
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

    exit_statement: $ => seq(
      'Exit',
      choice(
        'For',
        'Function',
        'Sub',
        'Do',
        'While'
      )
    ),

    if_statement: $ => prec('branch',seq(
      'If',
      $._expression,
      'Then',
      $._whitespace,
      $._inline_statement_block,
      optional(seq(
        'Else',
        $._whitespace,
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
      'Loop',
      choice(
        'While',
        'Until'
      ),
      $._expression
    )),

    subroutine: $ => seq(
      'Sub',
      $.new_identifier,
      '(',
      optional($.parameter_list),
      ')',
      $._whitespace,
      $._inline_statement_block,
      'End Sub'
    ),

    function: $ => seq(
      optional('Private'),
      'Function',
      $.new_identifier,
      '(',
      optional($.parameter_list),
      ')',
      optional($.type_definition),
      $._whitespace,
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

    redim: $ => seq(
      'ReDim',
      optional('Preserve'),
      $._expression
    ),

    _variable_declaration_assignment: $ => seq(
      $.variable_declaration_identifier,
      optional($.type_definition),
      $._equal,
      $._expression
    ),

    variable_declaration_identifier: $ => choice(
      $.array_identifier,
      $.new_identifier
    ),

    array_identifier: $ => seq(
      $.new_identifier,
      '(',
      optional(seq(
        $.number,
        'To',
        $.number
      )),
      ')'
    ),

    type_definition: $=> seq(
      'As',
      $.type
    ),

    variable_list: $ => seq(
      $.variable_declaration_identifier,
      repeat(seq(
        ',',
        $.variable_declaration_identifier
      )),
      optional($.type_definition)
    ),

    ptrsafe_function_declaration: $ => seq(
      'Private',
      'Declare',
      'PtrSafe',
      'Function',
      $.new_identifier,
      'Lib',
      $.string_literal,
      optional(seq('Alias', $.string_literal)),
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
      $.new_identifier,
      optional($.type_definition)
    ),

    modifier: $ => choice(
      'ByVal',
      'ByRef',
      'Optional',
      'ParamArray'
    ),

    type: $ => choice(
      $.type_terminal,
      $.array_type
    ),

    type_terminal: $ => choice(
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
      'Variant',
      $.type_member_expression,
    ),

    array_type: $ => seq(
      $.type,
      '()'
    ),

    _expression: $ => choice(
      $.member_expression,
      $.function_call,
      seq('(',$._expression, ')'),
      $.new_expression,
      $.literal,
      $.binary_expression,
      $.unary_expression,
      $.identifier
    ),

    new_expression: $ => prec('new', seq(
      'New',
      choice(
        $.identifier,
        $.type_member_expression
      )
    )),

    type_member_expression: $ => prec('member',seq(
      choice(
        $.identifier,
        $.member_expression
      ),
      '.',
      choice($.identifier)
    )),

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
      prec('multiplicative',seq($._expression, 'Mod', $._expression)),
      prec('boolean',seq($._expression, '&', $._expression)),
      prec('boolean',seq($._expression, /[Aa]nd/, $._expression)),
      prec('boolean',seq($._expression, /[Oo]r/, $._expression)),
      prec('boolean',seq($._expression, /[Xx]or/, $._expression)),
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

    array_element: $ => seq(
      $.identifier,
      '(',
      $._expression,
      ')'
    ),

    literal: $ => choice(
      $.number,
      $.string_literal,
      $.boolean
    ),

    number: $ => /\d+/,

    string_literal: $ => seq('"', /[^"]*/, '"'),

    boolean: $ => choice('True', 'False'),

    new_identifier: $ => $.identifier,

    identifier: $ => /[a-zA-Z_]\w*/,

    _equal: $ => '=',

    _whitespace: $ => repeat1(/[\n\r]/),

    _horizontal_whitespace: $=> /[ \t]+/
  }
});

