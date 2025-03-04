/**
 * @file A treesitter parser for SPSS syntax code
 * @author Quinton Quagliano <Quinton.Quagliano@protonmail.com>
 * @license MIT
 */

module.exports = grammar({
  name: "spss",

  // Extras (for comments and white space)
  extras: $ => [
    $.comment,
    $.comment_inline,
    /\s/
  ],

  rules: {

    // Commands
    command: $ => seq(
      /([A-Z]+).*?\./,
      field("subcommand", /\s\s\\([A-Z]+).*/)
    ),

    // Comments
    comment: $ => /\*.*/,
    comment_inline: $ => /\/\*.*/,

    // // Strings
    // string: $ => seq(),
    //
    // // Numeric
    // numeric: $ => seq()
  }
});
