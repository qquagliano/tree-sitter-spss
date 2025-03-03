/**
 * @file A treesitter parser for SPSS syntax code
 * @author Quinton Quagliano <Quinton.Quagliano@protonmail.com>
 * @license MIT
 */

module.exports = grammar({
  name: "spss",

  rules: {
    // Comments
    comment: $ => seq(),

    // Commands
    command: $ => seq(),

    // Subcommands
    subcommand: $ => seq(),

    // Strings
    string: $ => seq(),

    // Numeric
    numeric: $ => seq()
  }
});
