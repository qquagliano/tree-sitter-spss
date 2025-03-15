/**
 * @file A treesitter parser for SPSS syntax code
 * @author Quinton Quagliano <Quinton.Quagliano@protonmail.com>
 * @license MIT
 */

/*  
NOTE: The most authoritative and available reference For SPSS 30 syntax is probably:
https://www.ibm.com/docs/en/spss-statistics/30.0.0?topic=universals-commands (HTML)
https://www.ibm.com/docs/SSLVMB_30.0.0/pdf/IBM_SPSS_Statistics_Command_Syntax_Reference.pdf (PDF)
*/

module.exports = grammar({
  name: "spss",

  // TODO: C scanner is under maintenance for now - will return later
  // Externals are for C scanners - ./src/scanner.c
  // externals: $ => [$.identifier, $.subidentifier, $.keyword],

  /* 
  NOTE: Extras are allowed anywhere in the code. The "/s" explicitly allows for
  whitespace, even though this is default behavior for tree-sitter. In most
  languages, comments would also appear here, but they have unique features and
  requirement in SPSS syntax, so I treat them differently than allowing them
  anywhere. See code where I defined the comment node below for additional
  details. 
  */

  extras: $ => [/\s/],

  rules: {

    /* 
    NOTE: Base SPSS syntax is effectively a list of commands, which includes
    Python/R injections, data creation, expressions, transformation, and GPL
    graphing instructions (which are all unique types of command with specific
    uses). There are also comments, which are effectively treated as if they
    were commands. However, the above unique command types and comments need to
    be treated with special care, so I distinguish their nodes. So the start of
    each node tree (after source_file) will be either a command, a unique type
    of command with its own node, or a comment.
    */

    source_file: $ => repeat(choice(
      $.command,
      $.comment,
      $.data,
      $.expression,
      $.gpl,
      $.injection,
      $.transformation
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

    /* 
    TODO: I need to investigate if there is a way to capture entire comparison,
    arithmetic, and logical statements as a single node, with individual nested
    components.
    */

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

    /*
    TODO: Commas appear to be only commonly used in some graphing-related
    commands, but I need to investigate further to see where they show up.
    Ideally, there would be a good way to capture a "list" of things gathered by
    comments - but I need to know what such a list would look like.
    */

    comma: $ => token(","),

    // SECTION: Comments

    /*
    NOTE: Comments in SPSS syntax are weird and under-documented. From some
    experimentation I have found that you can have any of the three options
    below. For the third option, there needs to be a blank line separating the
    non-ended asterisk comment, and any further commands - otherwise those
    additional commands are still treated as comments. An additional oddity, is
    that it seems like comments CANNOT appear anywhere in the syntax - they must
    be on their own line and they also must not be within the context of a
    command (e.g., you cannot put a comment between a command and its
    subcommand.
    */

    comment: $ => token(choice(
      // For asterisk-initiated comments, ending in period
      seq(/\*/, /[^\n]*/, /\./),
      // For command-initiated comments, ending in period
      seq('COMMENT', /[^\n]*/, /\./),
      // For asterisk-initiated comments, ending in blank line w/o period
      /\*[^.]*?\n\s*\n/
    )),

    // SECTION: SPSS Created Data

    /*
    NOTE: In SPSS, you can create data in the syntax itself by using a
    space-delimited format. Such a block of data is started with "BEGIN DATA"
    and ended with "END DATA". The SPSS syntax editor does not highlight data
    entered in this way uniquely, so I will similarly just allow this to be a
    unique block, but without any special highlighting.
    https://www.ibm.com/docs/en/spss-statistics/30.0.0?topic=reference-begin-data-end-data
    */

    data: $ => seq(
      "BEGIN DATA",
      optional($.data_source),
      "END DATA."
    ),

    // NOTE: Splitting this into it's own node helps the data source be distinct

    data_source: $ => repeat1(/[^\n]+/),

    // SECTION: Expressions

    /*
    NOTE: I'm not yet super clear on what these are for, but they are a unique
    type of block that contains other commands, so they for sure need to be
    treated different than a normal command (which cannot nest other commands).
    https://www.ibm.com/docs/en/spss-statistics/30.0.0?topic=reference-begin-expr-end-expr
    */

    expression: $ => choice(
      // NOTE: This is the modern, supported method
      seq(
        $.expression_out_start,
        optional($.expression_source),
        "END EXPR."
      ),
      // NOTE: This is deprecated since SPSS v23, but is still likely used
      seq(
        $.expression_out_start,
        optional($.expression_source),
        "SIMPREP END."
      )
    ),

    // NOTE: Split out for better indent control
    expression_out_start: $ => seq(
      choice(
        "BEGIN EXPR",
        "SIMPREP BEGIN"
      ),
      optional($.expression_out_subcommand),
    ),

    /*
    NOTE: All expression block require this specific subcommand at the start and
    some arguments, ending the start command with a period
    */

    expression_out_subcommand: $ => seq(
      $.expression_out_subidentifier,
      $.arguments,
      "."
    ),

    expression_out_subidentifier: $ => "/OUTFILE",

    /* 
    NOTE: Since expression nest other commands, we want to use the normal node
    structure for those (almost like a language embedded within itself)
    */

    expression_source: $ => repeat1(
      $.command
    ),

    // SECTION: Graphics Protocol Language (GPL) - for creating graphs

    /*
    NOTE: GPL code begins with the command "BEGIN GPL", followed by GPL source,
    and end with "END GPL.". As far as I can tell, the actual SPSS syntax editor
    itself does not employ any highlighting for this GPL code. So, for the time
    being, I will also not fuss on this and instead just identify it with a
    specific node.
    https://www.ibm.com/docs/en/spss-statistics/30.0.0?topic=reference-introduction-gpl#gpl_intro
    */

    gpl: $ => seq(
      "BEGIN GPL",
      optional($.gpl_source),
      "END GPL."
    ),

    // NOTE: Splitting this into it's own node helps the GPL source be distinct

    gpl_source: $ => repeat1(/[^\n]+/),

    // SECTION: Injections - For embedding R or Python

    /*
    NOTE: Injections technically start with the command "BEGIN PROGRAM",
    followed by either subcommand "PYTHON3" or "R", then the relevant source
    code, and end with "END PROGRAM.". However, given their unique purpose of
    embedding R and/or Python code, I don't include this command in the list of
    commands above, and instead, only use it in this special injection capture.
    This also means we can treat this as an injected language and apply
    appropriate R and Python tree-sitter behavior within the injection_source.
    */

    injection: $ => seq(
      "BEGIN PROGRAM",
      // The injected language name
      $.language,
      /* Make source optional so that the injection still identifies before any 
      source code is written */
      optional($.injection_source),
      "END PROGRAM."
    ),

    /*
    NOTE: Tree-sitter needs a clear name to appropriately identify what language
    is injected. The "R" subcommand works as-is, but the "PYTHON3" does not get
    identified as Python. So, I make the below 3 nodes, that will make a clear
    indication to treesitter what language is to be injected.
    */

    language: $ => choice(
      $.python,
      $.r
    ),

    python: $ => /PYTHON3/i,

    r: $ => /R/i,

    /*
    NOTE: The injection source itself can be described well enough as a series
    of source code lines, each separated by a newline. Separating it into its
    own node means that the entire injection_source is treated as continuous
    code, rather than individual lines of code.
    */

    injection_source: $ => repeat1(/[^\n]+/),

    // SECTION: Transformations

    /*
    NOTE:
    Transformation are very similar to expressions from what I gather, but I
    am still not too sure on it. Either way, here is a unique block type for it,
    for much the same reasons that expressions need one.
    https://www.ibm.com/docs/en/spss-statistics/30.0.0?topic=reference-tms-begin
    */

    transformation: $ => seq(
      $.transformation_out_start,
      optional($.transformation_source),
      "TMS END."
    ),

    // NOTE: Split out for better indent control
    transformation_out_start: $ => seq(
      "TMS BEGIN",
      optional($.transformation_out_subcommand),
    ),

    /*
    NOTE: All transformation block require this specific subcommand at the start
    and some arguments, ending the start command with a period
    */

    transformation_out_subcommand: $ => seq(
      $.transformation_out_subidentifier,
      $.arguments,
      "."
    ),

    transformation_out_subidentifier: $ => "/DESTINATION",

    /* 
    NOTE: Since transformations nest other commands, we want to use the normal
    node structure for those (almost like a language embedded within itself)
    */

    transformation_source: $ => repeat1(
      $.command
    ),

  },

});
