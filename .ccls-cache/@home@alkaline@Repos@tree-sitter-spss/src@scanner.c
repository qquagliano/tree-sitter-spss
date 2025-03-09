#include "tree_sitter/parser.h"
#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>

// The external token produced by this scanner.
// (Note: our grammar.js expects an external $.id, so you might choose to name
// this ID.)
enum TokenType {
  ID,
  SUBID,
};

//---------------------------------------------------------------------
// The list of SPSS command names.
static const char *command_list[] = {
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
};

//---------------------------------------------------------------------
// The list of SPSS subcommand names.
static const char *subcommand_list[] = {};

static const size_t NUM_COMMANDS =
    sizeof(command_list) / sizeof(command_list[0]);

//---------------------------------------------------------------------
// Helper: checks if a character is allowed in a command name.
// (Letters, digits, spaces, and '-' are allowed.)
static inline bool is_command_char(int32_t c) {
  return c != 0 && (isalpha(c) || isdigit(c) || c == ' ' || c == '-');
}

//---------------------------------------------------------------------
// The external scanner function.
// It advances through the input while tracking candidates that match
// one of our fixed command names. When a candidate is complete (i.e. pos
// equals the candidate’s length) we mark that as a potential match.
// However, we do not immediately stop if the next character is a valid
// command character—if any candidate remains that could extend the match,
// we continue scanning.
bool tree_sitter_spss_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  if (!valid_symbols[ID])
    return false;

  // Skip any leading whitespace.
  while (isspace(lexer->lookahead))
    lexer->advance(lexer, true);

  bool candidate_possible[NUM_COMMANDS];
  for (size_t i = 0; i < NUM_COMMANDS; i++)
    candidate_possible[i] = true;

  size_t pos = 0;
  size_t best_match_length = 0;
  bool found_complete = false;

  while (true) {
    int32_t lookahead = lexer->lookahead;
    if (lookahead == 0)
      break;

    bool any_possible = false;
    // Update candidate possibilities.
    for (size_t i = 0; i < NUM_COMMANDS; i++) {
      if (!candidate_possible[i])
        continue;
      size_t cmd_len = strlen(command_list[i]);
      if (pos < cmd_len) {
        char expected = command_list[i][pos];
        if (tolower(lookahead) != tolower(expected))
          candidate_possible[i] = false;
      }
      if (candidate_possible[i])
        any_possible = true;
    }

    // Check for complete candidates at the current position.
    bool current_complete = false;
    for (size_t i = 0; i < NUM_COMMANDS; i++) {
      if (!candidate_possible[i])
        continue;
      size_t cmd_len = strlen(command_list[i]);
      if (pos == cmd_len) {
        current_complete = true;
        // Record the best (longest) complete match.
        if (cmd_len > best_match_length)
          best_match_length = cmd_len;
      }
    }
    if (current_complete)
      found_complete = true;

    // If we have a complete match, check if any candidate remains
    // that could extend the match (i.e. has a longer name).
    bool ambiguous = false;
    for (size_t i = 0; i < NUM_COMMANDS; i++) {
      if (!candidate_possible[i])
        continue;
      if (strlen(command_list[i]) > pos) {
        ambiguous = true;
        break;
      }
    }
    // If we have a complete match and no candidate can extend further,
    // stop scanning so we don't consume extra characters.
    if (found_complete && !ambiguous)
      break;

    // If no candidates remain, break out.
    if (!any_possible)
      break;

    lexer->advance(lexer, false);
    pos++;
  }

  if (!found_complete)
    return false;

  // Mark the end at the best complete match.
  lexer->mark_end(lexer);
  lexer->result_symbol = ID;
  return true;
}

//---------------------------------------------------------------------
// Scanner state management functions.
void *tree_sitter_spss_external_scanner_create(void) { return NULL; }
void tree_sitter_spss_external_scanner_destroy(void *payload) { (void)payload; }
unsigned tree_sitter_spss_external_scanner_serialize(void *payload,
                                                     char *buffer) {
  (void)payload;
  (void)buffer;
  return 0;
}
void tree_sitter_spss_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {
  (void)payload;
  (void)buffer;
  (void)length;
}
