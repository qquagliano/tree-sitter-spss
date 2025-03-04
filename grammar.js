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
      /\n/,
      repeat($.subcommand),
      /\s\./
    ),

    subcommand: $ => seq(
      field('name', $.subidentifier),
      repeat($.argument),
      /\n/
    ),

    argument: $ => choice(
      $.keyword,
      $.string,
      $.equals_assignment
    ),

    identifier: $ => /[A-Za-z_][A-Za-z0-9_]*/,

    subidentifier: $ => /\s\s\/[A-Za-z_][A-Za-z0-9_]*/,

    keyword: $ => /\s[A-Za-z_][A-Za-z0-9_().]*/,

    string: $ => /'[^']*'|"[^"]*"/,
    //
    // number: $ => /\d+(\.\d+)?/,

    equals_assignment: $ => '=',

    comment: $ => token(choice(
      seq('*', /[^\n]*/),
      seq('COMMENT', /[^\n]*/)
    ))
  }
});
