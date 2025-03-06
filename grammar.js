/**
 * @file A treesitter parser for SPSS syntax code
 * @author Quinton Quagliano <Quinton.Quagliano@protonmail.com>
 * @license MIT
 */

module.exports = grammar({
  name: "spss",

  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {
    source_file: $ => repeat($.command),

    command: $ => seq(
      field('name', $.identifier),
      optional($.arguments),
      optional(repeat($.subcommand)),
      /\.\n/
    ),

    subcommand: $ => prec.left(seq(
      field('name', $.subidentifier),
      optional($.arguments)
    )),

    arguments: $ => repeat1(choice(
      $.keyword,
      $.parenthetical,
      $.variable,
      $.string,
      $.number,
      $.arithmetic,
      $.equals_assignment
    )),

    parenthetical: $ => seq(
      token("("),
      $.arguments,
      token(")")
    ),

    identifier: $ => /[A-Z_-][A-Z0-9_-]*/,

    subidentifier: $ => /\/[A-Z_-][A-Z0-9_-]*/,

    keyword: $ => /[A-Z_\-$][A-Z0-9_\-$]*/,

    variable: $ => /[A-Za-z_-][A-Za-z0-9_-]*/,

    string: $ => /'[^']*'|"[^"]*"/,

    number: $ => /-?(\d+(\.\d*)?|\.\d+)/,

    equals_assignment: $ => token('='),

    arithmetic: $ => choice(
      token("<"),
      token(">"),
      token("*"),
      token(",")
    ),

    comment: $ => token(choice(
      seq(/\* /, /[^\n]*/),
      seq(/\/\* /, /[^\n]*/),
      seq('COMMENT', /[^\n]*/)
    ))
  }
});
