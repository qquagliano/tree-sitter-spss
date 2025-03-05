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
      repeat($.keyword),
      choice(repeat($.subcommand), repeat($.cmd_variable)),
      /\.\n/
    ),

    subcommand: $ => prec.left(seq(
      field('name', $.subidentifier),
      repeat($.argument),
    )),

    argument: $ => choice(
      $.keyword,
      $.parenthetical,
      $.subcmd_variable,
      $.string,
      $.number,
      $.equals_assignment
    ),

    identifier: $ => /[A-Z_][A-Z0-9_]*/,

    subidentifier: $ => /\/[A-Z_][A-Z0-9_]*/,

    keyword: $ => /[A-Z_][A-Z0-9_]*/,

    parenthetical: $ => seq(
      token("("),
      $.argument,
      token(")")
    ),

    cmd_variable: $ => /[A-Za-z_][A-Za-z0-9_]*/,
    subcmd_variable: $ => /[A-Za-z_][A-Za-z0-9_]*/,

    string: $ => /'[^']*'|"[^"]*"/,

    number: $ => /-?(\d+(\.\d*)?|\.\d+)/,

    equals_assignment: $ => token('='),

    comment: $ => token(choice(
      seq('*', /[^\n]*/),
      seq('/*', /[^\n]*/),
      seq('COMMENT', /[^\n]*/)
    ))
  }
});
