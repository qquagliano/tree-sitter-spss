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

  // Externals are for C scanners - ./src/scanner.c
  externals: $ => [$.id],

  // Extras are allowed anywhere in the code
  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {

    // Base SPSS syntax is effectively a list of commands, I also add injected blocks
    source_file: $ => repeat(choice(
      $.command,
      $.injection,
    )),

    // Commands are the 'blocks' of SPSS syntax
    command: $ => seq(
      field('name', $.identifier), // The actual name of the command
      optional($.arguments), // Optional in-line arguments for single line commands
      optional(repeat($.subcommand)), // Optional new line subcommands for multi-line commands
      $.end_of_command // Split into a separate node to use for indent control
    ),

    end_of_command: $ => token(/\.\n/), // Commands end with a period and new line // Commands end with a period and new line // Commands end with a period and new line // Commands end with a period and new line

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

    identifier: $ => choice(
      "2SLS",
      "ACF",
      "ADD DOCUMENT",
      "ADD FILES",
      "ADD VALUE LABELS",
      "ADP",
      "AGGREGATE",
      "AIM",
      "ALSCAL",
      "ALTER TYPE",
      "ANACOR",
      "ANOVA",
      "APPLY DICTIONARY",
      "AREG",
      "ARIMA",
      "AUTORECODE",
      "BAYES ANOVA",
      "BAYES CORRELATION",
      "BAYES INDEPENDENT",
      "BAYES LOGLINEAR",
      "BAYES ONESAMPLE",
      "BAYES ONESAMPLE",
      "BAYES ONESAMPLE",
      "BAYES REGRESSION",
      "BAYES RELATED",
      "BAYES REPEATED",
      "BEGIN DATA",
      "BEGIN EXPR",
      "BEGIN EXPR-END EXPR",
      "BEGIN GPL-END GPL",
      "BOOTSTRAP",
      "BREAK",
      "CACHE",
      "CASEPLOT",
      "CASESTOVARS",
      "CATREG",
      "CD",
      "CLABELS",
      "CLEAR TIME PROGRAM",
      "CLEAR TRANSFORMATIONS",
      "CLUSTER",
      "CNLR",
      "CODEBOOK",
      "COMMENT",
      "COMPARE DATASETS",
      "COMPUTE",
      "CONJOINT",
      "CONSTRAINED FUNCTIONS",
      "CORRELATIONS",
      "CORRESPONDENCE",
      "COUNT",
      "COXREG",
      "CREATE",
      "CROSSTABS",
      "CSCOXREG",
      "CSDESCRIPTIVES",
      "CSGLM",
      "CSLOGISTIC",
      "CSORDINAL",
      "CSPLAN",
      "CSSELECT",
      "CSTABULATE",
      "CTABLES",
      "CURVEFIT",
      "DATA LIST",
      "DATAFILE ATTRIBUTE",
      "DATASET ACTIVATE",
      "DATASET CLOSE",
      "DATASET COPY",
      "DATASET DECLARE",
      "DATASET DISPLAY",
      "DATASET NAME",
      "DATE",
      "DEFINE",
      "DELETE VARIABLES",
      "DERIVATIVES",
      "DESCRIPTIVES",
      "DETECTANOMALY",
      "DISCRIMINANT",
      "DISPLAY",
      "DO IF",
      "DO REPEAT",
      "DOCUMENT",
      "DROP DOCUMENTS",
      "ECHO",
      "END CASE",
      "END FILE",
      "ERASE",
      "EXAMINE",
      "EXECUTE",
      "EXPORT",
      "EXSMOOTH",
      "EXTENSION",
      "FACTOR",
      "FILE HANDLE",
      "FILE LABEL",
      "FILE TYPE",
      "FILTER",
      "FINISH",
      "FIT",
      "FLEISS MULTIRATER KAPPA",
      "FLIP",
      "FORMATS",
      "FREQUENCIES",
      "GENLIN",
      "GENLINMIXED",
      "GENLOG",
      "GET",
      "GET CAPTURE",
      "GET DATA",
      "GET SAS",
      "GET STATA",
      "GET TRANSLATE",
      "GETCOGNOS",
      "GETTM1",
      "GGRAPH",
      "GLM",
      "GRAPH",
      "HILOGLINEAR",
      "HOMALS",
      "HOST",
      "IBREAK",
      "IDO",
      "IDOEND",
      "IGRAPH",
      "IIF",
      "IIFEND",
      "ILET",
      "IMPORT",
      "INCLUDE",
      "INPUT PROGRAM",
      "INSERT",
      "INSERT EXEC",
      "INSERT EXEC",
      "INSERT HIDDDEN",
      "INSERT HIDDEN",
      "KEYED DATA LIST",
      "KM",
      "KNN",
      "LINEAR",
      "LIST",
      "LOGISTIC REGRESSION",
      "LOGLINEAR",
      "LOOP",
      "MANOVA",
      "MATCH FILES",
      "MATRIX",
      "MATRIX DATA",
      "MCONVERT",
      "MEANS",
      "MISSING VALUES",
      "MIXED",
      "MLP",
      "MODEL CLOSE",
      "MODEL HANDLE",
      "MODEL LIST",
      "MODEL NAME",
      "MODEL PROGRAM",
      "MRSETS",
      "MULT RESPONSE",
      "MULTIPLE CORRESPONDENCE",
      "MULTIPLE IMPUTATION",
      "MVA",
      "N OF CASES",
      "NAIVEBAYES",
      "NEW FILE",
      "NLR",
      "NOMREG",
      "NONPAR CORR",
      "NPAR TESTS",
      "NPTESTS",
      "NUMERIC",
      "OLAP CUBES",
      "OMS",
      "OMSEND",
      "OMSINFO",
      "OMSLOG",
      "ONEWAY",
      "OPTIMAL BINNING",
      "ORTHOPLAN",
      "OUTPUT MODIFY",
      "OUTPUT NAME",
      "OUTPUT NEW",
      "OUTPUT OPEN",
      "OUTPUT SAVE",
      "OVERALS",
      "PACF",
      "PARTIAL CORR",
      "PERMISSIONS",
      "PLANCARDS",
      "PLS",
      "PLUM",
      "POINT",
      "POWER MEANS INDEPENDENT",
      "POWER MEANS INDEPENDENT",
      "POWER MEANS ONESAMPLE",
      "POWER MEANS ONESAMPLE",
      "POWER MEANS RELATED",
      "POWER MEANS RELATED",
      "POWER ONEWAY ANOVA",
      "POWER ONEWAY ANOVA",
      "POWER PARTIALCORR",
      "POWER PARTIALCORR",
      "POWER PEARSON ONESAMPLE",
      "POWER PEARSON ONESAMPLE",
      "POWER PROPORTIONS INDEPENDENT",
      "POWER PROPORTIONS INDEPENDENT",
      "POWER PROPORTIONS ONESAMPLE",
      "POWER PROPORTIONS ONESAMPLE",
      "POWER PROPORTIONS RELATED",
      "POWER PROPORTIONS RELATED",
      "POWER SPEARMAN ONESAMPLE",
      "POWER SPEARMAN ONESAMPLE",
      "POWER UNIVARIATE LINEAR",
      "POWER UNIVARIATE LINEAR",
      "PPLOT",
      "PREDICT",
      "PREFSCAL",
      "PRESERVE",
      "PRINCALS",
      "PRINT",
      "PRINT EJECT",
      "PRINT FORMATS",
      "PRINT SPACE",
      "PROBIT",
      "PROCEDURE OUTPUT",
      "PROPORTIONS",
      "PROXIMITIES",
      "PROXSCAL",
      "QUANTILE REGRESSION",
      "QUICK CLUSTER",
      "RANK",
      "RATIO STATISTICS",
      "RBF",
      "READ MODEL",
      "RECODE",
      "RECORD TYPE",
      "REGRESSION",
      "RELIABILITY",
      "RENAME",
      "RENAME VARIABLES",
      "REPEATING DATA",
      "REPORT",
      "REPOSITORY ATTRIBUTES",
      "REPOSITORY CONNECT",
      "REPOSITORY COPY",
      "REREAD",
      "RESPONSE RATE",
      "RESTORE",
      "RMV",
      "ROC",
      "ROC ANALYSIS",
      "ROC ANALYSIS",
      "SAMPLE",
      "SAVE",
      "SAVE CODEPAGE",
      "SAVE CODEPAGE",
      "SAVE DATA COLLECTION",
      "SAVE MODEL",
      "SAVE TRANSLATE",
      "SCRIPT",
      "SEASON",
      "SELECT IF",
      "SELECTPRED",
      "SET",
      "SHIFT VALUES",
      "SHOW",
      "SIMPLAN",
      "SIMPREP BEGIN",
      "SIMRUN",
      "SORT",
      "SORT CASES",
      "SORT VARIABLES",
      "SPATIAL ASSOCIATION RULES",
      "SPATIAL ASSOCIATION RULES",
      "SPATIAL MAPSPEC",
      "SPATIAL MAPSPEC",
      "SPATIAL TEMPORAL PREDICTION",
      "SPATIAL TEMPORAL PREDICTION",
      "SPCHART",
      "SPECTRA",
      "SPLIT FILE",
      "STAR JOIN",
      "STRING",
      "SUBTITLE",
      "SUMMARIZE",
      "SURVIVAL",
      "SYSFILE INFO",
      "T-TEST",
      "TCM ANALYSIS",
      "TCM APPLY",
      "TCM MODEL",
      "TDISPLAY",
      "TEMPORARY",
      "TIME PROGRAM",
      "TITLE",
      "TMS BEGIN",
      "TMS END",
      "TMS IMPORT",
      "TMS MERGE",
      "TREE",
      "TSAPPLY",
      "TSET",
      "TSHOW",
      "TSMODEL",
      "TSPLOT",
      "TWOSTEP CLUSTER",
      "UNIANOVA",
      "UPDATE",
      "USE",
      "VALIDATEDATA",
      "VALUE LABELS",
      "VARCOMP",
      "VARIABLE ALIGNMENT",
      "VARIABLE ATTRIBUTE",
      "VARIABLE LABELS",
      "VARIABLE LEVEL",
      "VARIABLE ROLE",
      "VARIABLE WIDTH",
      "VARSTOCASES",
      "VECTOR",
      "VERIFY",
      "WEIGHT",
      "WEIGHTED KAPPA",
      "WLS",
      "WRITE",
      "WRITE FORMATS",
      "XGRAPH",
      "XSAVE",

    ),

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
