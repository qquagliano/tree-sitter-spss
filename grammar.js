/**
 * @file A treesitter parser for SPSS syntax code
 * @author Quinton Quagliano <Quinton.Quagliano@protonmail.com>
 * @license MIT
 */

// NOTE: The most authoritative reference is probably 
// https://www.ibm.com/docs/en/spss-statistics/30.0.0?topic=universals-commands (HTML)
// https://www.ibm.com/docs/SSLVMB_30.0.0/pdf/IBM_SPSS_Statistics_Command_Syntax_Reference.pdf (PDF)


module.exports = grammar({
  name: "spss",

  // Extras are allowed anywhere in the code
  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {

    // SPSS syntax is effectively a list of commands
    source_file: $ => repeat($.command),

    // Commands are the 'blocks' of SPSS syntax
    command: $ => seq(
      field('name', $.identifier), // The actual name of the command
      optional($.arguments), // Optional in-line arguments for single line commands
      optional(repeat($.subcommand)), // Optional new line subcommands for multi-line commands
      /\.\n/ // Commands end with a period and new line
    ),

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
    // runtime

    identifier: $ => /[A-Z_\-][A-Z0-9_\-]*/,

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
    ))

    // TODO: Python and R can integrate with SPSS - need to look into possible
    // injection syntax
  }
});
