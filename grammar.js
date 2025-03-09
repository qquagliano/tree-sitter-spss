/**
 * @file A treesitter parser for SPSS syntax code
 * @author Quinton Quagliano <Quinton.Quagliano@protonmail.com>
 * @license MIT
 */

module.exports = grammar({
  name: "spss",

  // Externals are for C scanner - ./src/scanner.c
  externals: $ => [$.identifier],

  // Extras are allowed anywhere in the code
  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {

    // Base SPSS syntax is effectively a list of commands, but I differentiate injected blocks
    source_file: $ => repeat(choice(
      $.command,
      $.injection,
    )),

    // Commands are the primary blocks of SPSS syntax
    command: $ => seq(
      field('name', $.identifier), // The actual name of the command
      optional($.arguments), // Optional in-line arguments (including subcommand and keywords) for single line commands
      optional(repeat($.subcommand)), // Optional new line subcommands for multi-line commands
      $.end_of_command // Split into a separate node to use for better indent control
    ),

    end_of_command: $ => token(/\.\n/), // Commands end with a period and new line

    // Subcommands modify or add to command behavior
    subcommand: $ => prec.left(seq(
      field('name', $.subidentifier), // The actual name of the subcommand
      optional($.arguments) // Optional in-line arguments for each subcommand
    )),

    // Arguments can be part of commands and/or subcommands, to further define behavior
    arguments: $ => repeat1(choice(
      $.keyword,
      $.parenthetical,
      $.variable,
      $.string,
      $.number,
      $.arithmetic,
      $.comparison,
      $.logical,
      $.comma
    )),

    parenthetical: $ => seq(
      token("("),
      repeat1(choice(
        $.keyword,
        $.parenthetical,
        $.variable,
        $.string,
        $.number,
        $.arithmetic,
        $.comparison,
        $.logical,
        $.comma
      )),
      token(")")
    ),

    // TODO: See if there is a way to allow for lowercase in commands,
    // subcommands, and keywords. SPSS can run code not in all caps, even though
    // is is not the usual style and they are still translated to caps during
    // runtime. But, I still think I should allow for this.

    subidentifier: $ => /\/[A-Z_\-][A-Z0-9_\-]*/,

    keyword: $ => /[A-Z_\-$][A-Z0-9_\-$]*/,

    variable: $ => /[A-Za-z_\-][A-Za-z0-9_\-]*/,

    string: $ => /'[^']*'|"[^"]*"/,

    number: $ => /-?(\d+(\.\d*)?|\.\d+)/,

    // TODO: See if there is a way to capture entire comparison, arithmetic,
    // and logical statements with individual components

    arithmetic: $ => choice(
      token("+"), // Addition
      token("-"), // Subtraction
      token("*"), // Multiplication
      token("/"), // Division
      token("**") // Exponentiation
    ),

    // TODO: Equals is also used in some subcommand usage - need to investigate
    // that further and see if that deserves a different treatment

    comparison: $ => choice(
      token("<"), // Less than
      token(">"), // Greater than
      token("="), // Equal to;
      token("<>"), // Not equal to
      token("<="), // Less than or equal to
      token(">=") // Greater than or equal to
    ),

    logical: $ => choice(
      token("&"), // And
      token("|") // Or
    ),

    comma: $ => token(","), // Commas are only used in graphing procedures

    comment: $ => token(choice(
      seq(/\* /, /[^\n]*/), // For new line comments
      seq(/\/\* /, /[^\n]*/), // For in-line comments after other nodes
      seq('COMMENT', /[^\n]*/) // For comments from the COMMENT command
    )),

    injection: $ => seq(
      "BEGIN PROGRAM",
      $.language, // The injected language name
      optional($.injection_source),
      "END PROGRAM."
    ),

    // Split this into to for better control over injections tags
    language: $ => choice(
      $.python,
      $.r
    ),

    python: $ => /PYTHON3/i,

    r: $ => /R/i,

    injection_source: $ => repeat1(/[^\n]+/)
  }
});
