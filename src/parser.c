#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 355
#define ALIAS_COUNT 0
#define TOKEN_COUNT 339
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_end_of_command = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_2SLS = 4,
  anon_sym_ACF = 5,
  anon_sym_ADDDOCUMENT = 6,
  anon_sym_ADDFILES = 7,
  anon_sym_ADDVALUELABELS = 8,
  anon_sym_ADP = 9,
  anon_sym_AGGREGATE = 10,
  anon_sym_AIM = 11,
  anon_sym_ALSCAL = 12,
  anon_sym_ALTERTYPE = 13,
  anon_sym_ANACOR = 14,
  anon_sym_ANOVA = 15,
  anon_sym_APPLYDICTIONARY = 16,
  anon_sym_AREG = 17,
  anon_sym_ARIMA = 18,
  anon_sym_AUTORECODE = 19,
  anon_sym_BAYESANOVA = 20,
  anon_sym_BAYESCORRELATION = 21,
  anon_sym_BAYESINDEPENDENT = 22,
  anon_sym_BAYESLOGLINEAR = 23,
  anon_sym_BAYESONESAMPLE = 24,
  anon_sym_BAYESREGRESSION = 25,
  anon_sym_BAYESRELATED = 26,
  anon_sym_BAYESREPEATED = 27,
  anon_sym_BEGINDATA = 28,
  anon_sym_BEGINEXPR = 29,
  anon_sym_BEGINEXPR_DASHENDEXPR = 30,
  anon_sym_BEGINGPL_DASHENDGPL = 31,
  anon_sym_BOOTSTRAP = 32,
  anon_sym_BREAK = 33,
  anon_sym_CACHE = 34,
  anon_sym_CASEPLOT = 35,
  anon_sym_CASESTOVARS = 36,
  anon_sym_CATREG = 37,
  anon_sym_CD = 38,
  anon_sym_CLABELS = 39,
  anon_sym_CLEARTIMEPROGRAM = 40,
  anon_sym_CLEARTRANSFORMATIONS = 41,
  anon_sym_CLUSTER = 42,
  anon_sym_CNLR = 43,
  anon_sym_CODEBOOK = 44,
  anon_sym_COMMENT = 45,
  anon_sym_COMPAREDATASETS = 46,
  anon_sym_COMPUTE = 47,
  anon_sym_CONJOINT = 48,
  anon_sym_CONSTRAINEDFUNCTIONS = 49,
  anon_sym_CORRELATIONS = 50,
  anon_sym_CORRESPONDENCE = 51,
  anon_sym_COUNT = 52,
  anon_sym_COXREG = 53,
  anon_sym_CREATE = 54,
  anon_sym_CROSSTABS = 55,
  anon_sym_CSCOXREG = 56,
  anon_sym_CSDESCRIPTIVES = 57,
  anon_sym_CSGLM = 58,
  anon_sym_CSLOGISTIC = 59,
  anon_sym_CSORDINAL = 60,
  anon_sym_CSPLAN = 61,
  anon_sym_CSSELECT = 62,
  anon_sym_CSTABULATE = 63,
  anon_sym_CTABLES = 64,
  anon_sym_CURVEFIT = 65,
  anon_sym_DATALIST = 66,
  anon_sym_DATAFILEATTRIBUTE = 67,
  anon_sym_DATASETACTIVATE = 68,
  anon_sym_DATASETCLOSE = 69,
  anon_sym_DATASETCOPY = 70,
  anon_sym_DATASETDECLARE = 71,
  anon_sym_DATASETDISPLAY = 72,
  anon_sym_DATASETNAME = 73,
  anon_sym_DATE = 74,
  anon_sym_DEFINE = 75,
  anon_sym_DELETEVARIABLES = 76,
  anon_sym_DERIVATIVES = 77,
  anon_sym_DESCRIPTIVES = 78,
  anon_sym_DETECTANOMALY = 79,
  anon_sym_DISCRIMINANT = 80,
  anon_sym_DISPLAY = 81,
  anon_sym_DOIF = 82,
  anon_sym_DOREPEAT = 83,
  anon_sym_DOCUMENT = 84,
  anon_sym_DROPDOCUMENTS = 85,
  anon_sym_ECHO = 86,
  anon_sym_ENDCASE = 87,
  anon_sym_ENDFILE = 88,
  anon_sym_ERASE = 89,
  anon_sym_EXAMINE = 90,
  anon_sym_EXECUTE = 91,
  anon_sym_EXPORT = 92,
  anon_sym_EXSMOOTH = 93,
  anon_sym_EXTENSION = 94,
  anon_sym_FACTOR = 95,
  anon_sym_FILEHANDLE = 96,
  anon_sym_FILELABEL = 97,
  anon_sym_FILETYPE = 98,
  anon_sym_FILTER = 99,
  anon_sym_FINISH = 100,
  anon_sym_FIT = 101,
  anon_sym_FLEISSMULTIRATERKAPPA = 102,
  anon_sym_FLIP = 103,
  anon_sym_FORMATS = 104,
  anon_sym_FREQUENCIES = 105,
  anon_sym_GENLIN = 106,
  anon_sym_GENLINMIXED = 107,
  anon_sym_GENLOG = 108,
  anon_sym_GET = 109,
  anon_sym_GETCAPTURE = 110,
  anon_sym_GETDATA = 111,
  anon_sym_GETSAS = 112,
  anon_sym_GETSTATA = 113,
  anon_sym_GETTRANSLATE = 114,
  anon_sym_GETCOGNOS = 115,
  anon_sym_GETTM1 = 116,
  anon_sym_GGRAPH = 117,
  anon_sym_GLM = 118,
  anon_sym_GRAPH = 119,
  anon_sym_HILOGLINEAR = 120,
  anon_sym_HOMALS = 121,
  anon_sym_HOST = 122,
  anon_sym_IBREAK = 123,
  anon_sym_IDO = 124,
  anon_sym_IDOEND = 125,
  anon_sym_IGRAPH = 126,
  anon_sym_IIF = 127,
  anon_sym_IIFEND = 128,
  anon_sym_ILET = 129,
  anon_sym_IMPORT = 130,
  anon_sym_INCLUDE = 131,
  anon_sym_INPUTPROGRAM = 132,
  anon_sym_INSERT = 133,
  anon_sym_INSERTEXEC = 134,
  anon_sym_INSERTHIDDDEN = 135,
  anon_sym_INSERTHIDDEN = 136,
  anon_sym_KEYEDDATALIST = 137,
  anon_sym_KM = 138,
  anon_sym_KNN = 139,
  anon_sym_LINEAR = 140,
  anon_sym_LIST = 141,
  anon_sym_LOGISTICREGRESSION = 142,
  anon_sym_LOGLINEAR = 143,
  anon_sym_LOOP = 144,
  anon_sym_MANOVA = 145,
  anon_sym_MATCHFILES = 146,
  anon_sym_MATRIX = 147,
  anon_sym_MATRIXDATA = 148,
  anon_sym_MCONVERT = 149,
  anon_sym_MEANS = 150,
  anon_sym_MISSINGVALUES = 151,
  anon_sym_MIXED = 152,
  anon_sym_MLP = 153,
  anon_sym_MODELCLOSE = 154,
  anon_sym_MODELHANDLE = 155,
  anon_sym_MODELLIST = 156,
  anon_sym_MODELNAME = 157,
  anon_sym_MODELPROGRAM = 158,
  anon_sym_MRSETS = 159,
  anon_sym_MULTRESPONSE = 160,
  anon_sym_MULTIPLECORRESPONDENCE = 161,
  anon_sym_MULTIPLEIMPUTATION = 162,
  anon_sym_MVA = 163,
  anon_sym_NOFCASES = 164,
  anon_sym_NAIVEBAYES = 165,
  anon_sym_NEWFILE = 166,
  anon_sym_NLR = 167,
  anon_sym_NOMREG = 168,
  anon_sym_NONPARCORR = 169,
  anon_sym_NPARTESTS = 170,
  anon_sym_NPTESTS = 171,
  anon_sym_NUMERIC = 172,
  anon_sym_OLAPCUBES = 173,
  anon_sym_OMS = 174,
  anon_sym_OMSEND = 175,
  anon_sym_OMSINFO = 176,
  anon_sym_OMSLOG = 177,
  anon_sym_ONEWAY = 178,
  anon_sym_OPTIMALBINNING = 179,
  anon_sym_ORTHOPLAN = 180,
  anon_sym_OUTPUTMODIFY = 181,
  anon_sym_OUTPUTNAME = 182,
  anon_sym_OUTPUTNEW = 183,
  anon_sym_OUTPUTOPEN = 184,
  anon_sym_OUTPUTSAVE = 185,
  anon_sym_OVERALS = 186,
  anon_sym_PACF = 187,
  anon_sym_PARTIALCORR = 188,
  anon_sym_PERMISSIONS = 189,
  anon_sym_PLANCARDS = 190,
  anon_sym_PLS = 191,
  anon_sym_PLUM = 192,
  anon_sym_POINT = 193,
  anon_sym_POWERMEANSINDEPENDENT = 194,
  anon_sym_POWERMEANSONESAMPLE = 195,
  anon_sym_POWERMEANSRELATED = 196,
  anon_sym_POWERONEWAYANOVA = 197,
  anon_sym_POWERPARTIALCORR = 198,
  anon_sym_POWERPEARSONONESAMPLE = 199,
  anon_sym_POWERPROPORTIONSINDEPENDENT = 200,
  anon_sym_POWERPROPORTIONSONESAMPLE = 201,
  anon_sym_POWERPROPORTIONSRELATED = 202,
  anon_sym_POWERSPEARMANONESAMPLE = 203,
  anon_sym_POWERUNIVARIATELINEAR = 204,
  anon_sym_PPLOT = 205,
  anon_sym_PREDICT = 206,
  anon_sym_PREFSCAL = 207,
  anon_sym_PRESERVE = 208,
  anon_sym_PRINCALS = 209,
  anon_sym_PRINT = 210,
  anon_sym_PRINTEJECT = 211,
  anon_sym_PRINTFORMATS = 212,
  anon_sym_PRINTSPACE = 213,
  anon_sym_PROBIT = 214,
  anon_sym_PROCEDUREOUTPUT = 215,
  anon_sym_PROPORTIONS = 216,
  anon_sym_PROXIMITIES = 217,
  anon_sym_PROXSCAL = 218,
  anon_sym_QUANTILEREGRESSION = 219,
  anon_sym_QUICKCLUSTER = 220,
  anon_sym_RANK = 221,
  anon_sym_RATIOSTATISTICS = 222,
  anon_sym_RBF = 223,
  anon_sym_READMODEL = 224,
  anon_sym_RECODE = 225,
  anon_sym_RECORDTYPE = 226,
  anon_sym_REGRESSION = 227,
  anon_sym_RELIABILITY = 228,
  anon_sym_RENAME = 229,
  anon_sym_RENAMEVARIABLES = 230,
  anon_sym_REPEATINGDATA = 231,
  anon_sym_REPORT = 232,
  anon_sym_REPOSITORYATTRIBUTES = 233,
  anon_sym_REPOSITORYCONNECT = 234,
  anon_sym_REPOSITORYCOPY = 235,
  anon_sym_REREAD = 236,
  anon_sym_RESPONSERATE = 237,
  anon_sym_RESTORE = 238,
  anon_sym_RMV = 239,
  anon_sym_ROC = 240,
  anon_sym_ROCANALYSIS = 241,
  anon_sym_SAMPLE = 242,
  anon_sym_SAVE = 243,
  anon_sym_SAVECODEPAGE = 244,
  anon_sym_SAVEDATACOLLECTION = 245,
  anon_sym_SAVEMODEL = 246,
  anon_sym_SAVETRANSLATE = 247,
  anon_sym_SCRIPT = 248,
  anon_sym_SEASON = 249,
  anon_sym_SELECTIF = 250,
  anon_sym_SELECTPRED = 251,
  anon_sym_SET = 252,
  anon_sym_SHIFTVALUES = 253,
  anon_sym_SHOW = 254,
  anon_sym_SIMPLAN = 255,
  anon_sym_SIMPREPBEGIN = 256,
  anon_sym_SIMRUN = 257,
  anon_sym_SORT = 258,
  anon_sym_SORTCASES = 259,
  anon_sym_SORTVARIABLES = 260,
  anon_sym_SPATIALASSOCIATIONRULES = 261,
  anon_sym_SPATIALMAPSPEC = 262,
  anon_sym_SPATIALTEMPORALPREDICTION = 263,
  anon_sym_SPCHART = 264,
  anon_sym_SPECTRA = 265,
  anon_sym_SPLITFILE = 266,
  anon_sym_STARJOIN = 267,
  anon_sym_STRING = 268,
  anon_sym_SUBTITLE = 269,
  anon_sym_SUMMARIZE = 270,
  anon_sym_SURVIVAL = 271,
  anon_sym_SYSFILEINFO = 272,
  anon_sym_T_DASHTEST = 273,
  anon_sym_TCMANALYSIS = 274,
  anon_sym_TCMAPPLY = 275,
  anon_sym_TCMMODEL = 276,
  anon_sym_TDISPLAY = 277,
  anon_sym_TEMPORARY = 278,
  anon_sym_TIMEPROGRAM = 279,
  anon_sym_TITLE = 280,
  anon_sym_TMSBEGIN = 281,
  anon_sym_TMSEND = 282,
  anon_sym_TMSIMPORT = 283,
  anon_sym_TMSMERGE = 284,
  anon_sym_TREE = 285,
  anon_sym_TSAPPLY = 286,
  anon_sym_TSET = 287,
  anon_sym_TSHOW = 288,
  anon_sym_TSMODEL = 289,
  anon_sym_TSPLOT = 290,
  anon_sym_TWOSTEPCLUSTER = 291,
  anon_sym_UNIANOVA = 292,
  anon_sym_UPDATE = 293,
  anon_sym_USE = 294,
  anon_sym_VALIDATEDATA = 295,
  anon_sym_VALUELABELS = 296,
  anon_sym_VARCOMP = 297,
  anon_sym_VARIABLEALIGNMENT = 298,
  anon_sym_VARIABLEATTRIBUTE = 299,
  anon_sym_VARIABLELABELS = 300,
  anon_sym_VARIABLELEVEL = 301,
  anon_sym_VARIABLEROLE = 302,
  anon_sym_VARIABLEWIDTH = 303,
  anon_sym_VARSTOCASES = 304,
  anon_sym_VECTOR = 305,
  anon_sym_VERIFY = 306,
  anon_sym_WEIGHT = 307,
  anon_sym_WEIGHTEDKAPPA = 308,
  anon_sym_WLS = 309,
  anon_sym_WRITE = 310,
  anon_sym_WRITEFORMATS = 311,
  anon_sym_XGRAPH = 312,
  anon_sym_XSAVE = 313,
  sym_subidentifier = 314,
  sym_keyword = 315,
  sym_variable = 316,
  sym_string = 317,
  sym_number = 318,
  anon_sym_PLUS = 319,
  anon_sym_DASH = 320,
  anon_sym_STAR = 321,
  anon_sym_SLASH = 322,
  anon_sym_STAR_STAR = 323,
  anon_sym_LT = 324,
  anon_sym_GT = 325,
  anon_sym_EQ = 326,
  anon_sym_LT_GT = 327,
  anon_sym_LT_EQ = 328,
  anon_sym_GT_EQ = 329,
  anon_sym_AMP = 330,
  anon_sym_PIPE = 331,
  sym_comma = 332,
  sym_comment = 333,
  anon_sym_BEGINPROGRAM = 334,
  anon_sym_ENDPROGRAM_DOT = 335,
  sym_python = 336,
  sym_r = 337,
  aux_sym_injection_source_token1 = 338,
  sym_source_file = 339,
  sym_command = 340,
  sym_subcommand = 341,
  sym_arguments = 342,
  sym_parenthetical = 343,
  sym_identifier = 344,
  sym_arithmetic = 345,
  sym_comparison = 346,
  sym_logical = 347,
  sym_injection = 348,
  sym_language = 349,
  sym_injection_source = 350,
  aux_sym_source_file_repeat1 = 351,
  aux_sym_command_repeat1 = 352,
  aux_sym_arguments_repeat1 = 353,
  aux_sym_injection_source_repeat1 = 354,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_end_of_command] = "end_of_command",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_2SLS] = "2SLS",
  [anon_sym_ACF] = "ACF",
  [anon_sym_ADDDOCUMENT] = "ADD DOCUMENT",
  [anon_sym_ADDFILES] = "ADD FILES",
  [anon_sym_ADDVALUELABELS] = "ADD VALUE LABELS",
  [anon_sym_ADP] = "ADP",
  [anon_sym_AGGREGATE] = "AGGREGATE",
  [anon_sym_AIM] = "AIM",
  [anon_sym_ALSCAL] = "ALSCAL",
  [anon_sym_ALTERTYPE] = "ALTER TYPE",
  [anon_sym_ANACOR] = "ANACOR",
  [anon_sym_ANOVA] = "ANOVA",
  [anon_sym_APPLYDICTIONARY] = "APPLY DICTIONARY",
  [anon_sym_AREG] = "AREG",
  [anon_sym_ARIMA] = "ARIMA",
  [anon_sym_AUTORECODE] = "AUTORECODE",
  [anon_sym_BAYESANOVA] = "BAYES ANOVA",
  [anon_sym_BAYESCORRELATION] = "BAYES CORRELATION",
  [anon_sym_BAYESINDEPENDENT] = "BAYES INDEPENDENT",
  [anon_sym_BAYESLOGLINEAR] = "BAYES LOGLINEAR",
  [anon_sym_BAYESONESAMPLE] = "BAYES ONESAMPLE",
  [anon_sym_BAYESREGRESSION] = "BAYES REGRESSION",
  [anon_sym_BAYESRELATED] = "BAYES RELATED",
  [anon_sym_BAYESREPEATED] = "BAYES REPEATED",
  [anon_sym_BEGINDATA] = "BEGIN DATA",
  [anon_sym_BEGINEXPR] = "BEGIN EXPR",
  [anon_sym_BEGINEXPR_DASHENDEXPR] = "BEGIN EXPR-END EXPR",
  [anon_sym_BEGINGPL_DASHENDGPL] = "BEGIN GPL-END GPL",
  [anon_sym_BOOTSTRAP] = "BOOTSTRAP",
  [anon_sym_BREAK] = "BREAK",
  [anon_sym_CACHE] = "CACHE",
  [anon_sym_CASEPLOT] = "CASEPLOT",
  [anon_sym_CASESTOVARS] = "CASESTOVARS",
  [anon_sym_CATREG] = "CATREG",
  [anon_sym_CD] = "CD",
  [anon_sym_CLABELS] = "CLABELS",
  [anon_sym_CLEARTIMEPROGRAM] = "CLEAR TIME PROGRAM",
  [anon_sym_CLEARTRANSFORMATIONS] = "CLEAR TRANSFORMATIONS",
  [anon_sym_CLUSTER] = "CLUSTER",
  [anon_sym_CNLR] = "CNLR",
  [anon_sym_CODEBOOK] = "CODEBOOK",
  [anon_sym_COMMENT] = "COMMENT",
  [anon_sym_COMPAREDATASETS] = "COMPARE DATASETS",
  [anon_sym_COMPUTE] = "COMPUTE",
  [anon_sym_CONJOINT] = "CONJOINT",
  [anon_sym_CONSTRAINEDFUNCTIONS] = "CONSTRAINED FUNCTIONS",
  [anon_sym_CORRELATIONS] = "CORRELATIONS",
  [anon_sym_CORRESPONDENCE] = "CORRESPONDENCE",
  [anon_sym_COUNT] = "COUNT",
  [anon_sym_COXREG] = "COXREG",
  [anon_sym_CREATE] = "CREATE",
  [anon_sym_CROSSTABS] = "CROSSTABS",
  [anon_sym_CSCOXREG] = "CSCOXREG",
  [anon_sym_CSDESCRIPTIVES] = "CSDESCRIPTIVES",
  [anon_sym_CSGLM] = "CSGLM",
  [anon_sym_CSLOGISTIC] = "CSLOGISTIC",
  [anon_sym_CSORDINAL] = "CSORDINAL",
  [anon_sym_CSPLAN] = "CSPLAN",
  [anon_sym_CSSELECT] = "CSSELECT",
  [anon_sym_CSTABULATE] = "CSTABULATE",
  [anon_sym_CTABLES] = "CTABLES",
  [anon_sym_CURVEFIT] = "CURVEFIT",
  [anon_sym_DATALIST] = "DATA LIST",
  [anon_sym_DATAFILEATTRIBUTE] = "DATAFILE ATTRIBUTE",
  [anon_sym_DATASETACTIVATE] = "DATASET ACTIVATE",
  [anon_sym_DATASETCLOSE] = "DATASET CLOSE",
  [anon_sym_DATASETCOPY] = "DATASET COPY",
  [anon_sym_DATASETDECLARE] = "DATASET DECLARE",
  [anon_sym_DATASETDISPLAY] = "DATASET DISPLAY",
  [anon_sym_DATASETNAME] = "DATASET NAME",
  [anon_sym_DATE] = "DATE",
  [anon_sym_DEFINE] = "DEFINE",
  [anon_sym_DELETEVARIABLES] = "DELETE VARIABLES",
  [anon_sym_DERIVATIVES] = "DERIVATIVES",
  [anon_sym_DESCRIPTIVES] = "DESCRIPTIVES",
  [anon_sym_DETECTANOMALY] = "DETECTANOMALY",
  [anon_sym_DISCRIMINANT] = "DISCRIMINANT",
  [anon_sym_DISPLAY] = "DISPLAY",
  [anon_sym_DOIF] = "DO IF",
  [anon_sym_DOREPEAT] = "DO REPEAT",
  [anon_sym_DOCUMENT] = "DOCUMENT",
  [anon_sym_DROPDOCUMENTS] = "DROP DOCUMENTS",
  [anon_sym_ECHO] = "ECHO",
  [anon_sym_ENDCASE] = "END CASE",
  [anon_sym_ENDFILE] = "END FILE",
  [anon_sym_ERASE] = "ERASE",
  [anon_sym_EXAMINE] = "EXAMINE",
  [anon_sym_EXECUTE] = "EXECUTE",
  [anon_sym_EXPORT] = "EXPORT",
  [anon_sym_EXSMOOTH] = "EXSMOOTH",
  [anon_sym_EXTENSION] = "EXTENSION",
  [anon_sym_FACTOR] = "FACTOR",
  [anon_sym_FILEHANDLE] = "FILE HANDLE",
  [anon_sym_FILELABEL] = "FILE LABEL",
  [anon_sym_FILETYPE] = "FILE TYPE",
  [anon_sym_FILTER] = "FILTER",
  [anon_sym_FINISH] = "FINISH",
  [anon_sym_FIT] = "FIT",
  [anon_sym_FLEISSMULTIRATERKAPPA] = "FLEISS MULTIRATER KAPPA",
  [anon_sym_FLIP] = "FLIP",
  [anon_sym_FORMATS] = "FORMATS",
  [anon_sym_FREQUENCIES] = "FREQUENCIES",
  [anon_sym_GENLIN] = "GENLIN",
  [anon_sym_GENLINMIXED] = "GENLINMIXED",
  [anon_sym_GENLOG] = "GENLOG",
  [anon_sym_GET] = "GET",
  [anon_sym_GETCAPTURE] = "GET CAPTURE",
  [anon_sym_GETDATA] = "GET DATA",
  [anon_sym_GETSAS] = "GET SAS",
  [anon_sym_GETSTATA] = "GET STATA",
  [anon_sym_GETTRANSLATE] = "GET TRANSLATE",
  [anon_sym_GETCOGNOS] = "GETCOGNOS",
  [anon_sym_GETTM1] = "GETTM1",
  [anon_sym_GGRAPH] = "GGRAPH",
  [anon_sym_GLM] = "GLM",
  [anon_sym_GRAPH] = "GRAPH",
  [anon_sym_HILOGLINEAR] = "HILOGLINEAR",
  [anon_sym_HOMALS] = "HOMALS",
  [anon_sym_HOST] = "HOST",
  [anon_sym_IBREAK] = "IBREAK",
  [anon_sym_IDO] = "IDO",
  [anon_sym_IDOEND] = "IDOEND",
  [anon_sym_IGRAPH] = "IGRAPH",
  [anon_sym_IIF] = "IIF",
  [anon_sym_IIFEND] = "IIFEND",
  [anon_sym_ILET] = "ILET",
  [anon_sym_IMPORT] = "IMPORT",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_INPUTPROGRAM] = "INPUT PROGRAM",
  [anon_sym_INSERT] = "INSERT",
  [anon_sym_INSERTEXEC] = "INSERT EXEC",
  [anon_sym_INSERTHIDDDEN] = "INSERT HIDDDEN",
  [anon_sym_INSERTHIDDEN] = "INSERT HIDDEN",
  [anon_sym_KEYEDDATALIST] = "KEYED DATA LIST",
  [anon_sym_KM] = "KM",
  [anon_sym_KNN] = "KNN",
  [anon_sym_LINEAR] = "LINEAR",
  [anon_sym_LIST] = "LIST",
  [anon_sym_LOGISTICREGRESSION] = "LOGISTIC REGRESSION",
  [anon_sym_LOGLINEAR] = "LOGLINEAR",
  [anon_sym_LOOP] = "LOOP",
  [anon_sym_MANOVA] = "MANOVA",
  [anon_sym_MATCHFILES] = "MATCH FILES",
  [anon_sym_MATRIX] = "MATRIX",
  [anon_sym_MATRIXDATA] = "MATRIX DATA",
  [anon_sym_MCONVERT] = "MCONVERT",
  [anon_sym_MEANS] = "MEANS",
  [anon_sym_MISSINGVALUES] = "MISSING VALUES",
  [anon_sym_MIXED] = "MIXED",
  [anon_sym_MLP] = "MLP",
  [anon_sym_MODELCLOSE] = "MODEL CLOSE",
  [anon_sym_MODELHANDLE] = "MODEL HANDLE",
  [anon_sym_MODELLIST] = "MODEL LIST",
  [anon_sym_MODELNAME] = "MODEL NAME",
  [anon_sym_MODELPROGRAM] = "MODEL PROGRAM",
  [anon_sym_MRSETS] = "MRSETS",
  [anon_sym_MULTRESPONSE] = "MULT RESPONSE",
  [anon_sym_MULTIPLECORRESPONDENCE] = "MULTIPLE CORRESPONDENCE",
  [anon_sym_MULTIPLEIMPUTATION] = "MULTIPLE IMPUTATION",
  [anon_sym_MVA] = "MVA",
  [anon_sym_NOFCASES] = "N OF CASES",
  [anon_sym_NAIVEBAYES] = "NAIVEBAYES",
  [anon_sym_NEWFILE] = "NEW FILE",
  [anon_sym_NLR] = "NLR",
  [anon_sym_NOMREG] = "NOMREG",
  [anon_sym_NONPARCORR] = "NONPAR CORR",
  [anon_sym_NPARTESTS] = "NPAR TESTS",
  [anon_sym_NPTESTS] = "NPTESTS",
  [anon_sym_NUMERIC] = "NUMERIC",
  [anon_sym_OLAPCUBES] = "OLAP CUBES",
  [anon_sym_OMS] = "OMS",
  [anon_sym_OMSEND] = "OMSEND",
  [anon_sym_OMSINFO] = "OMSINFO",
  [anon_sym_OMSLOG] = "OMSLOG",
  [anon_sym_ONEWAY] = "ONEWAY",
  [anon_sym_OPTIMALBINNING] = "OPTIMAL BINNING",
  [anon_sym_ORTHOPLAN] = "ORTHOPLAN",
  [anon_sym_OUTPUTMODIFY] = "OUTPUT MODIFY",
  [anon_sym_OUTPUTNAME] = "OUTPUT NAME",
  [anon_sym_OUTPUTNEW] = "OUTPUT NEW",
  [anon_sym_OUTPUTOPEN] = "OUTPUT OPEN",
  [anon_sym_OUTPUTSAVE] = "OUTPUT SAVE",
  [anon_sym_OVERALS] = "OVERALS",
  [anon_sym_PACF] = "PACF",
  [anon_sym_PARTIALCORR] = "PARTIAL CORR",
  [anon_sym_PERMISSIONS] = "PERMISSIONS",
  [anon_sym_PLANCARDS] = "PLANCARDS",
  [anon_sym_PLS] = "PLS",
  [anon_sym_PLUM] = "PLUM",
  [anon_sym_POINT] = "POINT",
  [anon_sym_POWERMEANSINDEPENDENT] = "POWER MEANS INDEPENDENT",
  [anon_sym_POWERMEANSONESAMPLE] = "POWER MEANS ONESAMPLE",
  [anon_sym_POWERMEANSRELATED] = "POWER MEANS RELATED",
  [anon_sym_POWERONEWAYANOVA] = "POWER ONEWAY ANOVA",
  [anon_sym_POWERPARTIALCORR] = "POWER PARTIALCORR",
  [anon_sym_POWERPEARSONONESAMPLE] = "POWER PEARSON ONESAMPLE",
  [anon_sym_POWERPROPORTIONSINDEPENDENT] = "POWER PROPORTIONS INDEPENDENT",
  [anon_sym_POWERPROPORTIONSONESAMPLE] = "POWER PROPORTIONS ONESAMPLE",
  [anon_sym_POWERPROPORTIONSRELATED] = "POWER PROPORTIONS RELATED",
  [anon_sym_POWERSPEARMANONESAMPLE] = "POWER SPEARMAN ONESAMPLE",
  [anon_sym_POWERUNIVARIATELINEAR] = "POWER UNIVARIATE LINEAR",
  [anon_sym_PPLOT] = "PPLOT",
  [anon_sym_PREDICT] = "PREDICT",
  [anon_sym_PREFSCAL] = "PREFSCAL",
  [anon_sym_PRESERVE] = "PRESERVE",
  [anon_sym_PRINCALS] = "PRINCALS",
  [anon_sym_PRINT] = "PRINT",
  [anon_sym_PRINTEJECT] = "PRINT EJECT",
  [anon_sym_PRINTFORMATS] = "PRINT FORMATS",
  [anon_sym_PRINTSPACE] = "PRINT SPACE",
  [anon_sym_PROBIT] = "PROBIT",
  [anon_sym_PROCEDUREOUTPUT] = "PROCEDURE OUTPUT",
  [anon_sym_PROPORTIONS] = "PROPORTIONS",
  [anon_sym_PROXIMITIES] = "PROXIMITIES",
  [anon_sym_PROXSCAL] = "PROXSCAL",
  [anon_sym_QUANTILEREGRESSION] = "QUANTILE REGRESSION",
  [anon_sym_QUICKCLUSTER] = "QUICK CLUSTER",
  [anon_sym_RANK] = "RANK",
  [anon_sym_RATIOSTATISTICS] = "RATIO STATISTICS",
  [anon_sym_RBF] = "RBF",
  [anon_sym_READMODEL] = "READ MODEL",
  [anon_sym_RECODE] = "RECODE",
  [anon_sym_RECORDTYPE] = "RECORD TYPE",
  [anon_sym_REGRESSION] = "REGRESSION",
  [anon_sym_RELIABILITY] = "RELIABILITY",
  [anon_sym_RENAME] = "RENAME",
  [anon_sym_RENAMEVARIABLES] = "RENAME VARIABLES",
  [anon_sym_REPEATINGDATA] = "REPEATING DATA",
  [anon_sym_REPORT] = "REPORT",
  [anon_sym_REPOSITORYATTRIBUTES] = "REPOSITORY ATTRIBUTES",
  [anon_sym_REPOSITORYCONNECT] = "REPOSITORY CONNECT",
  [anon_sym_REPOSITORYCOPY] = "REPOSITORY COPY",
  [anon_sym_REREAD] = "REREAD",
  [anon_sym_RESPONSERATE] = "RESPONSE RATE",
  [anon_sym_RESTORE] = "RESTORE",
  [anon_sym_RMV] = "RMV",
  [anon_sym_ROC] = "ROC",
  [anon_sym_ROCANALYSIS] = "ROC ANALYSIS",
  [anon_sym_SAMPLE] = "SAMPLE",
  [anon_sym_SAVE] = "SAVE",
  [anon_sym_SAVECODEPAGE] = "SAVE CODEPAGE",
  [anon_sym_SAVEDATACOLLECTION] = "SAVE DATA COLLECTION",
  [anon_sym_SAVEMODEL] = "SAVE MODEL",
  [anon_sym_SAVETRANSLATE] = "SAVE TRANSLATE",
  [anon_sym_SCRIPT] = "SCRIPT",
  [anon_sym_SEASON] = "SEASON",
  [anon_sym_SELECTIF] = "SELECT IF",
  [anon_sym_SELECTPRED] = "SELECTPRED",
  [anon_sym_SET] = "SET",
  [anon_sym_SHIFTVALUES] = "SHIFT VALUES",
  [anon_sym_SHOW] = "SHOW",
  [anon_sym_SIMPLAN] = "SIMPLAN",
  [anon_sym_SIMPREPBEGIN] = "SIMPREP BEGIN",
  [anon_sym_SIMRUN] = "SIMRUN",
  [anon_sym_SORT] = "SORT",
  [anon_sym_SORTCASES] = "SORT CASES",
  [anon_sym_SORTVARIABLES] = "SORT VARIABLES",
  [anon_sym_SPATIALASSOCIATIONRULES] = "SPATIAL ASSOCIATION RULES",
  [anon_sym_SPATIALMAPSPEC] = "SPATIAL MAPSPEC",
  [anon_sym_SPATIALTEMPORALPREDICTION] = "SPATIAL TEMPORAL PREDICTION",
  [anon_sym_SPCHART] = "SPCHART",
  [anon_sym_SPECTRA] = "SPECTRA",
  [anon_sym_SPLITFILE] = "SPLIT FILE",
  [anon_sym_STARJOIN] = "STAR JOIN",
  [anon_sym_STRING] = "STRING",
  [anon_sym_SUBTITLE] = "SUBTITLE",
  [anon_sym_SUMMARIZE] = "SUMMARIZE",
  [anon_sym_SURVIVAL] = "SURVIVAL",
  [anon_sym_SYSFILEINFO] = "SYSFILE INFO",
  [anon_sym_T_DASHTEST] = "T-TEST",
  [anon_sym_TCMANALYSIS] = "TCM ANALYSIS",
  [anon_sym_TCMAPPLY] = "TCM APPLY",
  [anon_sym_TCMMODEL] = "TCM MODEL",
  [anon_sym_TDISPLAY] = "TDISPLAY",
  [anon_sym_TEMPORARY] = "TEMPORARY",
  [anon_sym_TIMEPROGRAM] = "TIME PROGRAM",
  [anon_sym_TITLE] = "TITLE",
  [anon_sym_TMSBEGIN] = "TMS BEGIN",
  [anon_sym_TMSEND] = "TMS END",
  [anon_sym_TMSIMPORT] = "TMS IMPORT",
  [anon_sym_TMSMERGE] = "TMS MERGE",
  [anon_sym_TREE] = "TREE",
  [anon_sym_TSAPPLY] = "TSAPPLY",
  [anon_sym_TSET] = "TSET",
  [anon_sym_TSHOW] = "TSHOW",
  [anon_sym_TSMODEL] = "TSMODEL",
  [anon_sym_TSPLOT] = "TSPLOT",
  [anon_sym_TWOSTEPCLUSTER] = "TWOSTEP CLUSTER",
  [anon_sym_UNIANOVA] = "UNIANOVA",
  [anon_sym_UPDATE] = "UPDATE",
  [anon_sym_USE] = "USE",
  [anon_sym_VALIDATEDATA] = "VALIDATEDATA",
  [anon_sym_VALUELABELS] = "VALUE LABELS",
  [anon_sym_VARCOMP] = "VARCOMP",
  [anon_sym_VARIABLEALIGNMENT] = "VARIABLE ALIGNMENT",
  [anon_sym_VARIABLEATTRIBUTE] = "VARIABLE ATTRIBUTE",
  [anon_sym_VARIABLELABELS] = "VARIABLE LABELS",
  [anon_sym_VARIABLELEVEL] = "VARIABLE LEVEL",
  [anon_sym_VARIABLEROLE] = "VARIABLE ROLE",
  [anon_sym_VARIABLEWIDTH] = "VARIABLE WIDTH",
  [anon_sym_VARSTOCASES] = "VARSTOCASES",
  [anon_sym_VECTOR] = "VECTOR",
  [anon_sym_VERIFY] = "VERIFY",
  [anon_sym_WEIGHT] = "WEIGHT",
  [anon_sym_WEIGHTEDKAPPA] = "WEIGHTED KAPPA",
  [anon_sym_WLS] = "WLS",
  [anon_sym_WRITE] = "WRITE",
  [anon_sym_WRITEFORMATS] = "WRITE FORMATS",
  [anon_sym_XGRAPH] = "XGRAPH",
  [anon_sym_XSAVE] = "XSAVE",
  [sym_subidentifier] = "subidentifier",
  [sym_keyword] = "keyword",
  [sym_variable] = "variable",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [sym_comma] = "comma",
  [sym_comment] = "comment",
  [anon_sym_BEGINPROGRAM] = "BEGIN PROGRAM",
  [anon_sym_ENDPROGRAM_DOT] = "END PROGRAM.",
  [sym_python] = "python",
  [sym_r] = "r",
  [aux_sym_injection_source_token1] = "injection_source_token1",
  [sym_source_file] = "source_file",
  [sym_command] = "command",
  [sym_subcommand] = "subcommand",
  [sym_arguments] = "arguments",
  [sym_parenthetical] = "parenthetical",
  [sym_identifier] = "identifier",
  [sym_arithmetic] = "arithmetic",
  [sym_comparison] = "comparison",
  [sym_logical] = "logical",
  [sym_injection] = "injection",
  [sym_language] = "language",
  [sym_injection_source] = "injection_source",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_injection_source_repeat1] = "injection_source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_end_of_command] = sym_end_of_command,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_2SLS] = anon_sym_2SLS,
  [anon_sym_ACF] = anon_sym_ACF,
  [anon_sym_ADDDOCUMENT] = anon_sym_ADDDOCUMENT,
  [anon_sym_ADDFILES] = anon_sym_ADDFILES,
  [anon_sym_ADDVALUELABELS] = anon_sym_ADDVALUELABELS,
  [anon_sym_ADP] = anon_sym_ADP,
  [anon_sym_AGGREGATE] = anon_sym_AGGREGATE,
  [anon_sym_AIM] = anon_sym_AIM,
  [anon_sym_ALSCAL] = anon_sym_ALSCAL,
  [anon_sym_ALTERTYPE] = anon_sym_ALTERTYPE,
  [anon_sym_ANACOR] = anon_sym_ANACOR,
  [anon_sym_ANOVA] = anon_sym_ANOVA,
  [anon_sym_APPLYDICTIONARY] = anon_sym_APPLYDICTIONARY,
  [anon_sym_AREG] = anon_sym_AREG,
  [anon_sym_ARIMA] = anon_sym_ARIMA,
  [anon_sym_AUTORECODE] = anon_sym_AUTORECODE,
  [anon_sym_BAYESANOVA] = anon_sym_BAYESANOVA,
  [anon_sym_BAYESCORRELATION] = anon_sym_BAYESCORRELATION,
  [anon_sym_BAYESINDEPENDENT] = anon_sym_BAYESINDEPENDENT,
  [anon_sym_BAYESLOGLINEAR] = anon_sym_BAYESLOGLINEAR,
  [anon_sym_BAYESONESAMPLE] = anon_sym_BAYESONESAMPLE,
  [anon_sym_BAYESREGRESSION] = anon_sym_BAYESREGRESSION,
  [anon_sym_BAYESRELATED] = anon_sym_BAYESRELATED,
  [anon_sym_BAYESREPEATED] = anon_sym_BAYESREPEATED,
  [anon_sym_BEGINDATA] = anon_sym_BEGINDATA,
  [anon_sym_BEGINEXPR] = anon_sym_BEGINEXPR,
  [anon_sym_BEGINEXPR_DASHENDEXPR] = anon_sym_BEGINEXPR_DASHENDEXPR,
  [anon_sym_BEGINGPL_DASHENDGPL] = anon_sym_BEGINGPL_DASHENDGPL,
  [anon_sym_BOOTSTRAP] = anon_sym_BOOTSTRAP,
  [anon_sym_BREAK] = anon_sym_BREAK,
  [anon_sym_CACHE] = anon_sym_CACHE,
  [anon_sym_CASEPLOT] = anon_sym_CASEPLOT,
  [anon_sym_CASESTOVARS] = anon_sym_CASESTOVARS,
  [anon_sym_CATREG] = anon_sym_CATREG,
  [anon_sym_CD] = anon_sym_CD,
  [anon_sym_CLABELS] = anon_sym_CLABELS,
  [anon_sym_CLEARTIMEPROGRAM] = anon_sym_CLEARTIMEPROGRAM,
  [anon_sym_CLEARTRANSFORMATIONS] = anon_sym_CLEARTRANSFORMATIONS,
  [anon_sym_CLUSTER] = anon_sym_CLUSTER,
  [anon_sym_CNLR] = anon_sym_CNLR,
  [anon_sym_CODEBOOK] = anon_sym_CODEBOOK,
  [anon_sym_COMMENT] = anon_sym_COMMENT,
  [anon_sym_COMPAREDATASETS] = anon_sym_COMPAREDATASETS,
  [anon_sym_COMPUTE] = anon_sym_COMPUTE,
  [anon_sym_CONJOINT] = anon_sym_CONJOINT,
  [anon_sym_CONSTRAINEDFUNCTIONS] = anon_sym_CONSTRAINEDFUNCTIONS,
  [anon_sym_CORRELATIONS] = anon_sym_CORRELATIONS,
  [anon_sym_CORRESPONDENCE] = anon_sym_CORRESPONDENCE,
  [anon_sym_COUNT] = anon_sym_COUNT,
  [anon_sym_COXREG] = anon_sym_COXREG,
  [anon_sym_CREATE] = anon_sym_CREATE,
  [anon_sym_CROSSTABS] = anon_sym_CROSSTABS,
  [anon_sym_CSCOXREG] = anon_sym_CSCOXREG,
  [anon_sym_CSDESCRIPTIVES] = anon_sym_CSDESCRIPTIVES,
  [anon_sym_CSGLM] = anon_sym_CSGLM,
  [anon_sym_CSLOGISTIC] = anon_sym_CSLOGISTIC,
  [anon_sym_CSORDINAL] = anon_sym_CSORDINAL,
  [anon_sym_CSPLAN] = anon_sym_CSPLAN,
  [anon_sym_CSSELECT] = anon_sym_CSSELECT,
  [anon_sym_CSTABULATE] = anon_sym_CSTABULATE,
  [anon_sym_CTABLES] = anon_sym_CTABLES,
  [anon_sym_CURVEFIT] = anon_sym_CURVEFIT,
  [anon_sym_DATALIST] = anon_sym_DATALIST,
  [anon_sym_DATAFILEATTRIBUTE] = anon_sym_DATAFILEATTRIBUTE,
  [anon_sym_DATASETACTIVATE] = anon_sym_DATASETACTIVATE,
  [anon_sym_DATASETCLOSE] = anon_sym_DATASETCLOSE,
  [anon_sym_DATASETCOPY] = anon_sym_DATASETCOPY,
  [anon_sym_DATASETDECLARE] = anon_sym_DATASETDECLARE,
  [anon_sym_DATASETDISPLAY] = anon_sym_DATASETDISPLAY,
  [anon_sym_DATASETNAME] = anon_sym_DATASETNAME,
  [anon_sym_DATE] = anon_sym_DATE,
  [anon_sym_DEFINE] = anon_sym_DEFINE,
  [anon_sym_DELETEVARIABLES] = anon_sym_DELETEVARIABLES,
  [anon_sym_DERIVATIVES] = anon_sym_DERIVATIVES,
  [anon_sym_DESCRIPTIVES] = anon_sym_DESCRIPTIVES,
  [anon_sym_DETECTANOMALY] = anon_sym_DETECTANOMALY,
  [anon_sym_DISCRIMINANT] = anon_sym_DISCRIMINANT,
  [anon_sym_DISPLAY] = anon_sym_DISPLAY,
  [anon_sym_DOIF] = anon_sym_DOIF,
  [anon_sym_DOREPEAT] = anon_sym_DOREPEAT,
  [anon_sym_DOCUMENT] = anon_sym_DOCUMENT,
  [anon_sym_DROPDOCUMENTS] = anon_sym_DROPDOCUMENTS,
  [anon_sym_ECHO] = anon_sym_ECHO,
  [anon_sym_ENDCASE] = anon_sym_ENDCASE,
  [anon_sym_ENDFILE] = anon_sym_ENDFILE,
  [anon_sym_ERASE] = anon_sym_ERASE,
  [anon_sym_EXAMINE] = anon_sym_EXAMINE,
  [anon_sym_EXECUTE] = anon_sym_EXECUTE,
  [anon_sym_EXPORT] = anon_sym_EXPORT,
  [anon_sym_EXSMOOTH] = anon_sym_EXSMOOTH,
  [anon_sym_EXTENSION] = anon_sym_EXTENSION,
  [anon_sym_FACTOR] = anon_sym_FACTOR,
  [anon_sym_FILEHANDLE] = anon_sym_FILEHANDLE,
  [anon_sym_FILELABEL] = anon_sym_FILELABEL,
  [anon_sym_FILETYPE] = anon_sym_FILETYPE,
  [anon_sym_FILTER] = anon_sym_FILTER,
  [anon_sym_FINISH] = anon_sym_FINISH,
  [anon_sym_FIT] = anon_sym_FIT,
  [anon_sym_FLEISSMULTIRATERKAPPA] = anon_sym_FLEISSMULTIRATERKAPPA,
  [anon_sym_FLIP] = anon_sym_FLIP,
  [anon_sym_FORMATS] = anon_sym_FORMATS,
  [anon_sym_FREQUENCIES] = anon_sym_FREQUENCIES,
  [anon_sym_GENLIN] = anon_sym_GENLIN,
  [anon_sym_GENLINMIXED] = anon_sym_GENLINMIXED,
  [anon_sym_GENLOG] = anon_sym_GENLOG,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_GETCAPTURE] = anon_sym_GETCAPTURE,
  [anon_sym_GETDATA] = anon_sym_GETDATA,
  [anon_sym_GETSAS] = anon_sym_GETSAS,
  [anon_sym_GETSTATA] = anon_sym_GETSTATA,
  [anon_sym_GETTRANSLATE] = anon_sym_GETTRANSLATE,
  [anon_sym_GETCOGNOS] = anon_sym_GETCOGNOS,
  [anon_sym_GETTM1] = anon_sym_GETTM1,
  [anon_sym_GGRAPH] = anon_sym_GGRAPH,
  [anon_sym_GLM] = anon_sym_GLM,
  [anon_sym_GRAPH] = anon_sym_GRAPH,
  [anon_sym_HILOGLINEAR] = anon_sym_HILOGLINEAR,
  [anon_sym_HOMALS] = anon_sym_HOMALS,
  [anon_sym_HOST] = anon_sym_HOST,
  [anon_sym_IBREAK] = anon_sym_IBREAK,
  [anon_sym_IDO] = anon_sym_IDO,
  [anon_sym_IDOEND] = anon_sym_IDOEND,
  [anon_sym_IGRAPH] = anon_sym_IGRAPH,
  [anon_sym_IIF] = anon_sym_IIF,
  [anon_sym_IIFEND] = anon_sym_IIFEND,
  [anon_sym_ILET] = anon_sym_ILET,
  [anon_sym_IMPORT] = anon_sym_IMPORT,
  [anon_sym_INCLUDE] = anon_sym_INCLUDE,
  [anon_sym_INPUTPROGRAM] = anon_sym_INPUTPROGRAM,
  [anon_sym_INSERT] = anon_sym_INSERT,
  [anon_sym_INSERTEXEC] = anon_sym_INSERTEXEC,
  [anon_sym_INSERTHIDDDEN] = anon_sym_INSERTHIDDDEN,
  [anon_sym_INSERTHIDDEN] = anon_sym_INSERTHIDDEN,
  [anon_sym_KEYEDDATALIST] = anon_sym_KEYEDDATALIST,
  [anon_sym_KM] = anon_sym_KM,
  [anon_sym_KNN] = anon_sym_KNN,
  [anon_sym_LINEAR] = anon_sym_LINEAR,
  [anon_sym_LIST] = anon_sym_LIST,
  [anon_sym_LOGISTICREGRESSION] = anon_sym_LOGISTICREGRESSION,
  [anon_sym_LOGLINEAR] = anon_sym_LOGLINEAR,
  [anon_sym_LOOP] = anon_sym_LOOP,
  [anon_sym_MANOVA] = anon_sym_MANOVA,
  [anon_sym_MATCHFILES] = anon_sym_MATCHFILES,
  [anon_sym_MATRIX] = anon_sym_MATRIX,
  [anon_sym_MATRIXDATA] = anon_sym_MATRIXDATA,
  [anon_sym_MCONVERT] = anon_sym_MCONVERT,
  [anon_sym_MEANS] = anon_sym_MEANS,
  [anon_sym_MISSINGVALUES] = anon_sym_MISSINGVALUES,
  [anon_sym_MIXED] = anon_sym_MIXED,
  [anon_sym_MLP] = anon_sym_MLP,
  [anon_sym_MODELCLOSE] = anon_sym_MODELCLOSE,
  [anon_sym_MODELHANDLE] = anon_sym_MODELHANDLE,
  [anon_sym_MODELLIST] = anon_sym_MODELLIST,
  [anon_sym_MODELNAME] = anon_sym_MODELNAME,
  [anon_sym_MODELPROGRAM] = anon_sym_MODELPROGRAM,
  [anon_sym_MRSETS] = anon_sym_MRSETS,
  [anon_sym_MULTRESPONSE] = anon_sym_MULTRESPONSE,
  [anon_sym_MULTIPLECORRESPONDENCE] = anon_sym_MULTIPLECORRESPONDENCE,
  [anon_sym_MULTIPLEIMPUTATION] = anon_sym_MULTIPLEIMPUTATION,
  [anon_sym_MVA] = anon_sym_MVA,
  [anon_sym_NOFCASES] = anon_sym_NOFCASES,
  [anon_sym_NAIVEBAYES] = anon_sym_NAIVEBAYES,
  [anon_sym_NEWFILE] = anon_sym_NEWFILE,
  [anon_sym_NLR] = anon_sym_NLR,
  [anon_sym_NOMREG] = anon_sym_NOMREG,
  [anon_sym_NONPARCORR] = anon_sym_NONPARCORR,
  [anon_sym_NPARTESTS] = anon_sym_NPARTESTS,
  [anon_sym_NPTESTS] = anon_sym_NPTESTS,
  [anon_sym_NUMERIC] = anon_sym_NUMERIC,
  [anon_sym_OLAPCUBES] = anon_sym_OLAPCUBES,
  [anon_sym_OMS] = anon_sym_OMS,
  [anon_sym_OMSEND] = anon_sym_OMSEND,
  [anon_sym_OMSINFO] = anon_sym_OMSINFO,
  [anon_sym_OMSLOG] = anon_sym_OMSLOG,
  [anon_sym_ONEWAY] = anon_sym_ONEWAY,
  [anon_sym_OPTIMALBINNING] = anon_sym_OPTIMALBINNING,
  [anon_sym_ORTHOPLAN] = anon_sym_ORTHOPLAN,
  [anon_sym_OUTPUTMODIFY] = anon_sym_OUTPUTMODIFY,
  [anon_sym_OUTPUTNAME] = anon_sym_OUTPUTNAME,
  [anon_sym_OUTPUTNEW] = anon_sym_OUTPUTNEW,
  [anon_sym_OUTPUTOPEN] = anon_sym_OUTPUTOPEN,
  [anon_sym_OUTPUTSAVE] = anon_sym_OUTPUTSAVE,
  [anon_sym_OVERALS] = anon_sym_OVERALS,
  [anon_sym_PACF] = anon_sym_PACF,
  [anon_sym_PARTIALCORR] = anon_sym_PARTIALCORR,
  [anon_sym_PERMISSIONS] = anon_sym_PERMISSIONS,
  [anon_sym_PLANCARDS] = anon_sym_PLANCARDS,
  [anon_sym_PLS] = anon_sym_PLS,
  [anon_sym_PLUM] = anon_sym_PLUM,
  [anon_sym_POINT] = anon_sym_POINT,
  [anon_sym_POWERMEANSINDEPENDENT] = anon_sym_POWERMEANSINDEPENDENT,
  [anon_sym_POWERMEANSONESAMPLE] = anon_sym_POWERMEANSONESAMPLE,
  [anon_sym_POWERMEANSRELATED] = anon_sym_POWERMEANSRELATED,
  [anon_sym_POWERONEWAYANOVA] = anon_sym_POWERONEWAYANOVA,
  [anon_sym_POWERPARTIALCORR] = anon_sym_POWERPARTIALCORR,
  [anon_sym_POWERPEARSONONESAMPLE] = anon_sym_POWERPEARSONONESAMPLE,
  [anon_sym_POWERPROPORTIONSINDEPENDENT] = anon_sym_POWERPROPORTIONSINDEPENDENT,
  [anon_sym_POWERPROPORTIONSONESAMPLE] = anon_sym_POWERPROPORTIONSONESAMPLE,
  [anon_sym_POWERPROPORTIONSRELATED] = anon_sym_POWERPROPORTIONSRELATED,
  [anon_sym_POWERSPEARMANONESAMPLE] = anon_sym_POWERSPEARMANONESAMPLE,
  [anon_sym_POWERUNIVARIATELINEAR] = anon_sym_POWERUNIVARIATELINEAR,
  [anon_sym_PPLOT] = anon_sym_PPLOT,
  [anon_sym_PREDICT] = anon_sym_PREDICT,
  [anon_sym_PREFSCAL] = anon_sym_PREFSCAL,
  [anon_sym_PRESERVE] = anon_sym_PRESERVE,
  [anon_sym_PRINCALS] = anon_sym_PRINCALS,
  [anon_sym_PRINT] = anon_sym_PRINT,
  [anon_sym_PRINTEJECT] = anon_sym_PRINTEJECT,
  [anon_sym_PRINTFORMATS] = anon_sym_PRINTFORMATS,
  [anon_sym_PRINTSPACE] = anon_sym_PRINTSPACE,
  [anon_sym_PROBIT] = anon_sym_PROBIT,
  [anon_sym_PROCEDUREOUTPUT] = anon_sym_PROCEDUREOUTPUT,
  [anon_sym_PROPORTIONS] = anon_sym_PROPORTIONS,
  [anon_sym_PROXIMITIES] = anon_sym_PROXIMITIES,
  [anon_sym_PROXSCAL] = anon_sym_PROXSCAL,
  [anon_sym_QUANTILEREGRESSION] = anon_sym_QUANTILEREGRESSION,
  [anon_sym_QUICKCLUSTER] = anon_sym_QUICKCLUSTER,
  [anon_sym_RANK] = anon_sym_RANK,
  [anon_sym_RATIOSTATISTICS] = anon_sym_RATIOSTATISTICS,
  [anon_sym_RBF] = anon_sym_RBF,
  [anon_sym_READMODEL] = anon_sym_READMODEL,
  [anon_sym_RECODE] = anon_sym_RECODE,
  [anon_sym_RECORDTYPE] = anon_sym_RECORDTYPE,
  [anon_sym_REGRESSION] = anon_sym_REGRESSION,
  [anon_sym_RELIABILITY] = anon_sym_RELIABILITY,
  [anon_sym_RENAME] = anon_sym_RENAME,
  [anon_sym_RENAMEVARIABLES] = anon_sym_RENAMEVARIABLES,
  [anon_sym_REPEATINGDATA] = anon_sym_REPEATINGDATA,
  [anon_sym_REPORT] = anon_sym_REPORT,
  [anon_sym_REPOSITORYATTRIBUTES] = anon_sym_REPOSITORYATTRIBUTES,
  [anon_sym_REPOSITORYCONNECT] = anon_sym_REPOSITORYCONNECT,
  [anon_sym_REPOSITORYCOPY] = anon_sym_REPOSITORYCOPY,
  [anon_sym_REREAD] = anon_sym_REREAD,
  [anon_sym_RESPONSERATE] = anon_sym_RESPONSERATE,
  [anon_sym_RESTORE] = anon_sym_RESTORE,
  [anon_sym_RMV] = anon_sym_RMV,
  [anon_sym_ROC] = anon_sym_ROC,
  [anon_sym_ROCANALYSIS] = anon_sym_ROCANALYSIS,
  [anon_sym_SAMPLE] = anon_sym_SAMPLE,
  [anon_sym_SAVE] = anon_sym_SAVE,
  [anon_sym_SAVECODEPAGE] = anon_sym_SAVECODEPAGE,
  [anon_sym_SAVEDATACOLLECTION] = anon_sym_SAVEDATACOLLECTION,
  [anon_sym_SAVEMODEL] = anon_sym_SAVEMODEL,
  [anon_sym_SAVETRANSLATE] = anon_sym_SAVETRANSLATE,
  [anon_sym_SCRIPT] = anon_sym_SCRIPT,
  [anon_sym_SEASON] = anon_sym_SEASON,
  [anon_sym_SELECTIF] = anon_sym_SELECTIF,
  [anon_sym_SELECTPRED] = anon_sym_SELECTPRED,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_SHIFTVALUES] = anon_sym_SHIFTVALUES,
  [anon_sym_SHOW] = anon_sym_SHOW,
  [anon_sym_SIMPLAN] = anon_sym_SIMPLAN,
  [anon_sym_SIMPREPBEGIN] = anon_sym_SIMPREPBEGIN,
  [anon_sym_SIMRUN] = anon_sym_SIMRUN,
  [anon_sym_SORT] = anon_sym_SORT,
  [anon_sym_SORTCASES] = anon_sym_SORTCASES,
  [anon_sym_SORTVARIABLES] = anon_sym_SORTVARIABLES,
  [anon_sym_SPATIALASSOCIATIONRULES] = anon_sym_SPATIALASSOCIATIONRULES,
  [anon_sym_SPATIALMAPSPEC] = anon_sym_SPATIALMAPSPEC,
  [anon_sym_SPATIALTEMPORALPREDICTION] = anon_sym_SPATIALTEMPORALPREDICTION,
  [anon_sym_SPCHART] = anon_sym_SPCHART,
  [anon_sym_SPECTRA] = anon_sym_SPECTRA,
  [anon_sym_SPLITFILE] = anon_sym_SPLITFILE,
  [anon_sym_STARJOIN] = anon_sym_STARJOIN,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym_SUBTITLE] = anon_sym_SUBTITLE,
  [anon_sym_SUMMARIZE] = anon_sym_SUMMARIZE,
  [anon_sym_SURVIVAL] = anon_sym_SURVIVAL,
  [anon_sym_SYSFILEINFO] = anon_sym_SYSFILEINFO,
  [anon_sym_T_DASHTEST] = anon_sym_T_DASHTEST,
  [anon_sym_TCMANALYSIS] = anon_sym_TCMANALYSIS,
  [anon_sym_TCMAPPLY] = anon_sym_TCMAPPLY,
  [anon_sym_TCMMODEL] = anon_sym_TCMMODEL,
  [anon_sym_TDISPLAY] = anon_sym_TDISPLAY,
  [anon_sym_TEMPORARY] = anon_sym_TEMPORARY,
  [anon_sym_TIMEPROGRAM] = anon_sym_TIMEPROGRAM,
  [anon_sym_TITLE] = anon_sym_TITLE,
  [anon_sym_TMSBEGIN] = anon_sym_TMSBEGIN,
  [anon_sym_TMSEND] = anon_sym_TMSEND,
  [anon_sym_TMSIMPORT] = anon_sym_TMSIMPORT,
  [anon_sym_TMSMERGE] = anon_sym_TMSMERGE,
  [anon_sym_TREE] = anon_sym_TREE,
  [anon_sym_TSAPPLY] = anon_sym_TSAPPLY,
  [anon_sym_TSET] = anon_sym_TSET,
  [anon_sym_TSHOW] = anon_sym_TSHOW,
  [anon_sym_TSMODEL] = anon_sym_TSMODEL,
  [anon_sym_TSPLOT] = anon_sym_TSPLOT,
  [anon_sym_TWOSTEPCLUSTER] = anon_sym_TWOSTEPCLUSTER,
  [anon_sym_UNIANOVA] = anon_sym_UNIANOVA,
  [anon_sym_UPDATE] = anon_sym_UPDATE,
  [anon_sym_USE] = anon_sym_USE,
  [anon_sym_VALIDATEDATA] = anon_sym_VALIDATEDATA,
  [anon_sym_VALUELABELS] = anon_sym_VALUELABELS,
  [anon_sym_VARCOMP] = anon_sym_VARCOMP,
  [anon_sym_VARIABLEALIGNMENT] = anon_sym_VARIABLEALIGNMENT,
  [anon_sym_VARIABLEATTRIBUTE] = anon_sym_VARIABLEATTRIBUTE,
  [anon_sym_VARIABLELABELS] = anon_sym_VARIABLELABELS,
  [anon_sym_VARIABLELEVEL] = anon_sym_VARIABLELEVEL,
  [anon_sym_VARIABLEROLE] = anon_sym_VARIABLEROLE,
  [anon_sym_VARIABLEWIDTH] = anon_sym_VARIABLEWIDTH,
  [anon_sym_VARSTOCASES] = anon_sym_VARSTOCASES,
  [anon_sym_VECTOR] = anon_sym_VECTOR,
  [anon_sym_VERIFY] = anon_sym_VERIFY,
  [anon_sym_WEIGHT] = anon_sym_WEIGHT,
  [anon_sym_WEIGHTEDKAPPA] = anon_sym_WEIGHTEDKAPPA,
  [anon_sym_WLS] = anon_sym_WLS,
  [anon_sym_WRITE] = anon_sym_WRITE,
  [anon_sym_WRITEFORMATS] = anon_sym_WRITEFORMATS,
  [anon_sym_XGRAPH] = anon_sym_XGRAPH,
  [anon_sym_XSAVE] = anon_sym_XSAVE,
  [sym_subidentifier] = sym_subidentifier,
  [sym_keyword] = sym_keyword,
  [sym_variable] = sym_variable,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_comma] = sym_comma,
  [sym_comment] = sym_comment,
  [anon_sym_BEGINPROGRAM] = anon_sym_BEGINPROGRAM,
  [anon_sym_ENDPROGRAM_DOT] = anon_sym_ENDPROGRAM_DOT,
  [sym_python] = sym_python,
  [sym_r] = sym_r,
  [aux_sym_injection_source_token1] = aux_sym_injection_source_token1,
  [sym_source_file] = sym_source_file,
  [sym_command] = sym_command,
  [sym_subcommand] = sym_subcommand,
  [sym_arguments] = sym_arguments,
  [sym_parenthetical] = sym_parenthetical,
  [sym_identifier] = sym_identifier,
  [sym_arithmetic] = sym_arithmetic,
  [sym_comparison] = sym_comparison,
  [sym_logical] = sym_logical,
  [sym_injection] = sym_injection,
  [sym_language] = sym_language,
  [sym_injection_source] = sym_injection_source,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_injection_source_repeat1] = aux_sym_injection_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_end_of_command] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2SLS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADDDOCUMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADDFILES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADDVALUELABELS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AGGREGATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AIM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALSCAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALTERTYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANACOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANOVA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_APPLYDICTIONARY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AREG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ARIMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AUTORECODE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BAYESANOVA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BAYESCORRELATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BAYESINDEPENDENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BAYESLOGLINEAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BAYESONESAMPLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BAYESREGRESSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BAYESRELATED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BAYESREPEATED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGINDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGINEXPR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGINEXPR_DASHENDEXPR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGINGPL_DASHENDGPL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOOTSTRAP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BREAK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CACHE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CASEPLOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CASESTOVARS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CATREG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLABELS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLEARTIMEPROGRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLEARTRANSFORMATIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLUSTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CNLR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CODEBOOK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMPAREDATASETS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMPUTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONJOINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONSTRAINEDFUNCTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CORRELATIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CORRESPONDENCE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COUNT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COXREG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CREATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CROSSTABS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CSCOXREG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CSDESCRIPTIVES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CSGLM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CSLOGISTIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CSORDINAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CSPLAN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CSSELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CSTABULATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CTABLES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CURVEFIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATALIST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATAFILEATTRIBUTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATASETACTIVATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATASETCLOSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATASETCOPY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATASETDECLARE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATASETDISPLAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATASETNAME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETEVARIABLES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DERIVATIVES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DESCRIPTIVES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DETECTANOMALY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISCRIMINANT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISPLAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOREPEAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOCUMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DROPDOCUMENTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ECHO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENDCASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENDFILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ERASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXAMINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXECUTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXPORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXSMOOTH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXTENSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FACTOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILEHANDLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILELABEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILETYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FILTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FINISH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLEISSMULTIRATERKAPPA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLIP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FORMATS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FREQUENCIES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GENLIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GENLINMIXED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GENLOG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GETCAPTURE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GETDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GETSAS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GETSTATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GETTRANSLATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GETCOGNOS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GETTM1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GGRAPH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GLM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GRAPH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HILOGLINEAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HOMALS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HOST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IBREAK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IDO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IDOEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IGRAPH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IIFEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ILET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IMPORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INPUTPROGRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INSERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INSERTEXEC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INSERTHIDDDEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INSERTHIDDEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KEYEDDATALIST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KNN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINEAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOGISTICREGRESSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOGLINEAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOOP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MANOVA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MATCHFILES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MATRIX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MATRIXDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MCONVERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MEANS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MISSINGVALUES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MIXED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MLP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MODELCLOSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MODELHANDLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MODELLIST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MODELNAME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MODELPROGRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MRSETS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MULTRESPONSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MULTIPLECORRESPONDENCE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MULTIPLEIMPUTATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MVA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOFCASES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAIVEBAYES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NEWFILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NLR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOMREG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONPARCORR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NPARTESTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NPTESTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NUMERIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OLAPCUBES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OMSEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OMSINFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OMSLOG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ONEWAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIMALBINNING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ORTHOPLAN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUTPUTMODIFY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUTPUTNAME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUTPUTNEW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUTPUTOPEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUTPUTSAVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OVERALS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PACF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PARTIALCORR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERMISSIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLANCARDS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POWERMEANSINDEPENDENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POWERMEANSONESAMPLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POWERMEANSRELATED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POWERONEWAYANOVA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POWERPARTIALCORR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POWERPEARSONONESAMPLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POWERPROPORTIONSINDEPENDENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POWERPROPORTIONSONESAMPLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POWERPROPORTIONSRELATED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POWERSPEARMANONESAMPLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POWERUNIVARIATELINEAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PPLOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PREDICT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PREFSCAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRESERVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRINCALS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRINTEJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRINTFORMATS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRINTSPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROBIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROCEDUREOUTPUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROPORTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROXIMITIES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROXSCAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QUANTILEREGRESSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QUICKCLUSTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RANK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RATIOSTATISTICS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_READMODEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RECODE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RECORDTYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REGRESSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RELIABILITY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RENAME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RENAMEVARIABLES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPEATINGDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPOSITORYATTRIBUTES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPOSITORYCONNECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPOSITORYCOPY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REREAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RESPONSERATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RESTORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RMV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ROC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ROCANALYSIS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAMPLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAVECODEPAGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAVEDATACOLLECTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAVEMODEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAVETRANSLATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCRIPT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEASON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SELECTIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SELECTPRED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHIFTVALUES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHOW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIMPLAN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIMPREPBEGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIMRUN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SORTCASES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SORTVARIABLES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPATIALASSOCIATIONRULES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPATIALMAPSPEC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPATIALTEMPORALPREDICTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPCHART] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPECTRA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPLITFILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STARJOIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUBTITLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUMMARIZE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SURVIVAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYSFILEINFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T_DASHTEST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TCMANALYSIS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TCMAPPLY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TCMMODEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TDISPLAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEMPORARY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIMEPROGRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TITLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TMSBEGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TMSEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TMSIMPORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TMSMERGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TREE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TSAPPLY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TSET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TSHOW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TSMODEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TSPLOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TWOSTEPCLUSTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNIANOVA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UPDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VALIDATEDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VALUELABELS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARCOMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARIABLEALIGNMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARIABLEATTRIBUTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARIABLELABELS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARIABLELEVEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARIABLEROLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARIABLEWIDTH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARSTOCASES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VECTOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERIFY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WEIGHT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WEIGHTEDKAPPA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WLS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WRITE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WRITEFORMATS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XGRAPH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XSAVE] = {
    .visible = true,
    .named = false,
  },
  [sym_subidentifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BEGINPROGRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENDPROGRAM_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_python] = {
    .visible = true,
    .named = true,
  },
  [sym_r] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_injection_source_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_subcommand] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthetical] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_logical] = {
    .visible = true,
    .named = true,
  },
  [sym_injection] = {
    .visible = true,
    .named = true,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [sym_injection_source] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_injection_source_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 13,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 20,
  [24] = 22,
  [25] = 19,
  [26] = 21,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1845);
      ADVANCE_MAP(
        '"', 82,
        '&', 2189,
        '\'', 83,
        '(', 1847,
        ')', 1848,
        '*', 2179,
        '+', 2176,
        ',', 2191,
        '-', 2178,
        '.', 2,
        '/', 2181,
        '<', 2183,
        '=', 2185,
        '>', 2184,
        'A', 314,
        'B', 91,
        'C', 92,
        'D', 119,
        'E', 315,
        'F', 93,
        'G', 444,
        'H', 753,
        'I', 289,
        'K', 593,
        'L', 751,
        'M', 120,
        'N', 24,
        'O', 950,
        'P', 95,
        'Q', 1745,
        'S', 96,
        'T', 86,
        'U', 1071,
        'V', 97,
        'W', 514,
        'X', 730,
        'p', 1841,
        '|', 2190,
        'R', 2197,
        'r', 2197,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2174);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1846);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1846);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2175);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '*') ADVANCE(2198);
      if (lookahead == '/') ADVANCE(2201);
      if (lookahead == 'C') ADVANCE(2212);
      if (lookahead == 'E') ADVANCE(2210);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2200);
      if (lookahead != 0) ADVANCE(2218);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(2192);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead == 'C') ADVANCE(1754);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(402);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(362);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(749);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(876);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(423);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(345);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(1024);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(1012);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(187);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(364);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(873);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(361);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(1173);
      if (lookahead == 'A') ADVANCE(803);
      if (lookahead == 'E') ADVANCE(1802);
      if (lookahead == 'L') ADVANCE(1347);
      if (lookahead == 'O') ADVANCE(1023);
      if (lookahead == 'P') ADVANCE(138);
      if (lookahead == 'U') ADVANCE(1020);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(883);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(440);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(366);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(331);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(693);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(961);
      if (lookahead == 'F') ADVANCE(826);
      if (lookahead == 'S') ADVANCE(615);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(1018);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(1339);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(725);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(959);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(763);
      if (lookahead == 'P') ADVANCE(1416);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(1325);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(1712);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(1637);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(1230);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(1271);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(1430);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(1449);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(647);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(425);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(401);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(336);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(1794);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(1797);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(1543);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(1718);
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(1432);
      if (lookahead == 'I') ADVANCE(1323);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(808);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(1419);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(357);
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(964);
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(358);
      END_STATE();
    case 62:
      if (lookahead == ' ') ADVANCE(427);
      END_STATE();
    case 63:
      if (lookahead == ' ') ADVANCE(429);
      END_STATE();
    case 64:
      if (lookahead == ' ') ADVANCE(884);
      END_STATE();
    case 65:
      if (lookahead == ' ') ADVANCE(697);
      END_STATE();
    case 66:
      if (lookahead == ' ') ADVANCE(1721);
      END_STATE();
    case 67:
      if (lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 68:
      if (lookahead == ' ') ADVANCE(1795);
      END_STATE();
    case 69:
      if (lookahead == ' ') ADVANCE(699);
      END_STATE();
    case 70:
      if (lookahead == ' ') ADVANCE(698);
      END_STATE();
    case 71:
      if (lookahead == ' ') ADVANCE(987);
      END_STATE();
    case 72:
      if (lookahead == ' ') ADVANCE(874);
      END_STATE();
    case 73:
      if (lookahead == ' ') ADVANCE(377);
      END_STATE();
    case 74:
      if (lookahead == ' ') ADVANCE(1343);
      END_STATE();
    case 75:
      if (lookahead == ' ') ADVANCE(989);
      END_STATE();
    case 76:
      if (lookahead == ' ') ADVANCE(1344);
      END_STATE();
    case 77:
      if (lookahead == ' ') ADVANCE(1288);
      END_STATE();
    case 78:
      if (lookahead == ' ') ADVANCE(1272);
      END_STATE();
    case 79:
      if (lookahead == ' ') ADVANCE(1467);
      END_STATE();
    case 80:
      ADVANCE_MAP(
        '"', 82,
        '$', 2169,
        '&', 2189,
        '\'', 83,
        '(', 1847,
        ')', 1848,
        '*', 2179,
        '+', 2176,
        ',', 2191,
        '-', 2177,
        '.', 1842,
        '/', 2180,
        '<', 2183,
        '=', 2185,
        '>', 2184,
        'C', 2165,
        '|', 2190,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2167);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2171);
      END_STATE();
    case 81:
      ADVANCE_MAP(
        '"', 82,
        '$', 2169,
        '&', 2189,
        '\'', 83,
        '(', 1847,
        '*', 2179,
        '+', 2176,
        ',', 2191,
        '-', 2177,
        '.', 2,
        '/', 2181,
        '<', 2183,
        '=', 2185,
        '>', 2184,
        'C', 2165,
        '|', 2190,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2167);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2171);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(2173);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 83:
      if (lookahead == '\'') ADVANCE(2173);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 84:
      if (lookahead == '*') ADVANCE(4);
      END_STATE();
    case 85:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2159);
      END_STATE();
    case 86:
      ADVANCE_MAP(
        '-', 1646,
        'C', 1002,
        'D', 764,
        'E', 1028,
        'I', 1010,
        'M', 1522,
        'R', 545,
        'S', 135,
        'W', 1183,
      );
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(570);
      END_STATE();
    case 88:
      if (lookahead == '.') ADVANCE(2194);
      END_STATE();
    case 89:
      if (lookahead == '1') ADVANCE(1961);
      END_STATE();
    case 90:
      if (lookahead == '3') ADVANCE(2196);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(1825);
      if (lookahead == 'E') ADVANCE(712);
      if (lookahead == 'O') ADVANCE(1179);
      if (lookahead == 'R') ADVANCE(519);
      END_STATE();
    case 92:
      ADVANCE_MAP(
        'A', 322,
        'D', 1883,
        'L', 98,
        'N', 905,
        'O', 396,
        'R', 524,
        'S', 327,
        'T', 121,
        'U', 1366,
      );
      END_STATE();
    case 93:
      if (lookahead == 'A') ADVANCE(360);
      if (lookahead == 'I') ADVANCE(885);
      if (lookahead == 'L') ADVANCE(608);
      if (lookahead == 'O') ADVANCE(1424);
      if (lookahead == 'R') ADVANCE(445);
      END_STATE();
    case 94:
      if (lookahead == 'A') ADVANCE(324);
      if (lookahead == 'E') ADVANCE(1370);
      if (lookahead == 'L') ADVANCE(129);
      if (lookahead == 'O') ADVANCE(802);
      if (lookahead == 'P') ADVANCE(949);
      if (lookahead == 'R') ADVANCE(446);
      END_STATE();
    case 95:
      ADVANCE_MAP(
        'A', 324,
        'E', 1370,
        'L', 129,
        'O', 802,
        'P', 949,
        'R', 446,
        'Y', 1840,
        'y', 1840,
      );
      END_STATE();
    case 96:
      ADVANCE_MAP(
        'A', 1017,
        'C', 1368,
        'E', 136,
        'H', 757,
        'I', 992,
        'O', 1373,
        'P', 271,
        'T', 141,
        'U', 298,
        'Y', 1523,
      );
      END_STATE();
    case 97:
      if (lookahead == 'A') ADVANCE(886);
      if (lookahead == 'E') ADVANCE(365);
      END_STATE();
    case 98:
      if (lookahead == 'A') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(205);
      if (lookahead == 'U') ADVANCE(1526);
      END_STATE();
    case 99:
      if (lookahead == 'A') ADVANCE(2008);
      END_STATE();
    case 100:
      if (lookahead == 'A') ADVANCE(878);
      END_STATE();
    case 101:
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'E') ADVANCE(1919);
      END_STATE();
    case 102:
      if (lookahead == 'A') ADVANCE(1860);
      END_STATE();
    case 103:
      if (lookahead == 'A') ADVANCE(1863);
      END_STATE();
    case 104:
      if (lookahead == 'A') ADVANCE(1137);
      if (lookahead == 'M') ADVANCE(1229);
      END_STATE();
    case 105:
      if (lookahead == 'A') ADVANCE(1990);
      END_STATE();
    case 106:
      if (lookahead == 'A') ADVANCE(2110);
      END_STATE();
    case 107:
      if (lookahead == 'A') ADVANCE(1956);
      END_STATE();
    case 108:
      if (lookahead == 'A') ADVANCE(2137);
      END_STATE();
    case 109:
      if (lookahead == 'A') ADVANCE(1958);
      END_STATE();
    case 110:
      if (lookahead == 'A') ADVANCE(1873);
      END_STATE();
    case 111:
      if (lookahead == 'A') ADVANCE(921);
      if (lookahead == 'L') ADVANCE(274);
      if (lookahead == 'R') ADVANCE(1250);
      if (lookahead == 'W') ADVANCE(779);
      END_STATE();
    case 112:
      if (lookahead == 'A') ADVANCE(1865);
      END_STATE();
    case 113:
      if (lookahead == 'A') ADVANCE(1993);
      END_STATE();
    case 114:
      if (lookahead == 'A') ADVANCE(2140);
      END_STATE();
    case 115:
      if (lookahead == 'A') ADVANCE(2153);
      END_STATE();
    case 116:
      if (lookahead == 'A') ADVANCE(2042);
      END_STATE();
    case 117:
      if (lookahead == 'A') ADVANCE(1947);
      END_STATE();
    case 118:
      if (lookahead == 'A') ADVANCE(2076);
      END_STATE();
    case 119:
      if (lookahead == 'A') ADVANCE(1636);
      if (lookahead == 'E') ADVANCE(694);
      if (lookahead == 'I') ADVANCE(1468);
      if (lookahead == 'O') ADVANCE(5);
      if (lookahead == 'R') ADVANCE(1175);
      END_STATE();
    case 120:
      ADVANCE_MAP(
        'A', 1079,
        'C', 1174,
        'E', 126,
        'I', 1525,
        'L', 1273,
        'O', 398,
        'R', 1552,
        'U', 908,
        'V', 99,
      );
      END_STATE();
    case 121:
      if (lookahead == 'A') ADVANCE(300);
      END_STATE();
    case 122:
      if (lookahead == 'A') ADVANCE(1811);
      END_STATE();
    case 123:
      if (lookahead == 'A') ADVANCE(350);
      if (lookahead == 'O') ADVANCE(1774);
      END_STATE();
    case 124:
      if (lookahead == 'A') ADVANCE(1072);
      if (lookahead == 'B') ADVANCE(685);
      if (lookahead == 'E') ADVANCE(237);
      if (lookahead == 'M') ADVANCE(1773);
      if (lookahead == 'O') ADVANCE(321);
      END_STATE();
    case 125:
      if (lookahead == 'A') ADVANCE(879);
      END_STATE();
    case 126:
      if (lookahead == 'A') ADVANCE(1086);
      END_STATE();
    case 127:
      if (lookahead == 'A') ADVANCE(290);
      END_STATE();
    case 128:
      if (lookahead == 'A') ADVANCE(1813);
      END_STATE();
    case 129:
      if (lookahead == 'A') ADVANCE(1112);
      if (lookahead == 'S') ADVANCE(2036);
      if (lookahead == 'U') ADVANCE(993);
      END_STATE();
    case 130:
      if (lookahead == 'A') ADVANCE(1279);
      END_STATE();
    case 131:
      if (lookahead == 'A') ADVANCE(294);
      END_STATE();
    case 132:
      if (lookahead == 'A') ADVANCE(1021);
      if (lookahead == 'E') ADVANCE(346);
      if (lookahead == 'P') ADVANCE(1219);
      if (lookahead == 'S') ADVANCE(1006);
      if (lookahead == 'T') ADVANCE(597);
      END_STATE();
    case 133:
      if (lookahead == 'A') ADVANCE(1815);
      END_STATE();
    case 134:
      if (lookahead == 'A') ADVANCE(295);
      END_STATE();
    case 135:
      if (lookahead == 'A') ADVANCE(1313);
      if (lookahead == 'E') ADVANCE(1599);
      if (lookahead == 'H') ADVANCE(1176);
      if (lookahead == 'M') ADVANCE(1218);
      if (lookahead == 'P') ADVANCE(953);
      END_STATE();
    case 136:
      if (lookahead == 'A') ADVANCE(1529);
      if (lookahead == 'L') ADVANCE(611);
      if (lookahead == 'T') ADVANCE(2097);
      END_STATE();
    case 137:
      if (lookahead == 'A') ADVANCE(1282);
      END_STATE();
    case 138:
      if (lookahead == 'A') ADVANCE(1369);
      if (lookahead == 'T') ADVANCE(538);
      END_STATE();
    case 139:
      if (lookahead == 'A') ADVANCE(1283);
      END_STATE();
    case 140:
      if (lookahead == 'A') ADVANCE(914);
      END_STATE();
    case 141:
      if (lookahead == 'A') ADVANCE(1372);
      if (lookahead == 'R') ADVANCE(768);
      END_STATE();
    case 142:
      if (lookahead == 'A') ADVANCE(1284);
      END_STATE();
    case 143:
      if (lookahead == 'A') ADVANCE(887);
      END_STATE();
    case 144:
      if (lookahead == 'A') ADVANCE(1141);
      END_STATE();
    case 145:
      if (lookahead == 'A') ADVANCE(1821);
      END_STATE();
    case 146:
      if (lookahead == 'A') ADVANCE(1050);
      END_STATE();
    case 147:
      if (lookahead == 'A') ADVANCE(996);
      END_STATE();
    case 148:
      if (lookahead == 'A') ADVANCE(342);
      END_STATE();
    case 149:
      if (lookahead == 'A') ADVANCE(951);
      END_STATE();
    case 150:
      if (lookahead == 'A') ADVANCE(1034);
      END_STATE();
    case 151:
      if (lookahead == 'A') ADVANCE(1277);
      END_STATE();
    case 152:
      if (lookahead == 'A') ADVANCE(997);
      END_STATE();
    case 153:
      if (lookahead == 'A') ADVANCE(1302);
      END_STATE();
    case 154:
      if (lookahead == 'A') ADVANCE(998);
      END_STATE();
    case 155:
      if (lookahead == 'A') ADVANCE(1315);
      END_STATE();
    case 156:
      if (lookahead == 'A') ADVANCE(889);
      END_STATE();
    case 157:
      if (lookahead == 'A') ADVANCE(1352);
      END_STATE();
    case 158:
      if (lookahead == 'A') ADVANCE(999);
      END_STATE();
    case 159:
      if (lookahead == 'A') ADVANCE(890);
      END_STATE();
    case 160:
      if (lookahead == 'A') ADVANCE(392);
      END_STATE();
    case 161:
      if (lookahead == 'A') ADVANCE(1000);
      END_STATE();
    case 162:
      if (lookahead == 'A') ADVANCE(1001);
      END_STATE();
    case 163:
      if (lookahead == 'A') ADVANCE(891);
      END_STATE();
    case 164:
      if (lookahead == 'A') ADVANCE(1054);
      END_STATE();
    case 165:
      if (lookahead == 'A') ADVANCE(904);
      END_STATE();
    case 166:
      if (lookahead == 'A') ADVANCE(1374);
      END_STATE();
    case 167:
      if (lookahead == 'A') ADVANCE(1477);
      if (lookahead == 'T') ADVANCE(189);
      END_STATE();
    case 168:
      if (lookahead == 'A') ADVANCE(1090);
      END_STATE();
    case 169:
      if (lookahead == 'A') ADVANCE(1081);
      END_STATE();
    case 170:
      if (lookahead == 'A') ADVANCE(893);
      END_STATE();
    case 171:
      if (lookahead == 'A') ADVANCE(1371);
      END_STATE();
    case 172:
      if (lookahead == 'A') ADVANCE(1355);
      END_STATE();
    case 173:
      if (lookahead == 'A') ADVANCE(1407);
      END_STATE();
    case 174:
      if (lookahead == 'A') ADVANCE(1056);
      END_STATE();
    case 175:
      if (lookahead == 'A') ADVANCE(911);
      END_STATE();
    case 176:
      if (lookahead == 'A') ADVANCE(1425);
      END_STATE();
    case 177:
      if (lookahead == 'A') ADVANCE(977);
      END_STATE();
    case 178:
      if (lookahead == 'A') ADVANCE(1357);
      END_STATE();
    case 179:
      if (lookahead == 'A') ADVANCE(1114);
      END_STATE();
    case 180:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 181:
      if (lookahead == 'A') ADVANCE(1711);
      END_STATE();
    case 182:
      if (lookahead == 'A') ADVANCE(952);
      END_STATE();
    case 183:
      if (lookahead == 'A') ADVANCE(1429);
      END_STATE();
    case 184:
      if (lookahead == 'A') ADVANCE(1652);
      END_STATE();
    case 185:
      if (lookahead == 'A') ADVANCE(1379);
      END_STATE();
    case 186:
      if (lookahead == 'A') ADVANCE(1361);
      END_STATE();
    case 187:
      if (lookahead == 'A') ADVANCE(1555);
      if (lookahead == 'M') ADVANCE(153);
      if (lookahead == 'T') ADVANCE(659);
      END_STATE();
    case 188:
      if (lookahead == 'A') ADVANCE(1365);
      END_STATE();
    case 189:
      if (lookahead == 'A') ADVANCE(1656);
      END_STATE();
    case 190:
      if (lookahead == 'A') ADVANCE(1658);
      END_STATE();
    case 191:
      if (lookahead == 'A') ADVANCE(1659);
      END_STATE();
    case 192:
      if (lookahead == 'A') ADVANCE(1622);
      END_STATE();
    case 193:
      if (lookahead == 'A') ADVANCE(1661);
      END_STATE();
    case 194:
      if (lookahead == 'A') ADVANCE(1663);
      END_STATE();
    case 195:
      if (lookahead == 'A') ADVANCE(1732);
      END_STATE();
    case 196:
      if (lookahead == 'A') ADVANCE(1675);
      END_STATE();
    case 197:
      if (lookahead == 'A') ADVANCE(1667);
      END_STATE();
    case 198:
      if (lookahead == 'A') ADVANCE(1738);
      END_STATE();
    case 199:
      if (lookahead == 'A') ADVANCE(1671);
      END_STATE();
    case 200:
      if (lookahead == 'A') ADVANCE(297);
      END_STATE();
    case 201:
      if (lookahead == 'A') ADVANCE(1829);
      END_STATE();
    case 202:
      if (lookahead == 'A') ADVANCE(1533);
      END_STATE();
    case 203:
      if (lookahead == 'A') ADVANCE(1285);
      END_STATE();
    case 204:
      if (lookahead == 'A') ADVANCE(918);
      END_STATE();
    case 205:
      if (lookahead == 'A') ADVANCE(1426);
      END_STATE();
    case 206:
      if (lookahead == 'A') ADVANCE(1387);
      END_STATE();
    case 207:
      if (lookahead == 'A') ADVANCE(718);
      END_STATE();
    case 208:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 209:
      if (lookahead == 'A') ADVANCE(1834);
      END_STATE();
    case 210:
      if (lookahead == 'A') ADVANCE(1382);
      END_STATE();
    case 211:
      if (lookahead == 'A') ADVANCE(1541);
      END_STATE();
    case 212:
      if (lookahead == 'A') ADVANCE(1123);
      if (lookahead == 'I') ADVANCE(323);
      END_STATE();
    case 213:
      if (lookahead == 'A') ADVANCE(1781);
      END_STATE();
    case 214:
      if (lookahead == 'A') ADVANCE(1092);
      END_STATE();
    case 215:
      if (lookahead == 'A') ADVANCE(1665);
      END_STATE();
    case 216:
      if (lookahead == 'A') ADVANCE(1653);
      END_STATE();
    case 217:
      if (lookahead == 'A') ADVANCE(919);
      END_STATE();
    case 218:
      if (lookahead == 'A') ADVANCE(1299);
      END_STATE();
    case 219:
      if (lookahead == 'A') ADVANCE(984);
      END_STATE();
    case 220:
      if (lookahead == 'A') ADVANCE(1564);
      END_STATE();
    case 221:
      if (lookahead == 'A') ADVANCE(1013);
      END_STATE();
    case 222:
      if (lookahead == 'A') ADVANCE(1380);
      END_STATE();
    case 223:
      if (lookahead == 'A') ADVANCE(922);
      END_STATE();
    case 224:
      if (lookahead == 'A') ADVANCE(920);
      END_STATE();
    case 225:
      if (lookahead == 'A') ADVANCE(1014);
      if (lookahead == 'E') ADVANCE(1801);
      END_STATE();
    case 226:
      if (lookahead == 'A') ADVANCE(1124);
      END_STATE();
    case 227:
      if (lookahead == 'A') ADVANCE(1391);
      END_STATE();
    case 228:
      if (lookahead == 'A') ADVANCE(1401);
      END_STATE();
    case 229:
      if (lookahead == 'A') ADVANCE(1015);
      END_STATE();
    case 230:
      if (lookahead == 'A') ADVANCE(1668);
      END_STATE();
    case 231:
      if (lookahead == 'A') ADVANCE(1672);
      END_STATE();
    case 232:
      if (lookahead == 'A') ADVANCE(349);
      if (lookahead == 'C') ADVANCE(974);
      if (lookahead == 'D') ADVANCE(605);
      if (lookahead == 'N') ADVANCE(229);
      END_STATE();
    case 233:
      if (lookahead == 'A') ADVANCE(1784);
      END_STATE();
    case 234:
      if (lookahead == 'A') ADVANCE(1016);
      END_STATE();
    case 235:
      if (lookahead == 'A') ADVANCE(1673);
      END_STATE();
    case 236:
      if (lookahead == 'A') ADVANCE(1410);
      if (lookahead == 'U') ADVANCE(1669);
      END_STATE();
    case 237:
      ADVANCE_MAP(
        'A', 409,
        'C', 1171,
        'G', 1464,
        'L', 823,
        'N', 234,
        'P', 656,
        'R', 583,
        'S', 1333,
      );
      END_STATE();
    case 238:
      if (lookahead == 'A') ADVANCE(1104);
      END_STATE();
    case 239:
      if (lookahead == 'A') ADVANCE(816);
      END_STATE();
    case 240:
      if (lookahead == 'A') ADVANCE(1676);
      END_STATE();
    case 241:
      if (lookahead == 'A') ADVANCE(1696);
      END_STATE();
    case 242:
      if (lookahead == 'A') ADVANCE(1678);
      END_STATE();
    case 243:
      if (lookahead == 'A') ADVANCE(1709);
      END_STATE();
    case 244:
      if (lookahead == 'A') ADVANCE(1679);
      END_STATE();
    case 245:
      if (lookahead == 'A') ADVANCE(1680);
      END_STATE();
    case 246:
      if (lookahead == 'A') ADVANCE(1681);
      END_STATE();
    case 247:
      if (lookahead == 'A') ADVANCE(1682);
      END_STATE();
    case 248:
      if (lookahead == 'A') ADVANCE(1683);
      END_STATE();
    case 249:
      if (lookahead == 'A') ADVANCE(1420);
      END_STATE();
    case 250:
      if (lookahead == 'A') ADVANCE(1684);
      END_STATE();
    case 251:
      if (lookahead == 'A') ADVANCE(1685);
      END_STATE();
    case 252:
      if (lookahead == 'A') ADVANCE(1687);
      END_STATE();
    case 253:
      if (lookahead == 'A') ADVANCE(1689);
      END_STATE();
    case 254:
      if (lookahead == 'A') ADVANCE(1690);
      END_STATE();
    case 255:
      if (lookahead == 'A') ADVANCE(1558);
      END_STATE();
    case 256:
      if (lookahead == 'A') ADVANCE(302);
      END_STATE();
    case 257:
      if (lookahead == 'A') ADVANCE(954);
      END_STATE();
    case 258:
      if (lookahead == 'A') ADVANCE(1319);
      END_STATE();
    case 259:
      if (lookahead == 'A') ADVANCE(1154);
      END_STATE();
    case 260:
      if (lookahead == 'A') ADVANCE(1455);
      if (lookahead == 'E') ADVANCE(176);
      if (lookahead == 'R') ADVANCE(1258);
      END_STATE();
    case 261:
      if (lookahead == 'A') ADVANCE(1142);
      END_STATE();
    case 262:
      if (lookahead == 'A') ADVANCE(1569);
      END_STATE();
    case 263:
      if (lookahead == 'A') ADVANCE(975);
      END_STATE();
    case 264:
      if (lookahead == 'A') ADVANCE(1571);
      END_STATE();
    case 265:
      if (lookahead == 'A') ADVANCE(1705);
      END_STATE();
    case 266:
      if (lookahead == 'A') ADVANCE(304);
      END_STATE();
    case 267:
      if (lookahead == 'A') ADVANCE(310);
      END_STATE();
    case 268:
      if (lookahead == 'A') ADVANCE(1149);
      if (lookahead == 'C') ADVANCE(1196);
      if (lookahead == 'I') ADVANCE(1132);
      if (lookahead == 'L') ADVANCE(1268);
      if (lookahead == 'O') ADVANCE(1129);
      if (lookahead == 'R') ADVANCE(465);
      END_STATE();
    case 269:
      if (lookahead == 'A') ADVANCE(1037);
      END_STATE();
    case 270:
      if (lookahead == 'A') ADVANCE(983);
      END_STATE();
    case 271:
      if (lookahead == 'A') ADVANCE(1717);
      if (lookahead == 'C') ADVANCE(745);
      if (lookahead == 'E') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(781);
      END_STATE();
    case 272:
      if (lookahead == 'A') ADVANCE(1725);
      END_STATE();
    case 273:
      if (lookahead == 'A') ADVANCE(1728);
      END_STATE();
    case 274:
      if (lookahead == 'A') ADVANCE(306);
      if (lookahead == 'E') ADVANCE(1785);
      END_STATE();
    case 275:
      if (lookahead == 'A') ADVANCE(311);
      END_STATE();
    case 276:
      if (lookahead == 'A') ADVANCE(1151);
      END_STATE();
    case 277:
      if (lookahead == 'A') ADVANCE(1038);
      END_STATE();
    case 278:
      if (lookahead == 'A') ADVANCE(1734);
      END_STATE();
    case 279:
      if (lookahead == 'A') ADVANCE(308);
      END_STATE();
    case 280:
      if (lookahead == 'A') ADVANCE(312);
      END_STATE();
    case 281:
      if (lookahead == 'A') ADVANCE(1041);
      END_STATE();
    case 282:
      if (lookahead == 'A') ADVANCE(1731);
      END_STATE();
    case 283:
      if (lookahead == 'A') ADVANCE(1042);
      END_STATE();
    case 284:
      if (lookahead == 'A') ADVANCE(1157);
      END_STATE();
    case 285:
      if (lookahead == 'A') ADVANCE(1743);
      if (lookahead == 'C') ADVANCE(1172);
      END_STATE();
    case 286:
      if (lookahead == 'A') ADVANCE(1465);
      END_STATE();
    case 287:
      if (lookahead == 'A') ADVANCE(1466);
      END_STATE();
    case 288:
      if (lookahead == 'A') ADVANCE(1165);
      END_STATE();
    case 289:
      if (lookahead == 'B') ADVANCE(1423);
      if (lookahead == 'D') ADVANCE(1166);
      if (lookahead == 'G') ADVANCE(1431);
      if (lookahead == 'I') ADVANCE(681);
      if (lookahead == 'L') ADVANCE(523);
      if (lookahead == 'M') ADVANCE(1332);
      if (lookahead == 'N') ADVANCE(328);
      END_STATE();
    case 290:
      if (lookahead == 'B') ADVANCE(1747);
      END_STATE();
    case 291:
      if (lookahead == 'B') ADVANCE(1193);
      END_STATE();
    case 292:
      if (lookahead == 'B') ADVANCE(209);
      END_STATE();
    case 293:
      if (lookahead == 'B') ADVANCE(604);
      END_STATE();
    case 294:
      if (lookahead == 'B') ADVANCE(1482);
      END_STATE();
    case 295:
      if (lookahead == 'B') ADVANCE(793);
      END_STATE();
    case 296:
      if (lookahead == 'B') ADVANCE(646);
      if (lookahead == 'E') ADVANCE(1078);
      if (lookahead == 'I') ADVANCE(1044);
      if (lookahead == 'M') ADVANCE(552);
      END_STATE();
    case 297:
      if (lookahead == 'B') ADVANCE(556);
      END_STATE();
    case 298:
      if (lookahead == 'B') ADVANCE(1697);
      if (lookahead == 'M') ADVANCE(1008);
      if (lookahead == 'R') ADVANCE(1792);
      END_STATE();
    case 299:
      if (lookahead == 'B') ADVANCE(785);
      if (lookahead == 'C') ADVANCE(525);
      if (lookahead == 'P') ADVANCE(1191);
      if (lookahead == 'X') ADVANCE(769);
      END_STATE();
    case 300:
      if (lookahead == 'B') ADVANCE(956);
      END_STATE();
    case 301:
      if (lookahead == 'B') ADVANCE(571);
      END_STATE();
    case 302:
      if (lookahead == 'B') ADVANCE(937);
      END_STATE();
    case 303:
      if (lookahead == 'B') ADVANCE(792);
      END_STATE();
    case 304:
      if (lookahead == 'B') ADVANCE(624);
      END_STATE();
    case 305:
      if (lookahead == 'B') ADVANCE(1762);
      END_STATE();
    case 306:
      if (lookahead == 'B') ADVANCE(628);
      END_STATE();
    case 307:
      if (lookahead == 'B') ADVANCE(1764);
      END_STATE();
    case 308:
      if (lookahead == 'B') ADVANCE(632);
      END_STATE();
    case 309:
      if (lookahead == 'B') ADVANCE(1765);
      END_STATE();
    case 310:
      if (lookahead == 'B') ADVANCE(969);
      END_STATE();
    case 311:
      if (lookahead == 'B') ADVANCE(970);
      END_STATE();
    case 312:
      if (lookahead == 'B') ADVANCE(972);
      END_STATE();
    case 313:
      if (lookahead == 'B') ADVANCE(653);
      END_STATE();
    case 314:
      ADVANCE_MAP(
        'C', 680,
        'D', 393,
        'G', 713,
        'I', 990,
        'L', 1521,
        'N', 123,
        'P', 1280,
        'R', 512,
        'U', 1638,
      );
      END_STATE();
    case 315:
      if (lookahead == 'C') ADVANCE(744);
      if (lookahead == 'N') ADVANCE(394);
      if (lookahead == 'R') ADVANCE(202);
      if (lookahead == 'X') ADVANCE(132);
      END_STATE();
    case 316:
      if (lookahead == 'C') ADVANCE(744);
      if (lookahead == 'N') ADVANCE(408);
      if (lookahead == 'R') ADVANCE(202);
      if (lookahead == 'X') ADVANCE(132);
      END_STATE();
    case 317:
      if (lookahead == 'C') ADVANCE(2017);
      END_STATE();
    case 318:
      if (lookahead == 'C') ADVANCE(1904);
      END_STATE();
    case 319:
      if (lookahead == 'C') ADVANCE(1979);
      END_STATE();
    case 320:
      if (lookahead == 'C') ADVANCE(2107);
      END_STATE();
    case 321:
      if (lookahead == 'C') ADVANCE(2085);
      END_STATE();
    case 322:
      if (lookahead == 'C') ADVANCE(747);
      if (lookahead == 'S') ADVANCE(448);
      if (lookahead == 'T') ADVANCE(1385);
      END_STATE();
    case 323:
      if (lookahead == 'C') ADVANCE(882);
      END_STATE();
    case 324:
      if (lookahead == 'C') ADVANCE(682);
      if (lookahead == 'R') ADVANCE(1692);
      END_STATE();
    case 325:
      if (lookahead == 'C') ADVANCE(750);
      if (lookahead == 'R') ADVANCE(754);
      END_STATE();
    case 326:
      if (lookahead == 'C') ADVANCE(1756);
      END_STATE();
    case 327:
      ADVANCE_MAP(
        'C', 1167,
        'D', 530,
        'G', 910,
        'L', 1217,
        'O', 1367,
        'P', 955,
        'S', 603,
        'T', 127,
      );
      END_STATE();
    case 328:
      if (lookahead == 'C') ADVANCE(902);
      if (lookahead == 'P') ADVANCE(1746);
      if (lookahead == 'S') ADVANCE(620);
      END_STATE();
    case 329:
      if (lookahead == 'C') ADVANCE(1185);
      if (lookahead == 'I') ADVANCE(256);
      if (lookahead == 'S') ADVANCE(1650);
      END_STATE();
    case 330:
      if (lookahead == 'C') ADVANCE(1699);
      END_STATE();
    case 331:
      if (lookahead == 'C') ADVANCE(906);
      END_STATE();
    case 332:
      if (lookahead == 'C') ADVANCE(841);
      END_STATE();
    case 333:
      if (lookahead == 'C') ADVANCE(1608);
      END_STATE();
    case 334:
      if (lookahead == 'C') ADVANCE(58);
      END_STATE();
    case 335:
      if (lookahead == 'C') ADVANCE(966);
      END_STATE();
    case 336:
      if (lookahead == 'C') ADVANCE(1201);
      END_STATE();
    case 337:
      if (lookahead == 'C') ADVANCE(1613);
      END_STATE();
    case 338:
      if (lookahead == 'C') ADVANCE(1617);
      END_STATE();
    case 339:
      if (lookahead == 'C') ADVANCE(1625);
      END_STATE();
    case 340:
      if (lookahead == 'C') ADVANCE(1518);
      END_STATE();
    case 341:
      if (lookahead == 'C') ADVANCE(1635);
      END_STATE();
    case 342:
      if (lookahead == 'C') ADVANCE(485);
      END_STATE();
    case 343:
      if (lookahead == 'C') ADVANCE(493);
      END_STATE();
    case 344:
      if (lookahead == 'C') ADVANCE(501);
      END_STATE();
    case 345:
      if (lookahead == 'C') ADVANCE(923);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'L') ADVANCE(825);
      if (lookahead == 'N') ADVANCE(221);
      if (lookahead == 'P') ADVANCE(1458);
      END_STATE();
    case 346:
      if (lookahead == 'C') ADVANCE(1758);
      END_STATE();
    case 347:
      if (lookahead == 'C') ADVANCE(1376);
      if (lookahead == 'P') ADVANCE(913);
      END_STATE();
    case 348:
      if (lookahead == 'C') ADVANCE(143);
      END_STATE();
    case 349:
      if (lookahead == 'C') ADVANCE(1729);
      END_STATE();
    case 350:
      if (lookahead == 'C') ADVANCE(1186);
      END_STATE();
    case 351:
      if (lookahead == 'C') ADVANCE(853);
      END_STATE();
    case 352:
      if (lookahead == 'C') ADVANCE(166);
      END_STATE();
    case 353:
      if (lookahead == 'C') ADVANCE(218);
      if (lookahead == 'D') ADVANCE(184);
      if (lookahead == 'S') ADVANCE(167);
      if (lookahead == 'T') ADVANCE(1442);
      END_STATE();
    case 354:
      if (lookahead == 'C') ADVANCE(156);
      END_STATE();
    case 355:
      if (lookahead == 'C') ADVANCE(159);
      END_STATE();
    case 356:
      if (lookahead == 'C') ADVANCE(1714);
      END_STATE();
    case 357:
      if (lookahead == 'C') ADVANCE(1199);
      END_STATE();
    case 358:
      if (lookahead == 'C') ADVANCE(1222);
      END_STATE();
    case 359:
      if (lookahead == 'C') ADVANCE(1227);
      END_STATE();
    case 360:
      if (lookahead == 'C') ADVANCE(1698);
      END_STATE();
    case 361:
      if (lookahead == 'C') ADVANCE(211);
      if (lookahead == 'F') ADVANCE(830);
      END_STATE();
    case 362:
      if (lookahead == 'C') ADVANCE(211);
      if (lookahead == 'F') ADVANCE(830);
      if (lookahead == 'P') ADVANCE(1390);
      END_STATE();
    case 363:
      if (lookahead == 'C') ADVANCE(1694);
      END_STATE();
    case 364:
      if (lookahead == 'C') ADVANCE(1254);
      if (lookahead == 'I') ADVANCE(1029);
      END_STATE();
    case 365:
      if (lookahead == 'C') ADVANCE(1702);
      if (lookahead == 'R') ADVANCE(760);
      END_STATE();
    case 366:
      if (lookahead == 'C') ADVANCE(220);
      END_STATE();
    case 367:
      if (lookahead == 'C') ADVANCE(223);
      if (lookahead == 'T') ADVANCE(2055);
      END_STATE();
    case 368:
      if (lookahead == 'C') ADVANCE(1234);
      if (lookahead == 'D') ADVANCE(190);
      if (lookahead == 'M') ADVANCE(1237);
      if (lookahead == 'T') ADVANCE(1461);
      END_STATE();
    case 369:
      if (lookahead == 'C') ADVANCE(262);
      if (lookahead == 'V') ADVANCE(227);
      END_STATE();
    case 370:
      if (lookahead == 'C') ADVANCE(264);
      END_STATE();
    case 371:
      if (lookahead == 'C') ADVANCE(1241);
      END_STATE();
    case 372:
      if (lookahead == 'C') ADVANCE(1443);
      END_STATE();
    case 373:
      if (lookahead == 'C') ADVANCE(1736);
      END_STATE();
    case 374:
      if (lookahead == 'C') ADVANCE(1735);
      END_STATE();
    case 375:
      if (lookahead == 'C') ADVANCE(1737);
      END_STATE();
    case 376:
      if (lookahead == 'C') ADVANCE(1769);
      END_STATE();
    case 377:
      if (lookahead == 'C') ADVANCE(988);
      END_STATE();
    case 378:
      if (lookahead == 'C') ADVANCE(1462);
      END_STATE();
    case 379:
      if (lookahead == 'C') ADVANCE(1771);
      END_STATE();
    case 380:
      if (lookahead == 'D') ADVANCE(1997);
      END_STATE();
    case 381:
      if (lookahead == 'D') ADVANCE(1970);
      END_STATE();
    case 382:
      if (lookahead == 'D') ADVANCE(1973);
      END_STATE();
    case 383:
      if (lookahead == 'D') ADVANCE(2020);
      END_STATE();
    case 384:
      if (lookahead == 'D') ADVANCE(2127);
      END_STATE();
    case 385:
      if (lookahead == 'D') ADVANCE(2096);
      END_STATE();
    case 386:
      if (lookahead == 'D') ADVANCE(1952);
      END_STATE();
    case 387:
      if (lookahead == 'D') ADVANCE(419);
      END_STATE();
    case 388:
      if (lookahead == 'D') ADVANCE(1871);
      END_STATE();
    case 389:
      if (lookahead == 'D') ADVANCE(1872);
      END_STATE();
    case 390:
      if (lookahead == 'D') ADVANCE(2041);
      END_STATE();
    case 391:
      if (lookahead == 'D') ADVANCE(2047);
      END_STATE();
    case 392:
      if (lookahead == 'D') ADVANCE(2081);
      END_STATE();
    case 393:
      if (lookahead == 'D') ADVANCE(6);
      if (lookahead == 'P') ADVANCE(1854);
      END_STATE();
    case 394:
      if (lookahead == 'D') ADVANCE(7);
      END_STATE();
    case 395:
      if (lookahead == 'D') ADVANCE(1759);
      END_STATE();
    case 396:
      if (lookahead == 'D') ADVANCE(513);
      if (lookahead == 'M') ADVANCE(1011);
      if (lookahead == 'N') ADVANCE(875);
      if (lookahead == 'R') ADVANCE(1393);
      if (lookahead == 'U') ADVANCE(1084);
      if (lookahead == 'X') ADVANCE(1394);
      END_STATE();
    case 397:
      if (lookahead == 'D') ADVANCE(815);
      if (lookahead == 'F') ADVANCE(1572);
      if (lookahead == 'S') ADVANCE(645);
      END_STATE();
    case 398:
      if (lookahead == 'D') ADVANCE(529);
      END_STATE();
    case 399:
      if (lookahead == 'D') ADVANCE(387);
      END_STATE();
    case 400:
      if (lookahead == 'D') ADVANCE(46);
      END_STATE();
    case 401:
      if (lookahead == 'D') ADVANCE(774);
      END_STATE();
    case 402:
      if (lookahead == 'D') ADVANCE(1181);
      if (lookahead == 'F') ADVANCE(849);
      if (lookahead == 'V') ADVANCE(149);
      END_STATE();
    case 403:
      if (lookahead == 'D') ADVANCE(766);
      END_STATE();
    case 404:
      if (lookahead == 'D') ADVANCE(25);
      END_STATE();
    case 405:
      if (lookahead == 'D') ADVANCE(1484);
      END_STATE();
    case 406:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 407:
      if (lookahead == 'D') ADVANCE(45);
      END_STATE();
    case 408:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 409:
      if (lookahead == 'D') ADVANCE(48);
      END_STATE();
    case 410:
      if (lookahead == 'D') ADVANCE(541);
      END_STATE();
    case 411:
      if (lookahead == 'D') ADVANCE(464);
      END_STATE();
    case 412:
      if (lookahead == 'D') ADVANCE(1642);
      END_STATE();
    case 413:
      if (lookahead == 'D') ADVANCE(553);
      END_STATE();
    case 414:
      if (lookahead == 'D') ADVANCE(612);
      END_STATE();
    case 415:
      if (lookahead == 'D') ADVANCE(559);
      END_STATE();
    case 416:
      if (lookahead == 'D') ADVANCE(476);
      END_STATE();
    case 417:
      if (lookahead == 'D') ADVANCE(622);
      END_STATE();
    case 418:
      if (lookahead == 'D') ADVANCE(572);
      END_STATE();
    case 419:
      if (lookahead == 'D') ADVANCE(578);
      if (lookahead == 'E') ADVANCE(1060);
      END_STATE();
    case 420:
      if (lookahead == 'D') ADVANCE(505);
      if (lookahead == 'R') ADVANCE(438);
      END_STATE();
    case 421:
      if (lookahead == 'D') ADVANCE(573);
      END_STATE();
    case 422:
      if (lookahead == 'D') ADVANCE(31);
      END_STATE();
    case 423:
      if (lookahead == 'D') ADVANCE(191);
      if (lookahead == 'E') ADVANCE(1808);
      if (lookahead == 'G') ADVANCE(1290);
      if (lookahead == 'P') ADVANCE(1453);
      END_STATE();
    case 424:
      if (lookahead == 'D') ADVANCE(783);
      END_STATE();
    case 425:
      if (lookahead == 'D') ADVANCE(193);
      END_STATE();
    case 426:
      if (lookahead == 'D') ADVANCE(194);
      END_STATE();
    case 427:
      if (lookahead == 'D') ADVANCE(195);
      END_STATE();
    case 428:
      if (lookahead == 'D') ADVANCE(197);
      END_STATE();
    case 429:
      if (lookahead == 'D') ADVANCE(199);
      END_STATE();
    case 430:
      if (lookahead == 'D') ADVANCE(940);
      END_STATE();
    case 431:
      if (lookahead == 'D') ADVANCE(941);
      END_STATE();
    case 432:
      if (lookahead == 'D') ADVANCE(230);
      END_STATE();
    case 433:
      if (lookahead == 'D') ADVANCE(652);
      END_STATE();
    case 434:
      if (lookahead == 'D') ADVANCE(240);
      END_STATE();
    case 435:
      if (lookahead == 'D') ADVANCE(637);
      END_STATE();
    case 436:
      if (lookahead == 'D') ADVANCE(639);
      END_STATE();
    case 437:
      if (lookahead == 'D') ADVANCE(640);
      END_STATE();
    case 438:
      if (lookahead == 'D') ADVANCE(66);
      END_STATE();
    case 439:
      if (lookahead == 'D') ADVANCE(871);
      END_STATE();
    case 440:
      if (lookahead == 'D') ADVANCE(1269);
      END_STATE();
    case 441:
      if (lookahead == 'D') ADVANCE(669);
      END_STATE();
    case 442:
      if (lookahead == 'D') ADVANCE(672);
      END_STATE();
    case 443:
      if (lookahead == 'D') ADVANCE(77);
      END_STATE();
    case 444:
      if (lookahead == 'E') ADVANCE(1074);
      if (lookahead == 'G') ADVANCE(1428);
      if (lookahead == 'L') ADVANCE(991);
      if (lookahead == 'R') ADVANCE(130);
      END_STATE();
    case 445:
      if (lookahead == 'E') ADVANCE(1346);
      END_STATE();
    case 446:
      if (lookahead == 'E') ADVANCE(397);
      if (lookahead == 'I') ADVANCE(1049);
      if (lookahead == 'O') ADVANCE(299);
      END_STATE();
    case 447:
      if (lookahead == 'E') ADVANCE(2139);
      END_STATE();
    case 448:
      if (lookahead == 'E') ADVANCE(1334);
      END_STATE();
    case 449:
      if (lookahead == 'E') ADVANCE(2088);
      END_STATE();
    case 450:
      if (lookahead == 'E') ADVANCE(2130);
      END_STATE();
    case 451:
      if (lookahead == 'E') ADVANCE(1879);
      END_STATE();
    case 452:
      if (lookahead == 'E') ADVANCE(915);
      END_STATE();
    case 453:
      if (lookahead == 'E') ADVANCE(1934);
      END_STATE();
    case 454:
      if (lookahead == 'E') ADVANCE(2125);
      END_STATE();
    case 455:
      if (lookahead == 'E') ADVANCE(2155);
      END_STATE();
    case 456:
      if (lookahead == 'E') ADVANCE(2158);
      END_STATE();
    case 457:
      if (lookahead == 'E') ADVANCE(1899);
      END_STATE();
    case 458:
      if (lookahead == 'E') ADVANCE(1920);
      END_STATE();
    case 459:
      if (lookahead == 'E') ADVANCE(2087);
      END_STATE();
    case 460:
      if (lookahead == 'E') ADVANCE(2138);
      END_STATE();
    case 461:
      if (lookahead == 'E') ADVANCE(1892);
      END_STATE();
    case 462:
      if (lookahead == 'E') ADVANCE(1935);
      END_STATE();
    case 463:
      if (lookahead == 'E') ADVANCE(1936);
      END_STATE();
    case 464:
      if (lookahead == 'E') ADVANCE(1976);
      END_STATE();
    case 465:
      if (lookahead == 'E') ADVANCE(728);
      END_STATE();
    case 466:
      if (lookahead == 'E') ADVANCE(1932);
      END_STATE();
    case 467:
      if (lookahead == 'E') ADVANCE(1933);
      END_STATE();
    case 468:
      if (lookahead == 'E') ADVANCE(2011);
      END_STATE();
    case 469:
      if (lookahead == 'E') ADVANCE(2053);
      END_STATE();
    case 470:
      if (lookahead == 'E') ADVANCE(2114);
      END_STATE();
    case 471:
      if (lookahead == 'E') ADVANCE(1855);
      END_STATE();
    case 472:
      if (lookahead == 'E') ADVANCE(1943);
      END_STATE();
    case 473:
      if (lookahead == 'E') ADVANCE(2115);
      END_STATE();
    case 474:
      if (lookahead == 'E') ADVANCE(2129);
      END_STATE();
    case 475:
      if (lookahead == 'E') ADVANCE(1858);
      END_STATE();
    case 476:
      if (lookahead == 'E') ADVANCE(1864);
      END_STATE();
    case 477:
      if (lookahead == 'E') ADVANCE(1908);
      END_STATE();
    case 478:
      if (lookahead == 'E') ADVANCE(2002);
      END_STATE();
    case 479:
      if (lookahead == 'E') ADVANCE(2111);
      END_STATE();
    case 480:
      if (lookahead == 'E') ADVANCE(1941);
      END_STATE();
    case 481:
      if (lookahead == 'E') ADVANCE(1955);
      END_STATE();
    case 482:
      if (lookahead == 'E') ADVANCE(1999);
      END_STATE();
    case 483:
      if (lookahead == 'E') ADVANCE(2027);
      END_STATE();
    case 484:
      if (lookahead == 'E') ADVANCE(2030);
      END_STATE();
    case 485:
      if (lookahead == 'E') ADVANCE(2058);
      END_STATE();
    case 486:
      if (lookahead == 'E') ADVANCE(1918);
      END_STATE();
    case 487:
      if (lookahead == 'E') ADVANCE(2000);
      END_STATE();
    case 488:
      if (lookahead == 'E') ADVANCE(1914);
      END_STATE();
    case 489:
      if (lookahead == 'E') ADVANCE(1959);
      END_STATE();
    case 490:
      if (lookahead == 'E') ADVANCE(2005);
      END_STATE();
    case 491:
      if (lookahead == 'E') ADVANCE(2089);
      END_STATE();
    case 492:
      if (lookahead == 'E') ADVANCE(2147);
      END_STATE();
    case 493:
      if (lookahead == 'E') ADVANCE(1896);
      END_STATE();
    case 494:
      if (lookahead == 'E') ADVANCE(2092);
      END_STATE();
    case 495:
      if (lookahead == 'E') ADVANCE(1869);
      END_STATE();
    case 496:
      if (lookahead == 'E') ADVANCE(1916);
      END_STATE();
    case 497:
      if (lookahead == 'E') ADVANCE(1913);
      END_STATE();
    case 498:
      if (lookahead == 'E') ADVANCE(1912);
      END_STATE();
    case 499:
      if (lookahead == 'E') ADVANCE(2144);
      END_STATE();
    case 500:
      if (lookahead == 'E') ADVANCE(2040);
      END_STATE();
    case 501:
      if (lookahead == 'E') ADVANCE(2006);
      END_STATE();
    case 502:
      if (lookahead == 'E') ADVANCE(2044);
      END_STATE();
    case 503:
      if (lookahead == 'E') ADVANCE(2048);
      END_STATE();
    case 504:
      if (lookahead == 'E') ADVANCE(2046);
      END_STATE();
    case 505:
      if (lookahead == 'E') ADVANCE(2070);
      END_STATE();
    case 506:
      if (lookahead == 'E') ADVANCE(2074);
      END_STATE();
    case 507:
      if (lookahead == 'E') ADVANCE(2083);
      END_STATE();
    case 508:
      if (lookahead == 'E') ADVANCE(2071);
      END_STATE();
    case 509:
      if (lookahead == 'E') ADVANCE(2082);
      END_STATE();
    case 510:
      if (lookahead == 'E') ADVANCE(1803);
      END_STATE();
    case 511:
      if (lookahead == 'E') ADVANCE(877);
      if (lookahead == 'F') ADVANCE(1264);
      if (lookahead == 'S') ADVANCE(1294);
      END_STATE();
    case 512:
      if (lookahead == 'E') ADVANCE(702);
      if (lookahead == 'I') ADVANCE(1004);
      END_STATE();
    case 513:
      if (lookahead == 'E') ADVANCE(291);
      END_STATE();
    case 514:
      if (lookahead == 'E') ADVANCE(755);
      if (lookahead == 'L') ADVANCE(1470);
      if (lookahead == 'R') ADVANCE(805);
      END_STATE();
    case 515:
      if (lookahead == 'E') ADVANCE(380);
      END_STATE();
    case 516:
      if (lookahead == 'E') ADVANCE(292);
      END_STATE();
    case 517:
      if (lookahead == 'E') ADVANCE(731);
      END_STATE();
    case 518:
      if (lookahead == 'E') ADVANCE(703);
      END_STATE();
    case 519:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 520:
      if (lookahead == 'E') ADVANCE(10);
      if (lookahead == 'T') ADVANCE(542);
      END_STATE();
    case 521:
      if (lookahead == 'E') ADVANCE(704);
      END_STATE();
    case 522:
      if (lookahead == 'E') ADVANCE(695);
      END_STATE();
    case 523:
      if (lookahead == 'E') ADVANCE(1595);
      END_STATE();
    case 524:
      if (lookahead == 'E') ADVANCE(215);
      if (lookahead == 'O') ADVANCE(1554);
      END_STATE();
    case 525:
      if (lookahead == 'E') ADVANCE(395);
      END_STATE();
    case 526:
      if (lookahead == 'E') ADVANCE(706);
      END_STATE();
    case 527:
      if (lookahead == 'E') ADVANCE(1444);
      END_STATE();
    case 528:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 529:
      if (lookahead == 'E') ADVANCE(912);
      END_STATE();
    case 530:
      if (lookahead == 'E') ADVANCE(1591);
      END_STATE();
    case 531:
      if (lookahead == 'E') ADVANCE(125);
      END_STATE();
    case 532:
      if (lookahead == 'E') ADVANCE(1375);
      END_STATE();
    case 533:
      if (lookahead == 'E') ADVANCE(709);
      END_STATE();
    case 534:
      if (lookahead == 'E') ADVANCE(1314);
      END_STATE();
    case 535:
      if (lookahead == 'E') ADVANCE(1381);
      END_STATE();
    case 536:
      if (lookahead == 'E') ADVANCE(385);
      END_STATE();
    case 537:
      if (lookahead == 'E') ADVANCE(386);
      END_STATE();
    case 538:
      if (lookahead == 'E') ADVANCE(1556);
      END_STATE();
    case 539:
      if (lookahead == 'E') ADVANCE(319);
      END_STATE();
    case 540:
      if (lookahead == 'E') ADVANCE(388);
      END_STATE();
    case 541:
      if (lookahead == 'E') ADVANCE(888);
      END_STATE();
    case 542:
      if (lookahead == 'E') ADVANCE(1351);
      END_STATE();
    case 543:
      if (lookahead == 'E') ADVANCE(389);
      END_STATE();
    case 544:
      if (lookahead == 'E') ADVANCE(320);
      END_STATE();
    case 545:
      if (lookahead == 'E') ADVANCE(450);
      END_STATE();
    case 546:
      if (lookahead == 'E') ADVANCE(390);
      END_STATE();
    case 547:
      if (lookahead == 'E') ADVANCE(391);
      END_STATE();
    case 548:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 549:
      if (lookahead == 'E') ADVANCE(1082);
      END_STATE();
    case 550:
      if (lookahead == 'E') ADVANCE(1475);
      END_STATE();
    case 551:
      if (lookahead == 'E') ADVANCE(1354);
      END_STATE();
    case 552:
      if (lookahead == 'E') ADVANCE(1378);
      END_STATE();
    case 553:
      if (lookahead == 'E') ADVANCE(894);
      END_STATE();
    case 554:
      if (lookahead == 'E') ADVANCE(1551);
      END_STATE();
    case 555:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 556:
      if (lookahead == 'E') ADVANCE(895);
      END_STATE();
    case 557:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 558:
      if (lookahead == 'E') ADVANCE(1481);
      END_STATE();
    case 559:
      if (lookahead == 'E') ADVANCE(896);
      END_STATE();
    case 560:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 561:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 562:
      if (lookahead == 'E') ADVANCE(210);
      END_STATE();
    case 563:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 564:
      if (lookahead == 'E') ADVANCE(1535);
      END_STATE();
    case 565:
      if (lookahead == 'E') ADVANCE(897);
      END_STATE();
    case 566:
      if (lookahead == 'E') ADVANCE(1485);
      END_STATE();
    case 567:
      if (lookahead == 'E') ADVANCE(1486);
      END_STATE();
    case 568:
      if (lookahead == 'E') ADVANCE(1059);
      END_STATE();
    case 569:
      if (lookahead == 'E') ADVANCE(1360);
      END_STATE();
    case 570:
      if (lookahead == 'E') ADVANCE(1126);
      END_STATE();
    case 571:
      if (lookahead == 'E') ADVANCE(1488);
      END_STATE();
    case 572:
      if (lookahead == 'E') ADVANCE(1117);
      END_STATE();
    case 573:
      if (lookahead == 'E') ADVANCE(899);
      END_STATE();
    case 574:
      if (lookahead == 'E') ADVANCE(1489);
      END_STATE();
    case 575:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 576:
      if (lookahead == 'E') ADVANCE(1362);
      END_STATE();
    case 577:
      if (lookahead == 'E') ADVANCE(1491);
      END_STATE();
    case 578:
      if (lookahead == 'E') ADVANCE(1062);
      END_STATE();
    case 579:
      if (lookahead == 'E') ADVANCE(1492);
      END_STATE();
    case 580:
      if (lookahead == 'E') ADVANCE(1493);
      END_STATE();
    case 581:
      if (lookahead == 'E') ADVANCE(1496);
      END_STATE();
    case 582:
      if (lookahead == 'E') ADVANCE(1497);
      END_STATE();
    case 583:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 584:
      if (lookahead == 'E') ADVANCE(1499);
      END_STATE();
    case 585:
      if (lookahead == 'E') ADVANCE(1500);
      END_STATE();
    case 586:
      if (lookahead == 'E') ADVANCE(1505);
      END_STATE();
    case 587:
      if (lookahead == 'E') ADVANCE(1507);
      END_STATE();
    case 588:
      if (lookahead == 'E') ADVANCE(1508);
      END_STATE();
    case 589:
      if (lookahead == 'E') ADVANCE(1512);
      END_STATE();
    case 590:
      if (lookahead == 'E') ADVANCE(1515);
      END_STATE();
    case 591:
      if (lookahead == 'E') ADVANCE(1519);
      END_STATE();
    case 592:
      if (lookahead == 'E') ADVANCE(1520);
      END_STATE();
    case 593:
      if (lookahead == 'E') ADVANCE(1827);
      if (lookahead == 'M') ADVANCE(1983);
      if (lookahead == 'N') ADVANCE(1048);
      END_STATE();
    case 594:
      if (lookahead == 'E') ADVANCE(400);
      END_STATE();
    case 595:
      if (lookahead == 'E') ADVANCE(1804);
      END_STATE();
    case 596:
      if (lookahead == 'E') ADVANCE(371);
      END_STATE();
    case 597:
      if (lookahead == 'E') ADVANCE(1089);
      END_STATE();
    case 598:
      if (lookahead == 'E') ADVANCE(1807);
      if (lookahead == 'H') ADVANCE(771);
      END_STATE();
    case 599:
      if (lookahead == 'E') ADVANCE(1527);
      END_STATE();
    case 600:
      if (lookahead == 'E') ADVANCE(1648);
      END_STATE();
    case 601:
      if (lookahead == 'E') ADVANCE(330);
      END_STATE();
    case 602:
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 603:
      if (lookahead == 'E') ADVANCE(976);
      END_STATE();
    case 604:
      if (lookahead == 'E') ADVANCE(916);
      END_STATE();
    case 605:
      if (lookahead == 'E') ADVANCE(335);
      if (lookahead == 'I') ADVANCE(1565);
      END_STATE();
    case 606:
      if (lookahead == 'E') ADVANCE(1574);
      END_STATE();
    case 607:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 608:
      if (lookahead == 'E') ADVANCE(773);
      if (lookahead == 'I') ADVANCE(1274);
      END_STATE();
    case 609:
      if (lookahead == 'E') ADVANCE(1291);
      END_STATE();
    case 610:
      if (lookahead == 'E') ADVANCE(1377);
      END_STATE();
    case 611:
      if (lookahead == 'E') ADVANCE(333);
      END_STATE();
    case 612:
      if (lookahead == 'E') ADVANCE(1297);
      END_STATE();
    case 613:
      if (lookahead == 'E') ADVANCE(973);
      END_STATE();
    case 614:
      if (lookahead == 'E') ADVANCE(1452);
      END_STATE();
    case 615:
      if (lookahead == 'E') ADVANCE(1654);
      END_STATE();
    case 616:
      if (lookahead == 'E') ADVANCE(422);
      END_STATE();
    case 617:
      if (lookahead == 'E') ADVANCE(1093);
      END_STATE();
    case 618:
      if (lookahead == 'E') ADVANCE(1345);
      END_STATE();
    case 619:
      if (lookahead == 'E') ADVANCE(1666);
      END_STATE();
    case 620:
      if (lookahead == 'E') ADVANCE(1392);
      END_STATE();
    case 621:
      if (lookahead == 'E') ADVANCE(1534);
      END_STATE();
    case 622:
      if (lookahead == 'E') ADVANCE(1306);
      END_STATE();
    case 623:
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 624:
      if (lookahead == 'E') ADVANCE(929);
      END_STATE();
    case 625:
      if (lookahead == 'E') ADVANCE(1098);
      END_STATE();
    case 626:
      if (lookahead == 'E') ADVANCE(1409);
      END_STATE();
    case 627:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 628:
      if (lookahead == 'E') ADVANCE(935);
      END_STATE();
    case 629:
      if (lookahead == 'E') ADVANCE(192);
      END_STATE();
    case 630:
      if (lookahead == 'E') ADVANCE(1103);
      END_STATE();
    case 631:
      if (lookahead == 'E') ADVANCE(339);
      END_STATE();
    case 632:
      if (lookahead == 'E') ADVANCE(936);
      END_STATE();
    case 633:
      if (lookahead == 'E') ADVANCE(341);
      END_STATE();
    case 634:
      if (lookahead == 'E') ADVANCE(1133);
      END_STATE();
    case 635:
      if (lookahead == 'E') ADVANCE(1677);
      END_STATE();
    case 636:
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 637:
      if (lookahead == 'E') ADVANCE(1106);
      END_STATE();
    case 638:
      if (lookahead == 'E') ADVANCE(1108);
      END_STATE();
    case 639:
      if (lookahead == 'E') ADVANCE(1109);
      END_STATE();
    case 640:
      if (lookahead == 'E') ADVANCE(1110);
      END_STATE();
    case 641:
      if (lookahead == 'E') ADVANCE(186);
      END_STATE();
    case 642:
      if (lookahead == 'E') ADVANCE(1111);
      END_STATE();
    case 643:
      if (lookahead == 'E') ADVANCE(188);
      END_STATE();
    case 644:
      if (lookahead == 'E') ADVANCE(735);
      END_STATE();
    case 645:
      if (lookahead == 'E') ADVANCE(1433);
      END_STATE();
    case 646:
      if (lookahead == 'E') ADVANCE(727);
      END_STATE();
    case 647:
      if (lookahead == 'E') ADVANCE(1809);
      END_STATE();
    case 648:
      if (lookahead == 'E') ADVANCE(1560);
      END_STATE();
    case 649:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 650:
      if (lookahead == 'E') ADVANCE(1583);
      END_STATE();
    case 651:
      if (lookahead == 'E') ADVANCE(1128);
      END_STATE();
    case 652:
      if (lookahead == 'E') ADVANCE(1121);
      END_STATE();
    case 653:
      if (lookahead == 'E') ADVANCE(729);
      END_STATE();
    case 654:
      if (lookahead == 'E') ADVANCE(226);
      END_STATE();
    case 655:
      if (lookahead == 'E') ADVANCE(1136);
      END_STATE();
    case 656:
      if (lookahead == 'E') ADVANCE(243);
      if (lookahead == 'O') ADVANCE(1415);
      END_STATE();
    case 657:
      if (lookahead == 'E') ADVANCE(428);
      END_STATE();
    case 658:
      if (lookahead == 'E') ADVANCE(246);
      END_STATE();
    case 659:
      if (lookahead == 'E') ADVANCE(1035);
      END_STATE();
    case 660:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 661:
      if (lookahead == 'E') ADVANCE(1153);
      END_STATE();
    case 662:
      if (lookahead == 'E') ADVANCE(1155);
      END_STATE();
    case 663:
      if (lookahead == 'E') ADVANCE(981);
      END_STATE();
    case 664:
      if (lookahead == 'E') ADVANCE(982);
      END_STATE();
    case 665:
      if (lookahead == 'E') ADVANCE(373);
      END_STATE();
    case 666:
      if (lookahead == 'E') ADVANCE(1582);
      END_STATE();
    case 667:
      if (lookahead == 'E') ADVANCE(439);
      END_STATE();
    case 668:
      if (lookahead == 'E') ADVANCE(1584);
      END_STATE();
    case 669:
      if (lookahead == 'E') ADVANCE(1340);
      END_STATE();
    case 670:
      if (lookahead == 'E') ADVANCE(1586);
      END_STATE();
    case 671:
      if (lookahead == 'E') ADVANCE(1587);
      END_STATE();
    case 672:
      if (lookahead == 'E') ADVANCE(1342);
      END_STATE();
    case 673:
      if (lookahead == 'E') ADVANCE(1588);
      END_STATE();
    case 674:
      if (lookahead == 'E') ADVANCE(1589);
      END_STATE();
    case 675:
      if (lookahead == 'E') ADVANCE(1590);
      END_STATE();
    case 676:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 677:
      if (lookahead == 'E') ADVANCE(736);
      END_STATE();
    case 678:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 679:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 680:
      if (lookahead == 'F') ADVANCE(1850);
      END_STATE();
    case 681:
      if (lookahead == 'F') ADVANCE(1972);
      END_STATE();
    case 682:
      if (lookahead == 'F') ADVANCE(2032);
      END_STATE();
    case 683:
      if (lookahead == 'F') ADVANCE(1927);
      END_STATE();
    case 684:
      if (lookahead == 'F') ADVANCE(2095);
      END_STATE();
    case 685:
      if (lookahead == 'F') ADVANCE(2068);
      END_STATE();
    case 686:
      if (lookahead == 'F') ADVANCE(1812);
      END_STATE();
    case 687:
      if (lookahead == 'F') ADVANCE(28);
      END_STATE();
    case 688:
      if (lookahead == 'F') ADVANCE(820);
      END_STATE();
    case 689:
      if (lookahead == 'F') ADVANCE(1820);
      END_STATE();
    case 690:
      if (lookahead == 'F') ADVANCE(1647);
      END_STATE();
    case 691:
      if (lookahead == 'F') ADVANCE(1169);
      END_STATE();
    case 692:
      if (lookahead == 'F') ADVANCE(1170);
      END_STATE();
    case 693:
      if (lookahead == 'F') ADVANCE(1751);
      END_STATE();
    case 694:
      if (lookahead == 'F') ADVANCE(761);
      if (lookahead == 'L') ADVANCE(619);
      if (lookahead == 'R') ADVANCE(801);
      if (lookahead == 'S') ADVANCE(372);
      if (lookahead == 'T') ADVANCE(601);
      END_STATE();
    case 695:
      if (lookahead == 'F') ADVANCE(796);
      END_STATE();
    case 696:
      if (lookahead == 'F') ADVANCE(1252);
      END_STATE();
    case 697:
      if (lookahead == 'F') ADVANCE(835);
      END_STATE();
    case 698:
      if (lookahead == 'F') ADVANCE(842);
      END_STATE();
    case 699:
      if (lookahead == 'F') ADVANCE(855);
      END_STATE();
    case 700:
      if (lookahead == 'F') ADVANCE(1266);
      END_STATE();
    case 701:
      if (lookahead == 'G') ADVANCE(775);
      if (lookahead == 'O') ADVANCE(1275);
      END_STATE();
    case 702:
      if (lookahead == 'G') ADVANCE(1862);
      END_STATE();
    case 703:
      if (lookahead == 'G') ADVANCE(1882);
      END_STATE();
    case 704:
      if (lookahead == 'G') ADVANCE(1898);
      END_STATE();
    case 705:
      if (lookahead == 'G') ADVANCE(1953);
      END_STATE();
    case 706:
      if (lookahead == 'G') ADVANCE(2013);
      END_STATE();
    case 707:
      if (lookahead == 'G') ADVANCE(2022);
      END_STATE();
    case 708:
      if (lookahead == 'G') ADVANCE(2113);
      END_STATE();
    case 709:
      if (lookahead == 'G') ADVANCE(1901);
      END_STATE();
    case 710:
      if (lookahead == 'G') ADVANCE(2024);
      END_STATE();
    case 711:
      if (lookahead == 'G') ADVANCE(748);
      END_STATE();
    case 712:
      if (lookahead == 'G') ADVANCE(759);
      END_STATE();
    case 713:
      if (lookahead == 'G') ADVANCE(1384);
      END_STATE();
    case 714:
      if (lookahead == 'G') ADVANCE(985);
      END_STATE();
    case 715:
      if (lookahead == 'G') ADVANCE(1115);
      END_STATE();
    case 716:
      if (lookahead == 'G') ADVANCE(1156);
      END_STATE();
    case 717:
      if (lookahead == 'G') ADVANCE(474);
      END_STATE();
    case 718:
      if (lookahead == 'G') ADVANCE(491);
      END_STATE();
    case 719:
      if (lookahead == 'G') ADVANCE(1397);
      END_STATE();
    case 720:
      if (lookahead == 'G') ADVANCE(1402);
      END_STATE();
    case 721:
      if (lookahead == 'G') ADVANCE(846);
      END_STATE();
    case 722:
      if (lookahead == 'G') ADVANCE(1403);
      END_STATE();
    case 723:
      if (lookahead == 'G') ADVANCE(1404);
      END_STATE();
    case 724:
      if (lookahead == 'G') ADVANCE(1406);
      END_STATE();
    case 725:
      if (lookahead == 'G') ADVANCE(1296);
      END_STATE();
    case 726:
      if (lookahead == 'G') ADVANCE(1411);
      END_STATE();
    case 727:
      if (lookahead == 'G') ADVANCE(791);
      END_STATE();
    case 728:
      if (lookahead == 'G') ADVANCE(1441);
      if (lookahead == 'L') ADVANCE(245);
      if (lookahead == 'P') ADVANCE(658);
      END_STATE();
    case 729:
      if (lookahead == 'G') ADVANCE(795);
      END_STATE();
    case 730:
      if (lookahead == 'G') ADVANCE(1434);
      if (lookahead == 'S') ADVANCE(213);
      END_STATE();
    case 731:
      if (lookahead == 'G') ADVANCE(242);
      END_STATE();
    case 732:
      if (lookahead == 'G') ADVANCE(63);
      END_STATE();
    case 733:
      if (lookahead == 'G') ADVANCE(986);
      END_STATE();
    case 734:
      if (lookahead == 'G') ADVANCE(68);
      END_STATE();
    case 735:
      if (lookahead == 'G') ADVANCE(1460);
      END_STATE();
    case 736:
      if (lookahead == 'G') ADVANCE(1463);
      END_STATE();
    case 737:
      if (lookahead == 'H') ADVANCE(1964);
      END_STATE();
    case 738:
      if (lookahead == 'H') ADVANCE(1945);
      END_STATE();
    case 739:
      if (lookahead == 'H') ADVANCE(1962);
      END_STATE();
    case 740:
      if (lookahead == 'H') ADVANCE(1971);
      END_STATE();
    case 741:
      if (lookahead == 'H') ADVANCE(2157);
      END_STATE();
    case 742:
      if (lookahead == 'H') ADVANCE(1938);
      END_STATE();
    case 743:
      if (lookahead == 'H') ADVANCE(2148);
      END_STATE();
    case 744:
      if (lookahead == 'H') ADVANCE(1168);
      END_STATE();
    case 745:
      if (lookahead == 'H') ADVANCE(228);
      END_STATE();
    case 746:
      if (lookahead == 'H') ADVANCE(1232);
      END_STATE();
    case 747:
      if (lookahead == 'H') ADVANCE(451);
      END_STATE();
    case 748:
      if (lookahead == 'H') ADVANCE(1611);
      END_STATE();
    case 749:
      if (lookahead == 'H') ADVANCE(169);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'T') ADVANCE(1828);
      END_STATE();
    case 750:
      if (lookahead == 'H') ADVANCE(69);
      END_STATE();
    case 751:
      if (lookahead == 'I') ADVANCE(1119);
      if (lookahead == 'O') ADVANCE(701);
      END_STATE();
    case 752:
      if (lookahead == 'I') ADVANCE(1836);
      END_STATE();
    case 753:
      if (lookahead == 'I') ADVANCE(909);
      if (lookahead == 'O') ADVANCE(1003);
      END_STATE();
    case 754:
      if (lookahead == 'I') ADVANCE(1805);
      END_STATE();
    case 755:
      if (lookahead == 'I') ADVANCE(711);
      END_STATE();
    case 756:
      if (lookahead == 'I') ADVANCE(1806);
      END_STATE();
    case 757:
      if (lookahead == 'I') ADVANCE(690);
      if (lookahead == 'O') ADVANCE(1799);
      END_STATE();
    case 758:
      if (lookahead == 'I') ADVANCE(683);
      if (lookahead == 'R') ADVANCE(534);
      END_STATE();
    case 759:
      if (lookahead == 'I') ADVANCE(1085);
      END_STATE();
    case 760:
      if (lookahead == 'I') ADVANCE(686);
      END_STATE();
    case 761:
      if (lookahead == 'I') ADVANCE(1094);
      END_STATE();
    case 762:
      if (lookahead == 'I') ADVANCE(305);
      END_STATE();
    case 763:
      if (lookahead == 'I') ADVANCE(684);
      END_STATE();
    case 764:
      if (lookahead == 'I') ADVANCE(1550);
      END_STATE();
    case 765:
      if (lookahead == 'I') ADVANCE(317);
      END_STATE();
    case 766:
      if (lookahead == 'I') ADVANCE(689);
      END_STATE();
    case 767:
      if (lookahead == 'I') ADVANCE(1292);
      END_STATE();
    case 768:
      if (lookahead == 'I') ADVANCE(1080);
      END_STATE();
    case 769:
      if (lookahead == 'I') ADVANCE(1009);
      if (lookahead == 'S') ADVANCE(355);
      END_STATE();
    case 770:
      if (lookahead == 'I') ADVANCE(1524);
      END_STATE();
    case 771:
      if (lookahead == 'I') ADVANCE(399);
      END_STATE();
    case 772:
      if (lookahead == 'I') ADVANCE(334);
      END_STATE();
    case 773:
      if (lookahead == 'I') ADVANCE(1553);
      END_STATE();
    case 774:
      if (lookahead == 'I') ADVANCE(356);
      END_STATE();
    case 775:
      if (lookahead == 'I') ADVANCE(1557);
      if (lookahead == 'L') ADVANCE(778);
      END_STATE();
    case 776:
      if (lookahead == 'I') ADVANCE(318);
      END_STATE();
    case 777:
      if (lookahead == 'I') ADVANCE(1051);
      if (lookahead == 'O') ADVANCE(705);
      END_STATE();
    case 778:
      if (lookahead == 'I') ADVANCE(1125);
      END_STATE();
    case 779:
      if (lookahead == 'I') ADVANCE(412);
      END_STATE();
    case 780:
      if (lookahead == 'I') ADVANCE(1083);
      END_STATE();
    case 781:
      if (lookahead == 'I') ADVANCE(1742);
      END_STATE();
    case 782:
      if (lookahead == 'I') ADVANCE(340);
      END_STATE();
    case 783:
      if (lookahead == 'I') ADVANCE(1138);
      END_STATE();
    case 784:
      if (lookahead == 'I') ADVANCE(1549);
      END_STATE();
    case 785:
      if (lookahead == 'I') ADVANCE(1606);
      END_STATE();
    case 786:
      if (lookahead == 'I') ADVANCE(1197);
      END_STATE();
    case 787:
      if (lookahead == 'I') ADVANCE(1706);
      END_STATE();
    case 788:
      if (lookahead == 'I') ADVANCE(1091);
      END_STATE();
    case 789:
      if (lookahead == 'I') ADVANCE(1057);
      END_STATE();
    case 790:
      if (lookahead == 'I') ADVANCE(1231);
      END_STATE();
    case 791:
      if (lookahead == 'I') ADVANCE(1058);
      END_STATE();
    case 792:
      if (lookahead == 'I') ADVANCE(1095);
      END_STATE();
    case 793:
      if (lookahead == 'I') ADVANCE(962);
      END_STATE();
    case 794:
      if (lookahead == 'I') ADVANCE(1206);
      END_STATE();
    case 795:
      if (lookahead == 'I') ADVANCE(1061);
      END_STATE();
    case 796:
      if (lookahead == 'I') ADVANCE(1618);
      END_STATE();
    case 797:
      if (lookahead == 'I') ADVANCE(1087);
      END_STATE();
    case 798:
      if (lookahead == 'I') ADVANCE(1501);
      END_STATE();
    case 799:
      if (lookahead == 'I') ADVANCE(1517);
      END_STATE();
    case 800:
      if (lookahead == 'I') ADVANCE(1643);
      END_STATE();
    case 801:
      if (lookahead == 'I') ADVANCE(1775);
      END_STATE();
    case 802:
      if (lookahead == 'I') ADVANCE(1088);
      if (lookahead == 'W') ADVANCE(535);
      END_STATE();
    case 803:
      if (lookahead == 'I') ADVANCE(1779);
      END_STATE();
    case 804:
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 805:
      if (lookahead == 'I') ADVANCE(1662);
      END_STATE();
    case 806:
      if (lookahead == 'I') ADVANCE(1101);
      END_STATE();
    case 807:
      if (lookahead == 'I') ADVANCE(716);
      END_STATE();
    case 808:
      if (lookahead == 'I') ADVANCE(1120);
      END_STATE();
    case 809:
      if (lookahead == 'I') ADVANCE(1337);
      END_STATE();
    case 810:
      if (lookahead == 'I') ADVANCE(1116);
      END_STATE();
    case 811:
      if (lookahead == 'I') ADVANCE(1047);
      if (lookahead == 'R') ADVANCE(179);
      END_STATE();
    case 812:
      if (lookahead == 'I') ADVANCE(1205);
      END_STATE();
    case 813:
      if (lookahead == 'I') ADVANCE(1787);
      END_STATE();
    case 814:
      if (lookahead == 'I') ADVANCE(1022);
      END_STATE();
    case 815:
      if (lookahead == 'I') ADVANCE(337);
      END_STATE();
    case 816:
      if (lookahead == 'I') ADVANCE(1143);
      END_STATE();
    case 817:
      if (lookahead == 'I') ADVANCE(1208);
      END_STATE();
    case 818:
      if (lookahead == 'I') ADVANCE(1097);
      END_STATE();
    case 819:
      if (lookahead == 'I') ADVANCE(1539);
      END_STATE();
    case 820:
      if (lookahead == 'I') ADVANCE(927);
      END_STATE();
    case 821:
      if (lookahead == 'I') ADVANCE(219);
      END_STATE();
    case 822:
      if (lookahead == 'I') ADVANCE(1209);
      END_STATE();
    case 823:
      if (lookahead == 'I') ADVANCE(134);
      END_STATE();
    case 824:
      if (lookahead == 'I') ADVANCE(1789);
      END_STATE();
    case 825:
      if (lookahead == 'I') ADVANCE(1540);
      END_STATE();
    case 826:
      if (lookahead == 'I') ADVANCE(928);
      END_STATE();
    case 827:
      if (lookahead == 'I') ADVANCE(224);
      END_STATE();
    case 828:
      if (lookahead == 'I') ADVANCE(1210);
      END_STATE();
    case 829:
      if (lookahead == 'I') ADVANCE(1542);
      END_STATE();
    case 830:
      if (lookahead == 'I') ADVANCE(930);
      END_STATE();
    case 831:
      if (lookahead == 'I') ADVANCE(1211);
      END_STATE();
    case 832:
      if (lookahead == 'I') ADVANCE(1715);
      END_STATE();
    case 833:
      if (lookahead == 'I') ADVANCE(1408);
      END_STATE();
    case 834:
      if (lookahead == 'I') ADVANCE(1212);
      END_STATE();
    case 835:
      if (lookahead == 'I') ADVANCE(932);
      END_STATE();
    case 836:
      if (lookahead == 'I') ADVANCE(1213);
      END_STATE();
    case 837:
      if (lookahead == 'I') ADVANCE(1796);
      END_STATE();
    case 838:
      if (lookahead == 'I') ADVANCE(933);
      END_STATE();
    case 839:
      if (lookahead == 'I') ADVANCE(1214);
      END_STATE();
    case 840:
      if (lookahead == 'I') ADVANCE(1215);
      END_STATE();
    case 841:
      if (lookahead == 'I') ADVANCE(579);
      END_STATE();
    case 842:
      if (lookahead == 'I') ADVANCE(939);
      END_STATE();
    case 843:
      if (lookahead == 'I') ADVANCE(177);
      END_STATE();
    case 844:
      if (lookahead == 'I') ADVANCE(581);
      END_STATE();
    case 845:
      if (lookahead == 'I') ADVANCE(1026);
      END_STATE();
    case 846:
      if (lookahead == 'I') ADVANCE(1563);
      END_STATE();
    case 847:
      if (lookahead == 'I') ADVANCE(1238);
      END_STATE();
    case 848:
      if (lookahead == 'I') ADVANCE(1226);
      END_STATE();
    case 849:
      if (lookahead == 'I') ADVANCE(960);
      END_STATE();
    case 850:
      if (lookahead == 'I') ADVANCE(1790);
      END_STATE();
    case 851:
      if (lookahead == 'I') ADVANCE(1788);
      END_STATE();
    case 852:
      if (lookahead == 'I') ADVANCE(1570);
      END_STATE();
    case 853:
      if (lookahead == 'I') ADVANCE(241);
      END_STATE();
    case 854:
      if (lookahead == 'I') ADVANCE(1242);
      END_STATE();
    case 855:
      if (lookahead == 'I') ADVANCE(967);
      END_STATE();
    case 856:
      if (lookahead == 'I') ADVANCE(1791);
      END_STATE();
    case 857:
      if (lookahead == 'I') ADVANCE(1708);
      END_STATE();
    case 858:
      if (lookahead == 'I') ADVANCE(1270);
      END_STATE();
    case 859:
      if (lookahead == 'I') ADVANCE(1244);
      END_STATE();
    case 860:
      if (lookahead == 'I') ADVANCE(1246);
      END_STATE();
    case 861:
      if (lookahead == 'I') ADVANCE(251);
      END_STATE();
    case 862:
      if (lookahead == 'I') ADVANCE(434);
      if (lookahead == 'U') ADVANCE(548);
      END_STATE();
    case 863:
      if (lookahead == 'I') ADVANCE(307);
      END_STATE();
    case 864:
      if (lookahead == 'I') ADVANCE(1145);
      END_STATE();
    case 865:
      if (lookahead == 'I') ADVANCE(309);
      END_STATE();
    case 866:
      if (lookahead == 'I') ADVANCE(1148);
      END_STATE();
    case 867:
      if (lookahead == 'I') ADVANCE(1150);
      END_STATE();
    case 868:
      if (lookahead == 'I') ADVANCE(267);
      END_STATE();
    case 869:
      if (lookahead == 'I') ADVANCE(1338);
      END_STATE();
    case 870:
      if (lookahead == 'I') ADVANCE(275);
      END_STATE();
    case 871:
      if (lookahead == 'I') ADVANCE(375);
      END_STATE();
    case 872:
      if (lookahead == 'I') ADVANCE(280);
      END_STATE();
    case 873:
      if (lookahead == 'I') ADVANCE(1163);
      if (lookahead == 'O') ADVANCE(1158);
      if (lookahead == 'R') ADVANCE(663);
      END_STATE();
    case 874:
      if (lookahead == 'I') ADVANCE(1164);
      if (lookahead == 'O') ADVANCE(1161);
      if (lookahead == 'R') ADVANCE(664);
      END_STATE();
    case 875:
      if (lookahead == 'J') ADVANCE(1184);
      if (lookahead == 'S') ADVANCE(1644);
      END_STATE();
    case 876:
      if (lookahead == 'J') ADVANCE(1247);
      END_STATE();
    case 877:
      if (lookahead == 'J') ADVANCE(631);
      END_STATE();
    case 878:
      if (lookahead == 'K') ADVANCE(1878);
      END_STATE();
    case 879:
      if (lookahead == 'K') ADVANCE(1968);
      END_STATE();
    case 880:
      if (lookahead == 'K') ADVANCE(1889);
      END_STATE();
    case 881:
      if (lookahead == 'K') ADVANCE(2066);
      END_STATE();
    case 882:
      if (lookahead == 'K') ADVANCE(30);
      END_STATE();
    case 883:
      if (lookahead == 'K') ADVANCE(155);
      END_STATE();
    case 884:
      if (lookahead == 'K') ADVANCE(258);
      END_STATE();
    case 885:
      if (lookahead == 'L') ADVANCE(520);
      if (lookahead == 'N') ADVANCE(770);
      if (lookahead == 'T') ADVANCE(1946);
      END_STATE();
    case 886:
      if (lookahead == 'L') ADVANCE(862);
      if (lookahead == 'R') ADVANCE(329);
      END_STATE();
    case 887:
      if (lookahead == 'L') ADVANCE(1857);
      END_STATE();
    case 888:
      if (lookahead == 'L') ADVANCE(2134);
      END_STATE();
    case 889:
      if (lookahead == 'L') ADVANCE(2052);
      END_STATE();
    case 890:
      if (lookahead == 'L') ADVANCE(2063);
      END_STATE();
    case 891:
      if (lookahead == 'L') ADVANCE(2116);
      END_STATE();
    case 892:
      if (lookahead == 'L') ADVANCE(87);
      END_STATE();
    case 893:
      if (lookahead == 'L') ADVANCE(1905);
      END_STATE();
    case 894:
      if (lookahead == 'L') ADVANCE(2121);
      END_STATE();
    case 895:
      if (lookahead == 'L') ADVANCE(1942);
      END_STATE();
    case 896:
      if (lookahead == 'L') ADVANCE(2091);
      END_STATE();
    case 897:
      if (lookahead == 'L') ADVANCE(2146);
      END_STATE();
    case 898:
      if (lookahead == 'L') ADVANCE(1876);
      END_STATE();
    case 899:
      if (lookahead == 'L') ADVANCE(2069);
      END_STATE();
    case 900:
      if (lookahead == 'L') ADVANCE(1826);
      END_STATE();
    case 901:
      if (lookahead == 'L') ADVANCE(777);
      END_STATE();
    case 902:
      if (lookahead == 'L') ADVANCE(1757);
      END_STATE();
    case 903:
      if (lookahead == 'L') ADVANCE(1814);
      END_STATE();
    case 904:
      if (lookahead == 'L') ADVANCE(1830);
      END_STATE();
    case 905:
      if (lookahead == 'L') ADVANCE(1348);
      END_STATE();
    case 906:
      if (lookahead == 'L') ADVANCE(1768);
      END_STATE();
    case 907:
      if (lookahead == 'L') ADVANCE(1816);
      END_STATE();
    case 908:
      if (lookahead == 'L') ADVANCE(1597);
      END_STATE();
    case 909:
      if (lookahead == 'L') ADVANCE(1178);
      END_STATE();
    case 910:
      if (lookahead == 'L') ADVANCE(994);
      END_STATE();
    case 911:
      if (lookahead == 'L') ADVANCE(1819);
      END_STATE();
    case 912:
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 913:
      if (lookahead == 'L') ADVANCE(128);
      END_STATE();
    case 914:
      if (lookahead == 'L') ADVANCE(1472);
      END_STATE();
    case 915:
      if (lookahead == 'L') ADVANCE(272);
      if (lookahead == 'S') ADVANCE(1293);
      END_STATE();
    case 916:
      if (lookahead == 'L') ADVANCE(1474);
      END_STATE();
    case 917:
      if (lookahead == 'L') ADVANCE(133);
      END_STATE();
    case 918:
      if (lookahead == 'L') ADVANCE(27);
      END_STATE();
    case 919:
      if (lookahead == 'L') ADVANCE(1479);
      END_STATE();
    case 920:
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 921:
      if (lookahead == 'L') ADVANCE(807);
      if (lookahead == 'T') ADVANCE(1739);
      END_STATE();
    case 922:
      if (lookahead == 'L') ADVANCE(1480);
      END_STATE();
    case 923:
      if (lookahead == 'L') ADVANCE(1233);
      END_STATE();
    case 924:
      if (lookahead == 'L') ADVANCE(454);
      END_STATE();
    case 925:
      if (lookahead == 'L') ADVANCE(459);
      END_STATE();
    case 926:
      if (lookahead == 'L') ADVANCE(145);
      END_STATE();
    case 927:
      if (lookahead == 'L') ADVANCE(555);
      END_STATE();
    case 928:
      if (lookahead == 'L') ADVANCE(557);
      END_STATE();
    case 929:
      if (lookahead == 'L') ADVANCE(1502);
      END_STATE();
    case 930:
      if (lookahead == 'L') ADVANCE(467);
      END_STATE();
    case 931:
      if (lookahead == 'L') ADVANCE(560);
      END_STATE();
    case 932:
      if (lookahead == 'L') ADVANCE(468);
      END_STATE();
    case 933:
      if (lookahead == 'L') ADVANCE(679);
      END_STATE();
    case 934:
      if (lookahead == 'L') ADVANCE(470);
      END_STATE();
    case 935:
      if (lookahead == 'L') ADVANCE(1509);
      END_STATE();
    case 936:
      if (lookahead == 'L') ADVANCE(1510);
      END_STATE();
    case 937:
      if (lookahead == 'L') ADVANCE(561);
      END_STATE();
    case 938:
      if (lookahead == 'L') ADVANCE(1516);
      END_STATE();
    case 939:
      if (lookahead == 'L') ADVANCE(479);
      END_STATE();
    case 940:
      if (lookahead == 'L') ADVANCE(480);
      END_STATE();
    case 941:
      if (lookahead == 'L') ADVANCE(487);
      END_STATE();
    case 942:
      if (lookahead == 'L') ADVANCE(492);
      END_STATE();
    case 943:
      if (lookahead == 'L') ADVANCE(495);
      END_STATE();
    case 944:
      if (lookahead == 'L') ADVANCE(665);
      END_STATE();
    case 945:
      if (lookahead == 'L') ADVANCE(500);
      END_STATE();
    case 946:
      if (lookahead == 'L') ADVANCE(502);
      END_STATE();
    case 947:
      if (lookahead == 'L') ADVANCE(503);
      END_STATE();
    case 948:
      if (lookahead == 'L') ADVANCE(504);
      END_STATE();
    case 949:
      if (lookahead == 'L') ADVANCE(1187);
      END_STATE();
    case 950:
      if (lookahead == 'L') ADVANCE(203);
      if (lookahead == 'M') ADVANCE(1469);
      if (lookahead == 'N') ADVANCE(510);
      if (lookahead == 'P') ADVANCE(1639);
      if (lookahead == 'R') ADVANCE(1691);
      if (lookahead == 'U') ADVANCE(1640);
      if (lookahead == 'V') ADVANCE(527);
      END_STATE();
    case 951:
      if (lookahead == 'L') ADVANCE(1772);
      END_STATE();
    case 952:
      if (lookahead == 'L') ADVANCE(38);
      END_STATE();
    case 953:
      if (lookahead == 'L') ADVANCE(1198);
      END_STATE();
    case 954:
      if (lookahead == 'L') ADVANCE(1761);
      END_STATE();
    case 955:
      if (lookahead == 'L') ADVANCE(146);
      END_STATE();
    case 956:
      if (lookahead == 'L') ADVANCE(550);
      END_STATE();
    case 957:
      if (lookahead == 'L') ADVANCE(164);
      if (lookahead == 'R') ADVANCE(609);
      END_STATE();
    case 958:
      if (lookahead == 'L') ADVANCE(1204);
      END_STATE();
    case 959:
      if (lookahead == 'L') ADVANCE(266);
      END_STATE();
    case 960:
      if (lookahead == 'L') ADVANCE(558);
      END_STATE();
    case 961:
      if (lookahead == 'L') ADVANCE(819);
      END_STATE();
    case 962:
      if (lookahead == 'L') ADVANCE(800);
      END_STATE();
    case 963:
      if (lookahead == 'L') ADVANCE(174);
      END_STATE();
    case 964:
      if (lookahead == 'L') ADVANCE(829);
      END_STATE();
    case 965:
      if (lookahead == 'L') ADVANCE(1657);
      END_STATE();
    case 966:
      if (lookahead == 'L') ADVANCE(249);
      END_STATE();
    case 967:
      if (lookahead == 'L') ADVANCE(580);
      END_STATE();
    case 968:
      if (lookahead == 'L') ADVANCE(944);
      END_STATE();
    case 969:
      if (lookahead == 'L') ADVANCE(588);
      END_STATE();
    case 970:
      if (lookahead == 'L') ADVANCE(589);
      END_STATE();
    case 971:
      if (lookahead == 'L') ADVANCE(590);
      END_STATE();
    case 972:
      if (lookahead == 'L') ADVANCE(591);
      END_STATE();
    case 973:
      if (lookahead == 'L') ADVANCE(273);
      END_STATE();
    case 974:
      if (lookahead == 'L') ADVANCE(1236);
      if (lookahead == 'O') ADVANCE(1286);
      END_STATE();
    case 975:
      if (lookahead == 'L') ADVANCE(1763);
      END_STATE();
    case 976:
      if (lookahead == 'L') ADVANCE(623);
      END_STATE();
    case 977:
      if (lookahead == 'L') ADVANCE(359);
      END_STATE();
    case 978:
      if (lookahead == 'L') ADVANCE(244);
      END_STATE();
    case 979:
      if (lookahead == 'L') ADVANCE(247);
      END_STATE();
    case 980:
      if (lookahead == 'L') ADVANCE(248);
      END_STATE();
    case 981:
      if (lookahead == 'L') ADVANCE(252);
      END_STATE();
    case 982:
      if (lookahead == 'L') ADVANCE(253);
      END_STATE();
    case 983:
      if (lookahead == 'L') ADVANCE(1835);
      END_STATE();
    case 984:
      if (lookahead == 'L') ADVANCE(61);
      END_STATE();
    case 985:
      if (lookahead == 'L') ADVANCE(864);
      END_STATE();
    case 986:
      if (lookahead == 'L') ADVANCE(866);
      END_STATE();
    case 987:
      if (lookahead == 'L') ADVANCE(867);
      END_STATE();
    case 988:
      if (lookahead == 'L') ADVANCE(1770);
      END_STATE();
    case 989:
      if (lookahead == 'L') ADVANCE(279);
      END_STATE();
    case 990:
      if (lookahead == 'M') ADVANCE(1856);
      END_STATE();
    case 991:
      if (lookahead == 'M') ADVANCE(1963);
      END_STATE();
    case 992:
      if (lookahead == 'M') ADVANCE(1278);
      END_STATE();
    case 993:
      if (lookahead == 'M') ADVANCE(2037);
      END_STATE();
    case 994:
      if (lookahead == 'M') ADVANCE(1903);
      END_STATE();
    case 995:
      if (lookahead == 'M') ADVANCE(89);
      END_STATE();
    case 996:
      if (lookahead == 'M') ADVANCE(88);
      END_STATE();
    case 997:
      if (lookahead == 'M') ADVANCE(2124);
      END_STATE();
    case 998:
      if (lookahead == 'M') ADVANCE(2193);
      END_STATE();
    case 999:
      if (lookahead == 'M') ADVANCE(1977);
      END_STATE();
    case 1000:
      if (lookahead == 'M') ADVANCE(2003);
      END_STATE();
    case 1001:
      if (lookahead == 'M') ADVANCE(1885);
      END_STATE();
    case 1002:
      if (lookahead == 'M') ADVANCE(8);
      END_STATE();
    case 1003:
      if (lookahead == 'M') ADVANCE(140);
      if (lookahead == 'S') ADVANCE(1594);
      END_STATE();
    case 1004:
      if (lookahead == 'M') ADVANCE(103);
      END_STATE();
    case 1005:
      if (lookahead == 'M') ADVANCE(216);
      END_STATE();
    case 1006:
      if (lookahead == 'M') ADVANCE(1228);
      END_STATE();
    case 1007:
      if (lookahead == 'M') ADVANCE(1276);
      END_STATE();
    case 1008:
      if (lookahead == 'M') ADVANCE(222);
      END_STATE();
    case 1009:
      if (lookahead == 'M') ADVANCE(832);
      END_STATE();
    case 1010:
      if (lookahead == 'M') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(924);
      END_STATE();
    case 1011:
      if (lookahead == 'M') ADVANCE(617);
      if (lookahead == 'P') ADVANCE(236);
      END_STATE();
    case 1012:
      if (lookahead == 'M') ADVANCE(1224);
      if (lookahead == 'N') ADVANCE(225);
      if (lookahead == 'O') ADVANCE(1305);
      if (lookahead == 'S') ADVANCE(233);
      END_STATE();
    case 1013:
      if (lookahead == 'M') ADVANCE(478);
      END_STATE();
    case 1014:
      if (lookahead == 'M') ADVANCE(483);
      END_STATE();
    case 1015:
      if (lookahead == 'M') ADVANCE(486);
      END_STATE();
    case 1016:
      if (lookahead == 'M') ADVANCE(506);
      END_STATE();
    case 1017:
      if (lookahead == 'M') ADVANCE(1316);
      if (lookahead == 'V') ADVANCE(449);
      END_STATE();
    case 1018:
      if (lookahead == 'M') ADVANCE(1749);
      END_STATE();
    case 1019:
      if (lookahead == 'M') ADVANCE(784);
      END_STATE();
    case 1020:
      if (lookahead == 'M') ADVANCE(610);
      END_STATE();
    case 1021:
      if (lookahead == 'M') ADVANCE(806);
      END_STATE();
    case 1022:
      if (lookahead == 'M') ADVANCE(204);
      END_STATE();
    case 1023:
      if (lookahead == 'M') ADVANCE(1396);
      if (lookahead == 'N') ADVANCE(1312);
      END_STATE();
    case 1024:
      if (lookahead == 'M') ADVANCE(654);
      if (lookahead == 'O') ADVANCE(1113);
      if (lookahead == 'P') ADVANCE(260);
      if (lookahead == 'S') ADVANCE(1322);
      if (lookahead == 'U') ADVANCE(1147);
      END_STATE();
    case 1025:
      if (lookahead == 'M') ADVANCE(288);
      END_STATE();
    case 1026:
      if (lookahead == 'M') ADVANCE(788);
      END_STATE();
    case 1027:
      if (lookahead == 'M') ADVANCE(175);
      END_STATE();
    case 1028:
      if (lookahead == 'M') ADVANCE(1321);
      END_STATE();
    case 1029:
      if (lookahead == 'M') ADVANCE(1318);
      END_STATE();
    case 1030:
      if (lookahead == 'M') ADVANCE(231);
      END_STATE();
    case 1031:
      if (lookahead == 'M') ADVANCE(625);
      END_STATE();
    case 1032:
      if (lookahead == 'M') ADVANCE(235);
      END_STATE();
    case 1033:
      if (lookahead == 'M') ADVANCE(630);
      END_STATE();
    case 1034:
      if (lookahead == 'M') ADVANCE(1326);
      END_STATE();
    case 1035:
      if (lookahead == 'M') ADVANCE(1324);
      END_STATE();
    case 1036:
      if (lookahead == 'M') ADVANCE(634);
      END_STATE();
    case 1037:
      if (lookahead == 'M') ADVANCE(1327);
      END_STATE();
    case 1038:
      if (lookahead == 'M') ADVANCE(1328);
      END_STATE();
    case 1039:
      if (lookahead == 'M') ADVANCE(1249);
      END_STATE();
    case 1040:
      if (lookahead == 'M') ADVANCE(638);
      END_STATE();
    case 1041:
      if (lookahead == 'M') ADVANCE(1329);
      END_STATE();
    case 1042:
      if (lookahead == 'M') ADVANCE(1330);
      END_STATE();
    case 1043:
      if (lookahead == 'M') ADVANCE(642);
      END_STATE();
    case 1044:
      if (lookahead == 'M') ADVANCE(1335);
      END_STATE();
    case 1045:
      if (lookahead == 'M') ADVANCE(1043);
      END_STATE();
    case 1046:
      if (lookahead == 'M') ADVANCE(282);
      END_STATE();
    case 1047:
      if (lookahead == 'M') ADVANCE(678);
      END_STATE();
    case 1048:
      if (lookahead == 'N') ADVANCE(1984);
      END_STATE();
    case 1049:
      if (lookahead == 'N') ADVANCE(367);
      END_STATE();
    case 1050:
      if (lookahead == 'N') ADVANCE(1906);
      END_STATE();
    case 1051:
      if (lookahead == 'N') ADVANCE(1951);
      END_STATE();
    case 1052:
      if (lookahead == 'N') ADVANCE(2094);
      END_STATE();
    case 1053:
      if (lookahead == 'N') ADVANCE(2102);
      END_STATE();
    case 1054:
      if (lookahead == 'N') ADVANCE(2100);
      END_STATE();
    case 1055:
      if (lookahead == 'N') ADVANCE(1939);
      END_STATE();
    case 1056:
      if (lookahead == 'N') ADVANCE(2025);
      END_STATE();
    case 1057:
      if (lookahead == 'N') ADVANCE(2112);
      END_STATE();
    case 1058:
      if (lookahead == 'N') ADVANCE(2126);
      END_STATE();
    case 1059:
      if (lookahead == 'N') ADVANCE(2029);
      END_STATE();
    case 1060:
      if (lookahead == 'N') ADVANCE(1981);
      END_STATE();
    case 1061:
      if (lookahead == 'N') ADVANCE(2101);
      END_STATE();
    case 1062:
      if (lookahead == 'N') ADVANCE(1980);
      END_STATE();
    case 1063:
      if (lookahead == 'N') ADVANCE(1870);
      END_STATE();
    case 1064:
      if (lookahead == 'N') ADVANCE(1866);
      END_STATE();
    case 1065:
      if (lookahead == 'N') ADVANCE(1987);
      END_STATE();
    case 1066:
      if (lookahead == 'N') ADVANCE(2007);
      END_STATE();
    case 1067:
      if (lookahead == 'N') ADVANCE(2064);
      END_STATE();
    case 1068:
      if (lookahead == 'N') ADVANCE(2090);
      END_STATE();
    case 1069:
      if (lookahead == 'N') ADVANCE(2108);
      END_STATE();
    case 1070:
      if (lookahead == 'N') ADVANCE(2072);
      END_STATE();
    case 1071:
      if (lookahead == 'N') ADVANCE(804);
      if (lookahead == 'P') ADVANCE(432);
      if (lookahead == 'S') ADVANCE(447);
      END_STATE();
    case 1072:
      if (lookahead == 'N') ADVANCE(881);
      if (lookahead == 'T') ADVANCE(794);
      END_STATE();
    case 1073:
      if (lookahead == 'N') ADVANCE(381);
      END_STATE();
    case 1074:
      if (lookahead == 'N') ADVANCE(901);
      if (lookahead == 'T') ADVANCE(1954);
      END_STATE();
    case 1075:
      if (lookahead == 'N') ADVANCE(382);
      END_STATE();
    case 1076:
      if (lookahead == 'N') ADVANCE(383);
      END_STATE();
    case 1077:
      if (lookahead == 'N') ADVANCE(691);
      END_STATE();
    case 1078:
      if (lookahead == 'N') ADVANCE(384);
      END_STATE();
    case 1079:
      if (lookahead == 'N') ADVANCE(1223);
      if (lookahead == 'T') ADVANCE(325);
      END_STATE();
    case 1080:
      if (lookahead == 'N') ADVANCE(708);
      END_STATE();
    case 1081:
      if (lookahead == 'N') ADVANCE(430);
      END_STATE();
    case 1082:
      if (lookahead == 'N') ADVANCE(332);
      END_STATE();
    case 1083:
      if (lookahead == 'N') ADVANCE(734);
      END_STATE();
    case 1084:
      if (lookahead == 'N') ADVANCE(1600);
      END_STATE();
    case 1085:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 1086:
      if (lookahead == 'N') ADVANCE(1471);
      END_STATE();
    case 1087:
      if (lookahead == 'N') ADVANCE(710);
      END_STATE();
    case 1088:
      if (lookahead == 'N') ADVANCE(1601);
      END_STATE();
    case 1089:
      if (lookahead == 'N') ADVANCE(1528);
      END_STATE();
    case 1090:
      if (lookahead == 'N') ADVANCE(1257);
      END_STATE();
    case 1091:
      if (lookahead == 'N') ADVANCE(238);
      END_STATE();
    case 1092:
      if (lookahead == 'N') ADVANCE(1581);
      END_STATE();
    case 1093:
      if (lookahead == 'N') ADVANCE(1612);
      END_STATE();
    case 1094:
      if (lookahead == 'N') ADVANCE(458);
      END_STATE();
    case 1095:
      if (lookahead == 'N') ADVANCE(1140);
      END_STATE();
    case 1096:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 1097:
      if (lookahead == 'N') ADVANCE(1616);
      END_STATE();
    case 1098:
      if (lookahead == 'N') ADVANCE(1619);
      END_STATE();
    case 1099:
      if (lookahead == 'N') ADVANCE(1494);
      END_STATE();
    case 1100:
      if (lookahead == 'N') ADVANCE(1495);
      END_STATE();
    case 1101:
      if (lookahead == 'N') ADVANCE(462);
      END_STATE();
    case 1102:
      if (lookahead == 'N') ADVANCE(1498);
      END_STATE();
    case 1103:
      if (lookahead == 'N') ADVANCE(1626);
      END_STATE();
    case 1104:
      if (lookahead == 'N') ADVANCE(1627);
      END_STATE();
    case 1105:
      if (lookahead == 'N') ADVANCE(1513);
      END_STATE();
    case 1106:
      if (lookahead == 'N') ADVANCE(1630);
      END_STATE();
    case 1107:
      if (lookahead == 'N') ADVANCE(1514);
      END_STATE();
    case 1108:
      if (lookahead == 'N') ADVANCE(1631);
      END_STATE();
    case 1109:
      if (lookahead == 'N') ADVANCE(1632);
      END_STATE();
    case 1110:
      if (lookahead == 'N') ADVANCE(1633);
      END_STATE();
    case 1111:
      if (lookahead == 'N') ADVANCE(1593);
      END_STATE();
    case 1112:
      if (lookahead == 'N') ADVANCE(352);
      END_STATE();
    case 1113:
      if (lookahead == 'N') ADVANCE(595);
      END_STATE();
    case 1114:
      if (lookahead == 'N') ADVANCE(1575);
      END_STATE();
    case 1115:
      if (lookahead == 'N') ADVANCE(1200);
      END_STATE();
    case 1116:
      if (lookahead == 'N') ADVANCE(732);
      END_STATE();
    case 1117:
      if (lookahead == 'N') ADVANCE(343);
      END_STATE();
    case 1118:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 1119:
      if (lookahead == 'N') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(1596);
      END_STATE();
    case 1120:
      if (lookahead == 'N') ADVANCE(692);
      END_STATE();
    case 1121:
      if (lookahead == 'N') ADVANCE(344);
      END_STATE();
    case 1122:
      if (lookahead == 'N') ADVANCE(1793);
      END_STATE();
    case 1123:
      if (lookahead == 'N') ADVANCE(1733);
      END_STATE();
    case 1124:
      if (lookahead == 'N') ADVANCE(1536);
      END_STATE();
    case 1125:
      if (lookahead == 'N') ADVANCE(627);
      END_STATE();
    case 1126:
      if (lookahead == 'N') ADVANCE(406);
      END_STATE();
    case 1127:
      if (lookahead == 'N') ADVANCE(1152);
      if (lookahead == 'P') ADVANCE(1824);
      END_STATE();
    case 1128:
      if (lookahead == 'N') ADVANCE(407);
      END_STATE();
    case 1129:
      if (lookahead == 'N') ADVANCE(564);
      END_STATE();
    case 1130:
      if (lookahead == 'N') ADVANCE(1546);
      END_STATE();
    case 1131:
      if (lookahead == 'N') ADVANCE(1547);
      END_STATE();
    case 1132:
      if (lookahead == 'N') ADVANCE(417);
      END_STATE();
    case 1133:
      if (lookahead == 'N') ADVANCE(1674);
      END_STATE();
    case 1134:
      if (lookahead == 'N') ADVANCE(418);
      END_STATE();
    case 1135:
      if (lookahead == 'N') ADVANCE(443);
      END_STATE();
    case 1136:
      if (lookahead == 'N') ADVANCE(435);
      END_STATE();
    case 1137:
      if (lookahead == 'N') ADVANCE(165);
      if (lookahead == 'P') ADVANCE(1289);
      END_STATE();
    case 1138:
      if (lookahead == 'N') ADVANCE(170);
      END_STATE();
    case 1139:
      if (lookahead == 'N') ADVANCE(185);
      END_STATE();
    case 1140:
      if (lookahead == 'N') ADVANCE(797);
      END_STATE();
    case 1141:
      if (lookahead == 'N') ADVANCE(1235);
      END_STATE();
    case 1142:
      if (lookahead == 'N') ADVANCE(431);
      END_STATE();
    case 1143:
      if (lookahead == 'N') ADVANCE(616);
      END_STATE();
    case 1144:
      if (lookahead == 'N') ADVANCE(374);
      END_STATE();
    case 1145:
      if (lookahead == 'N') ADVANCE(636);
      END_STATE();
    case 1146:
      if (lookahead == 'N') ADVANCE(433);
      END_STATE();
    case 1147:
      if (lookahead == 'N') ADVANCE(851);
      END_STATE();
    case 1148:
      if (lookahead == 'N') ADVANCE(641);
      END_STATE();
    case 1149:
      if (lookahead == 'N') ADVANCE(1245);
      END_STATE();
    case 1150:
      if (lookahead == 'N') ADVANCE(643);
      END_STATE();
    case 1151:
      if (lookahead == 'N') ADVANCE(1248);
      END_STATE();
    case 1152:
      if (lookahead == 'N') ADVANCE(633);
      END_STATE();
    case 1153:
      if (lookahead == 'N') ADVANCE(436);
      END_STATE();
    case 1154:
      if (lookahead == 'N') ADVANCE(270);
      END_STATE();
    case 1155:
      if (lookahead == 'N') ADVANCE(437);
      END_STATE();
    case 1156:
      if (lookahead == 'N') ADVANCE(1040);
      END_STATE();
    case 1157:
      if (lookahead == 'N') ADVANCE(1585);
      END_STATE();
    case 1158:
      if (lookahead == 'N') ADVANCE(666);
      END_STATE();
    case 1159:
      if (lookahead == 'N') ADVANCE(670);
      END_STATE();
    case 1160:
      if (lookahead == 'N') ADVANCE(673);
      END_STATE();
    case 1161:
      if (lookahead == 'N') ADVANCE(675);
      END_STATE();
    case 1162:
      if (lookahead == 'N') ADVANCE(1592);
      END_STATE();
    case 1163:
      if (lookahead == 'N') ADVANCE(441);
      END_STATE();
    case 1164:
      if (lookahead == 'N') ADVANCE(442);
      END_STATE();
    case 1165:
      if (lookahead == 'N') ADVANCE(78);
      END_STATE();
    case 1166:
      if (lookahead == 'O') ADVANCE(1969);
      END_STATE();
    case 1167:
      if (lookahead == 'O') ADVANCE(1810);
      END_STATE();
    case 1168:
      if (lookahead == 'O') ADVANCE(1931);
      END_STATE();
    case 1169:
      if (lookahead == 'O') ADVANCE(2021);
      END_STATE();
    case 1170:
      if (lookahead == 'O') ADVANCE(2117);
      END_STATE();
    case 1171:
      if (lookahead == 'O') ADVANCE(420);
      END_STATE();
    case 1172:
      if (lookahead == 'O') ADVANCE(1127);
      END_STATE();
    case 1173:
      if (lookahead == 'O') ADVANCE(687);
      END_STATE();
    case 1174:
      if (lookahead == 'O') ADVANCE(1122);
      END_STATE();
    case 1175:
      if (lookahead == 'O') ADVANCE(1281);
      END_STATE();
    case 1176:
      if (lookahead == 'O') ADVANCE(1800);
      END_STATE();
    case 1177:
      if (lookahead == 'O') ADVANCE(880);
      END_STATE();
    case 1178:
      if (lookahead == 'O') ADVANCE(714);
      END_STATE();
    case 1179:
      if (lookahead == 'O') ADVANCE(1693);
      END_STATE();
    case 1180:
      if (lookahead == 'O') ADVANCE(715);
      END_STATE();
    case 1181:
      if (lookahead == 'O') ADVANCE(376);
      END_STATE();
    case 1182:
      if (lookahead == 'O') ADVANCE(707);
      END_STATE();
    case 1183:
      if (lookahead == 'O') ADVANCE(1559);
      END_STATE();
    case 1184:
      if (lookahead == 'O') ADVANCE(818);
      END_STATE();
    case 1185:
      if (lookahead == 'O') ADVANCE(1007);
      END_STATE();
    case 1186:
      if (lookahead == 'O') ADVANCE(1349);
      END_STATE();
    case 1187:
      if (lookahead == 'O') ADVANCE(1602);
      END_STATE();
    case 1188:
      if (lookahead == 'O') ADVANCE(1350);
      END_STATE();
    case 1189:
      if (lookahead == 'O') ADVANCE(351);
      END_STATE();
    case 1190:
      if (lookahead == 'O') ADVANCE(1052);
      END_STATE();
    case 1191:
      if (lookahead == 'O') ADVANCE(1437);
      END_STATE();
    case 1192:
      if (lookahead == 'O') ADVANCE(1436);
      END_STATE();
    case 1193:
      if (lookahead == 'O') ADVANCE(1177);
      END_STATE();
    case 1194:
      if (lookahead == 'O') ADVANCE(1353);
      END_STATE();
    case 1195:
      if (lookahead == 'O') ADVANCE(1045);
      END_STATE();
    case 1196:
      if (lookahead == 'O') ADVANCE(1439);
      END_STATE();
    case 1197:
      if (lookahead == 'O') ADVANCE(1055);
      END_STATE();
    case 1198:
      if (lookahead == 'O') ADVANCE(1610);
      END_STATE();
    case 1199:
      if (lookahead == 'O') ADVANCE(1398);
      END_STATE();
    case 1200:
      if (lookahead == 'O') ADVANCE(1483);
      END_STATE();
    case 1201:
      if (lookahead == 'O') ADVANCE(968);
      END_STATE();
    case 1202:
      if (lookahead == 'O') ADVANCE(1130);
      END_STATE();
    case 1203:
      if (lookahead == 'O') ADVANCE(1641);
      END_STATE();
    case 1204:
      if (lookahead == 'O') ADVANCE(1615);
      END_STATE();
    case 1205:
      if (lookahead == 'O') ADVANCE(1139);
      END_STATE();
    case 1206:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 1207:
      if (lookahead == 'O') ADVANCE(1427);
      END_STATE();
    case 1208:
      if (lookahead == 'O') ADVANCE(1063);
      END_STATE();
    case 1209:
      if (lookahead == 'O') ADVANCE(1064);
      END_STATE();
    case 1210:
      if (lookahead == 'O') ADVANCE(1065);
      END_STATE();
    case 1211:
      if (lookahead == 'O') ADVANCE(1066);
      END_STATE();
    case 1212:
      if (lookahead == 'O') ADVANCE(1067);
      END_STATE();
    case 1213:
      if (lookahead == 'O') ADVANCE(1068);
      END_STATE();
    case 1214:
      if (lookahead == 'O') ADVANCE(1069);
      END_STATE();
    case 1215:
      if (lookahead == 'O') ADVANCE(1070);
      END_STATE();
    case 1216:
      if (lookahead == 'O') ADVANCE(719);
      END_STATE();
    case 1217:
      if (lookahead == 'O') ADVANCE(721);
      END_STATE();
    case 1218:
      if (lookahead == 'O') ADVANCE(410);
      END_STATE();
    case 1219:
      if (lookahead == 'O') ADVANCE(1388);
      END_STATE();
    case 1220:
      if (lookahead == 'O') ADVANCE(1118);
      END_STATE();
    case 1221:
      if (lookahead == 'O') ADVANCE(1440);
      END_STATE();
    case 1222:
      if (lookahead == 'O') ADVANCE(1399);
      END_STATE();
    case 1223:
      if (lookahead == 'O') ADVANCE(1776);
      END_STATE();
    case 1224:
      if (lookahead == 'O') ADVANCE(403);
      END_STATE();
    case 1225:
      if (lookahead == 'O') ADVANCE(1389);
      END_STATE();
    case 1226:
      if (lookahead == 'O') ADVANCE(1096);
      END_STATE();
    case 1227:
      if (lookahead == 'O') ADVANCE(1405);
      END_STATE();
    case 1228:
      if (lookahead == 'O') ADVANCE(1203);
      END_STATE();
    case 1229:
      if (lookahead == 'O') ADVANCE(413);
      END_STATE();
    case 1230:
      if (lookahead == 'O') ADVANCE(1767);
      END_STATE();
    case 1231:
      if (lookahead == 'O') ADVANCE(1099);
      END_STATE();
    case 1232:
      if (lookahead == 'O') ADVANCE(1331);
      END_STATE();
    case 1233:
      if (lookahead == 'O') ADVANCE(1544);
      END_STATE();
    case 1234:
      if (lookahead == 'O') ADVANCE(414);
      END_STATE();
    case 1235:
      if (lookahead == 'O') ADVANCE(1777);
      END_STATE();
    case 1236:
      if (lookahead == 'O') ADVANCE(1545);
      END_STATE();
    case 1237:
      if (lookahead == 'O') ADVANCE(415);
      END_STATE();
    case 1238:
      if (lookahead == 'O') ADVANCE(1100);
      END_STATE();
    case 1239:
      if (lookahead == 'O') ADVANCE(1400);
      END_STATE();
    case 1240:
      if (lookahead == 'O') ADVANCE(1786);
      END_STATE();
    case 1241:
      if (lookahead == 'O') ADVANCE(416);
      END_STATE();
    case 1242:
      if (lookahead == 'O') ADVANCE(1102);
      END_STATE();
    case 1243:
      if (lookahead == 'O') ADVANCE(1413);
      END_STATE();
    case 1244:
      if (lookahead == 'O') ADVANCE(1105);
      END_STATE();
    case 1245:
      if (lookahead == 'O') ADVANCE(1780);
      END_STATE();
    case 1246:
      if (lookahead == 'O') ADVANCE(1107);
      END_STATE();
    case 1247:
      if (lookahead == 'O') ADVANCE(789);
      END_STATE();
    case 1248:
      if (lookahead == 'O') ADVANCE(1782);
      END_STATE();
    case 1249:
      if (lookahead == 'O') ADVANCE(421);
      END_STATE();
    case 1250:
      if (lookahead == 'O') ADVANCE(942);
      END_STATE();
    case 1251:
      if (lookahead == 'O') ADVANCE(1422);
      END_STATE();
    case 1252:
      if (lookahead == 'O') ADVANCE(1435);
      END_STATE();
    case 1253:
      if (lookahead == 'O') ADVANCE(1134);
      END_STATE();
    case 1254:
      if (lookahead == 'O') ADVANCE(1447);
      END_STATE();
    case 1255:
      if (lookahead == 'O') ADVANCE(1131);
      END_STATE();
    case 1256:
      if (lookahead == 'O') ADVANCE(720);
      END_STATE();
    case 1257:
      if (lookahead == 'O') ADVANCE(1027);
      END_STATE();
    case 1258:
      if (lookahead == 'O') ADVANCE(1341);
      END_STATE();
    case 1259:
      if (lookahead == 'O') ADVANCE(722);
      END_STATE();
    case 1260:
      if (lookahead == 'O') ADVANCE(1146);
      END_STATE();
    case 1261:
      if (lookahead == 'O') ADVANCE(723);
      END_STATE();
    case 1262:
      if (lookahead == 'O') ADVANCE(724);
      END_STATE();
    case 1263:
      if (lookahead == 'O') ADVANCE(726);
      END_STATE();
    case 1264:
      if (lookahead == 'O') ADVANCE(1445);
      END_STATE();
    case 1265:
      if (lookahead == 'O') ADVANCE(370);
      END_STATE();
    case 1266:
      if (lookahead == 'O') ADVANCE(1448);
      END_STATE();
    case 1267:
      if (lookahead == 'O') ADVANCE(1456);
      END_STATE();
    case 1268:
      if (lookahead == 'O') ADVANCE(733);
      END_STATE();
    case 1269:
      if (lookahead == 'O') ADVANCE(379);
      END_STATE();
    case 1270:
      if (lookahead == 'O') ADVANCE(1162);
      END_STATE();
    case 1271:
      if (lookahead == 'O') ADVANCE(1159);
      END_STATE();
    case 1272:
      if (lookahead == 'O') ADVANCE(1160);
      END_STATE();
    case 1273:
      if (lookahead == 'P') ADVANCE(1998);
      END_STATE();
    case 1274:
      if (lookahead == 'P') ADVANCE(1948);
      END_STATE();
    case 1275:
      if (lookahead == 'P') ADVANCE(1989);
      END_STATE();
    case 1276:
      if (lookahead == 'P') ADVANCE(2142);
      END_STATE();
    case 1277:
      if (lookahead == 'P') ADVANCE(1877);
      END_STATE();
    case 1278:
      if (lookahead == 'P') ADVANCE(957);
      if (lookahead == 'R') ADVANCE(1748);
      END_STATE();
    case 1279:
      if (lookahead == 'P') ADVANCE(737);
      END_STATE();
    case 1280:
      if (lookahead == 'P') ADVANCE(900);
      END_STATE();
    case 1281:
      if (lookahead == 'P') ADVANCE(26);
      END_STATE();
    case 1282:
      if (lookahead == 'P') ADVANCE(739);
      END_STATE();
    case 1283:
      if (lookahead == 'P') ADVANCE(740);
      END_STATE();
    case 1284:
      if (lookahead == 'P') ADVANCE(741);
      END_STATE();
    case 1285:
      if (lookahead == 'P') ADVANCE(29);
      END_STATE();
    case 1286:
      if (lookahead == 'P') ADVANCE(1818);
      END_STATE();
    case 1287:
      if (lookahead == 'P') ADVANCE(903);
      END_STATE();
    case 1288:
      if (lookahead == 'P') ADVANCE(1390);
      END_STATE();
    case 1289:
      if (lookahead == 'P') ADVANCE(907);
      END_STATE();
    case 1290:
      if (lookahead == 'P') ADVANCE(892);
      END_STATE();
    case 1291:
      if (lookahead == 'P') ADVANCE(50);
      END_STATE();
    case 1292:
      if (lookahead == 'P') ADVANCE(1607);
      END_STATE();
    case 1293:
      if (lookahead == 'P') ADVANCE(1253);
      END_STATE();
    case 1294:
      if (lookahead == 'P') ADVANCE(148);
      END_STATE();
    case 1295:
      if (lookahead == 'P') ADVANCE(1356);
      END_STATE();
    case 1296:
      if (lookahead == 'P') ADVANCE(898);
      END_STATE();
    case 1297:
      if (lookahead == 'P') ADVANCE(207);
      END_STATE();
    case 1298:
      if (lookahead == 'P') ADVANCE(1364);
      END_STATE();
    case 1299:
      if (lookahead == 'P') ADVANCE(1713);
      END_STATE();
    case 1300:
      if (lookahead == 'P') ADVANCE(115);
      END_STATE();
    case 1301:
      if (lookahead == 'P') ADVANCE(117);
      END_STATE();
    case 1302:
      if (lookahead == 'P') ADVANCE(1561);
      END_STATE();
    case 1303:
      if (lookahead == 'P') ADVANCE(472);
      END_STATE();
    case 1304:
      if (lookahead == 'P') ADVANCE(475);
      END_STATE();
    case 1305:
      if (lookahead == 'P') ADVANCE(568);
      END_STATE();
    case 1306:
      if (lookahead == 'P') ADVANCE(655);
      END_STATE();
    case 1307:
      if (lookahead == 'P') ADVANCE(544);
      END_STATE();
    case 1308:
      if (lookahead == 'P') ADVANCE(508);
      END_STATE();
    case 1309:
      if (lookahead == 'P') ADVANCE(917);
      END_STATE();
    case 1310:
      if (lookahead == 'P') ADVANCE(1202);
      END_STATE();
    case 1311:
      if (lookahead == 'P') ADVANCE(1755);
      END_STATE();
    case 1312:
      if (lookahead == 'P') ADVANCE(206);
      END_STATE();
    case 1313:
      if (lookahead == 'P') ADVANCE(1287);
      END_STATE();
    case 1314:
      if (lookahead == 'P') ADVANCE(629);
      END_STATE();
    case 1315:
      if (lookahead == 'P') ADVANCE(1300);
      END_STATE();
    case 1316:
      if (lookahead == 'P') ADVANCE(925);
      END_STATE();
    case 1317:
      if (lookahead == 'P') ADVANCE(926);
      END_STATE();
    case 1318:
      if (lookahead == 'P') ADVANCE(1752);
      END_STATE();
    case 1319:
      if (lookahead == 'P') ADVANCE(1301);
      END_STATE();
    case 1320:
      if (lookahead == 'P') ADVANCE(1753);
      END_STATE();
    case 1321:
      if (lookahead == 'P') ADVANCE(1192);
      END_STATE();
    case 1322:
      if (lookahead == 'P') ADVANCE(562);
      END_STATE();
    case 1323:
      if (lookahead == 'P') ADVANCE(931);
      END_STATE();
    case 1324:
      if (lookahead == 'P') ADVANCE(1221);
      END_STATE();
    case 1325:
      if (lookahead == 'P') ADVANCE(1421);
      END_STATE();
    case 1326:
      if (lookahead == 'P') ADVANCE(943);
      END_STATE();
    case 1327:
      if (lookahead == 'P') ADVANCE(945);
      END_STATE();
    case 1328:
      if (lookahead == 'P') ADVANCE(946);
      END_STATE();
    case 1329:
      if (lookahead == 'P') ADVANCE(947);
      END_STATE();
    case 1330:
      if (lookahead == 'P') ADVANCE(948);
      END_STATE();
    case 1331:
      if (lookahead == 'P') ADVANCE(963);
      END_STATE();
    case 1332:
      if (lookahead == 'P') ADVANCE(1225);
      END_STATE();
    case 1333:
      if (lookahead == 'P') ADVANCE(1255);
      if (lookahead == 'T') ADVANCE(1251);
      END_STATE();
    case 1334:
      if (lookahead == 'P') ADVANCE(958);
      if (lookahead == 'S') ADVANCE(1723);
      END_STATE();
    case 1335:
      if (lookahead == 'P') ADVANCE(1243);
      END_STATE();
    case 1336:
      if (lookahead == 'P') ADVANCE(1260);
      END_STATE();
    case 1337:
      if (lookahead == 'P') ADVANCE(1720);
      END_STATE();
    case 1338:
      if (lookahead == 'P') ADVANCE(1726);
      END_STATE();
    case 1339:
      if (lookahead == 'P') ADVANCE(1450);
      END_STATE();
    case 1340:
      if (lookahead == 'P') ADVANCE(661);
      END_STATE();
    case 1341:
      if (lookahead == 'P') ADVANCE(1267);
      END_STATE();
    case 1342:
      if (lookahead == 'P') ADVANCE(662);
      END_STATE();
    case 1343:
      if (lookahead == 'P') ADVANCE(1457);
      END_STATE();
    case 1344:
      if (lookahead == 'P') ADVANCE(1459);
      END_STATE();
    case 1345:
      if (lookahead == 'P') ADVANCE(73);
      END_STATE();
    case 1346:
      if (lookahead == 'Q') ADVANCE(1750);
      END_STATE();
    case 1347:
      if (lookahead == 'R') ADVANCE(2012);
      END_STATE();
    case 1348:
      if (lookahead == 'R') ADVANCE(1888);
      END_STATE();
    case 1349:
      if (lookahead == 'R') ADVANCE(1859);
      END_STATE();
    case 1350:
      if (lookahead == 'R') ADVANCE(1940);
      END_STATE();
    case 1351:
      if (lookahead == 'R') ADVANCE(1944);
      END_STATE();
    case 1352:
      if (lookahead == 'R') ADVANCE(1985);
      END_STATE();
    case 1353:
      if (lookahead == 'R') ADVANCE(2150);
      END_STATE();
    case 1354:
      if (lookahead == 'R') ADVANCE(1887);
      END_STATE();
    case 1355:
      if (lookahead == 'R') ADVANCE(1988);
      END_STATE();
    case 1356:
      if (lookahead == 'R') ADVANCE(1874);
      END_STATE();
    case 1357:
      if (lookahead == 'R') ADVANCE(1965);
      END_STATE();
    case 1358:
      if (lookahead == 'R') ADVANCE(2014);
      END_STATE();
    case 1359:
      if (lookahead == 'R') ADVANCE(2033);
      END_STATE();
    case 1360:
      if (lookahead == 'R') ADVANCE(2065);
      END_STATE();
    case 1361:
      if (lookahead == 'R') ADVANCE(1868);
      END_STATE();
    case 1362:
      if (lookahead == 'R') ADVANCE(2136);
      END_STATE();
    case 1363:
      if (lookahead == 'R') ADVANCE(2043);
      END_STATE();
    case 1364:
      if (lookahead == 'R') ADVANCE(1875);
      END_STATE();
    case 1365:
      if (lookahead == 'R') ADVANCE(2049);
      END_STATE();
    case 1366:
      if (lookahead == 'R') ADVANCE(1778);
      END_STATE();
    case 1367:
      if (lookahead == 'R') ADVANCE(424);
      END_STATE();
    case 1368:
      if (lookahead == 'R') ADVANCE(767);
      END_STATE();
    case 1369:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 1370:
      if (lookahead == 'R') ADVANCE(1019);
      END_STATE();
    case 1371:
      if (lookahead == 'R') ADVANCE(1817);
      END_STATE();
    case 1372:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 1373:
      if (lookahead == 'R') ADVANCE(1598);
      END_STATE();
    case 1374:
      if (lookahead == 'R') ADVANCE(405);
      END_STATE();
    case 1375:
      if (lookahead == 'R') ADVANCE(39);
      END_STATE();
    case 1376:
      if (lookahead == 'R') ADVANCE(845);
      END_STATE();
    case 1377:
      if (lookahead == 'R') ADVANCE(765);
      END_STATE();
    case 1378:
      if (lookahead == 'R') ADVANCE(717);
      END_STATE();
    case 1379:
      if (lookahead == 'R') ADVANCE(1822);
      END_STATE();
    case 1380:
      if (lookahead == 'R') ADVANCE(752);
      END_STATE();
    case 1381:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 1382:
      if (lookahead == 'R') ADVANCE(1025);
      END_STATE();
    case 1383:
      if (lookahead == 'R') ADVANCE(239);
      END_STATE();
    case 1384:
      if (lookahead == 'R') ADVANCE(517);
      END_STATE();
    case 1385:
      if (lookahead == 'R') ADVANCE(518);
      END_STATE();
    case 1386:
      if (lookahead == 'R') ADVANCE(106);
      END_STATE();
    case 1387:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 1388:
      if (lookahead == 'R') ADVANCE(1603);
      END_STATE();
    case 1389:
      if (lookahead == 'R') ADVANCE(1604);
      END_STATE();
    case 1390:
      if (lookahead == 'R') ADVANCE(1216);
      END_STATE();
    case 1391:
      if (lookahead == 'R') ADVANCE(868);
      END_STATE();
    case 1392:
      if (lookahead == 'R') ADVANCE(1605);
      END_STATE();
    case 1393:
      if (lookahead == 'R') ADVANCE(452);
      END_STATE();
    case 1394:
      if (lookahead == 'R') ADVANCE(521);
      END_STATE();
    case 1395:
      if (lookahead == 'R') ADVANCE(762);
      END_STATE();
    case 1396:
      if (lookahead == 'R') ADVANCE(526);
      END_STATE();
    case 1397:
      if (lookahead == 'R') ADVANCE(147);
      END_STATE();
    case 1398:
      if (lookahead == 'R') ADVANCE(1358);
      END_STATE();
    case 1399:
      if (lookahead == 'R') ADVANCE(1359);
      END_STATE();
    case 1400:
      if (lookahead == 'R') ADVANCE(596);
      END_STATE();
    case 1401:
      if (lookahead == 'R') ADVANCE(1614);
      END_STATE();
    case 1402:
      if (lookahead == 'R') ADVANCE(152);
      END_STATE();
    case 1403:
      if (lookahead == 'R') ADVANCE(154);
      END_STATE();
    case 1404:
      if (lookahead == 'R') ADVANCE(158);
      END_STATE();
    case 1405:
      if (lookahead == 'R') ADVANCE(1363);
      END_STATE();
    case 1406:
      if (lookahead == 'R') ADVANCE(161);
      END_STATE();
    case 1407:
      if (lookahead == 'R') ADVANCE(1490);
      END_STATE();
    case 1408:
      if (lookahead == 'R') ADVANCE(265);
      END_STATE();
    case 1409:
      if (lookahead == 'R') ADVANCE(1620);
      END_STATE();
    case 1410:
      if (lookahead == 'R') ADVANCE(660);
      END_STATE();
    case 1411:
      if (lookahead == 'R') ADVANCE(162);
      END_STATE();
    case 1412:
      if (lookahead == 'R') ADVANCE(533);
      END_STATE();
    case 1413:
      if (lookahead == 'R') ADVANCE(1624);
      END_STATE();
    case 1414:
      if (lookahead == 'R') ADVANCE(563);
      END_STATE();
    case 1415:
      if (lookahead == 'R') ADVANCE(1634);
      if (lookahead == 'S') ADVANCE(857);
      END_STATE();
    case 1416:
      if (lookahead == 'R') ADVANCE(536);
      END_STATE();
    case 1417:
      if (lookahead == 'R') ADVANCE(613);
      END_STATE();
    case 1418:
      if (lookahead == 'R') ADVANCE(481);
      END_STATE();
    case 1419:
      if (lookahead == 'R') ADVANCE(644);
      END_STATE();
    case 1420:
      if (lookahead == 'R') ADVANCE(496);
      END_STATE();
    case 1421:
      if (lookahead == 'R') ADVANCE(667);
      END_STATE();
    case 1422:
      if (lookahead == 'R') ADVANCE(507);
      END_STATE();
    case 1423:
      if (lookahead == 'R') ADVANCE(531);
      END_STATE();
    case 1424:
      if (lookahead == 'R') ADVANCE(1005);
      END_STATE();
    case 1425:
      if (lookahead == 'R') ADVANCE(1537);
      END_STATE();
    case 1426:
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 1427:
      if (lookahead == 'R') ADVANCE(1831);
      END_STATE();
    case 1428:
      if (lookahead == 'R') ADVANCE(137);
      END_STATE();
    case 1429:
      if (lookahead == 'R') ADVANCE(861);
      END_STATE();
    case 1430:
      if (lookahead == 'R') ADVANCE(1766);
      END_STATE();
    case 1431:
      if (lookahead == 'R') ADVANCE(139);
      END_STATE();
    case 1432:
      if (lookahead == 'R') ADVANCE(554);
      END_STATE();
    case 1433:
      if (lookahead == 'R') ADVANCE(1783);
      END_STATE();
    case 1434:
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 1435:
      if (lookahead == 'R') ADVANCE(1046);
      END_STATE();
    case 1436:
      if (lookahead == 'R') ADVANCE(171);
      END_STATE();
    case 1437:
      if (lookahead == 'R') ADVANCE(1719);
      END_STATE();
    case 1438:
      if (lookahead == 'R') ADVANCE(151);
      END_STATE();
    case 1439:
      if (lookahead == 'R') ADVANCE(1417);
      END_STATE();
    case 1440:
      if (lookahead == 'R') ADVANCE(182);
      END_STATE();
    case 1441:
      if (lookahead == 'R') ADVANCE(606);
      END_STATE();
    case 1442:
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 1443:
      if (lookahead == 'R') ADVANCE(809);
      END_STATE();
    case 1444:
      if (lookahead == 'R') ADVANCE(217);
      END_STATE();
    case 1445:
      if (lookahead == 'R') ADVANCE(1030);
      END_STATE();
    case 1446:
      if (lookahead == 'R') ADVANCE(650);
      END_STATE();
    case 1447:
      if (lookahead == 'R') ADVANCE(1446);
      END_STATE();
    case 1448:
      if (lookahead == 'R') ADVANCE(1032);
      END_STATE();
    case 1449:
      if (lookahead == 'R') ADVANCE(254);
      END_STATE();
    case 1450:
      if (lookahead == 'R') ADVANCE(1256);
      END_STATE();
    case 1451:
      if (lookahead == 'R') ADVANCE(863);
      END_STATE();
    case 1452:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 1453:
      if (lookahead == 'R') ADVANCE(1259);
      END_STATE();
    case 1454:
      if (lookahead == 'R') ADVANCE(865);
      END_STATE();
    case 1455:
      if (lookahead == 'R') ADVANCE(1724);
      END_STATE();
    case 1456:
      if (lookahead == 'R') ADVANCE(1730);
      END_STATE();
    case 1457:
      if (lookahead == 'R') ADVANCE(1261);
      END_STATE();
    case 1458:
      if (lookahead == 'R') ADVANCE(1262);
      END_STATE();
    case 1459:
      if (lookahead == 'R') ADVANCE(1263);
      END_STATE();
    case 1460:
      if (lookahead == 'R') ADVANCE(668);
      END_STATE();
    case 1461:
      if (lookahead == 'R') ADVANCE(284);
      END_STATE();
    case 1462:
      if (lookahead == 'R') ADVANCE(869);
      END_STATE();
    case 1463:
      if (lookahead == 'R') ADVANCE(671);
      END_STATE();
    case 1464:
      if (lookahead == 'R') ADVANCE(674);
      END_STATE();
    case 1465:
      if (lookahead == 'R') ADVANCE(870);
      END_STATE();
    case 1466:
      if (lookahead == 'R') ADVANCE(872);
      END_STATE();
    case 1467:
      if (lookahead == 'R') ADVANCE(677);
      END_STATE();
    case 1468:
      if (lookahead == 'S') ADVANCE(347);
      END_STATE();
    case 1469:
      if (lookahead == 'S') ADVANCE(2019);
      END_STATE();
    case 1470:
      if (lookahead == 'S') ADVANCE(2154);
      END_STATE();
    case 1471:
      if (lookahead == 'S') ADVANCE(1995);
      END_STATE();
    case 1472:
      if (lookahead == 'S') ADVANCE(1966);
      END_STATE();
    case 1473:
      if (lookahead == 'S') ADVANCE(2004);
      END_STATE();
    case 1474:
      if (lookahead == 'S') ADVANCE(1884);
      END_STATE();
    case 1475:
      if (lookahead == 'S') ADVANCE(1909);
      END_STATE();
    case 1476:
      if (lookahead == 'S') ADVANCE(1949);
      END_STATE();
    case 1477:
      if (lookahead == 'S') ADVANCE(1957);
      END_STATE();
    case 1478:
      if (lookahead == 'S') ADVANCE(2016);
      END_STATE();
    case 1479:
      if (lookahead == 'S') ADVANCE(2031);
      END_STATE();
    case 1480:
      if (lookahead == 'S') ADVANCE(2054);
      END_STATE();
    case 1481:
      if (lookahead == 'S') ADVANCE(1852);
      END_STATE();
    case 1482:
      if (lookahead == 'S') ADVANCE(1900);
      END_STATE();
    case 1483:
      if (lookahead == 'S') ADVANCE(1960);
      END_STATE();
    case 1484:
      if (lookahead == 'S') ADVANCE(2035);
      END_STATE();
    case 1485:
      if (lookahead == 'S') ADVANCE(2009);
      END_STATE();
    case 1486:
      if (lookahead == 'S') ADVANCE(2010);
      END_STATE();
    case 1487:
      if (lookahead == 'S') ADVANCE(2015);
      END_STATE();
    case 1488:
      if (lookahead == 'S') ADVANCE(2018);
      END_STATE();
    case 1489:
      if (lookahead == 'S') ADVANCE(2104);
      END_STATE();
    case 1490:
      if (lookahead == 'S') ADVANCE(1881);
      END_STATE();
    case 1491:
      if (lookahead == 'S') ADVANCE(1922);
      END_STATE();
    case 1492:
      if (lookahead == 'S') ADVANCE(1950);
      END_STATE();
    case 1493:
      if (lookahead == 'S') ADVANCE(1991);
      END_STATE();
    case 1494:
      if (lookahead == 'S') ADVANCE(2034);
      END_STATE();
    case 1495:
      if (lookahead == 'S') ADVANCE(2061);
      END_STATE();
    case 1496:
      if (lookahead == 'S') ADVANCE(2062);
      END_STATE();
    case 1497:
      if (lookahead == 'S') ADVANCE(2149);
      END_STATE();
    case 1498:
      if (lookahead == 'S') ADVANCE(1895);
      END_STATE();
    case 1499:
      if (lookahead == 'S') ADVANCE(1923);
      END_STATE();
    case 1500:
      if (lookahead == 'S') ADVANCE(2098);
      END_STATE();
    case 1501:
      if (lookahead == 'S') ADVANCE(2119);
      END_STATE();
    case 1502:
      if (lookahead == 'S') ADVANCE(2141);
      END_STATE();
    case 1503:
      if (lookahead == 'S') ADVANCE(2057);
      END_STATE();
    case 1504:
      if (lookahead == 'S') ADVANCE(2156);
      END_STATE();
    case 1505:
      if (lookahead == 'S') ADVANCE(1902);
      END_STATE();
    case 1506:
      if (lookahead == 'S') ADVANCE(1930);
      END_STATE();
    case 1507:
      if (lookahead == 'S') ADVANCE(1996);
      END_STATE();
    case 1508:
      if (lookahead == 'S') ADVANCE(2105);
      END_STATE();
    case 1509:
      if (lookahead == 'S') ADVANCE(2145);
      END_STATE();
    case 1510:
      if (lookahead == 'S') ADVANCE(1853);
      END_STATE();
    case 1511:
      if (lookahead == 'S') ADVANCE(1891);
      END_STATE();
    case 1512:
      if (lookahead == 'S') ADVANCE(1921);
      END_STATE();
    case 1513:
      if (lookahead == 'S') ADVANCE(1886);
      END_STATE();
    case 1514:
      if (lookahead == 'S') ADVANCE(1894);
      END_STATE();
    case 1515:
      if (lookahead == 'S') ADVANCE(2106);
      END_STATE();
    case 1516:
      if (lookahead == 'S') ADVANCE(1849);
      END_STATE();
    case 1517:
      if (lookahead == 'S') ADVANCE(2086);
      END_STATE();
    case 1518:
      if (lookahead == 'S') ADVANCE(2067);
      END_STATE();
    case 1519:
      if (lookahead == 'S') ADVANCE(2075);
      END_STATE();
    case 1520:
      if (lookahead == 'S') ADVANCE(2078);
      END_STATE();
    case 1521:
      if (lookahead == 'S') ADVANCE(348);
      if (lookahead == 'T') ADVANCE(532);
      END_STATE();
    case 1522:
      if (lookahead == 'S') ADVANCE(9);
      END_STATE();
    case 1523:
      if (lookahead == 'S') ADVANCE(688);
      END_STATE();
    case 1524:
      if (lookahead == 'S') ADVANCE(738);
      END_STATE();
    case 1525:
      if (lookahead == 'S') ADVANCE(1562);
      if (lookahead == 'X') ADVANCE(515);
      END_STATE();
    case 1526:
      if (lookahead == 'S') ADVANCE(1701);
      END_STATE();
    case 1527:
      if (lookahead == 'S') ADVANCE(12);
      END_STATE();
    case 1528:
      if (lookahead == 'S') ADVANCE(786);
      END_STATE();
    case 1529:
      if (lookahead == 'S') ADVANCE(1190);
      END_STATE();
    case 1530:
      if (lookahead == 'S') ADVANCE(1727);
      END_STATE();
    case 1531:
      if (lookahead == 'S') ADVANCE(1695);
      END_STATE();
    case 1532:
      if (lookahead == 'S') ADVANCE(33);
      END_STATE();
    case 1533:
      if (lookahead == 'S') ADVANCE(453);
      END_STATE();
    case 1534:
      if (lookahead == 'S') ADVANCE(1609);
      END_STATE();
    case 1535:
      if (lookahead == 'S') ADVANCE(150);
      END_STATE();
    case 1536:
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 1537:
      if (lookahead == 'S') ADVANCE(1220);
      END_STATE();
    case 1538:
      if (lookahead == 'S') ADVANCE(1189);
      END_STATE();
    case 1539:
      if (lookahead == 'S') ADVANCE(1621);
      END_STATE();
    case 1540:
      if (lookahead == 'S') ADVANCE(1623);
      END_STATE();
    case 1541:
      if (lookahead == 'S') ADVANCE(466);
      END_STATE();
    case 1542:
      if (lookahead == 'S') ADVANCE(1628);
      END_STATE();
    case 1543:
      if (lookahead == 'S') ADVANCE(1707);
      END_STATE();
    case 1544:
      if (lookahead == 'S') ADVANCE(482);
      END_STATE();
    case 1545:
      if (lookahead == 'S') ADVANCE(488);
      END_STATE();
    case 1546:
      if (lookahead == 'S') ADVANCE(490);
      END_STATE();
    case 1547:
      if (lookahead == 'S') ADVANCE(607);
      END_STATE();
    case 1548:
      if (lookahead == 'S') ADVANCE(790);
      END_STATE();
    case 1549:
      if (lookahead == 'S') ADVANCE(1548);
      END_STATE();
    case 1550:
      if (lookahead == 'S') ADVANCE(1309);
      END_STATE();
    case 1551:
      if (lookahead == 'S') ADVANCE(1310);
      END_STATE();
    case 1552:
      if (lookahead == 'S') ADVANCE(600);
      END_STATE();
    case 1553:
      if (lookahead == 'S') ADVANCE(1532);
      END_STATE();
    case 1554:
      if (lookahead == 'S') ADVANCE(1531);
      END_STATE();
    case 1555:
      if (lookahead == 'S') ADVANCE(1538);
      END_STATE();
    case 1556:
      if (lookahead == 'S') ADVANCE(1655);
      END_STATE();
    case 1557:
      if (lookahead == 'S') ADVANCE(1645);
      END_STATE();
    case 1558:
      if (lookahead == 'S') ADVANCE(635);
      END_STATE();
    case 1559:
      if (lookahead == 'S') ADVANCE(1716);
      END_STATE();
    case 1560:
      if (lookahead == 'S') ADVANCE(1664);
      END_STATE();
    case 1561:
      if (lookahead == 'S') ADVANCE(1307);
      END_STATE();
    case 1562:
      if (lookahead == 'S') ADVANCE(780);
      END_STATE();
    case 1563:
      if (lookahead == 'S') ADVANCE(1649);
      END_STATE();
    case 1564:
      if (lookahead == 'S') ADVANCE(566);
      END_STATE();
    case 1565:
      if (lookahead == 'S') ADVANCE(1317);
      END_STATE();
    case 1566:
      if (lookahead == 'S') ADVANCE(798);
      END_STATE();
    case 1567:
      if (lookahead == 'S') ADVANCE(938);
      END_STATE();
    case 1568:
      if (lookahead == 'S') ADVANCE(799);
      END_STATE();
    case 1569:
      if (lookahead == 'S') ADVANCE(574);
      END_STATE();
    case 1570:
      if (lookahead == 'S') ADVANCE(1660);
      END_STATE();
    case 1571:
      if (lookahead == 'S') ADVANCE(582);
      END_STATE();
    case 1572:
      if (lookahead == 'S') ADVANCE(354);
      END_STATE();
    case 1573:
      if (lookahead == 'S') ADVANCE(1703);
      END_STATE();
    case 1574:
      if (lookahead == 'S') ADVANCE(1577);
      END_STATE();
    case 1575:
      if (lookahead == 'S') ADVANCE(696);
      END_STATE();
    case 1576:
      if (lookahead == 'S') ADVANCE(1704);
      END_STATE();
    case 1577:
      if (lookahead == 'S') ADVANCE(817);
      END_STATE();
    case 1578:
      if (lookahead == 'S') ADVANCE(828);
      END_STATE();
    case 1579:
      if (lookahead == 'S') ADVANCE(834);
      END_STATE();
    case 1580:
      if (lookahead == 'S') ADVANCE(840);
      END_STATE();
    case 1581:
      if (lookahead == 'S') ADVANCE(979);
      END_STATE();
    case 1582:
      if (lookahead == 'S') ADVANCE(269);
      END_STATE();
    case 1583:
      if (lookahead == 'S') ADVANCE(1336);
      END_STATE();
    case 1584:
      if (lookahead == 'S') ADVANCE(1578);
      END_STATE();
    case 1585:
      if (lookahead == 'S') ADVANCE(980);
      END_STATE();
    case 1586:
      if (lookahead == 'S') ADVANCE(277);
      END_STATE();
    case 1587:
      if (lookahead == 'S') ADVANCE(1579);
      END_STATE();
    case 1588:
      if (lookahead == 'S') ADVANCE(281);
      END_STATE();
    case 1589:
      if (lookahead == 'S') ADVANCE(1580);
      END_STATE();
    case 1590:
      if (lookahead == 'S') ADVANCE(283);
      END_STATE();
    case 1591:
      if (lookahead == 'S') ADVANCE(378);
      END_STATE();
    case 1592:
      if (lookahead == 'S') ADVANCE(72);
      END_STATE();
    case 1593:
      if (lookahead == 'T') ADVANCE(2192);
      END_STATE();
    case 1594:
      if (lookahead == 'T') ADVANCE(1967);
      END_STATE();
    case 1595:
      if (lookahead == 'T') ADVANCE(1974);
      END_STATE();
    case 1596:
      if (lookahead == 'T') ADVANCE(1986);
      END_STATE();
    case 1597:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 1598:
      if (lookahead == 'T') ADVANCE(2103);
      END_STATE();
    case 1599:
      if (lookahead == 'T') ADVANCE(2132);
      END_STATE();
    case 1600:
      if (lookahead == 'T') ADVANCE(1897);
      END_STATE();
    case 1601:
      if (lookahead == 'T') ADVANCE(2038);
      END_STATE();
    case 1602:
      if (lookahead == 'T') ADVANCE(2050);
      END_STATE();
    case 1603:
      if (lookahead == 'T') ADVANCE(1937);
      END_STATE();
    case 1604:
      if (lookahead == 'T') ADVANCE(1975);
      END_STATE();
    case 1605:
      if (lookahead == 'T') ADVANCE(1978);
      END_STATE();
    case 1606:
      if (lookahead == 'T') ADVANCE(2059);
      END_STATE();
    case 1607:
      if (lookahead == 'T') ADVANCE(2093);
      END_STATE();
    case 1608:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 1609:
      if (lookahead == 'T') ADVANCE(2118);
      END_STATE();
    case 1610:
      if (lookahead == 'T') ADVANCE(2135);
      END_STATE();
    case 1611:
      if (lookahead == 'T') ADVANCE(2152);
      END_STATE();
    case 1612:
      if (lookahead == 'T') ADVANCE(1890);
      END_STATE();
    case 1613:
      if (lookahead == 'T') ADVANCE(2051);
      END_STATE();
    case 1614:
      if (lookahead == 'T') ADVANCE(2109);
      END_STATE();
    case 1615:
      if (lookahead == 'T') ADVANCE(1880);
      END_STATE();
    case 1616:
      if (lookahead == 'T') ADVANCE(1893);
      END_STATE();
    case 1617:
      if (lookahead == 'T') ADVANCE(1907);
      END_STATE();
    case 1618:
      if (lookahead == 'T') ADVANCE(1910);
      END_STATE();
    case 1619:
      if (lookahead == 'T') ADVANCE(1929);
      END_STATE();
    case 1620:
      if (lookahead == 'T') ADVANCE(1994);
      END_STATE();
    case 1621:
      if (lookahead == 'T') ADVANCE(1911);
      END_STATE();
    case 1622:
      if (lookahead == 'T') ADVANCE(1928);
      END_STATE();
    case 1623:
      if (lookahead == 'T') ADVANCE(2001);
      END_STATE();
    case 1624:
      if (lookahead == 'T') ADVANCE(2128);
      END_STATE();
    case 1625:
      if (lookahead == 'T') ADVANCE(2056);
      END_STATE();
    case 1626:
      if (lookahead == 'T') ADVANCE(1851);
      END_STATE();
    case 1627:
      if (lookahead == 'T') ADVANCE(1925);
      END_STATE();
    case 1628:
      if (lookahead == 'T') ADVANCE(1982);
      END_STATE();
    case 1629:
      if (lookahead == 'T') ADVANCE(2060);
      END_STATE();
    case 1630:
      if (lookahead == 'T') ADVANCE(1867);
      END_STATE();
    case 1631:
      if (lookahead == 'T') ADVANCE(2143);
      END_STATE();
    case 1632:
      if (lookahead == 'T') ADVANCE(2039);
      END_STATE();
    case 1633:
      if (lookahead == 'T') ADVANCE(2045);
      END_STATE();
    case 1634:
      if (lookahead == 'T') ADVANCE(2077);
      END_STATE();
    case 1635:
      if (lookahead == 'T') ADVANCE(2079);
      END_STATE();
    case 1636:
      if (lookahead == 'T') ADVANCE(101);
      END_STATE();
    case 1637:
      if (lookahead == 'T') ADVANCE(811);
      END_STATE();
    case 1638:
      if (lookahead == 'T') ADVANCE(1239);
      END_STATE();
    case 1639:
      if (lookahead == 'T') ADVANCE(814);
      END_STATE();
    case 1640:
      if (lookahead == 'T') ADVANCE(1311);
      END_STATE();
    case 1641:
      if (lookahead == 'T') ADVANCE(742);
      END_STATE();
    case 1642:
      if (lookahead == 'T') ADVANCE(743);
      END_STATE();
    case 1643:
      if (lookahead == 'T') ADVANCE(1823);
      END_STATE();
    case 1644:
      if (lookahead == 'T') ADVANCE(1383);
      END_STATE();
    case 1645:
      if (lookahead == 'T') ADVANCE(772);
      END_STATE();
    case 1646:
      if (lookahead == 'T') ADVANCE(621);
      END_STATE();
    case 1647:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 1648:
      if (lookahead == 'T') ADVANCE(1473);
      END_STATE();
    case 1649:
      if (lookahead == 'T') ADVANCE(776);
      END_STATE();
    case 1650:
      if (lookahead == 'T') ADVANCE(1265);
      END_STATE();
    case 1651:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 1652:
      if (lookahead == 'T') ADVANCE(107);
      END_STATE();
    case 1653:
      if (lookahead == 'T') ADVANCE(1476);
      END_STATE();
    case 1654:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 1655:
      if (lookahead == 'T') ADVANCE(1478);
      END_STATE();
    case 1656:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 1657:
      if (lookahead == 'T') ADVANCE(833);
      END_STATE();
    case 1658:
      if (lookahead == 'T') ADVANCE(208);
      END_STATE();
    case 1659:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 1660:
      if (lookahead == 'T') ADVANCE(782);
      END_STATE();
    case 1661:
      if (lookahead == 'T') ADVANCE(180);
      END_STATE();
    case 1662:
      if (lookahead == 'T') ADVANCE(455);
      END_STATE();
    case 1663:
      if (lookahead == 'T') ADVANCE(113);
      END_STATE();
    case 1664:
      if (lookahead == 'T') ADVANCE(1487);
      END_STATE();
    case 1665:
      if (lookahead == 'T') ADVANCE(457);
      END_STATE();
    case 1666:
      if (lookahead == 'T') ADVANCE(649);
      END_STATE();
    case 1667:
      if (lookahead == 'T') ADVANCE(114);
      END_STATE();
    case 1668:
      if (lookahead == 'T') ADVANCE(460);
      END_STATE();
    case 1669:
      if (lookahead == 'T') ADVANCE(461);
      END_STATE();
    case 1670:
      if (lookahead == 'T') ADVANCE(463);
      END_STATE();
    case 1671:
      if (lookahead == 'T') ADVANCE(118);
      END_STATE();
    case 1672:
      if (lookahead == 'T') ADVANCE(1503);
      END_STATE();
    case 1673:
      if (lookahead == 'T') ADVANCE(1504);
      END_STATE();
    case 1674:
      if (lookahead == 'T') ADVANCE(1506);
      END_STATE();
    case 1675:
      if (lookahead == 'T') ADVANCE(1700);
      END_STATE();
    case 1676:
      if (lookahead == 'T') ADVANCE(657);
      END_STATE();
    case 1677:
      if (lookahead == 'T') ADVANCE(1511);
      END_STATE();
    case 1678:
      if (lookahead == 'T') ADVANCE(471);
      END_STATE();
    case 1679:
      if (lookahead == 'T') ADVANCE(477);
      END_STATE();
    case 1680:
      if (lookahead == 'T') ADVANCE(540);
      END_STATE();
    case 1681:
      if (lookahead == 'T') ADVANCE(543);
      END_STATE();
    case 1682:
      if (lookahead == 'T') ADVANCE(489);
      END_STATE();
    case 1683:
      if (lookahead == 'T') ADVANCE(494);
      END_STATE();
    case 1684:
      if (lookahead == 'T') ADVANCE(497);
      END_STATE();
    case 1685:
      if (lookahead == 'T') ADVANCE(575);
      END_STATE();
    case 1686:
      if (lookahead == 'T') ADVANCE(498);
      END_STATE();
    case 1687:
      if (lookahead == 'T') ADVANCE(546);
      END_STATE();
    case 1688:
      if (lookahead == 'T') ADVANCE(499);
      END_STATE();
    case 1689:
      if (lookahead == 'T') ADVANCE(547);
      END_STATE();
    case 1690:
      if (lookahead == 'T') ADVANCE(509);
      END_STATE();
    case 1691:
      if (lookahead == 'T') ADVANCE(746);
      END_STATE();
    case 1692:
      if (lookahead == 'T') ADVANCE(821);
      END_STATE();
    case 1693:
      if (lookahead == 'T') ADVANCE(1530);
      END_STATE();
    case 1694:
      if (lookahead == 'T') ADVANCE(1386);
      END_STATE();
    case 1695:
      if (lookahead == 'T') ADVANCE(131);
      END_STATE();
    case 1696:
      if (lookahead == 'T') ADVANCE(848);
      END_STATE();
    case 1697:
      if (lookahead == 'T') ADVANCE(787);
      END_STATE();
    case 1698:
      if (lookahead == 'T') ADVANCE(1188);
      END_STATE();
    case 1699:
      if (lookahead == 'T') ADVANCE(168);
      END_STATE();
    case 1700:
      if (lookahead == 'T') ADVANCE(1395);
      END_STATE();
    case 1701:
      if (lookahead == 'T') ADVANCE(551);
      END_STATE();
    case 1702:
      if (lookahead == 'T') ADVANCE(1194);
      END_STATE();
    case 1703:
      if (lookahead == 'T') ADVANCE(569);
      END_STATE();
    case 1704:
      if (lookahead == 'T') ADVANCE(576);
      END_STATE();
    case 1705:
      if (lookahead == 'T') ADVANCE(614);
      END_STATE();
    case 1706:
      if (lookahead == 'T') ADVANCE(934);
      END_STATE();
    case 1707:
      if (lookahead == 'T') ADVANCE(198);
      END_STATE();
    case 1708:
      if (lookahead == 'T') ADVANCE(1207);
      END_STATE();
    case 1709:
      if (lookahead == 'T') ADVANCE(810);
      END_STATE();
    case 1710:
      if (lookahead == 'T') ADVANCE(592);
      END_STATE();
    case 1711:
      if (lookahead == 'T') ADVANCE(824);
      END_STATE();
    case 1712:
      if (lookahead == 'T') ADVANCE(1832);
      END_STATE();
    case 1713:
      if (lookahead == 'T') ADVANCE(1760);
      END_STATE();
    case 1714:
      if (lookahead == 'T') ADVANCE(812);
      END_STATE();
    case 1715:
      if (lookahead == 'T') ADVANCE(844);
      END_STATE();
    case 1716:
      if (lookahead == 'T') ADVANCE(618);
      END_STATE();
    case 1717:
      if (lookahead == 'T') ADVANCE(827);
      END_STATE();
    case 1718:
      if (lookahead == 'T') ADVANCE(648);
      END_STATE();
    case 1719:
      if (lookahead == 'T') ADVANCE(847);
      END_STATE();
    case 1720:
      if (lookahead == 'T') ADVANCE(850);
      END_STATE();
    case 1721:
      if (lookahead == 'T') ADVANCE(1833);
      END_STATE();
    case 1722:
      if (lookahead == 'T') ADVANCE(1320);
      END_STATE();
    case 1723:
      if (lookahead == 'T') ADVANCE(1240);
      END_STATE();
    case 1724:
      if (lookahead == 'T') ADVANCE(843);
      END_STATE();
    case 1725:
      if (lookahead == 'T') ADVANCE(854);
      END_STATE();
    case 1726:
      if (lookahead == 'T') ADVANCE(856);
      END_STATE();
    case 1727:
      if (lookahead == 'T') ADVANCE(1438);
      END_STATE();
    case 1728:
      if (lookahead == 'T') ADVANCE(822);
      END_STATE();
    case 1729:
      if (lookahead == 'T') ADVANCE(837);
      END_STATE();
    case 1730:
      if (lookahead == 'T') ADVANCE(858);
      END_STATE();
    case 1731:
      if (lookahead == 'T') ADVANCE(859);
      END_STATE();
    case 1732:
      if (lookahead == 'T') ADVANCE(255);
      END_STATE();
    case 1733:
      if (lookahead == 'T') ADVANCE(838);
      END_STATE();
    case 1734:
      if (lookahead == 'T') ADVANCE(831);
      END_STATE();
    case 1735:
      if (lookahead == 'T') ADVANCE(860);
      END_STATE();
    case 1736:
      if (lookahead == 'T') ADVANCE(836);
      END_STATE();
    case 1737:
      if (lookahead == 'T') ADVANCE(839);
      END_STATE();
    case 1738:
      if (lookahead == 'T') ADVANCE(852);
      END_STATE();
    case 1739:
      if (lookahead == 'T') ADVANCE(1451);
      END_STATE();
    case 1740:
      if (lookahead == 'T') ADVANCE(1454);
      END_STATE();
    case 1741:
      if (lookahead == 'T') ADVANCE(278);
      END_STATE();
    case 1742:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 1743:
      if (lookahead == 'T') ADVANCE(1740);
      END_STATE();
    case 1744:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 1745:
      if (lookahead == 'U') ADVANCE(212);
      END_STATE();
    case 1746:
      if (lookahead == 'U') ADVANCE(1744);
      END_STATE();
    case 1747:
      if (lookahead == 'U') ADVANCE(978);
      END_STATE();
    case 1748:
      if (lookahead == 'U') ADVANCE(1053);
      END_STATE();
    case 1749:
      if (lookahead == 'U') ADVANCE(965);
      END_STATE();
    case 1750:
      if (lookahead == 'U') ADVANCE(549);
      END_STATE();
    case 1751:
      if (lookahead == 'U') ADVANCE(1144);
      END_STATE();
    case 1752:
      if (lookahead == 'U') ADVANCE(1741);
      END_STATE();
    case 1753:
      if (lookahead == 'U') ADVANCE(1629);
      END_STATE();
    case 1754:
      if (lookahead == 'U') ADVANCE(1031);
      END_STATE();
    case 1755:
      if (lookahead == 'U') ADVANCE(1651);
      END_STATE();
    case 1756:
      if (lookahead == 'U') ADVANCE(301);
      END_STATE();
    case 1757:
      if (lookahead == 'U') ADVANCE(411);
      END_STATE();
    case 1758:
      if (lookahead == 'U') ADVANCE(1670);
      END_STATE();
    case 1759:
      if (lookahead == 'U') ADVANCE(1414);
      END_STATE();
    case 1760:
      if (lookahead == 'U') ADVANCE(1418);
      END_STATE();
    case 1761:
      if (lookahead == 'U') ADVANCE(585);
      END_STATE();
    case 1762:
      if (lookahead == 'U') ADVANCE(1686);
      END_STATE();
    case 1763:
      if (lookahead == 'U') ADVANCE(587);
      END_STATE();
    case 1764:
      if (lookahead == 'U') ADVANCE(1688);
      END_STATE();
    case 1765:
      if (lookahead == 'U') ADVANCE(1710);
      END_STATE();
    case 1766:
      if (lookahead == 'U') ADVANCE(971);
      END_STATE();
    case 1767:
      if (lookahead == 'U') ADVANCE(1722);
      END_STATE();
    case 1768:
      if (lookahead == 'U') ADVANCE(1573);
      END_STATE();
    case 1769:
      if (lookahead == 'U') ADVANCE(1033);
      END_STATE();
    case 1770:
      if (lookahead == 'U') ADVANCE(1576);
      END_STATE();
    case 1771:
      if (lookahead == 'U') ADVANCE(1036);
      END_STATE();
    case 1772:
      if (lookahead == 'U') ADVANCE(676);
      END_STATE();
    case 1773:
      if (lookahead == 'V') ADVANCE(2084);
      END_STATE();
    case 1774:
      if (lookahead == 'V') ADVANCE(102);
      END_STATE();
    case 1775:
      if (lookahead == 'V') ADVANCE(181);
      END_STATE();
    case 1776:
      if (lookahead == 'V') ADVANCE(105);
      END_STATE();
    case 1777:
      if (lookahead == 'V') ADVANCE(108);
      END_STATE();
    case 1778:
      if (lookahead == 'V') ADVANCE(522);
      END_STATE();
    case 1779:
      if (lookahead == 'V') ADVANCE(516);
      END_STATE();
    case 1780:
      if (lookahead == 'V') ADVANCE(112);
      END_STATE();
    case 1781:
      if (lookahead == 'V') ADVANCE(456);
      END_STATE();
    case 1782:
      if (lookahead == 'V') ADVANCE(116);
      END_STATE();
    case 1783:
      if (lookahead == 'V') ADVANCE(469);
      END_STATE();
    case 1784:
      if (lookahead == 'V') ADVANCE(484);
      END_STATE();
    case 1785:
      if (lookahead == 'V') ADVANCE(565);
      END_STATE();
    case 1786:
      if (lookahead == 'V') ADVANCE(173);
      END_STATE();
    case 1787:
      if (lookahead == 'V') ADVANCE(163);
      END_STATE();
    case 1788:
      if (lookahead == 'V') ADVANCE(183);
      END_STATE();
    case 1789:
      if (lookahead == 'V') ADVANCE(577);
      END_STATE();
    case 1790:
      if (lookahead == 'V') ADVANCE(584);
      END_STATE();
    case 1791:
      if (lookahead == 'V') ADVANCE(586);
      END_STATE();
    case 1792:
      if (lookahead == 'V') ADVANCE(813);
      END_STATE();
    case 1793:
      if (lookahead == 'V') ADVANCE(626);
      END_STATE();
    case 1794:
      if (lookahead == 'V') ADVANCE(257);
      END_STATE();
    case 1795:
      if (lookahead == 'V') ADVANCE(263);
      END_STATE();
    case 1796:
      if (lookahead == 'V') ADVANCE(250);
      END_STATE();
    case 1797:
      if (lookahead == 'V') ADVANCE(286);
      END_STATE();
    case 1798:
      if (lookahead == 'V') ADVANCE(287);
      END_STATE();
    case 1799:
      if (lookahead == 'W') ADVANCE(2099);
      END_STATE();
    case 1800:
      if (lookahead == 'W') ADVANCE(2133);
      END_STATE();
    case 1801:
      if (lookahead == 'W') ADVANCE(2028);
      END_STATE();
    case 1802:
      if (lookahead == 'W') ADVANCE(65);
      END_STATE();
    case 1803:
      if (lookahead == 'W') ADVANCE(122);
      END_STATE();
    case 1804:
      if (lookahead == 'W') ADVANCE(201);
      END_STATE();
    case 1805:
      if (lookahead == 'X') ADVANCE(1992);
      END_STATE();
    case 1806:
      if (lookahead == 'X') ADVANCE(537);
      END_STATE();
    case 1807:
      if (lookahead == 'X') ADVANCE(539);
      END_STATE();
    case 1808:
      if (lookahead == 'X') ADVANCE(1295);
      END_STATE();
    case 1809:
      if (lookahead == 'X') ADVANCE(1298);
      END_STATE();
    case 1810:
      if (lookahead == 'X') ADVANCE(1412);
      END_STATE();
    case 1811:
      if (lookahead == 'Y') ADVANCE(2023);
      END_STATE();
    case 1812:
      if (lookahead == 'Y') ADVANCE(2151);
      END_STATE();
    case 1813:
      if (lookahead == 'Y') ADVANCE(1926);
      END_STATE();
    case 1814:
      if (lookahead == 'Y') ADVANCE(2131);
      END_STATE();
    case 1815:
      if (lookahead == 'Y') ADVANCE(2122);
      END_STATE();
    case 1816:
      if (lookahead == 'Y') ADVANCE(2120);
      END_STATE();
    case 1817:
      if (lookahead == 'Y') ADVANCE(2123);
      END_STATE();
    case 1818:
      if (lookahead == 'Y') ADVANCE(1915);
      END_STATE();
    case 1819:
      if (lookahead == 'Y') ADVANCE(1924);
      END_STATE();
    case 1820:
      if (lookahead == 'Y') ADVANCE(2026);
      END_STATE();
    case 1821:
      if (lookahead == 'Y') ADVANCE(1917);
      END_STATE();
    case 1822:
      if (lookahead == 'Y') ADVANCE(1861);
      END_STATE();
    case 1823:
      if (lookahead == 'Y') ADVANCE(2073);
      END_STATE();
    case 1824:
      if (lookahead == 'Y') ADVANCE(2080);
      END_STATE();
    case 1825:
      if (lookahead == 'Y') ADVANCE(599);
      END_STATE();
    case 1826:
      if (lookahead == 'Y') ADVANCE(47);
      END_STATE();
    case 1827:
      if (lookahead == 'Y') ADVANCE(594);
      END_STATE();
    case 1828:
      if (lookahead == 'Y') ADVANCE(1303);
      END_STATE();
    case 1829:
      if (lookahead == 'Y') ADVANCE(67);
      END_STATE();
    case 1830:
      if (lookahead == 'Y') ADVANCE(1566);
      END_STATE();
    case 1831:
      if (lookahead == 'Y') ADVANCE(23);
      END_STATE();
    case 1832:
      if (lookahead == 'Y') ADVANCE(1304);
      END_STATE();
    case 1833:
      if (lookahead == 'Y') ADVANCE(1308);
      END_STATE();
    case 1834:
      if (lookahead == 'Y') ADVANCE(567);
      END_STATE();
    case 1835:
      if (lookahead == 'Y') ADVANCE(1568);
      END_STATE();
    case 1836:
      if (lookahead == 'Z') ADVANCE(473);
      END_STATE();
    case 1837:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1839);
      END_STATE();
    case 1838:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 1839:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1838);
      END_STATE();
    case 1840:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1837);
      END_STATE();
    case 1841:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1840);
      END_STATE();
    case 1842:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2175);
      END_STATE();
    case 1843:
      if (eof) ADVANCE(1845);
      ADVANCE_MAP(
        '*', 4,
        '.', 1,
        '/', 85,
        'C', 1195,
        'E', 1135,
        'P', 1841,
        'p', 1841,
        'R', 2197,
        'r', 2197,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1843);
      END_STATE();
    case 1844:
      if (eof) ADVANCE(1845);
      ADVANCE_MAP(
        '*', 4,
        '/', 84,
        '2', 1567,
        'A', 314,
        'B', 91,
        'C', 92,
        'D', 119,
        'E', 316,
        'F', 93,
        'G', 444,
        'H', 753,
        'I', 289,
        'K', 593,
        'L', 751,
        'M', 120,
        'N', 24,
        'O', 950,
        'P', 94,
        'Q', 1745,
        'R', 124,
        'S', 96,
        'T', 86,
        'U', 1071,
        'V', 97,
        'W', 514,
        'X', 730,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1844);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(sym_end_of_command);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(anon_sym_2SLS);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(anon_sym_ACF);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(anon_sym_ADDDOCUMENT);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(anon_sym_ADDFILES);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(anon_sym_ADDVALUELABELS);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(anon_sym_ADP);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(anon_sym_AGGREGATE);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_AIM);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(anon_sym_ALSCAL);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(anon_sym_ALTERTYPE);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(anon_sym_ANACOR);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(anon_sym_ANOVA);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(anon_sym_APPLYDICTIONARY);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_AREG);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_ARIMA);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(anon_sym_AUTORECODE);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(anon_sym_BAYESANOVA);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_BAYESCORRELATION);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_BAYESINDEPENDENT);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_BAYESLOGLINEAR);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(anon_sym_BAYESONESAMPLE);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(anon_sym_BAYESREGRESSION);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(anon_sym_BAYESRELATED);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(anon_sym_BAYESREPEATED);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(anon_sym_BEGINDATA);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(anon_sym_BEGINEXPR);
      if (lookahead == '-') ADVANCE(651);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(anon_sym_BEGINEXPR_DASHENDEXPR);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(anon_sym_BEGINGPL_DASHENDGPL);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(anon_sym_BOOTSTRAP);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(anon_sym_BREAK);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(anon_sym_CACHE);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(anon_sym_CASEPLOT);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(anon_sym_CASESTOVARS);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_CATREG);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_CD);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(anon_sym_CLABELS);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(anon_sym_CLEARTIMEPROGRAM);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(anon_sym_CLEARTRANSFORMATIONS);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_CLUSTER);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(anon_sym_CNLR);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(anon_sym_CODEBOOK);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(anon_sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2192);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(anon_sym_COMPAREDATASETS);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(anon_sym_COMPUTE);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(anon_sym_CONJOINT);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(anon_sym_CONSTRAINEDFUNCTIONS);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(anon_sym_CORRELATIONS);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(anon_sym_CORRESPONDENCE);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(anon_sym_COUNT);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(anon_sym_COXREG);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(anon_sym_CROSSTABS);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(anon_sym_CSCOXREG);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(anon_sym_CSDESCRIPTIVES);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(anon_sym_CSGLM);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(anon_sym_CSLOGISTIC);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(anon_sym_CSORDINAL);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(anon_sym_CSPLAN);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(anon_sym_CSSELECT);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(anon_sym_CSTABULATE);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(anon_sym_CTABLES);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(anon_sym_CURVEFIT);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(anon_sym_DATALIST);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(anon_sym_DATAFILEATTRIBUTE);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(anon_sym_DATASETACTIVATE);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(anon_sym_DATASETCLOSE);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(anon_sym_DATASETCOPY);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_DATASETDECLARE);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(anon_sym_DATASETDISPLAY);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(anon_sym_DATASETNAME);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(anon_sym_DATE);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(anon_sym_DELETEVARIABLES);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(anon_sym_DERIVATIVES);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_DESCRIPTIVES);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(anon_sym_DETECTANOMALY);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(anon_sym_DISCRIMINANT);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(anon_sym_DISPLAY);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(anon_sym_DOIF);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(anon_sym_DOREPEAT);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(anon_sym_DOCUMENT);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(anon_sym_DROPDOCUMENTS);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(anon_sym_ECHO);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(anon_sym_ENDCASE);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(anon_sym_ENDFILE);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(anon_sym_ERASE);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(anon_sym_EXAMINE);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(anon_sym_EXECUTE);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(anon_sym_EXPORT);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(anon_sym_EXSMOOTH);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(anon_sym_EXTENSION);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(anon_sym_FACTOR);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(anon_sym_FILEHANDLE);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(anon_sym_FILELABEL);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(anon_sym_FILETYPE);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(anon_sym_FILTER);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(anon_sym_FINISH);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(anon_sym_FIT);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_FLEISSMULTIRATERKAPPA);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(anon_sym_FLIP);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(anon_sym_FORMATS);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(anon_sym_FREQUENCIES);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(anon_sym_GENLIN);
      if (lookahead == 'M') ADVANCE(756);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(anon_sym_GENLINMIXED);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_GENLOG);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'C') ADVANCE(1180);
      if (lookahead == 'T') ADVANCE(995);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(anon_sym_GETCAPTURE);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(anon_sym_GETDATA);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(anon_sym_GETSAS);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_GETSTATA);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(anon_sym_GETTRANSLATE);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(anon_sym_GETCOGNOS);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(anon_sym_GETTM1);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(anon_sym_GGRAPH);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(anon_sym_GLM);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(anon_sym_HILOGLINEAR);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(anon_sym_HOMALS);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(anon_sym_HOST);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(anon_sym_IBREAK);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(anon_sym_IDO);
      if (lookahead == 'E') ADVANCE(1073);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(anon_sym_IDOEND);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(anon_sym_IGRAPH);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(anon_sym_IIF);
      if (lookahead == 'E') ADVANCE(1075);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(anon_sym_IIFEND);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(anon_sym_ILET);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(anon_sym_INPUTPROGRAM);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(anon_sym_INSERT);
      if (lookahead == ' ') ADVANCE(598);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(anon_sym_INSERTEXEC);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(anon_sym_INSERTHIDDDEN);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(anon_sym_INSERTHIDDEN);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(anon_sym_KEYEDDATALIST);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(anon_sym_KM);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(anon_sym_KNN);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(anon_sym_LINEAR);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(anon_sym_LIST);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(anon_sym_LOGISTICREGRESSION);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(anon_sym_LOGLINEAR);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(anon_sym_LOOP);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(anon_sym_MANOVA);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(anon_sym_MATCHFILES);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(anon_sym_MATRIX);
      if (lookahead == ' ') ADVANCE(426);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(anon_sym_MATRIXDATA);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(anon_sym_MCONVERT);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(anon_sym_MEANS);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(anon_sym_MISSINGVALUES);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(anon_sym_MIXED);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(anon_sym_MLP);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(anon_sym_MODELCLOSE);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(anon_sym_MODELHANDLE);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(anon_sym_MODELLIST);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(anon_sym_MODELNAME);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(anon_sym_MODELPROGRAM);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(anon_sym_MRSETS);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(anon_sym_MULTRESPONSE);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(anon_sym_MULTIPLECORRESPONDENCE);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(anon_sym_MULTIPLEIMPUTATION);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(anon_sym_MVA);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(anon_sym_NOFCASES);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(anon_sym_NAIVEBAYES);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(anon_sym_NEWFILE);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(anon_sym_NLR);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(anon_sym_NOMREG);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(anon_sym_NONPARCORR);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(anon_sym_NPARTESTS);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(anon_sym_NPTESTS);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(anon_sym_NUMERIC);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(anon_sym_OLAPCUBES);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(anon_sym_OMS);
      if (lookahead == 'E') ADVANCE(1076);
      if (lookahead == 'I') ADVANCE(1077);
      if (lookahead == 'L') ADVANCE(1182);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(anon_sym_OMSEND);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(anon_sym_OMSINFO);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(anon_sym_OMSLOG);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(anon_sym_ONEWAY);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(anon_sym_OPTIMALBINNING);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(anon_sym_ORTHOPLAN);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(anon_sym_OUTPUTMODIFY);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(anon_sym_OUTPUTNAME);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(anon_sym_OUTPUTNEW);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(anon_sym_OUTPUTOPEN);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(anon_sym_OUTPUTSAVE);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(anon_sym_OVERALS);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(anon_sym_PACF);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(anon_sym_PARTIALCORR);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(anon_sym_PERMISSIONS);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(anon_sym_PLANCARDS);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(anon_sym_PLS);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(anon_sym_PLUM);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(anon_sym_POINT);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(anon_sym_POWERMEANSINDEPENDENT);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(anon_sym_POWERMEANSONESAMPLE);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(anon_sym_POWERMEANSRELATED);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(anon_sym_POWERONEWAYANOVA);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(anon_sym_POWERPARTIALCORR);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(anon_sym_POWERPEARSONONESAMPLE);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(anon_sym_POWERPROPORTIONSINDEPENDENT);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(anon_sym_POWERPROPORTIONSONESAMPLE);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(anon_sym_POWERPROPORTIONSRELATED);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(anon_sym_POWERSPEARMANONESAMPLE);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(anon_sym_POWERUNIVARIATELINEAR);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(anon_sym_PPLOT);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(anon_sym_PREDICT);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(anon_sym_PREFSCAL);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(anon_sym_PRESERVE);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(anon_sym_PRINCALS);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(anon_sym_PRINT);
      if (lookahead == ' ') ADVANCE(511);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(anon_sym_PRINTEJECT);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(anon_sym_PRINTFORMATS);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(anon_sym_PRINTSPACE);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(anon_sym_PROBIT);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(anon_sym_PROCEDUREOUTPUT);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(anon_sym_PROPORTIONS);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(anon_sym_PROXIMITIES);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(anon_sym_PROXSCAL);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(anon_sym_QUANTILEREGRESSION);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(anon_sym_QUICKCLUSTER);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(anon_sym_RANK);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(anon_sym_RATIOSTATISTICS);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(anon_sym_RBF);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(anon_sym_READMODEL);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(anon_sym_RECODE);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(anon_sym_RECORDTYPE);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(anon_sym_REGRESSION);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(anon_sym_RELIABILITY);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(anon_sym_RENAME);
      if (lookahead == ' ') ADVANCE(1798);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(anon_sym_RENAMEVARIABLES);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(anon_sym_REPEATINGDATA);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(anon_sym_REPORT);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(anon_sym_REPOSITORYATTRIBUTES);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(anon_sym_REPOSITORYCONNECT);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(anon_sym_REPOSITORYCOPY);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(anon_sym_REREAD);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(anon_sym_RESPONSERATE);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(anon_sym_RESTORE);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(anon_sym_RMV);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(anon_sym_ROC);
      if (lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(anon_sym_ROCANALYSIS);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(anon_sym_SAMPLE);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead == ' ') ADVANCE(368);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(anon_sym_SAVECODEPAGE);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(anon_sym_SAVEDATACOLLECTION);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(anon_sym_SAVEMODEL);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(anon_sym_SAVETRANSLATE);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(anon_sym_SCRIPT);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(anon_sym_SEASON);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(anon_sym_SELECTIF);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(anon_sym_SELECTPRED);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(anon_sym_SHIFTVALUES);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(anon_sym_SHOW);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(anon_sym_SIMPLAN);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(anon_sym_SIMPREPBEGIN);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(anon_sym_SIMRUN);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead == ' ') ADVANCE(369);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(anon_sym_SORTCASES);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(anon_sym_SORTVARIABLES);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(anon_sym_SPATIALASSOCIATIONRULES);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(anon_sym_SPATIALMAPSPEC);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(anon_sym_SPATIALTEMPORALPREDICTION);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(anon_sym_SPCHART);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(anon_sym_SPECTRA);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(anon_sym_SPLITFILE);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(anon_sym_STARJOIN);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(anon_sym_SUBTITLE);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(anon_sym_SUMMARIZE);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(anon_sym_SURVIVAL);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(anon_sym_SYSFILEINFO);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(anon_sym_T_DASHTEST);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(anon_sym_TCMANALYSIS);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(anon_sym_TCMAPPLY);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(anon_sym_TCMMODEL);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(anon_sym_TDISPLAY);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(anon_sym_TEMPORARY);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(anon_sym_TIMEPROGRAM);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(anon_sym_TITLE);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(anon_sym_TMSBEGIN);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(anon_sym_TMSEND);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(anon_sym_TMSIMPORT);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(anon_sym_TMSMERGE);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(anon_sym_TREE);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(anon_sym_TSAPPLY);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(anon_sym_TSET);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(anon_sym_TSHOW);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(anon_sym_TSMODEL);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(anon_sym_TSPLOT);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(anon_sym_TWOSTEPCLUSTER);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(anon_sym_UNIANOVA);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(anon_sym_UPDATE);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(anon_sym_USE);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(anon_sym_VALIDATEDATA);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(anon_sym_VALUELABELS);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(anon_sym_VARCOMP);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(anon_sym_VARIABLEALIGNMENT);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(anon_sym_VARIABLEATTRIBUTE);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(anon_sym_VARIABLELABELS);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(anon_sym_VARIABLELEVEL);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(anon_sym_VARIABLEROLE);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(anon_sym_VARIABLEWIDTH);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(anon_sym_VARSTOCASES);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(anon_sym_VECTOR);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(anon_sym_VERIFY);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(anon_sym_WEIGHT);
      if (lookahead == 'E') ADVANCE(404);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(anon_sym_WEIGHTEDKAPPA);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(anon_sym_WLS);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(anon_sym_WRITE);
      if (lookahead == ' ') ADVANCE(700);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(anon_sym_WRITEFORMATS);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(anon_sym_XGRAPH);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(anon_sym_XSAVE);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(sym_subidentifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2159);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(2169);
      if (lookahead == '.') ADVANCE(2175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2171);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2167);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(2169);
      if (lookahead == 'E') ADVANCE(2164);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2167);
      END_STATE();
    case 2162:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(2169);
      if (lookahead == 'M') ADVANCE(2161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2167);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(2169);
      if (lookahead == 'M') ADVANCE(2162);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2167);
      END_STATE();
    case 2164:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(2169);
      if (lookahead == 'N') ADVANCE(2166);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2167);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(2169);
      if (lookahead == 'O') ADVANCE(2163);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2167);
      END_STATE();
    case 2166:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(2169);
      if (lookahead == 'T') ADVANCE(2168);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2167);
      END_STATE();
    case 2167:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(2169);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2167);
      END_STATE();
    case 2168:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$') ADVANCE(2170);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2192);
      END_STATE();
    case 2169:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2169);
      END_STATE();
    case 2170:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2192);
      END_STATE();
    case 2171:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2171);
      END_STATE();
    case 2172:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2192);
      END_STATE();
    case 2173:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 2174:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(2175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2174);
      END_STATE();
    case 2175:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2175);
      END_STATE();
    case 2176:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 2177:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(2169);
      if (lookahead == '.') ADVANCE(1842);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2171);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2167);
      END_STATE();
    case 2178:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(1842);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2174);
      END_STATE();
    case 2179:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(2192);
      if (lookahead == '*') ADVANCE(2182);
      END_STATE();
    case 2180:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(4);
      END_STATE();
    case 2181:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(2159);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 2183:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(2187);
      if (lookahead == '>') ADVANCE(2186);
      END_STATE();
    case 2184:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(2188);
      END_STATE();
    case 2185:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 2186:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 2188:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 2189:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 2190:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 2191:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 2192:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2192);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(anon_sym_BEGINPROGRAM);
      END_STATE();
    case 2194:
      ACCEPT_TOKEN(anon_sym_ENDPROGRAM_DOT);
      END_STATE();
    case 2195:
      ACCEPT_TOKEN(anon_sym_ENDPROGRAM_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2196:
      ACCEPT_TOKEN(sym_python);
      END_STATE();
    case 2197:
      ACCEPT_TOKEN(sym_r);
      END_STATE();
    case 2198:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == ' ') ADVANCE(2192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2199:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == ' ') ADVANCE(2214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2200:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == '*') ADVANCE(2198);
      if (lookahead == '/') ADVANCE(2201);
      if (lookahead == 'C') ADVANCE(2212);
      if (lookahead == 'E') ADVANCE(2210);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(2218);
      END_STATE();
    case 2201:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == '*') ADVANCE(2198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2202:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == '.') ADVANCE(2195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2203:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'A') ADVANCE(2208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'D') ADVANCE(2199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2205:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'E') ADVANCE(2211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2206:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'G') ADVANCE(2215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2207:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'M') ADVANCE(2205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2208:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'M') ADVANCE(2202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2209:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'M') ADVANCE(2207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'N') ADVANCE(2204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2211:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'N') ADVANCE(2217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2212:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'O') ADVANCE(2209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2213:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'O') ADVANCE(2206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2214:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'P') ADVANCE(2216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'R') ADVANCE(2203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'R') ADVANCE(2213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2217:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead == 'T') ADVANCE(2192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    case 2218:
      ACCEPT_TOKEN(aux_sym_injection_source_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2218);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1844},
  [2] = {.lex_state = 1844},
  [3] = {.lex_state = 1844},
  [4] = {.lex_state = 1844},
  [5] = {.lex_state = 1844},
  [6] = {.lex_state = 1844},
  [7] = {.lex_state = 1844},
  [8] = {.lex_state = 1844},
  [9] = {.lex_state = 81},
  [10] = {.lex_state = 81},
  [11] = {.lex_state = 81},
  [12] = {.lex_state = 81},
  [13] = {.lex_state = 80},
  [14] = {.lex_state = 80},
  [15] = {.lex_state = 80},
  [16] = {.lex_state = 80},
  [17] = {.lex_state = 80},
  [18] = {.lex_state = 81},
  [19] = {.lex_state = 81},
  [20] = {.lex_state = 81},
  [21] = {.lex_state = 81},
  [22] = {.lex_state = 81},
  [23] = {.lex_state = 80},
  [24] = {.lex_state = 80},
  [25] = {.lex_state = 80},
  [26] = {.lex_state = 80},
  [27] = {.lex_state = 1843},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 1843},
  [30] = {.lex_state = 1843},
  [31] = {.lex_state = 1843},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 1843},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 1843},
  [37] = {.lex_state = 1843},
  [38] = {.lex_state = 1843},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_end_of_command] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ACF] = ACTIONS(1),
    [anon_sym_ADDDOCUMENT] = ACTIONS(1),
    [anon_sym_ADDFILES] = ACTIONS(1),
    [anon_sym_ADDVALUELABELS] = ACTIONS(1),
    [anon_sym_ADP] = ACTIONS(1),
    [anon_sym_AGGREGATE] = ACTIONS(1),
    [anon_sym_AIM] = ACTIONS(1),
    [anon_sym_ALSCAL] = ACTIONS(1),
    [anon_sym_ALTERTYPE] = ACTIONS(1),
    [anon_sym_ANACOR] = ACTIONS(1),
    [anon_sym_ANOVA] = ACTIONS(1),
    [anon_sym_APPLYDICTIONARY] = ACTIONS(1),
    [anon_sym_AREG] = ACTIONS(1),
    [anon_sym_ARIMA] = ACTIONS(1),
    [anon_sym_AUTORECODE] = ACTIONS(1),
    [anon_sym_BAYESANOVA] = ACTIONS(1),
    [anon_sym_BAYESCORRELATION] = ACTIONS(1),
    [anon_sym_BAYESINDEPENDENT] = ACTIONS(1),
    [anon_sym_BAYESLOGLINEAR] = ACTIONS(1),
    [anon_sym_BAYESONESAMPLE] = ACTIONS(1),
    [anon_sym_BAYESREGRESSION] = ACTIONS(1),
    [anon_sym_BAYESRELATED] = ACTIONS(1),
    [anon_sym_BAYESREPEATED] = ACTIONS(1),
    [anon_sym_BEGINDATA] = ACTIONS(1),
    [anon_sym_BEGINEXPR] = ACTIONS(1),
    [anon_sym_BEGINEXPR_DASHENDEXPR] = ACTIONS(1),
    [anon_sym_BEGINGPL_DASHENDGPL] = ACTIONS(1),
    [anon_sym_BOOTSTRAP] = ACTIONS(1),
    [anon_sym_BREAK] = ACTIONS(1),
    [anon_sym_CACHE] = ACTIONS(1),
    [anon_sym_CASEPLOT] = ACTIONS(1),
    [anon_sym_CASESTOVARS] = ACTIONS(1),
    [anon_sym_CATREG] = ACTIONS(1),
    [anon_sym_CD] = ACTIONS(1),
    [anon_sym_CLABELS] = ACTIONS(1),
    [anon_sym_CLEARTIMEPROGRAM] = ACTIONS(1),
    [anon_sym_CLEARTRANSFORMATIONS] = ACTIONS(1),
    [anon_sym_CLUSTER] = ACTIONS(1),
    [anon_sym_CNLR] = ACTIONS(1),
    [anon_sym_CODEBOOK] = ACTIONS(1),
    [anon_sym_COMMENT] = ACTIONS(1),
    [anon_sym_COMPAREDATASETS] = ACTIONS(1),
    [anon_sym_COMPUTE] = ACTIONS(1),
    [anon_sym_CONJOINT] = ACTIONS(1),
    [anon_sym_CONSTRAINEDFUNCTIONS] = ACTIONS(1),
    [anon_sym_CORRELATIONS] = ACTIONS(1),
    [anon_sym_CORRESPONDENCE] = ACTIONS(1),
    [anon_sym_COUNT] = ACTIONS(1),
    [anon_sym_COXREG] = ACTIONS(1),
    [anon_sym_CREATE] = ACTIONS(1),
    [anon_sym_CROSSTABS] = ACTIONS(1),
    [anon_sym_CSCOXREG] = ACTIONS(1),
    [anon_sym_CSDESCRIPTIVES] = ACTIONS(1),
    [anon_sym_CSGLM] = ACTIONS(1),
    [anon_sym_CSLOGISTIC] = ACTIONS(1),
    [anon_sym_CSORDINAL] = ACTIONS(1),
    [anon_sym_CSPLAN] = ACTIONS(1),
    [anon_sym_CSSELECT] = ACTIONS(1),
    [anon_sym_CSTABULATE] = ACTIONS(1),
    [anon_sym_CTABLES] = ACTIONS(1),
    [anon_sym_CURVEFIT] = ACTIONS(1),
    [anon_sym_DATALIST] = ACTIONS(1),
    [anon_sym_DATAFILEATTRIBUTE] = ACTIONS(1),
    [anon_sym_DATASETACTIVATE] = ACTIONS(1),
    [anon_sym_DATASETCLOSE] = ACTIONS(1),
    [anon_sym_DATASETCOPY] = ACTIONS(1),
    [anon_sym_DATASETDECLARE] = ACTIONS(1),
    [anon_sym_DATASETDISPLAY] = ACTIONS(1),
    [anon_sym_DATASETNAME] = ACTIONS(1),
    [anon_sym_DATE] = ACTIONS(1),
    [anon_sym_DEFINE] = ACTIONS(1),
    [anon_sym_DELETEVARIABLES] = ACTIONS(1),
    [anon_sym_DERIVATIVES] = ACTIONS(1),
    [anon_sym_DESCRIPTIVES] = ACTIONS(1),
    [anon_sym_DETECTANOMALY] = ACTIONS(1),
    [anon_sym_DISCRIMINANT] = ACTIONS(1),
    [anon_sym_DISPLAY] = ACTIONS(1),
    [anon_sym_DOIF] = ACTIONS(1),
    [anon_sym_DOREPEAT] = ACTIONS(1),
    [anon_sym_DOCUMENT] = ACTIONS(1),
    [anon_sym_DROPDOCUMENTS] = ACTIONS(1),
    [anon_sym_ECHO] = ACTIONS(1),
    [anon_sym_ENDCASE] = ACTIONS(1),
    [anon_sym_ENDFILE] = ACTIONS(1),
    [anon_sym_ERASE] = ACTIONS(1),
    [anon_sym_EXAMINE] = ACTIONS(1),
    [anon_sym_EXECUTE] = ACTIONS(1),
    [anon_sym_EXPORT] = ACTIONS(1),
    [anon_sym_EXSMOOTH] = ACTIONS(1),
    [anon_sym_EXTENSION] = ACTIONS(1),
    [anon_sym_FACTOR] = ACTIONS(1),
    [anon_sym_FILEHANDLE] = ACTIONS(1),
    [anon_sym_FILELABEL] = ACTIONS(1),
    [anon_sym_FILETYPE] = ACTIONS(1),
    [anon_sym_FILTER] = ACTIONS(1),
    [anon_sym_FINISH] = ACTIONS(1),
    [anon_sym_FIT] = ACTIONS(1),
    [anon_sym_FLEISSMULTIRATERKAPPA] = ACTIONS(1),
    [anon_sym_FLIP] = ACTIONS(1),
    [anon_sym_FORMATS] = ACTIONS(1),
    [anon_sym_FREQUENCIES] = ACTIONS(1),
    [anon_sym_GENLIN] = ACTIONS(1),
    [anon_sym_GENLINMIXED] = ACTIONS(1),
    [anon_sym_GENLOG] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_GETCAPTURE] = ACTIONS(1),
    [anon_sym_GETDATA] = ACTIONS(1),
    [anon_sym_GETSAS] = ACTIONS(1),
    [anon_sym_GETSTATA] = ACTIONS(1),
    [anon_sym_GETTRANSLATE] = ACTIONS(1),
    [anon_sym_GETCOGNOS] = ACTIONS(1),
    [anon_sym_GETTM1] = ACTIONS(1),
    [anon_sym_GGRAPH] = ACTIONS(1),
    [anon_sym_GLM] = ACTIONS(1),
    [anon_sym_GRAPH] = ACTIONS(1),
    [anon_sym_HILOGLINEAR] = ACTIONS(1),
    [anon_sym_HOMALS] = ACTIONS(1),
    [anon_sym_HOST] = ACTIONS(1),
    [anon_sym_IBREAK] = ACTIONS(1),
    [anon_sym_IDO] = ACTIONS(1),
    [anon_sym_IDOEND] = ACTIONS(1),
    [anon_sym_IGRAPH] = ACTIONS(1),
    [anon_sym_IIF] = ACTIONS(1),
    [anon_sym_IIFEND] = ACTIONS(1),
    [anon_sym_ILET] = ACTIONS(1),
    [anon_sym_IMPORT] = ACTIONS(1),
    [anon_sym_INCLUDE] = ACTIONS(1),
    [anon_sym_INPUTPROGRAM] = ACTIONS(1),
    [anon_sym_INSERT] = ACTIONS(1),
    [anon_sym_INSERTEXEC] = ACTIONS(1),
    [anon_sym_INSERTHIDDDEN] = ACTIONS(1),
    [anon_sym_INSERTHIDDEN] = ACTIONS(1),
    [anon_sym_KEYEDDATALIST] = ACTIONS(1),
    [anon_sym_KM] = ACTIONS(1),
    [anon_sym_KNN] = ACTIONS(1),
    [anon_sym_LINEAR] = ACTIONS(1),
    [anon_sym_LIST] = ACTIONS(1),
    [anon_sym_LOGISTICREGRESSION] = ACTIONS(1),
    [anon_sym_LOGLINEAR] = ACTIONS(1),
    [anon_sym_LOOP] = ACTIONS(1),
    [anon_sym_MANOVA] = ACTIONS(1),
    [anon_sym_MATCHFILES] = ACTIONS(1),
    [anon_sym_MATRIX] = ACTIONS(1),
    [anon_sym_MATRIXDATA] = ACTIONS(1),
    [anon_sym_MCONVERT] = ACTIONS(1),
    [anon_sym_MEANS] = ACTIONS(1),
    [anon_sym_MISSINGVALUES] = ACTIONS(1),
    [anon_sym_MIXED] = ACTIONS(1),
    [anon_sym_MLP] = ACTIONS(1),
    [anon_sym_MODELCLOSE] = ACTIONS(1),
    [anon_sym_MODELHANDLE] = ACTIONS(1),
    [anon_sym_MODELLIST] = ACTIONS(1),
    [anon_sym_MODELNAME] = ACTIONS(1),
    [anon_sym_MODELPROGRAM] = ACTIONS(1),
    [anon_sym_MRSETS] = ACTIONS(1),
    [anon_sym_MULTRESPONSE] = ACTIONS(1),
    [anon_sym_MULTIPLECORRESPONDENCE] = ACTIONS(1),
    [anon_sym_MULTIPLEIMPUTATION] = ACTIONS(1),
    [anon_sym_MVA] = ACTIONS(1),
    [anon_sym_NOFCASES] = ACTIONS(1),
    [anon_sym_NAIVEBAYES] = ACTIONS(1),
    [anon_sym_NEWFILE] = ACTIONS(1),
    [anon_sym_NLR] = ACTIONS(1),
    [anon_sym_NOMREG] = ACTIONS(1),
    [anon_sym_NONPARCORR] = ACTIONS(1),
    [anon_sym_NPARTESTS] = ACTIONS(1),
    [anon_sym_NPTESTS] = ACTIONS(1),
    [anon_sym_NUMERIC] = ACTIONS(1),
    [anon_sym_OLAPCUBES] = ACTIONS(1),
    [anon_sym_OMS] = ACTIONS(1),
    [anon_sym_OMSEND] = ACTIONS(1),
    [anon_sym_OMSINFO] = ACTIONS(1),
    [anon_sym_OMSLOG] = ACTIONS(1),
    [anon_sym_ONEWAY] = ACTIONS(1),
    [anon_sym_OPTIMALBINNING] = ACTIONS(1),
    [anon_sym_ORTHOPLAN] = ACTIONS(1),
    [anon_sym_OUTPUTMODIFY] = ACTIONS(1),
    [anon_sym_OUTPUTNAME] = ACTIONS(1),
    [anon_sym_OUTPUTNEW] = ACTIONS(1),
    [anon_sym_OUTPUTOPEN] = ACTIONS(1),
    [anon_sym_OUTPUTSAVE] = ACTIONS(1),
    [anon_sym_OVERALS] = ACTIONS(1),
    [anon_sym_PACF] = ACTIONS(1),
    [anon_sym_PARTIALCORR] = ACTIONS(1),
    [anon_sym_PERMISSIONS] = ACTIONS(1),
    [anon_sym_PLANCARDS] = ACTIONS(1),
    [anon_sym_PLS] = ACTIONS(1),
    [anon_sym_PLUM] = ACTIONS(1),
    [anon_sym_POINT] = ACTIONS(1),
    [anon_sym_POWERMEANSINDEPENDENT] = ACTIONS(1),
    [anon_sym_POWERMEANSONESAMPLE] = ACTIONS(1),
    [anon_sym_POWERMEANSRELATED] = ACTIONS(1),
    [anon_sym_POWERONEWAYANOVA] = ACTIONS(1),
    [anon_sym_POWERPARTIALCORR] = ACTIONS(1),
    [anon_sym_POWERPEARSONONESAMPLE] = ACTIONS(1),
    [anon_sym_POWERPROPORTIONSINDEPENDENT] = ACTIONS(1),
    [anon_sym_POWERPROPORTIONSONESAMPLE] = ACTIONS(1),
    [anon_sym_POWERPROPORTIONSRELATED] = ACTIONS(1),
    [anon_sym_POWERSPEARMANONESAMPLE] = ACTIONS(1),
    [anon_sym_POWERUNIVARIATELINEAR] = ACTIONS(1),
    [anon_sym_PPLOT] = ACTIONS(1),
    [anon_sym_PREDICT] = ACTIONS(1),
    [anon_sym_PREFSCAL] = ACTIONS(1),
    [anon_sym_PRESERVE] = ACTIONS(1),
    [anon_sym_PRINCALS] = ACTIONS(1),
    [anon_sym_PRINT] = ACTIONS(1),
    [anon_sym_PRINTEJECT] = ACTIONS(1),
    [anon_sym_PRINTFORMATS] = ACTIONS(1),
    [anon_sym_PRINTSPACE] = ACTIONS(1),
    [anon_sym_PROBIT] = ACTIONS(1),
    [anon_sym_PROCEDUREOUTPUT] = ACTIONS(1),
    [anon_sym_PROPORTIONS] = ACTIONS(1),
    [anon_sym_PROXIMITIES] = ACTIONS(1),
    [anon_sym_PROXSCAL] = ACTIONS(1),
    [anon_sym_QUANTILEREGRESSION] = ACTIONS(1),
    [anon_sym_QUICKCLUSTER] = ACTIONS(1),
    [anon_sym_SAMPLE] = ACTIONS(1),
    [anon_sym_SAVE] = ACTIONS(1),
    [anon_sym_SAVECODEPAGE] = ACTIONS(1),
    [anon_sym_SAVEDATACOLLECTION] = ACTIONS(1),
    [anon_sym_SAVEMODEL] = ACTIONS(1),
    [anon_sym_SAVETRANSLATE] = ACTIONS(1),
    [anon_sym_SCRIPT] = ACTIONS(1),
    [anon_sym_SEASON] = ACTIONS(1),
    [anon_sym_SELECTIF] = ACTIONS(1),
    [anon_sym_SELECTPRED] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_SHIFTVALUES] = ACTIONS(1),
    [anon_sym_SHOW] = ACTIONS(1),
    [anon_sym_SIMPLAN] = ACTIONS(1),
    [anon_sym_SIMPREPBEGIN] = ACTIONS(1),
    [anon_sym_SIMRUN] = ACTIONS(1),
    [anon_sym_SORT] = ACTIONS(1),
    [anon_sym_SORTCASES] = ACTIONS(1),
    [anon_sym_SORTVARIABLES] = ACTIONS(1),
    [anon_sym_SPATIALASSOCIATIONRULES] = ACTIONS(1),
    [anon_sym_SPATIALMAPSPEC] = ACTIONS(1),
    [anon_sym_SPATIALTEMPORALPREDICTION] = ACTIONS(1),
    [anon_sym_SPCHART] = ACTIONS(1),
    [anon_sym_SPECTRA] = ACTIONS(1),
    [anon_sym_SPLITFILE] = ACTIONS(1),
    [anon_sym_STARJOIN] = ACTIONS(1),
    [anon_sym_STRING] = ACTIONS(1),
    [anon_sym_SUBTITLE] = ACTIONS(1),
    [anon_sym_SUMMARIZE] = ACTIONS(1),
    [anon_sym_SURVIVAL] = ACTIONS(1),
    [anon_sym_SYSFILEINFO] = ACTIONS(1),
    [anon_sym_T_DASHTEST] = ACTIONS(1),
    [anon_sym_TCMANALYSIS] = ACTIONS(1),
    [anon_sym_TCMAPPLY] = ACTIONS(1),
    [anon_sym_TCMMODEL] = ACTIONS(1),
    [anon_sym_TDISPLAY] = ACTIONS(1),
    [anon_sym_TEMPORARY] = ACTIONS(1),
    [anon_sym_TIMEPROGRAM] = ACTIONS(1),
    [anon_sym_TITLE] = ACTIONS(1),
    [anon_sym_TMSBEGIN] = ACTIONS(1),
    [anon_sym_TMSEND] = ACTIONS(1),
    [anon_sym_TMSIMPORT] = ACTIONS(1),
    [anon_sym_TMSMERGE] = ACTIONS(1),
    [anon_sym_TREE] = ACTIONS(1),
    [anon_sym_TSAPPLY] = ACTIONS(1),
    [anon_sym_TSET] = ACTIONS(1),
    [anon_sym_TSHOW] = ACTIONS(1),
    [anon_sym_TSMODEL] = ACTIONS(1),
    [anon_sym_TSPLOT] = ACTIONS(1),
    [anon_sym_TWOSTEPCLUSTER] = ACTIONS(1),
    [anon_sym_UNIANOVA] = ACTIONS(1),
    [anon_sym_UPDATE] = ACTIONS(1),
    [anon_sym_USE] = ACTIONS(1),
    [anon_sym_VALIDATEDATA] = ACTIONS(1),
    [anon_sym_VALUELABELS] = ACTIONS(1),
    [anon_sym_VARCOMP] = ACTIONS(1),
    [anon_sym_VARIABLEALIGNMENT] = ACTIONS(1),
    [anon_sym_VARIABLEATTRIBUTE] = ACTIONS(1),
    [anon_sym_VARIABLELABELS] = ACTIONS(1),
    [anon_sym_VARIABLELEVEL] = ACTIONS(1),
    [anon_sym_VARIABLEROLE] = ACTIONS(1),
    [anon_sym_VARIABLEWIDTH] = ACTIONS(1),
    [anon_sym_VARSTOCASES] = ACTIONS(1),
    [anon_sym_VECTOR] = ACTIONS(1),
    [anon_sym_VERIFY] = ACTIONS(1),
    [anon_sym_WEIGHT] = ACTIONS(1),
    [anon_sym_WEIGHTEDKAPPA] = ACTIONS(1),
    [anon_sym_WLS] = ACTIONS(1),
    [anon_sym_WRITE] = ACTIONS(1),
    [anon_sym_WRITEFORMATS] = ACTIONS(1),
    [anon_sym_XGRAPH] = ACTIONS(1),
    [anon_sym_XSAVE] = ACTIONS(1),
    [sym_subidentifier] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BEGINPROGRAM] = ACTIONS(1),
    [anon_sym_ENDPROGRAM_DOT] = ACTIONS(1),
    [sym_python] = ACTIONS(1),
    [sym_r] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym_command] = STATE(2),
    [sym_identifier] = STATE(9),
    [sym_injection] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_2SLS] = ACTIONS(7),
    [anon_sym_ACF] = ACTIONS(7),
    [anon_sym_ADDDOCUMENT] = ACTIONS(7),
    [anon_sym_ADDFILES] = ACTIONS(7),
    [anon_sym_ADDVALUELABELS] = ACTIONS(7),
    [anon_sym_ADP] = ACTIONS(7),
    [anon_sym_AGGREGATE] = ACTIONS(7),
    [anon_sym_AIM] = ACTIONS(7),
    [anon_sym_ALSCAL] = ACTIONS(7),
    [anon_sym_ALTERTYPE] = ACTIONS(7),
    [anon_sym_ANACOR] = ACTIONS(7),
    [anon_sym_ANOVA] = ACTIONS(7),
    [anon_sym_APPLYDICTIONARY] = ACTIONS(7),
    [anon_sym_AREG] = ACTIONS(7),
    [anon_sym_ARIMA] = ACTIONS(7),
    [anon_sym_AUTORECODE] = ACTIONS(7),
    [anon_sym_BAYESANOVA] = ACTIONS(7),
    [anon_sym_BAYESCORRELATION] = ACTIONS(7),
    [anon_sym_BAYESINDEPENDENT] = ACTIONS(7),
    [anon_sym_BAYESLOGLINEAR] = ACTIONS(7),
    [anon_sym_BAYESONESAMPLE] = ACTIONS(7),
    [anon_sym_BAYESREGRESSION] = ACTIONS(7),
    [anon_sym_BAYESRELATED] = ACTIONS(7),
    [anon_sym_BAYESREPEATED] = ACTIONS(7),
    [anon_sym_BEGINDATA] = ACTIONS(7),
    [anon_sym_BEGINEXPR] = ACTIONS(9),
    [anon_sym_BEGINEXPR_DASHENDEXPR] = ACTIONS(7),
    [anon_sym_BEGINGPL_DASHENDGPL] = ACTIONS(7),
    [anon_sym_BOOTSTRAP] = ACTIONS(7),
    [anon_sym_BREAK] = ACTIONS(7),
    [anon_sym_CACHE] = ACTIONS(7),
    [anon_sym_CASEPLOT] = ACTIONS(7),
    [anon_sym_CASESTOVARS] = ACTIONS(7),
    [anon_sym_CATREG] = ACTIONS(7),
    [anon_sym_CD] = ACTIONS(7),
    [anon_sym_CLABELS] = ACTIONS(7),
    [anon_sym_CLEARTIMEPROGRAM] = ACTIONS(7),
    [anon_sym_CLEARTRANSFORMATIONS] = ACTIONS(7),
    [anon_sym_CLUSTER] = ACTIONS(7),
    [anon_sym_CNLR] = ACTIONS(7),
    [anon_sym_CODEBOOK] = ACTIONS(7),
    [anon_sym_COMMENT] = ACTIONS(9),
    [anon_sym_COMPAREDATASETS] = ACTIONS(7),
    [anon_sym_COMPUTE] = ACTIONS(7),
    [anon_sym_CONJOINT] = ACTIONS(7),
    [anon_sym_CONSTRAINEDFUNCTIONS] = ACTIONS(7),
    [anon_sym_CORRELATIONS] = ACTIONS(7),
    [anon_sym_CORRESPONDENCE] = ACTIONS(7),
    [anon_sym_COUNT] = ACTIONS(7),
    [anon_sym_COXREG] = ACTIONS(7),
    [anon_sym_CREATE] = ACTIONS(7),
    [anon_sym_CROSSTABS] = ACTIONS(7),
    [anon_sym_CSCOXREG] = ACTIONS(7),
    [anon_sym_CSDESCRIPTIVES] = ACTIONS(7),
    [anon_sym_CSGLM] = ACTIONS(7),
    [anon_sym_CSLOGISTIC] = ACTIONS(7),
    [anon_sym_CSORDINAL] = ACTIONS(7),
    [anon_sym_CSPLAN] = ACTIONS(7),
    [anon_sym_CSSELECT] = ACTIONS(7),
    [anon_sym_CSTABULATE] = ACTIONS(7),
    [anon_sym_CTABLES] = ACTIONS(7),
    [anon_sym_CURVEFIT] = ACTIONS(7),
    [anon_sym_DATALIST] = ACTIONS(7),
    [anon_sym_DATAFILEATTRIBUTE] = ACTIONS(7),
    [anon_sym_DATASETACTIVATE] = ACTIONS(7),
    [anon_sym_DATASETCLOSE] = ACTIONS(7),
    [anon_sym_DATASETCOPY] = ACTIONS(7),
    [anon_sym_DATASETDECLARE] = ACTIONS(7),
    [anon_sym_DATASETDISPLAY] = ACTIONS(7),
    [anon_sym_DATASETNAME] = ACTIONS(7),
    [anon_sym_DATE] = ACTIONS(7),
    [anon_sym_DEFINE] = ACTIONS(7),
    [anon_sym_DELETEVARIABLES] = ACTIONS(7),
    [anon_sym_DERIVATIVES] = ACTIONS(7),
    [anon_sym_DESCRIPTIVES] = ACTIONS(7),
    [anon_sym_DETECTANOMALY] = ACTIONS(7),
    [anon_sym_DISCRIMINANT] = ACTIONS(7),
    [anon_sym_DISPLAY] = ACTIONS(7),
    [anon_sym_DOIF] = ACTIONS(7),
    [anon_sym_DOREPEAT] = ACTIONS(7),
    [anon_sym_DOCUMENT] = ACTIONS(7),
    [anon_sym_DROPDOCUMENTS] = ACTIONS(7),
    [anon_sym_ECHO] = ACTIONS(7),
    [anon_sym_ENDCASE] = ACTIONS(7),
    [anon_sym_ENDFILE] = ACTIONS(7),
    [anon_sym_ERASE] = ACTIONS(7),
    [anon_sym_EXAMINE] = ACTIONS(7),
    [anon_sym_EXECUTE] = ACTIONS(7),
    [anon_sym_EXPORT] = ACTIONS(7),
    [anon_sym_EXSMOOTH] = ACTIONS(7),
    [anon_sym_EXTENSION] = ACTIONS(7),
    [anon_sym_FACTOR] = ACTIONS(7),
    [anon_sym_FILEHANDLE] = ACTIONS(7),
    [anon_sym_FILELABEL] = ACTIONS(7),
    [anon_sym_FILETYPE] = ACTIONS(7),
    [anon_sym_FILTER] = ACTIONS(7),
    [anon_sym_FINISH] = ACTIONS(7),
    [anon_sym_FIT] = ACTIONS(7),
    [anon_sym_FLEISSMULTIRATERKAPPA] = ACTIONS(7),
    [anon_sym_FLIP] = ACTIONS(7),
    [anon_sym_FORMATS] = ACTIONS(7),
    [anon_sym_FREQUENCIES] = ACTIONS(7),
    [anon_sym_GENLIN] = ACTIONS(9),
    [anon_sym_GENLINMIXED] = ACTIONS(7),
    [anon_sym_GENLOG] = ACTIONS(7),
    [anon_sym_GET] = ACTIONS(9),
    [anon_sym_GETCAPTURE] = ACTIONS(7),
    [anon_sym_GETDATA] = ACTIONS(7),
    [anon_sym_GETSAS] = ACTIONS(7),
    [anon_sym_GETSTATA] = ACTIONS(7),
    [anon_sym_GETTRANSLATE] = ACTIONS(7),
    [anon_sym_GETCOGNOS] = ACTIONS(7),
    [anon_sym_GETTM1] = ACTIONS(7),
    [anon_sym_GGRAPH] = ACTIONS(7),
    [anon_sym_GLM] = ACTIONS(7),
    [anon_sym_GRAPH] = ACTIONS(7),
    [anon_sym_HILOGLINEAR] = ACTIONS(7),
    [anon_sym_HOMALS] = ACTIONS(7),
    [anon_sym_HOST] = ACTIONS(7),
    [anon_sym_IBREAK] = ACTIONS(7),
    [anon_sym_IDO] = ACTIONS(9),
    [anon_sym_IDOEND] = ACTIONS(7),
    [anon_sym_IGRAPH] = ACTIONS(7),
    [anon_sym_IIF] = ACTIONS(9),
    [anon_sym_IIFEND] = ACTIONS(7),
    [anon_sym_ILET] = ACTIONS(7),
    [anon_sym_IMPORT] = ACTIONS(7),
    [anon_sym_INCLUDE] = ACTIONS(7),
    [anon_sym_INPUTPROGRAM] = ACTIONS(7),
    [anon_sym_INSERT] = ACTIONS(9),
    [anon_sym_INSERTEXEC] = ACTIONS(7),
    [anon_sym_INSERTHIDDDEN] = ACTIONS(7),
    [anon_sym_INSERTHIDDEN] = ACTIONS(7),
    [anon_sym_KEYEDDATALIST] = ACTIONS(7),
    [anon_sym_KM] = ACTIONS(7),
    [anon_sym_KNN] = ACTIONS(7),
    [anon_sym_LINEAR] = ACTIONS(7),
    [anon_sym_LIST] = ACTIONS(7),
    [anon_sym_LOGISTICREGRESSION] = ACTIONS(7),
    [anon_sym_LOGLINEAR] = ACTIONS(7),
    [anon_sym_LOOP] = ACTIONS(7),
    [anon_sym_MANOVA] = ACTIONS(7),
    [anon_sym_MATCHFILES] = ACTIONS(7),
    [anon_sym_MATRIX] = ACTIONS(9),
    [anon_sym_MATRIXDATA] = ACTIONS(7),
    [anon_sym_MCONVERT] = ACTIONS(7),
    [anon_sym_MEANS] = ACTIONS(7),
    [anon_sym_MISSINGVALUES] = ACTIONS(7),
    [anon_sym_MIXED] = ACTIONS(7),
    [anon_sym_MLP] = ACTIONS(7),
    [anon_sym_MODELCLOSE] = ACTIONS(7),
    [anon_sym_MODELHANDLE] = ACTIONS(7),
    [anon_sym_MODELLIST] = ACTIONS(7),
    [anon_sym_MODELNAME] = ACTIONS(7),
    [anon_sym_MODELPROGRAM] = ACTIONS(7),
    [anon_sym_MRSETS] = ACTIONS(7),
    [anon_sym_MULTRESPONSE] = ACTIONS(7),
    [anon_sym_MULTIPLECORRESPONDENCE] = ACTIONS(7),
    [anon_sym_MULTIPLEIMPUTATION] = ACTIONS(7),
    [anon_sym_MVA] = ACTIONS(7),
    [anon_sym_NOFCASES] = ACTIONS(7),
    [anon_sym_NAIVEBAYES] = ACTIONS(7),
    [anon_sym_NEWFILE] = ACTIONS(7),
    [anon_sym_NLR] = ACTIONS(7),
    [anon_sym_NOMREG] = ACTIONS(7),
    [anon_sym_NONPARCORR] = ACTIONS(7),
    [anon_sym_NPARTESTS] = ACTIONS(7),
    [anon_sym_NPTESTS] = ACTIONS(7),
    [anon_sym_NUMERIC] = ACTIONS(7),
    [anon_sym_OLAPCUBES] = ACTIONS(7),
    [anon_sym_OMS] = ACTIONS(9),
    [anon_sym_OMSEND] = ACTIONS(7),
    [anon_sym_OMSINFO] = ACTIONS(7),
    [anon_sym_OMSLOG] = ACTIONS(7),
    [anon_sym_ONEWAY] = ACTIONS(7),
    [anon_sym_OPTIMALBINNING] = ACTIONS(7),
    [anon_sym_ORTHOPLAN] = ACTIONS(7),
    [anon_sym_OUTPUTMODIFY] = ACTIONS(7),
    [anon_sym_OUTPUTNAME] = ACTIONS(7),
    [anon_sym_OUTPUTNEW] = ACTIONS(7),
    [anon_sym_OUTPUTOPEN] = ACTIONS(7),
    [anon_sym_OUTPUTSAVE] = ACTIONS(7),
    [anon_sym_OVERALS] = ACTIONS(7),
    [anon_sym_PACF] = ACTIONS(7),
    [anon_sym_PARTIALCORR] = ACTIONS(7),
    [anon_sym_PERMISSIONS] = ACTIONS(7),
    [anon_sym_PLANCARDS] = ACTIONS(7),
    [anon_sym_PLS] = ACTIONS(7),
    [anon_sym_PLUM] = ACTIONS(7),
    [anon_sym_POINT] = ACTIONS(7),
    [anon_sym_POWERMEANSINDEPENDENT] = ACTIONS(7),
    [anon_sym_POWERMEANSONESAMPLE] = ACTIONS(7),
    [anon_sym_POWERMEANSRELATED] = ACTIONS(7),
    [anon_sym_POWERONEWAYANOVA] = ACTIONS(7),
    [anon_sym_POWERPARTIALCORR] = ACTIONS(7),
    [anon_sym_POWERPEARSONONESAMPLE] = ACTIONS(7),
    [anon_sym_POWERPROPORTIONSINDEPENDENT] = ACTIONS(7),
    [anon_sym_POWERPROPORTIONSONESAMPLE] = ACTIONS(7),
    [anon_sym_POWERPROPORTIONSRELATED] = ACTIONS(7),
    [anon_sym_POWERSPEARMANONESAMPLE] = ACTIONS(7),
    [anon_sym_POWERUNIVARIATELINEAR] = ACTIONS(7),
    [anon_sym_PPLOT] = ACTIONS(7),
    [anon_sym_PREDICT] = ACTIONS(7),
    [anon_sym_PREFSCAL] = ACTIONS(7),
    [anon_sym_PRESERVE] = ACTIONS(7),
    [anon_sym_PRINCALS] = ACTIONS(7),
    [anon_sym_PRINT] = ACTIONS(9),
    [anon_sym_PRINTEJECT] = ACTIONS(7),
    [anon_sym_PRINTFORMATS] = ACTIONS(7),
    [anon_sym_PRINTSPACE] = ACTIONS(7),
    [anon_sym_PROBIT] = ACTIONS(7),
    [anon_sym_PROCEDUREOUTPUT] = ACTIONS(7),
    [anon_sym_PROPORTIONS] = ACTIONS(7),
    [anon_sym_PROXIMITIES] = ACTIONS(7),
    [anon_sym_PROXSCAL] = ACTIONS(7),
    [anon_sym_QUANTILEREGRESSION] = ACTIONS(7),
    [anon_sym_QUICKCLUSTER] = ACTIONS(7),
    [anon_sym_RANK] = ACTIONS(7),
    [anon_sym_RATIOSTATISTICS] = ACTIONS(7),
    [anon_sym_RBF] = ACTIONS(7),
    [anon_sym_READMODEL] = ACTIONS(7),
    [anon_sym_RECODE] = ACTIONS(7),
    [anon_sym_RECORDTYPE] = ACTIONS(7),
    [anon_sym_REGRESSION] = ACTIONS(7),
    [anon_sym_RELIABILITY] = ACTIONS(7),
    [anon_sym_RENAME] = ACTIONS(9),
    [anon_sym_RENAMEVARIABLES] = ACTIONS(7),
    [anon_sym_REPEATINGDATA] = ACTIONS(7),
    [anon_sym_REPORT] = ACTIONS(7),
    [anon_sym_REPOSITORYATTRIBUTES] = ACTIONS(7),
    [anon_sym_REPOSITORYCONNECT] = ACTIONS(7),
    [anon_sym_REPOSITORYCOPY] = ACTIONS(7),
    [anon_sym_REREAD] = ACTIONS(7),
    [anon_sym_RESPONSERATE] = ACTIONS(7),
    [anon_sym_RESTORE] = ACTIONS(7),
    [anon_sym_RMV] = ACTIONS(7),
    [anon_sym_ROC] = ACTIONS(9),
    [anon_sym_ROCANALYSIS] = ACTIONS(7),
    [anon_sym_SAMPLE] = ACTIONS(7),
    [anon_sym_SAVE] = ACTIONS(9),
    [anon_sym_SAVECODEPAGE] = ACTIONS(7),
    [anon_sym_SAVEDATACOLLECTION] = ACTIONS(7),
    [anon_sym_SAVEMODEL] = ACTIONS(7),
    [anon_sym_SAVETRANSLATE] = ACTIONS(7),
    [anon_sym_SCRIPT] = ACTIONS(7),
    [anon_sym_SEASON] = ACTIONS(7),
    [anon_sym_SELECTIF] = ACTIONS(7),
    [anon_sym_SELECTPRED] = ACTIONS(7),
    [anon_sym_SET] = ACTIONS(7),
    [anon_sym_SHIFTVALUES] = ACTIONS(7),
    [anon_sym_SHOW] = ACTIONS(7),
    [anon_sym_SIMPLAN] = ACTIONS(7),
    [anon_sym_SIMPREPBEGIN] = ACTIONS(7),
    [anon_sym_SIMRUN] = ACTIONS(7),
    [anon_sym_SORT] = ACTIONS(9),
    [anon_sym_SORTCASES] = ACTIONS(7),
    [anon_sym_SORTVARIABLES] = ACTIONS(7),
    [anon_sym_SPATIALASSOCIATIONRULES] = ACTIONS(7),
    [anon_sym_SPATIALMAPSPEC] = ACTIONS(7),
    [anon_sym_SPATIALTEMPORALPREDICTION] = ACTIONS(7),
    [anon_sym_SPCHART] = ACTIONS(7),
    [anon_sym_SPECTRA] = ACTIONS(7),
    [anon_sym_SPLITFILE] = ACTIONS(7),
    [anon_sym_STARJOIN] = ACTIONS(7),
    [anon_sym_STRING] = ACTIONS(7),
    [anon_sym_SUBTITLE] = ACTIONS(7),
    [anon_sym_SUMMARIZE] = ACTIONS(7),
    [anon_sym_SURVIVAL] = ACTIONS(7),
    [anon_sym_SYSFILEINFO] = ACTIONS(7),
    [anon_sym_T_DASHTEST] = ACTIONS(7),
    [anon_sym_TCMANALYSIS] = ACTIONS(7),
    [anon_sym_TCMAPPLY] = ACTIONS(7),
    [anon_sym_TCMMODEL] = ACTIONS(7),
    [anon_sym_TDISPLAY] = ACTIONS(7),
    [anon_sym_TEMPORARY] = ACTIONS(7),
    [anon_sym_TIMEPROGRAM] = ACTIONS(7),
    [anon_sym_TITLE] = ACTIONS(7),
    [anon_sym_TMSBEGIN] = ACTIONS(7),
    [anon_sym_TMSEND] = ACTIONS(7),
    [anon_sym_TMSIMPORT] = ACTIONS(7),
    [anon_sym_TMSMERGE] = ACTIONS(7),
    [anon_sym_TREE] = ACTIONS(7),
    [anon_sym_TSAPPLY] = ACTIONS(7),
    [anon_sym_TSET] = ACTIONS(7),
    [anon_sym_TSHOW] = ACTIONS(7),
    [anon_sym_TSMODEL] = ACTIONS(7),
    [anon_sym_TSPLOT] = ACTIONS(7),
    [anon_sym_TWOSTEPCLUSTER] = ACTIONS(7),
    [anon_sym_UNIANOVA] = ACTIONS(7),
    [anon_sym_UPDATE] = ACTIONS(7),
    [anon_sym_USE] = ACTIONS(7),
    [anon_sym_VALIDATEDATA] = ACTIONS(7),
    [anon_sym_VALUELABELS] = ACTIONS(7),
    [anon_sym_VARCOMP] = ACTIONS(7),
    [anon_sym_VARIABLEALIGNMENT] = ACTIONS(7),
    [anon_sym_VARIABLEATTRIBUTE] = ACTIONS(7),
    [anon_sym_VARIABLELABELS] = ACTIONS(7),
    [anon_sym_VARIABLELEVEL] = ACTIONS(7),
    [anon_sym_VARIABLEROLE] = ACTIONS(7),
    [anon_sym_VARIABLEWIDTH] = ACTIONS(7),
    [anon_sym_VARSTOCASES] = ACTIONS(7),
    [anon_sym_VECTOR] = ACTIONS(7),
    [anon_sym_VERIFY] = ACTIONS(7),
    [anon_sym_WEIGHT] = ACTIONS(9),
    [anon_sym_WEIGHTEDKAPPA] = ACTIONS(7),
    [anon_sym_WLS] = ACTIONS(7),
    [anon_sym_WRITE] = ACTIONS(9),
    [anon_sym_WRITEFORMATS] = ACTIONS(7),
    [anon_sym_XGRAPH] = ACTIONS(7),
    [anon_sym_XSAVE] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BEGINPROGRAM] = ACTIONS(11),
  },
  [2] = {
    [sym_command] = STATE(3),
    [sym_identifier] = STATE(9),
    [sym_injection] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_2SLS] = ACTIONS(7),
    [anon_sym_ACF] = ACTIONS(7),
    [anon_sym_ADDDOCUMENT] = ACTIONS(7),
    [anon_sym_ADDFILES] = ACTIONS(7),
    [anon_sym_ADDVALUELABELS] = ACTIONS(7),
    [anon_sym_ADP] = ACTIONS(7),
    [anon_sym_AGGREGATE] = ACTIONS(7),
    [anon_sym_AIM] = ACTIONS(7),
    [anon_sym_ALSCAL] = ACTIONS(7),
    [anon_sym_ALTERTYPE] = ACTIONS(7),
    [anon_sym_ANACOR] = ACTIONS(7),
    [anon_sym_ANOVA] = ACTIONS(7),
    [anon_sym_APPLYDICTIONARY] = ACTIONS(7),
    [anon_sym_AREG] = ACTIONS(7),
    [anon_sym_ARIMA] = ACTIONS(7),
    [anon_sym_AUTORECODE] = ACTIONS(7),
    [anon_sym_BAYESANOVA] = ACTIONS(7),
    [anon_sym_BAYESCORRELATION] = ACTIONS(7),
    [anon_sym_BAYESINDEPENDENT] = ACTIONS(7),
    [anon_sym_BAYESLOGLINEAR] = ACTIONS(7),
    [anon_sym_BAYESONESAMPLE] = ACTIONS(7),
    [anon_sym_BAYESREGRESSION] = ACTIONS(7),
    [anon_sym_BAYESRELATED] = ACTIONS(7),
    [anon_sym_BAYESREPEATED] = ACTIONS(7),
    [anon_sym_BEGINDATA] = ACTIONS(7),
    [anon_sym_BEGINEXPR] = ACTIONS(9),
    [anon_sym_BEGINEXPR_DASHENDEXPR] = ACTIONS(7),
    [anon_sym_BEGINGPL_DASHENDGPL] = ACTIONS(7),
    [anon_sym_BOOTSTRAP] = ACTIONS(7),
    [anon_sym_BREAK] = ACTIONS(7),
    [anon_sym_CACHE] = ACTIONS(7),
    [anon_sym_CASEPLOT] = ACTIONS(7),
    [anon_sym_CASESTOVARS] = ACTIONS(7),
    [anon_sym_CATREG] = ACTIONS(7),
    [anon_sym_CD] = ACTIONS(7),
    [anon_sym_CLABELS] = ACTIONS(7),
    [anon_sym_CLEARTIMEPROGRAM] = ACTIONS(7),
    [anon_sym_CLEARTRANSFORMATIONS] = ACTIONS(7),
    [anon_sym_CLUSTER] = ACTIONS(7),
    [anon_sym_CNLR] = ACTIONS(7),
    [anon_sym_CODEBOOK] = ACTIONS(7),
    [anon_sym_COMMENT] = ACTIONS(9),
    [anon_sym_COMPAREDATASETS] = ACTIONS(7),
    [anon_sym_COMPUTE] = ACTIONS(7),
    [anon_sym_CONJOINT] = ACTIONS(7),
    [anon_sym_CONSTRAINEDFUNCTIONS] = ACTIONS(7),
    [anon_sym_CORRELATIONS] = ACTIONS(7),
    [anon_sym_CORRESPONDENCE] = ACTIONS(7),
    [anon_sym_COUNT] = ACTIONS(7),
    [anon_sym_COXREG] = ACTIONS(7),
    [anon_sym_CREATE] = ACTIONS(7),
    [anon_sym_CROSSTABS] = ACTIONS(7),
    [anon_sym_CSCOXREG] = ACTIONS(7),
    [anon_sym_CSDESCRIPTIVES] = ACTIONS(7),
    [anon_sym_CSGLM] = ACTIONS(7),
    [anon_sym_CSLOGISTIC] = ACTIONS(7),
    [anon_sym_CSORDINAL] = ACTIONS(7),
    [anon_sym_CSPLAN] = ACTIONS(7),
    [anon_sym_CSSELECT] = ACTIONS(7),
    [anon_sym_CSTABULATE] = ACTIONS(7),
    [anon_sym_CTABLES] = ACTIONS(7),
    [anon_sym_CURVEFIT] = ACTIONS(7),
    [anon_sym_DATALIST] = ACTIONS(7),
    [anon_sym_DATAFILEATTRIBUTE] = ACTIONS(7),
    [anon_sym_DATASETACTIVATE] = ACTIONS(7),
    [anon_sym_DATASETCLOSE] = ACTIONS(7),
    [anon_sym_DATASETCOPY] = ACTIONS(7),
    [anon_sym_DATASETDECLARE] = ACTIONS(7),
    [anon_sym_DATASETDISPLAY] = ACTIONS(7),
    [anon_sym_DATASETNAME] = ACTIONS(7),
    [anon_sym_DATE] = ACTIONS(7),
    [anon_sym_DEFINE] = ACTIONS(7),
    [anon_sym_DELETEVARIABLES] = ACTIONS(7),
    [anon_sym_DERIVATIVES] = ACTIONS(7),
    [anon_sym_DESCRIPTIVES] = ACTIONS(7),
    [anon_sym_DETECTANOMALY] = ACTIONS(7),
    [anon_sym_DISCRIMINANT] = ACTIONS(7),
    [anon_sym_DISPLAY] = ACTIONS(7),
    [anon_sym_DOIF] = ACTIONS(7),
    [anon_sym_DOREPEAT] = ACTIONS(7),
    [anon_sym_DOCUMENT] = ACTIONS(7),
    [anon_sym_DROPDOCUMENTS] = ACTIONS(7),
    [anon_sym_ECHO] = ACTIONS(7),
    [anon_sym_ENDCASE] = ACTIONS(7),
    [anon_sym_ENDFILE] = ACTIONS(7),
    [anon_sym_ERASE] = ACTIONS(7),
    [anon_sym_EXAMINE] = ACTIONS(7),
    [anon_sym_EXECUTE] = ACTIONS(7),
    [anon_sym_EXPORT] = ACTIONS(7),
    [anon_sym_EXSMOOTH] = ACTIONS(7),
    [anon_sym_EXTENSION] = ACTIONS(7),
    [anon_sym_FACTOR] = ACTIONS(7),
    [anon_sym_FILEHANDLE] = ACTIONS(7),
    [anon_sym_FILELABEL] = ACTIONS(7),
    [anon_sym_FILETYPE] = ACTIONS(7),
    [anon_sym_FILTER] = ACTIONS(7),
    [anon_sym_FINISH] = ACTIONS(7),
    [anon_sym_FIT] = ACTIONS(7),
    [anon_sym_FLEISSMULTIRATERKAPPA] = ACTIONS(7),
    [anon_sym_FLIP] = ACTIONS(7),
    [anon_sym_FORMATS] = ACTIONS(7),
    [anon_sym_FREQUENCIES] = ACTIONS(7),
    [anon_sym_GENLIN] = ACTIONS(9),
    [anon_sym_GENLINMIXED] = ACTIONS(7),
    [anon_sym_GENLOG] = ACTIONS(7),
    [anon_sym_GET] = ACTIONS(9),
    [anon_sym_GETCAPTURE] = ACTIONS(7),
    [anon_sym_GETDATA] = ACTIONS(7),
    [anon_sym_GETSAS] = ACTIONS(7),
    [anon_sym_GETSTATA] = ACTIONS(7),
    [anon_sym_GETTRANSLATE] = ACTIONS(7),
    [anon_sym_GETCOGNOS] = ACTIONS(7),
    [anon_sym_GETTM1] = ACTIONS(7),
    [anon_sym_GGRAPH] = ACTIONS(7),
    [anon_sym_GLM] = ACTIONS(7),
    [anon_sym_GRAPH] = ACTIONS(7),
    [anon_sym_HILOGLINEAR] = ACTIONS(7),
    [anon_sym_HOMALS] = ACTIONS(7),
    [anon_sym_HOST] = ACTIONS(7),
    [anon_sym_IBREAK] = ACTIONS(7),
    [anon_sym_IDO] = ACTIONS(9),
    [anon_sym_IDOEND] = ACTIONS(7),
    [anon_sym_IGRAPH] = ACTIONS(7),
    [anon_sym_IIF] = ACTIONS(9),
    [anon_sym_IIFEND] = ACTIONS(7),
    [anon_sym_ILET] = ACTIONS(7),
    [anon_sym_IMPORT] = ACTIONS(7),
    [anon_sym_INCLUDE] = ACTIONS(7),
    [anon_sym_INPUTPROGRAM] = ACTIONS(7),
    [anon_sym_INSERT] = ACTIONS(9),
    [anon_sym_INSERTEXEC] = ACTIONS(7),
    [anon_sym_INSERTHIDDDEN] = ACTIONS(7),
    [anon_sym_INSERTHIDDEN] = ACTIONS(7),
    [anon_sym_KEYEDDATALIST] = ACTIONS(7),
    [anon_sym_KM] = ACTIONS(7),
    [anon_sym_KNN] = ACTIONS(7),
    [anon_sym_LINEAR] = ACTIONS(7),
    [anon_sym_LIST] = ACTIONS(7),
    [anon_sym_LOGISTICREGRESSION] = ACTIONS(7),
    [anon_sym_LOGLINEAR] = ACTIONS(7),
    [anon_sym_LOOP] = ACTIONS(7),
    [anon_sym_MANOVA] = ACTIONS(7),
    [anon_sym_MATCHFILES] = ACTIONS(7),
    [anon_sym_MATRIX] = ACTIONS(9),
    [anon_sym_MATRIXDATA] = ACTIONS(7),
    [anon_sym_MCONVERT] = ACTIONS(7),
    [anon_sym_MEANS] = ACTIONS(7),
    [anon_sym_MISSINGVALUES] = ACTIONS(7),
    [anon_sym_MIXED] = ACTIONS(7),
    [anon_sym_MLP] = ACTIONS(7),
    [anon_sym_MODELCLOSE] = ACTIONS(7),
    [anon_sym_MODELHANDLE] = ACTIONS(7),
    [anon_sym_MODELLIST] = ACTIONS(7),
    [anon_sym_MODELNAME] = ACTIONS(7),
    [anon_sym_MODELPROGRAM] = ACTIONS(7),
    [anon_sym_MRSETS] = ACTIONS(7),
    [anon_sym_MULTRESPONSE] = ACTIONS(7),
    [anon_sym_MULTIPLECORRESPONDENCE] = ACTIONS(7),
    [anon_sym_MULTIPLEIMPUTATION] = ACTIONS(7),
    [anon_sym_MVA] = ACTIONS(7),
    [anon_sym_NOFCASES] = ACTIONS(7),
    [anon_sym_NAIVEBAYES] = ACTIONS(7),
    [anon_sym_NEWFILE] = ACTIONS(7),
    [anon_sym_NLR] = ACTIONS(7),
    [anon_sym_NOMREG] = ACTIONS(7),
    [anon_sym_NONPARCORR] = ACTIONS(7),
    [anon_sym_NPARTESTS] = ACTIONS(7),
    [anon_sym_NPTESTS] = ACTIONS(7),
    [anon_sym_NUMERIC] = ACTIONS(7),
    [anon_sym_OLAPCUBES] = ACTIONS(7),
    [anon_sym_OMS] = ACTIONS(9),
    [anon_sym_OMSEND] = ACTIONS(7),
    [anon_sym_OMSINFO] = ACTIONS(7),
    [anon_sym_OMSLOG] = ACTIONS(7),
    [anon_sym_ONEWAY] = ACTIONS(7),
    [anon_sym_OPTIMALBINNING] = ACTIONS(7),
    [anon_sym_ORTHOPLAN] = ACTIONS(7),
    [anon_sym_OUTPUTMODIFY] = ACTIONS(7),
    [anon_sym_OUTPUTNAME] = ACTIONS(7),
    [anon_sym_OUTPUTNEW] = ACTIONS(7),
    [anon_sym_OUTPUTOPEN] = ACTIONS(7),
    [anon_sym_OUTPUTSAVE] = ACTIONS(7),
    [anon_sym_OVERALS] = ACTIONS(7),
    [anon_sym_PACF] = ACTIONS(7),
    [anon_sym_PARTIALCORR] = ACTIONS(7),
    [anon_sym_PERMISSIONS] = ACTIONS(7),
    [anon_sym_PLANCARDS] = ACTIONS(7),
    [anon_sym_PLS] = ACTIONS(7),
    [anon_sym_PLUM] = ACTIONS(7),
    [anon_sym_POINT] = ACTIONS(7),
    [anon_sym_POWERMEANSINDEPENDENT] = ACTIONS(7),
    [anon_sym_POWERMEANSONESAMPLE] = ACTIONS(7),
    [anon_sym_POWERMEANSRELATED] = ACTIONS(7),
    [anon_sym_POWERONEWAYANOVA] = ACTIONS(7),
    [anon_sym_POWERPARTIALCORR] = ACTIONS(7),
    [anon_sym_POWERPEARSONONESAMPLE] = ACTIONS(7),
    [anon_sym_POWERPROPORTIONSINDEPENDENT] = ACTIONS(7),
    [anon_sym_POWERPROPORTIONSONESAMPLE] = ACTIONS(7),
    [anon_sym_POWERPROPORTIONSRELATED] = ACTIONS(7),
    [anon_sym_POWERSPEARMANONESAMPLE] = ACTIONS(7),
    [anon_sym_POWERUNIVARIATELINEAR] = ACTIONS(7),
    [anon_sym_PPLOT] = ACTIONS(7),
    [anon_sym_PREDICT] = ACTIONS(7),
    [anon_sym_PREFSCAL] = ACTIONS(7),
    [anon_sym_PRESERVE] = ACTIONS(7),
    [anon_sym_PRINCALS] = ACTIONS(7),
    [anon_sym_PRINT] = ACTIONS(9),
    [anon_sym_PRINTEJECT] = ACTIONS(7),
    [anon_sym_PRINTFORMATS] = ACTIONS(7),
    [anon_sym_PRINTSPACE] = ACTIONS(7),
    [anon_sym_PROBIT] = ACTIONS(7),
    [anon_sym_PROCEDUREOUTPUT] = ACTIONS(7),
    [anon_sym_PROPORTIONS] = ACTIONS(7),
    [anon_sym_PROXIMITIES] = ACTIONS(7),
    [anon_sym_PROXSCAL] = ACTIONS(7),
    [anon_sym_QUANTILEREGRESSION] = ACTIONS(7),
    [anon_sym_QUICKCLUSTER] = ACTIONS(7),
    [anon_sym_RANK] = ACTIONS(7),
    [anon_sym_RATIOSTATISTICS] = ACTIONS(7),
    [anon_sym_RBF] = ACTIONS(7),
    [anon_sym_READMODEL] = ACTIONS(7),
    [anon_sym_RECODE] = ACTIONS(7),
    [anon_sym_RECORDTYPE] = ACTIONS(7),
    [anon_sym_REGRESSION] = ACTIONS(7),
    [anon_sym_RELIABILITY] = ACTIONS(7),
    [anon_sym_RENAME] = ACTIONS(9),
    [anon_sym_RENAMEVARIABLES] = ACTIONS(7),
    [anon_sym_REPEATINGDATA] = ACTIONS(7),
    [anon_sym_REPORT] = ACTIONS(7),
    [anon_sym_REPOSITORYATTRIBUTES] = ACTIONS(7),
    [anon_sym_REPOSITORYCONNECT] = ACTIONS(7),
    [anon_sym_REPOSITORYCOPY] = ACTIONS(7),
    [anon_sym_REREAD] = ACTIONS(7),
    [anon_sym_RESPONSERATE] = ACTIONS(7),
    [anon_sym_RESTORE] = ACTIONS(7),
    [anon_sym_RMV] = ACTIONS(7),
    [anon_sym_ROC] = ACTIONS(9),
    [anon_sym_ROCANALYSIS] = ACTIONS(7),
    [anon_sym_SAMPLE] = ACTIONS(7),
    [anon_sym_SAVE] = ACTIONS(9),
    [anon_sym_SAVECODEPAGE] = ACTIONS(7),
    [anon_sym_SAVEDATACOLLECTION] = ACTIONS(7),
    [anon_sym_SAVEMODEL] = ACTIONS(7),
    [anon_sym_SAVETRANSLATE] = ACTIONS(7),
    [anon_sym_SCRIPT] = ACTIONS(7),
    [anon_sym_SEASON] = ACTIONS(7),
    [anon_sym_SELECTIF] = ACTIONS(7),
    [anon_sym_SELECTPRED] = ACTIONS(7),
    [anon_sym_SET] = ACTIONS(7),
    [anon_sym_SHIFTVALUES] = ACTIONS(7),
    [anon_sym_SHOW] = ACTIONS(7),
    [anon_sym_SIMPLAN] = ACTIONS(7),
    [anon_sym_SIMPREPBEGIN] = ACTIONS(7),
    [anon_sym_SIMRUN] = ACTIONS(7),
    [anon_sym_SORT] = ACTIONS(9),
    [anon_sym_SORTCASES] = ACTIONS(7),
    [anon_sym_SORTVARIABLES] = ACTIONS(7),
    [anon_sym_SPATIALASSOCIATIONRULES] = ACTIONS(7),
    [anon_sym_SPATIALMAPSPEC] = ACTIONS(7),
    [anon_sym_SPATIALTEMPORALPREDICTION] = ACTIONS(7),
    [anon_sym_SPCHART] = ACTIONS(7),
    [anon_sym_SPECTRA] = ACTIONS(7),
    [anon_sym_SPLITFILE] = ACTIONS(7),
    [anon_sym_STARJOIN] = ACTIONS(7),
    [anon_sym_STRING] = ACTIONS(7),
    [anon_sym_SUBTITLE] = ACTIONS(7),
    [anon_sym_SUMMARIZE] = ACTIONS(7),
    [anon_sym_SURVIVAL] = ACTIONS(7),
    [anon_sym_SYSFILEINFO] = ACTIONS(7),
    [anon_sym_T_DASHTEST] = ACTIONS(7),
    [anon_sym_TCMANALYSIS] = ACTIONS(7),
    [anon_sym_TCMAPPLY] = ACTIONS(7),
    [anon_sym_TCMMODEL] = ACTIONS(7),
    [anon_sym_TDISPLAY] = ACTIONS(7),
    [anon_sym_TEMPORARY] = ACTIONS(7),
    [anon_sym_TIMEPROGRAM] = ACTIONS(7),
    [anon_sym_TITLE] = ACTIONS(7),
    [anon_sym_TMSBEGIN] = ACTIONS(7),
    [anon_sym_TMSEND] = ACTIONS(7),
    [anon_sym_TMSIMPORT] = ACTIONS(7),
    [anon_sym_TMSMERGE] = ACTIONS(7),
    [anon_sym_TREE] = ACTIONS(7),
    [anon_sym_TSAPPLY] = ACTIONS(7),
    [anon_sym_TSET] = ACTIONS(7),
    [anon_sym_TSHOW] = ACTIONS(7),
    [anon_sym_TSMODEL] = ACTIONS(7),
    [anon_sym_TSPLOT] = ACTIONS(7),
    [anon_sym_TWOSTEPCLUSTER] = ACTIONS(7),
    [anon_sym_UNIANOVA] = ACTIONS(7),
    [anon_sym_UPDATE] = ACTIONS(7),
    [anon_sym_USE] = ACTIONS(7),
    [anon_sym_VALIDATEDATA] = ACTIONS(7),
    [anon_sym_VALUELABELS] = ACTIONS(7),
    [anon_sym_VARCOMP] = ACTIONS(7),
    [anon_sym_VARIABLEALIGNMENT] = ACTIONS(7),
    [anon_sym_VARIABLEATTRIBUTE] = ACTIONS(7),
    [anon_sym_VARIABLELABELS] = ACTIONS(7),
    [anon_sym_VARIABLELEVEL] = ACTIONS(7),
    [anon_sym_VARIABLEROLE] = ACTIONS(7),
    [anon_sym_VARIABLEWIDTH] = ACTIONS(7),
    [anon_sym_VARSTOCASES] = ACTIONS(7),
    [anon_sym_VECTOR] = ACTIONS(7),
    [anon_sym_VERIFY] = ACTIONS(7),
    [anon_sym_WEIGHT] = ACTIONS(9),
    [anon_sym_WEIGHTEDKAPPA] = ACTIONS(7),
    [anon_sym_WLS] = ACTIONS(7),
    [anon_sym_WRITE] = ACTIONS(9),
    [anon_sym_WRITEFORMATS] = ACTIONS(7),
    [anon_sym_XGRAPH] = ACTIONS(7),
    [anon_sym_XSAVE] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BEGINPROGRAM] = ACTIONS(11),
  },
  [3] = {
    [sym_command] = STATE(3),
    [sym_identifier] = STATE(9),
    [sym_injection] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_2SLS] = ACTIONS(17),
    [anon_sym_ACF] = ACTIONS(17),
    [anon_sym_ADDDOCUMENT] = ACTIONS(17),
    [anon_sym_ADDFILES] = ACTIONS(17),
    [anon_sym_ADDVALUELABELS] = ACTIONS(17),
    [anon_sym_ADP] = ACTIONS(17),
    [anon_sym_AGGREGATE] = ACTIONS(17),
    [anon_sym_AIM] = ACTIONS(17),
    [anon_sym_ALSCAL] = ACTIONS(17),
    [anon_sym_ALTERTYPE] = ACTIONS(17),
    [anon_sym_ANACOR] = ACTIONS(17),
    [anon_sym_ANOVA] = ACTIONS(17),
    [anon_sym_APPLYDICTIONARY] = ACTIONS(17),
    [anon_sym_AREG] = ACTIONS(17),
    [anon_sym_ARIMA] = ACTIONS(17),
    [anon_sym_AUTORECODE] = ACTIONS(17),
    [anon_sym_BAYESANOVA] = ACTIONS(17),
    [anon_sym_BAYESCORRELATION] = ACTIONS(17),
    [anon_sym_BAYESINDEPENDENT] = ACTIONS(17),
    [anon_sym_BAYESLOGLINEAR] = ACTIONS(17),
    [anon_sym_BAYESONESAMPLE] = ACTIONS(17),
    [anon_sym_BAYESREGRESSION] = ACTIONS(17),
    [anon_sym_BAYESRELATED] = ACTIONS(17),
    [anon_sym_BAYESREPEATED] = ACTIONS(17),
    [anon_sym_BEGINDATA] = ACTIONS(17),
    [anon_sym_BEGINEXPR] = ACTIONS(20),
    [anon_sym_BEGINEXPR_DASHENDEXPR] = ACTIONS(17),
    [anon_sym_BEGINGPL_DASHENDGPL] = ACTIONS(17),
    [anon_sym_BOOTSTRAP] = ACTIONS(17),
    [anon_sym_BREAK] = ACTIONS(17),
    [anon_sym_CACHE] = ACTIONS(17),
    [anon_sym_CASEPLOT] = ACTIONS(17),
    [anon_sym_CASESTOVARS] = ACTIONS(17),
    [anon_sym_CATREG] = ACTIONS(17),
    [anon_sym_CD] = ACTIONS(17),
    [anon_sym_CLABELS] = ACTIONS(17),
    [anon_sym_CLEARTIMEPROGRAM] = ACTIONS(17),
    [anon_sym_CLEARTRANSFORMATIONS] = ACTIONS(17),
    [anon_sym_CLUSTER] = ACTIONS(17),
    [anon_sym_CNLR] = ACTIONS(17),
    [anon_sym_CODEBOOK] = ACTIONS(17),
    [anon_sym_COMMENT] = ACTIONS(20),
    [anon_sym_COMPAREDATASETS] = ACTIONS(17),
    [anon_sym_COMPUTE] = ACTIONS(17),
    [anon_sym_CONJOINT] = ACTIONS(17),
    [anon_sym_CONSTRAINEDFUNCTIONS] = ACTIONS(17),
    [anon_sym_CORRELATIONS] = ACTIONS(17),
    [anon_sym_CORRESPONDENCE] = ACTIONS(17),
    [anon_sym_COUNT] = ACTIONS(17),
    [anon_sym_COXREG] = ACTIONS(17),
    [anon_sym_CREATE] = ACTIONS(17),
    [anon_sym_CROSSTABS] = ACTIONS(17),
    [anon_sym_CSCOXREG] = ACTIONS(17),
    [anon_sym_CSDESCRIPTIVES] = ACTIONS(17),
    [anon_sym_CSGLM] = ACTIONS(17),
    [anon_sym_CSLOGISTIC] = ACTIONS(17),
    [anon_sym_CSORDINAL] = ACTIONS(17),
    [anon_sym_CSPLAN] = ACTIONS(17),
    [anon_sym_CSSELECT] = ACTIONS(17),
    [anon_sym_CSTABULATE] = ACTIONS(17),
    [anon_sym_CTABLES] = ACTIONS(17),
    [anon_sym_CURVEFIT] = ACTIONS(17),
    [anon_sym_DATALIST] = ACTIONS(17),
    [anon_sym_DATAFILEATTRIBUTE] = ACTIONS(17),
    [anon_sym_DATASETACTIVATE] = ACTIONS(17),
    [anon_sym_DATASETCLOSE] = ACTIONS(17),
    [anon_sym_DATASETCOPY] = ACTIONS(17),
    [anon_sym_DATASETDECLARE] = ACTIONS(17),
    [anon_sym_DATASETDISPLAY] = ACTIONS(17),
    [anon_sym_DATASETNAME] = ACTIONS(17),
    [anon_sym_DATE] = ACTIONS(17),
    [anon_sym_DEFINE] = ACTIONS(17),
    [anon_sym_DELETEVARIABLES] = ACTIONS(17),
    [anon_sym_DERIVATIVES] = ACTIONS(17),
    [anon_sym_DESCRIPTIVES] = ACTIONS(17),
    [anon_sym_DETECTANOMALY] = ACTIONS(17),
    [anon_sym_DISCRIMINANT] = ACTIONS(17),
    [anon_sym_DISPLAY] = ACTIONS(17),
    [anon_sym_DOIF] = ACTIONS(17),
    [anon_sym_DOREPEAT] = ACTIONS(17),
    [anon_sym_DOCUMENT] = ACTIONS(17),
    [anon_sym_DROPDOCUMENTS] = ACTIONS(17),
    [anon_sym_ECHO] = ACTIONS(17),
    [anon_sym_ENDCASE] = ACTIONS(17),
    [anon_sym_ENDFILE] = ACTIONS(17),
    [anon_sym_ERASE] = ACTIONS(17),
    [anon_sym_EXAMINE] = ACTIONS(17),
    [anon_sym_EXECUTE] = ACTIONS(17),
    [anon_sym_EXPORT] = ACTIONS(17),
    [anon_sym_EXSMOOTH] = ACTIONS(17),
    [anon_sym_EXTENSION] = ACTIONS(17),
    [anon_sym_FACTOR] = ACTIONS(17),
    [anon_sym_FILEHANDLE] = ACTIONS(17),
    [anon_sym_FILELABEL] = ACTIONS(17),
    [anon_sym_FILETYPE] = ACTIONS(17),
    [anon_sym_FILTER] = ACTIONS(17),
    [anon_sym_FINISH] = ACTIONS(17),
    [anon_sym_FIT] = ACTIONS(17),
    [anon_sym_FLEISSMULTIRATERKAPPA] = ACTIONS(17),
    [anon_sym_FLIP] = ACTIONS(17),
    [anon_sym_FORMATS] = ACTIONS(17),
    [anon_sym_FREQUENCIES] = ACTIONS(17),
    [anon_sym_GENLIN] = ACTIONS(20),
    [anon_sym_GENLINMIXED] = ACTIONS(17),
    [anon_sym_GENLOG] = ACTIONS(17),
    [anon_sym_GET] = ACTIONS(20),
    [anon_sym_GETCAPTURE] = ACTIONS(17),
    [anon_sym_GETDATA] = ACTIONS(17),
    [anon_sym_GETSAS] = ACTIONS(17),
    [anon_sym_GETSTATA] = ACTIONS(17),
    [anon_sym_GETTRANSLATE] = ACTIONS(17),
    [anon_sym_GETCOGNOS] = ACTIONS(17),
    [anon_sym_GETTM1] = ACTIONS(17),
    [anon_sym_GGRAPH] = ACTIONS(17),
    [anon_sym_GLM] = ACTIONS(17),
    [anon_sym_GRAPH] = ACTIONS(17),
    [anon_sym_HILOGLINEAR] = ACTIONS(17),
    [anon_sym_HOMALS] = ACTIONS(17),
    [anon_sym_HOST] = ACTIONS(17),
    [anon_sym_IBREAK] = ACTIONS(17),
    [anon_sym_IDO] = ACTIONS(20),
    [anon_sym_IDOEND] = ACTIONS(17),
    [anon_sym_IGRAPH] = ACTIONS(17),
    [anon_sym_IIF] = ACTIONS(20),
    [anon_sym_IIFEND] = ACTIONS(17),
    [anon_sym_ILET] = ACTIONS(17),
    [anon_sym_IMPORT] = ACTIONS(17),
    [anon_sym_INCLUDE] = ACTIONS(17),
    [anon_sym_INPUTPROGRAM] = ACTIONS(17),
    [anon_sym_INSERT] = ACTIONS(20),
    [anon_sym_INSERTEXEC] = ACTIONS(17),
    [anon_sym_INSERTHIDDDEN] = ACTIONS(17),
    [anon_sym_INSERTHIDDEN] = ACTIONS(17),
    [anon_sym_KEYEDDATALIST] = ACTIONS(17),
    [anon_sym_KM] = ACTIONS(17),
    [anon_sym_KNN] = ACTIONS(17),
    [anon_sym_LINEAR] = ACTIONS(17),
    [anon_sym_LIST] = ACTIONS(17),
    [anon_sym_LOGISTICREGRESSION] = ACTIONS(17),
    [anon_sym_LOGLINEAR] = ACTIONS(17),
    [anon_sym_LOOP] = ACTIONS(17),
    [anon_sym_MANOVA] = ACTIONS(17),
    [anon_sym_MATCHFILES] = ACTIONS(17),
    [anon_sym_MATRIX] = ACTIONS(20),
    [anon_sym_MATRIXDATA] = ACTIONS(17),
    [anon_sym_MCONVERT] = ACTIONS(17),
    [anon_sym_MEANS] = ACTIONS(17),
    [anon_sym_MISSINGVALUES] = ACTIONS(17),
    [anon_sym_MIXED] = ACTIONS(17),
    [anon_sym_MLP] = ACTIONS(17),
    [anon_sym_MODELCLOSE] = ACTIONS(17),
    [anon_sym_MODELHANDLE] = ACTIONS(17),
    [anon_sym_MODELLIST] = ACTIONS(17),
    [anon_sym_MODELNAME] = ACTIONS(17),
    [anon_sym_MODELPROGRAM] = ACTIONS(17),
    [anon_sym_MRSETS] = ACTIONS(17),
    [anon_sym_MULTRESPONSE] = ACTIONS(17),
    [anon_sym_MULTIPLECORRESPONDENCE] = ACTIONS(17),
    [anon_sym_MULTIPLEIMPUTATION] = ACTIONS(17),
    [anon_sym_MVA] = ACTIONS(17),
    [anon_sym_NOFCASES] = ACTIONS(17),
    [anon_sym_NAIVEBAYES] = ACTIONS(17),
    [anon_sym_NEWFILE] = ACTIONS(17),
    [anon_sym_NLR] = ACTIONS(17),
    [anon_sym_NOMREG] = ACTIONS(17),
    [anon_sym_NONPARCORR] = ACTIONS(17),
    [anon_sym_NPARTESTS] = ACTIONS(17),
    [anon_sym_NPTESTS] = ACTIONS(17),
    [anon_sym_NUMERIC] = ACTIONS(17),
    [anon_sym_OLAPCUBES] = ACTIONS(17),
    [anon_sym_OMS] = ACTIONS(20),
    [anon_sym_OMSEND] = ACTIONS(17),
    [anon_sym_OMSINFO] = ACTIONS(17),
    [anon_sym_OMSLOG] = ACTIONS(17),
    [anon_sym_ONEWAY] = ACTIONS(17),
    [anon_sym_OPTIMALBINNING] = ACTIONS(17),
    [anon_sym_ORTHOPLAN] = ACTIONS(17),
    [anon_sym_OUTPUTMODIFY] = ACTIONS(17),
    [anon_sym_OUTPUTNAME] = ACTIONS(17),
    [anon_sym_OUTPUTNEW] = ACTIONS(17),
    [anon_sym_OUTPUTOPEN] = ACTIONS(17),
    [anon_sym_OUTPUTSAVE] = ACTIONS(17),
    [anon_sym_OVERALS] = ACTIONS(17),
    [anon_sym_PACF] = ACTIONS(17),
    [anon_sym_PARTIALCORR] = ACTIONS(17),
    [anon_sym_PERMISSIONS] = ACTIONS(17),
    [anon_sym_PLANCARDS] = ACTIONS(17),
    [anon_sym_PLS] = ACTIONS(17),
    [anon_sym_PLUM] = ACTIONS(17),
    [anon_sym_POINT] = ACTIONS(17),
    [anon_sym_POWERMEANSINDEPENDENT] = ACTIONS(17),
    [anon_sym_POWERMEANSONESAMPLE] = ACTIONS(17),
    [anon_sym_POWERMEANSRELATED] = ACTIONS(17),
    [anon_sym_POWERONEWAYANOVA] = ACTIONS(17),
    [anon_sym_POWERPARTIALCORR] = ACTIONS(17),
    [anon_sym_POWERPEARSONONESAMPLE] = ACTIONS(17),
    [anon_sym_POWERPROPORTIONSINDEPENDENT] = ACTIONS(17),
    [anon_sym_POWERPROPORTIONSONESAMPLE] = ACTIONS(17),
    [anon_sym_POWERPROPORTIONSRELATED] = ACTIONS(17),
    [anon_sym_POWERSPEARMANONESAMPLE] = ACTIONS(17),
    [anon_sym_POWERUNIVARIATELINEAR] = ACTIONS(17),
    [anon_sym_PPLOT] = ACTIONS(17),
    [anon_sym_PREDICT] = ACTIONS(17),
    [anon_sym_PREFSCAL] = ACTIONS(17),
    [anon_sym_PRESERVE] = ACTIONS(17),
    [anon_sym_PRINCALS] = ACTIONS(17),
    [anon_sym_PRINT] = ACTIONS(20),
    [anon_sym_PRINTEJECT] = ACTIONS(17),
    [anon_sym_PRINTFORMATS] = ACTIONS(17),
    [anon_sym_PRINTSPACE] = ACTIONS(17),
    [anon_sym_PROBIT] = ACTIONS(17),
    [anon_sym_PROCEDUREOUTPUT] = ACTIONS(17),
    [anon_sym_PROPORTIONS] = ACTIONS(17),
    [anon_sym_PROXIMITIES] = ACTIONS(17),
    [anon_sym_PROXSCAL] = ACTIONS(17),
    [anon_sym_QUANTILEREGRESSION] = ACTIONS(17),
    [anon_sym_QUICKCLUSTER] = ACTIONS(17),
    [anon_sym_RANK] = ACTIONS(17),
    [anon_sym_RATIOSTATISTICS] = ACTIONS(17),
    [anon_sym_RBF] = ACTIONS(17),
    [anon_sym_READMODEL] = ACTIONS(17),
    [anon_sym_RECODE] = ACTIONS(17),
    [anon_sym_RECORDTYPE] = ACTIONS(17),
    [anon_sym_REGRESSION] = ACTIONS(17),
    [anon_sym_RELIABILITY] = ACTIONS(17),
    [anon_sym_RENAME] = ACTIONS(20),
    [anon_sym_RENAMEVARIABLES] = ACTIONS(17),
    [anon_sym_REPEATINGDATA] = ACTIONS(17),
    [anon_sym_REPORT] = ACTIONS(17),
    [anon_sym_REPOSITORYATTRIBUTES] = ACTIONS(17),
    [anon_sym_REPOSITORYCONNECT] = ACTIONS(17),
    [anon_sym_REPOSITORYCOPY] = ACTIONS(17),
    [anon_sym_REREAD] = ACTIONS(17),
    [anon_sym_RESPONSERATE] = ACTIONS(17),
    [anon_sym_RESTORE] = ACTIONS(17),
    [anon_sym_RMV] = ACTIONS(17),
    [anon_sym_ROC] = ACTIONS(20),
    [anon_sym_ROCANALYSIS] = ACTIONS(17),
    [anon_sym_SAMPLE] = ACTIONS(17),
    [anon_sym_SAVE] = ACTIONS(20),
    [anon_sym_SAVECODEPAGE] = ACTIONS(17),
    [anon_sym_SAVEDATACOLLECTION] = ACTIONS(17),
    [anon_sym_SAVEMODEL] = ACTIONS(17),
    [anon_sym_SAVETRANSLATE] = ACTIONS(17),
    [anon_sym_SCRIPT] = ACTIONS(17),
    [anon_sym_SEASON] = ACTIONS(17),
    [anon_sym_SELECTIF] = ACTIONS(17),
    [anon_sym_SELECTPRED] = ACTIONS(17),
    [anon_sym_SET] = ACTIONS(17),
    [anon_sym_SHIFTVALUES] = ACTIONS(17),
    [anon_sym_SHOW] = ACTIONS(17),
    [anon_sym_SIMPLAN] = ACTIONS(17),
    [anon_sym_SIMPREPBEGIN] = ACTIONS(17),
    [anon_sym_SIMRUN] = ACTIONS(17),
    [anon_sym_SORT] = ACTIONS(20),
    [anon_sym_SORTCASES] = ACTIONS(17),
    [anon_sym_SORTVARIABLES] = ACTIONS(17),
    [anon_sym_SPATIALASSOCIATIONRULES] = ACTIONS(17),
    [anon_sym_SPATIALMAPSPEC] = ACTIONS(17),
    [anon_sym_SPATIALTEMPORALPREDICTION] = ACTIONS(17),
    [anon_sym_SPCHART] = ACTIONS(17),
    [anon_sym_SPECTRA] = ACTIONS(17),
    [anon_sym_SPLITFILE] = ACTIONS(17),
    [anon_sym_STARJOIN] = ACTIONS(17),
    [anon_sym_STRING] = ACTIONS(17),
    [anon_sym_SUBTITLE] = ACTIONS(17),
    [anon_sym_SUMMARIZE] = ACTIONS(17),
    [anon_sym_SURVIVAL] = ACTIONS(17),
    [anon_sym_SYSFILEINFO] = ACTIONS(17),
    [anon_sym_T_DASHTEST] = ACTIONS(17),
    [anon_sym_TCMANALYSIS] = ACTIONS(17),
    [anon_sym_TCMAPPLY] = ACTIONS(17),
    [anon_sym_TCMMODEL] = ACTIONS(17),
    [anon_sym_TDISPLAY] = ACTIONS(17),
    [anon_sym_TEMPORARY] = ACTIONS(17),
    [anon_sym_TIMEPROGRAM] = ACTIONS(17),
    [anon_sym_TITLE] = ACTIONS(17),
    [anon_sym_TMSBEGIN] = ACTIONS(17),
    [anon_sym_TMSEND] = ACTIONS(17),
    [anon_sym_TMSIMPORT] = ACTIONS(17),
    [anon_sym_TMSMERGE] = ACTIONS(17),
    [anon_sym_TREE] = ACTIONS(17),
    [anon_sym_TSAPPLY] = ACTIONS(17),
    [anon_sym_TSET] = ACTIONS(17),
    [anon_sym_TSHOW] = ACTIONS(17),
    [anon_sym_TSMODEL] = ACTIONS(17),
    [anon_sym_TSPLOT] = ACTIONS(17),
    [anon_sym_TWOSTEPCLUSTER] = ACTIONS(17),
    [anon_sym_UNIANOVA] = ACTIONS(17),
    [anon_sym_UPDATE] = ACTIONS(17),
    [anon_sym_USE] = ACTIONS(17),
    [anon_sym_VALIDATEDATA] = ACTIONS(17),
    [anon_sym_VALUELABELS] = ACTIONS(17),
    [anon_sym_VARCOMP] = ACTIONS(17),
    [anon_sym_VARIABLEALIGNMENT] = ACTIONS(17),
    [anon_sym_VARIABLEATTRIBUTE] = ACTIONS(17),
    [anon_sym_VARIABLELABELS] = ACTIONS(17),
    [anon_sym_VARIABLELEVEL] = ACTIONS(17),
    [anon_sym_VARIABLEROLE] = ACTIONS(17),
    [anon_sym_VARIABLEWIDTH] = ACTIONS(17),
    [anon_sym_VARSTOCASES] = ACTIONS(17),
    [anon_sym_VECTOR] = ACTIONS(17),
    [anon_sym_VERIFY] = ACTIONS(17),
    [anon_sym_WEIGHT] = ACTIONS(20),
    [anon_sym_WEIGHTEDKAPPA] = ACTIONS(17),
    [anon_sym_WLS] = ACTIONS(17),
    [anon_sym_WRITE] = ACTIONS(20),
    [anon_sym_WRITEFORMATS] = ACTIONS(17),
    [anon_sym_XGRAPH] = ACTIONS(17),
    [anon_sym_XSAVE] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BEGINPROGRAM] = ACTIONS(23),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_2SLS] = ACTIONS(26),
    [anon_sym_ACF] = ACTIONS(26),
    [anon_sym_ADDDOCUMENT] = ACTIONS(26),
    [anon_sym_ADDFILES] = ACTIONS(26),
    [anon_sym_ADDVALUELABELS] = ACTIONS(26),
    [anon_sym_ADP] = ACTIONS(26),
    [anon_sym_AGGREGATE] = ACTIONS(26),
    [anon_sym_AIM] = ACTIONS(26),
    [anon_sym_ALSCAL] = ACTIONS(26),
    [anon_sym_ALTERTYPE] = ACTIONS(26),
    [anon_sym_ANACOR] = ACTIONS(26),
    [anon_sym_ANOVA] = ACTIONS(26),
    [anon_sym_APPLYDICTIONARY] = ACTIONS(26),
    [anon_sym_AREG] = ACTIONS(26),
    [anon_sym_ARIMA] = ACTIONS(26),
    [anon_sym_AUTORECODE] = ACTIONS(26),
    [anon_sym_BAYESANOVA] = ACTIONS(26),
    [anon_sym_BAYESCORRELATION] = ACTIONS(26),
    [anon_sym_BAYESINDEPENDENT] = ACTIONS(26),
    [anon_sym_BAYESLOGLINEAR] = ACTIONS(26),
    [anon_sym_BAYESONESAMPLE] = ACTIONS(26),
    [anon_sym_BAYESREGRESSION] = ACTIONS(26),
    [anon_sym_BAYESRELATED] = ACTIONS(26),
    [anon_sym_BAYESREPEATED] = ACTIONS(26),
    [anon_sym_BEGINDATA] = ACTIONS(26),
    [anon_sym_BEGINEXPR] = ACTIONS(28),
    [anon_sym_BEGINEXPR_DASHENDEXPR] = ACTIONS(26),
    [anon_sym_BEGINGPL_DASHENDGPL] = ACTIONS(26),
    [anon_sym_BOOTSTRAP] = ACTIONS(26),
    [anon_sym_BREAK] = ACTIONS(26),
    [anon_sym_CACHE] = ACTIONS(26),
    [anon_sym_CASEPLOT] = ACTIONS(26),
    [anon_sym_CASESTOVARS] = ACTIONS(26),
    [anon_sym_CATREG] = ACTIONS(26),
    [anon_sym_CD] = ACTIONS(26),
    [anon_sym_CLABELS] = ACTIONS(26),
    [anon_sym_CLEARTIMEPROGRAM] = ACTIONS(26),
    [anon_sym_CLEARTRANSFORMATIONS] = ACTIONS(26),
    [anon_sym_CLUSTER] = ACTIONS(26),
    [anon_sym_CNLR] = ACTIONS(26),
    [anon_sym_CODEBOOK] = ACTIONS(26),
    [anon_sym_COMMENT] = ACTIONS(28),
    [anon_sym_COMPAREDATASETS] = ACTIONS(26),
    [anon_sym_COMPUTE] = ACTIONS(26),
    [anon_sym_CONJOINT] = ACTIONS(26),
    [anon_sym_CONSTRAINEDFUNCTIONS] = ACTIONS(26),
    [anon_sym_CORRELATIONS] = ACTIONS(26),
    [anon_sym_CORRESPONDENCE] = ACTIONS(26),
    [anon_sym_COUNT] = ACTIONS(26),
    [anon_sym_COXREG] = ACTIONS(26),
    [anon_sym_CREATE] = ACTIONS(26),
    [anon_sym_CROSSTABS] = ACTIONS(26),
    [anon_sym_CSCOXREG] = ACTIONS(26),
    [anon_sym_CSDESCRIPTIVES] = ACTIONS(26),
    [anon_sym_CSGLM] = ACTIONS(26),
    [anon_sym_CSLOGISTIC] = ACTIONS(26),
    [anon_sym_CSORDINAL] = ACTIONS(26),
    [anon_sym_CSPLAN] = ACTIONS(26),
    [anon_sym_CSSELECT] = ACTIONS(26),
    [anon_sym_CSTABULATE] = ACTIONS(26),
    [anon_sym_CTABLES] = ACTIONS(26),
    [anon_sym_CURVEFIT] = ACTIONS(26),
    [anon_sym_DATALIST] = ACTIONS(26),
    [anon_sym_DATAFILEATTRIBUTE] = ACTIONS(26),
    [anon_sym_DATASETACTIVATE] = ACTIONS(26),
    [anon_sym_DATASETCLOSE] = ACTIONS(26),
    [anon_sym_DATASETCOPY] = ACTIONS(26),
    [anon_sym_DATASETDECLARE] = ACTIONS(26),
    [anon_sym_DATASETDISPLAY] = ACTIONS(26),
    [anon_sym_DATASETNAME] = ACTIONS(26),
    [anon_sym_DATE] = ACTIONS(26),
    [anon_sym_DEFINE] = ACTIONS(26),
    [anon_sym_DELETEVARIABLES] = ACTIONS(26),
    [anon_sym_DERIVATIVES] = ACTIONS(26),
    [anon_sym_DESCRIPTIVES] = ACTIONS(26),
    [anon_sym_DETECTANOMALY] = ACTIONS(26),
    [anon_sym_DISCRIMINANT] = ACTIONS(26),
    [anon_sym_DISPLAY] = ACTIONS(26),
    [anon_sym_DOIF] = ACTIONS(26),
    [anon_sym_DOREPEAT] = ACTIONS(26),
    [anon_sym_DOCUMENT] = ACTIONS(26),
    [anon_sym_DROPDOCUMENTS] = ACTIONS(26),
    [anon_sym_ECHO] = ACTIONS(26),
    [anon_sym_ENDCASE] = ACTIONS(26),
    [anon_sym_ENDFILE] = ACTIONS(26),
    [anon_sym_ERASE] = ACTIONS(26),
    [anon_sym_EXAMINE] = ACTIONS(26),
    [anon_sym_EXECUTE] = ACTIONS(26),
    [anon_sym_EXPORT] = ACTIONS(26),
    [anon_sym_EXSMOOTH] = ACTIONS(26),
    [anon_sym_EXTENSION] = ACTIONS(26),
    [anon_sym_FACTOR] = ACTIONS(26),
    [anon_sym_FILEHANDLE] = ACTIONS(26),
    [anon_sym_FILELABEL] = ACTIONS(26),
    [anon_sym_FILETYPE] = ACTIONS(26),
    [anon_sym_FILTER] = ACTIONS(26),
    [anon_sym_FINISH] = ACTIONS(26),
    [anon_sym_FIT] = ACTIONS(26),
    [anon_sym_FLEISSMULTIRATERKAPPA] = ACTIONS(26),
    [anon_sym_FLIP] = ACTIONS(26),
    [anon_sym_FORMATS] = ACTIONS(26),
    [anon_sym_FREQUENCIES] = ACTIONS(26),
    [anon_sym_GENLIN] = ACTIONS(28),
    [anon_sym_GENLINMIXED] = ACTIONS(26),
    [anon_sym_GENLOG] = ACTIONS(26),
    [anon_sym_GET] = ACTIONS(28),
    [anon_sym_GETCAPTURE] = ACTIONS(26),
    [anon_sym_GETDATA] = ACTIONS(26),
    [anon_sym_GETSAS] = ACTIONS(26),
    [anon_sym_GETSTATA] = ACTIONS(26),
    [anon_sym_GETTRANSLATE] = ACTIONS(26),
    [anon_sym_GETCOGNOS] = ACTIONS(26),
    [anon_sym_GETTM1] = ACTIONS(26),
    [anon_sym_GGRAPH] = ACTIONS(26),
    [anon_sym_GLM] = ACTIONS(26),
    [anon_sym_GRAPH] = ACTIONS(26),
    [anon_sym_HILOGLINEAR] = ACTIONS(26),
    [anon_sym_HOMALS] = ACTIONS(26),
    [anon_sym_HOST] = ACTIONS(26),
    [anon_sym_IBREAK] = ACTIONS(26),
    [anon_sym_IDO] = ACTIONS(28),
    [anon_sym_IDOEND] = ACTIONS(26),
    [anon_sym_IGRAPH] = ACTIONS(26),
    [anon_sym_IIF] = ACTIONS(28),
    [anon_sym_IIFEND] = ACTIONS(26),
    [anon_sym_ILET] = ACTIONS(26),
    [anon_sym_IMPORT] = ACTIONS(26),
    [anon_sym_INCLUDE] = ACTIONS(26),
    [anon_sym_INPUTPROGRAM] = ACTIONS(26),
    [anon_sym_INSERT] = ACTIONS(28),
    [anon_sym_INSERTEXEC] = ACTIONS(26),
    [anon_sym_INSERTHIDDDEN] = ACTIONS(26),
    [anon_sym_INSERTHIDDEN] = ACTIONS(26),
    [anon_sym_KEYEDDATALIST] = ACTIONS(26),
    [anon_sym_KM] = ACTIONS(26),
    [anon_sym_KNN] = ACTIONS(26),
    [anon_sym_LINEAR] = ACTIONS(26),
    [anon_sym_LIST] = ACTIONS(26),
    [anon_sym_LOGISTICREGRESSION] = ACTIONS(26),
    [anon_sym_LOGLINEAR] = ACTIONS(26),
    [anon_sym_LOOP] = ACTIONS(26),
    [anon_sym_MANOVA] = ACTIONS(26),
    [anon_sym_MATCHFILES] = ACTIONS(26),
    [anon_sym_MATRIX] = ACTIONS(28),
    [anon_sym_MATRIXDATA] = ACTIONS(26),
    [anon_sym_MCONVERT] = ACTIONS(26),
    [anon_sym_MEANS] = ACTIONS(26),
    [anon_sym_MISSINGVALUES] = ACTIONS(26),
    [anon_sym_MIXED] = ACTIONS(26),
    [anon_sym_MLP] = ACTIONS(26),
    [anon_sym_MODELCLOSE] = ACTIONS(26),
    [anon_sym_MODELHANDLE] = ACTIONS(26),
    [anon_sym_MODELLIST] = ACTIONS(26),
    [anon_sym_MODELNAME] = ACTIONS(26),
    [anon_sym_MODELPROGRAM] = ACTIONS(26),
    [anon_sym_MRSETS] = ACTIONS(26),
    [anon_sym_MULTRESPONSE] = ACTIONS(26),
    [anon_sym_MULTIPLECORRESPONDENCE] = ACTIONS(26),
    [anon_sym_MULTIPLEIMPUTATION] = ACTIONS(26),
    [anon_sym_MVA] = ACTIONS(26),
    [anon_sym_NOFCASES] = ACTIONS(26),
    [anon_sym_NAIVEBAYES] = ACTIONS(26),
    [anon_sym_NEWFILE] = ACTIONS(26),
    [anon_sym_NLR] = ACTIONS(26),
    [anon_sym_NOMREG] = ACTIONS(26),
    [anon_sym_NONPARCORR] = ACTIONS(26),
    [anon_sym_NPARTESTS] = ACTIONS(26),
    [anon_sym_NPTESTS] = ACTIONS(26),
    [anon_sym_NUMERIC] = ACTIONS(26),
    [anon_sym_OLAPCUBES] = ACTIONS(26),
    [anon_sym_OMS] = ACTIONS(28),
    [anon_sym_OMSEND] = ACTIONS(26),
    [anon_sym_OMSINFO] = ACTIONS(26),
    [anon_sym_OMSLOG] = ACTIONS(26),
    [anon_sym_ONEWAY] = ACTIONS(26),
    [anon_sym_OPTIMALBINNING] = ACTIONS(26),
    [anon_sym_ORTHOPLAN] = ACTIONS(26),
    [anon_sym_OUTPUTMODIFY] = ACTIONS(26),
    [anon_sym_OUTPUTNAME] = ACTIONS(26),
    [anon_sym_OUTPUTNEW] = ACTIONS(26),
    [anon_sym_OUTPUTOPEN] = ACTIONS(26),
    [anon_sym_OUTPUTSAVE] = ACTIONS(26),
    [anon_sym_OVERALS] = ACTIONS(26),
    [anon_sym_PACF] = ACTIONS(26),
    [anon_sym_PARTIALCORR] = ACTIONS(26),
    [anon_sym_PERMISSIONS] = ACTIONS(26),
    [anon_sym_PLANCARDS] = ACTIONS(26),
    [anon_sym_PLS] = ACTIONS(26),
    [anon_sym_PLUM] = ACTIONS(26),
    [anon_sym_POINT] = ACTIONS(26),
    [anon_sym_POWERMEANSINDEPENDENT] = ACTIONS(26),
    [anon_sym_POWERMEANSONESAMPLE] = ACTIONS(26),
    [anon_sym_POWERMEANSRELATED] = ACTIONS(26),
    [anon_sym_POWERONEWAYANOVA] = ACTIONS(26),
    [anon_sym_POWERPARTIALCORR] = ACTIONS(26),
    [anon_sym_POWERPEARSONONESAMPLE] = ACTIONS(26),
    [anon_sym_POWERPROPORTIONSINDEPENDENT] = ACTIONS(26),
    [anon_sym_POWERPROPORTIONSONESAMPLE] = ACTIONS(26),
    [anon_sym_POWERPROPORTIONSRELATED] = ACTIONS(26),
    [anon_sym_POWERSPEARMANONESAMPLE] = ACTIONS(26),
    [anon_sym_POWERUNIVARIATELINEAR] = ACTIONS(26),
    [anon_sym_PPLOT] = ACTIONS(26),
    [anon_sym_PREDICT] = ACTIONS(26),
    [anon_sym_PREFSCAL] = ACTIONS(26),
    [anon_sym_PRESERVE] = ACTIONS(26),
    [anon_sym_PRINCALS] = ACTIONS(26),
    [anon_sym_PRINT] = ACTIONS(28),
    [anon_sym_PRINTEJECT] = ACTIONS(26),
    [anon_sym_PRINTFORMATS] = ACTIONS(26),
    [anon_sym_PRINTSPACE] = ACTIONS(26),
    [anon_sym_PROBIT] = ACTIONS(26),
    [anon_sym_PROCEDUREOUTPUT] = ACTIONS(26),
    [anon_sym_PROPORTIONS] = ACTIONS(26),
    [anon_sym_PROXIMITIES] = ACTIONS(26),
    [anon_sym_PROXSCAL] = ACTIONS(26),
    [anon_sym_QUANTILEREGRESSION] = ACTIONS(26),
    [anon_sym_QUICKCLUSTER] = ACTIONS(26),
    [anon_sym_RANK] = ACTIONS(26),
    [anon_sym_RATIOSTATISTICS] = ACTIONS(26),
    [anon_sym_RBF] = ACTIONS(26),
    [anon_sym_READMODEL] = ACTIONS(26),
    [anon_sym_RECODE] = ACTIONS(26),
    [anon_sym_RECORDTYPE] = ACTIONS(26),
    [anon_sym_REGRESSION] = ACTIONS(26),
    [anon_sym_RELIABILITY] = ACTIONS(26),
    [anon_sym_RENAME] = ACTIONS(28),
    [anon_sym_RENAMEVARIABLES] = ACTIONS(26),
    [anon_sym_REPEATINGDATA] = ACTIONS(26),
    [anon_sym_REPORT] = ACTIONS(26),
    [anon_sym_REPOSITORYATTRIBUTES] = ACTIONS(26),
    [anon_sym_REPOSITORYCONNECT] = ACTIONS(26),
    [anon_sym_REPOSITORYCOPY] = ACTIONS(26),
    [anon_sym_REREAD] = ACTIONS(26),
    [anon_sym_RESPONSERATE] = ACTIONS(26),
    [anon_sym_RESTORE] = ACTIONS(26),
    [anon_sym_RMV] = ACTIONS(26),
    [anon_sym_ROC] = ACTIONS(28),
    [anon_sym_ROCANALYSIS] = ACTIONS(26),
    [anon_sym_SAMPLE] = ACTIONS(26),
    [anon_sym_SAVE] = ACTIONS(28),
    [anon_sym_SAVECODEPAGE] = ACTIONS(26),
    [anon_sym_SAVEDATACOLLECTION] = ACTIONS(26),
    [anon_sym_SAVEMODEL] = ACTIONS(26),
    [anon_sym_SAVETRANSLATE] = ACTIONS(26),
    [anon_sym_SCRIPT] = ACTIONS(26),
    [anon_sym_SEASON] = ACTIONS(26),
    [anon_sym_SELECTIF] = ACTIONS(26),
    [anon_sym_SELECTPRED] = ACTIONS(26),
    [anon_sym_SET] = ACTIONS(26),
    [anon_sym_SHIFTVALUES] = ACTIONS(26),
    [anon_sym_SHOW] = ACTIONS(26),
    [anon_sym_SIMPLAN] = ACTIONS(26),
    [anon_sym_SIMPREPBEGIN] = ACTIONS(26),
    [anon_sym_SIMRUN] = ACTIONS(26),
    [anon_sym_SORT] = ACTIONS(28),
    [anon_sym_SORTCASES] = ACTIONS(26),
    [anon_sym_SORTVARIABLES] = ACTIONS(26),
    [anon_sym_SPATIALASSOCIATIONRULES] = ACTIONS(26),
    [anon_sym_SPATIALMAPSPEC] = ACTIONS(26),
    [anon_sym_SPATIALTEMPORALPREDICTION] = ACTIONS(26),
    [anon_sym_SPCHART] = ACTIONS(26),
    [anon_sym_SPECTRA] = ACTIONS(26),
    [anon_sym_SPLITFILE] = ACTIONS(26),
    [anon_sym_STARJOIN] = ACTIONS(26),
    [anon_sym_STRING] = ACTIONS(26),
    [anon_sym_SUBTITLE] = ACTIONS(26),
    [anon_sym_SUMMARIZE] = ACTIONS(26),
    [anon_sym_SURVIVAL] = ACTIONS(26),
    [anon_sym_SYSFILEINFO] = ACTIONS(26),
    [anon_sym_T_DASHTEST] = ACTIONS(26),
    [anon_sym_TCMANALYSIS] = ACTIONS(26),
    [anon_sym_TCMAPPLY] = ACTIONS(26),
    [anon_sym_TCMMODEL] = ACTIONS(26),
    [anon_sym_TDISPLAY] = ACTIONS(26),
    [anon_sym_TEMPORARY] = ACTIONS(26),
    [anon_sym_TIMEPROGRAM] = ACTIONS(26),
    [anon_sym_TITLE] = ACTIONS(26),
    [anon_sym_TMSBEGIN] = ACTIONS(26),
    [anon_sym_TMSEND] = ACTIONS(26),
    [anon_sym_TMSIMPORT] = ACTIONS(26),
    [anon_sym_TMSMERGE] = ACTIONS(26),
    [anon_sym_TREE] = ACTIONS(26),
    [anon_sym_TSAPPLY] = ACTIONS(26),
    [anon_sym_TSET] = ACTIONS(26),
    [anon_sym_TSHOW] = ACTIONS(26),
    [anon_sym_TSMODEL] = ACTIONS(26),
    [anon_sym_TSPLOT] = ACTIONS(26),
    [anon_sym_TWOSTEPCLUSTER] = ACTIONS(26),
    [anon_sym_UNIANOVA] = ACTIONS(26),
    [anon_sym_UPDATE] = ACTIONS(26),
    [anon_sym_USE] = ACTIONS(26),
    [anon_sym_VALIDATEDATA] = ACTIONS(26),
    [anon_sym_VALUELABELS] = ACTIONS(26),
    [anon_sym_VARCOMP] = ACTIONS(26),
    [anon_sym_VARIABLEALIGNMENT] = ACTIONS(26),
    [anon_sym_VARIABLEATTRIBUTE] = ACTIONS(26),
    [anon_sym_VARIABLELABELS] = ACTIONS(26),
    [anon_sym_VARIABLELEVEL] = ACTIONS(26),
    [anon_sym_VARIABLEROLE] = ACTIONS(26),
    [anon_sym_VARIABLEWIDTH] = ACTIONS(26),
    [anon_sym_VARSTOCASES] = ACTIONS(26),
    [anon_sym_VECTOR] = ACTIONS(26),
    [anon_sym_VERIFY] = ACTIONS(26),
    [anon_sym_WEIGHT] = ACTIONS(28),
    [anon_sym_WEIGHTEDKAPPA] = ACTIONS(26),
    [anon_sym_WLS] = ACTIONS(26),
    [anon_sym_WRITE] = ACTIONS(28),
    [anon_sym_WRITEFORMATS] = ACTIONS(26),
    [anon_sym_XGRAPH] = ACTIONS(26),
    [anon_sym_XSAVE] = ACTIONS(26),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BEGINPROGRAM] = ACTIONS(26),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_2SLS] = ACTIONS(30),
    [anon_sym_ACF] = ACTIONS(30),
    [anon_sym_ADDDOCUMENT] = ACTIONS(30),
    [anon_sym_ADDFILES] = ACTIONS(30),
    [anon_sym_ADDVALUELABELS] = ACTIONS(30),
    [anon_sym_ADP] = ACTIONS(30),
    [anon_sym_AGGREGATE] = ACTIONS(30),
    [anon_sym_AIM] = ACTIONS(30),
    [anon_sym_ALSCAL] = ACTIONS(30),
    [anon_sym_ALTERTYPE] = ACTIONS(30),
    [anon_sym_ANACOR] = ACTIONS(30),
    [anon_sym_ANOVA] = ACTIONS(30),
    [anon_sym_APPLYDICTIONARY] = ACTIONS(30),
    [anon_sym_AREG] = ACTIONS(30),
    [anon_sym_ARIMA] = ACTIONS(30),
    [anon_sym_AUTORECODE] = ACTIONS(30),
    [anon_sym_BAYESANOVA] = ACTIONS(30),
    [anon_sym_BAYESCORRELATION] = ACTIONS(30),
    [anon_sym_BAYESINDEPENDENT] = ACTIONS(30),
    [anon_sym_BAYESLOGLINEAR] = ACTIONS(30),
    [anon_sym_BAYESONESAMPLE] = ACTIONS(30),
    [anon_sym_BAYESREGRESSION] = ACTIONS(30),
    [anon_sym_BAYESRELATED] = ACTIONS(30),
    [anon_sym_BAYESREPEATED] = ACTIONS(30),
    [anon_sym_BEGINDATA] = ACTIONS(30),
    [anon_sym_BEGINEXPR] = ACTIONS(32),
    [anon_sym_BEGINEXPR_DASHENDEXPR] = ACTIONS(30),
    [anon_sym_BEGINGPL_DASHENDGPL] = ACTIONS(30),
    [anon_sym_BOOTSTRAP] = ACTIONS(30),
    [anon_sym_BREAK] = ACTIONS(30),
    [anon_sym_CACHE] = ACTIONS(30),
    [anon_sym_CASEPLOT] = ACTIONS(30),
    [anon_sym_CASESTOVARS] = ACTIONS(30),
    [anon_sym_CATREG] = ACTIONS(30),
    [anon_sym_CD] = ACTIONS(30),
    [anon_sym_CLABELS] = ACTIONS(30),
    [anon_sym_CLEARTIMEPROGRAM] = ACTIONS(30),
    [anon_sym_CLEARTRANSFORMATIONS] = ACTIONS(30),
    [anon_sym_CLUSTER] = ACTIONS(30),
    [anon_sym_CNLR] = ACTIONS(30),
    [anon_sym_CODEBOOK] = ACTIONS(30),
    [anon_sym_COMMENT] = ACTIONS(32),
    [anon_sym_COMPAREDATASETS] = ACTIONS(30),
    [anon_sym_COMPUTE] = ACTIONS(30),
    [anon_sym_CONJOINT] = ACTIONS(30),
    [anon_sym_CONSTRAINEDFUNCTIONS] = ACTIONS(30),
    [anon_sym_CORRELATIONS] = ACTIONS(30),
    [anon_sym_CORRESPONDENCE] = ACTIONS(30),
    [anon_sym_COUNT] = ACTIONS(30),
    [anon_sym_COXREG] = ACTIONS(30),
    [anon_sym_CREATE] = ACTIONS(30),
    [anon_sym_CROSSTABS] = ACTIONS(30),
    [anon_sym_CSCOXREG] = ACTIONS(30),
    [anon_sym_CSDESCRIPTIVES] = ACTIONS(30),
    [anon_sym_CSGLM] = ACTIONS(30),
    [anon_sym_CSLOGISTIC] = ACTIONS(30),
    [anon_sym_CSORDINAL] = ACTIONS(30),
    [anon_sym_CSPLAN] = ACTIONS(30),
    [anon_sym_CSSELECT] = ACTIONS(30),
    [anon_sym_CSTABULATE] = ACTIONS(30),
    [anon_sym_CTABLES] = ACTIONS(30),
    [anon_sym_CURVEFIT] = ACTIONS(30),
    [anon_sym_DATALIST] = ACTIONS(30),
    [anon_sym_DATAFILEATTRIBUTE] = ACTIONS(30),
    [anon_sym_DATASETACTIVATE] = ACTIONS(30),
    [anon_sym_DATASETCLOSE] = ACTIONS(30),
    [anon_sym_DATASETCOPY] = ACTIONS(30),
    [anon_sym_DATASETDECLARE] = ACTIONS(30),
    [anon_sym_DATASETDISPLAY] = ACTIONS(30),
    [anon_sym_DATASETNAME] = ACTIONS(30),
    [anon_sym_DATE] = ACTIONS(30),
    [anon_sym_DEFINE] = ACTIONS(30),
    [anon_sym_DELETEVARIABLES] = ACTIONS(30),
    [anon_sym_DERIVATIVES] = ACTIONS(30),
    [anon_sym_DESCRIPTIVES] = ACTIONS(30),
    [anon_sym_DETECTANOMALY] = ACTIONS(30),
    [anon_sym_DISCRIMINANT] = ACTIONS(30),
    [anon_sym_DISPLAY] = ACTIONS(30),
    [anon_sym_DOIF] = ACTIONS(30),
    [anon_sym_DOREPEAT] = ACTIONS(30),
    [anon_sym_DOCUMENT] = ACTIONS(30),
    [anon_sym_DROPDOCUMENTS] = ACTIONS(30),
    [anon_sym_ECHO] = ACTIONS(30),
    [anon_sym_ENDCASE] = ACTIONS(30),
    [anon_sym_ENDFILE] = ACTIONS(30),
    [anon_sym_ERASE] = ACTIONS(30),
    [anon_sym_EXAMINE] = ACTIONS(30),
    [anon_sym_EXECUTE] = ACTIONS(30),
    [anon_sym_EXPORT] = ACTIONS(30),
    [anon_sym_EXSMOOTH] = ACTIONS(30),
    [anon_sym_EXTENSION] = ACTIONS(30),
    [anon_sym_FACTOR] = ACTIONS(30),
    [anon_sym_FILEHANDLE] = ACTIONS(30),
    [anon_sym_FILELABEL] = ACTIONS(30),
    [anon_sym_FILETYPE] = ACTIONS(30),
    [anon_sym_FILTER] = ACTIONS(30),
    [anon_sym_FINISH] = ACTIONS(30),
    [anon_sym_FIT] = ACTIONS(30),
    [anon_sym_FLEISSMULTIRATERKAPPA] = ACTIONS(30),
    [anon_sym_FLIP] = ACTIONS(30),
    [anon_sym_FORMATS] = ACTIONS(30),
    [anon_sym_FREQUENCIES] = ACTIONS(30),
    [anon_sym_GENLIN] = ACTIONS(32),
    [anon_sym_GENLINMIXED] = ACTIONS(30),
    [anon_sym_GENLOG] = ACTIONS(30),
    [anon_sym_GET] = ACTIONS(32),
    [anon_sym_GETCAPTURE] = ACTIONS(30),
    [anon_sym_GETDATA] = ACTIONS(30),
    [anon_sym_GETSAS] = ACTIONS(30),
    [anon_sym_GETSTATA] = ACTIONS(30),
    [anon_sym_GETTRANSLATE] = ACTIONS(30),
    [anon_sym_GETCOGNOS] = ACTIONS(30),
    [anon_sym_GETTM1] = ACTIONS(30),
    [anon_sym_GGRAPH] = ACTIONS(30),
    [anon_sym_GLM] = ACTIONS(30),
    [anon_sym_GRAPH] = ACTIONS(30),
    [anon_sym_HILOGLINEAR] = ACTIONS(30),
    [anon_sym_HOMALS] = ACTIONS(30),
    [anon_sym_HOST] = ACTIONS(30),
    [anon_sym_IBREAK] = ACTIONS(30),
    [anon_sym_IDO] = ACTIONS(32),
    [anon_sym_IDOEND] = ACTIONS(30),
    [anon_sym_IGRAPH] = ACTIONS(30),
    [anon_sym_IIF] = ACTIONS(32),
    [anon_sym_IIFEND] = ACTIONS(30),
    [anon_sym_ILET] = ACTIONS(30),
    [anon_sym_IMPORT] = ACTIONS(30),
    [anon_sym_INCLUDE] = ACTIONS(30),
    [anon_sym_INPUTPROGRAM] = ACTIONS(30),
    [anon_sym_INSERT] = ACTIONS(32),
    [anon_sym_INSERTEXEC] = ACTIONS(30),
    [anon_sym_INSERTHIDDDEN] = ACTIONS(30),
    [anon_sym_INSERTHIDDEN] = ACTIONS(30),
    [anon_sym_KEYEDDATALIST] = ACTIONS(30),
    [anon_sym_KM] = ACTIONS(30),
    [anon_sym_KNN] = ACTIONS(30),
    [anon_sym_LINEAR] = ACTIONS(30),
    [anon_sym_LIST] = ACTIONS(30),
    [anon_sym_LOGISTICREGRESSION] = ACTIONS(30),
    [anon_sym_LOGLINEAR] = ACTIONS(30),
    [anon_sym_LOOP] = ACTIONS(30),
    [anon_sym_MANOVA] = ACTIONS(30),
    [anon_sym_MATCHFILES] = ACTIONS(30),
    [anon_sym_MATRIX] = ACTIONS(32),
    [anon_sym_MATRIXDATA] = ACTIONS(30),
    [anon_sym_MCONVERT] = ACTIONS(30),
    [anon_sym_MEANS] = ACTIONS(30),
    [anon_sym_MISSINGVALUES] = ACTIONS(30),
    [anon_sym_MIXED] = ACTIONS(30),
    [anon_sym_MLP] = ACTIONS(30),
    [anon_sym_MODELCLOSE] = ACTIONS(30),
    [anon_sym_MODELHANDLE] = ACTIONS(30),
    [anon_sym_MODELLIST] = ACTIONS(30),
    [anon_sym_MODELNAME] = ACTIONS(30),
    [anon_sym_MODELPROGRAM] = ACTIONS(30),
    [anon_sym_MRSETS] = ACTIONS(30),
    [anon_sym_MULTRESPONSE] = ACTIONS(30),
    [anon_sym_MULTIPLECORRESPONDENCE] = ACTIONS(30),
    [anon_sym_MULTIPLEIMPUTATION] = ACTIONS(30),
    [anon_sym_MVA] = ACTIONS(30),
    [anon_sym_NOFCASES] = ACTIONS(30),
    [anon_sym_NAIVEBAYES] = ACTIONS(30),
    [anon_sym_NEWFILE] = ACTIONS(30),
    [anon_sym_NLR] = ACTIONS(30),
    [anon_sym_NOMREG] = ACTIONS(30),
    [anon_sym_NONPARCORR] = ACTIONS(30),
    [anon_sym_NPARTESTS] = ACTIONS(30),
    [anon_sym_NPTESTS] = ACTIONS(30),
    [anon_sym_NUMERIC] = ACTIONS(30),
    [anon_sym_OLAPCUBES] = ACTIONS(30),
    [anon_sym_OMS] = ACTIONS(32),
    [anon_sym_OMSEND] = ACTIONS(30),
    [anon_sym_OMSINFO] = ACTIONS(30),
    [anon_sym_OMSLOG] = ACTIONS(30),
    [anon_sym_ONEWAY] = ACTIONS(30),
    [anon_sym_OPTIMALBINNING] = ACTIONS(30),
    [anon_sym_ORTHOPLAN] = ACTIONS(30),
    [anon_sym_OUTPUTMODIFY] = ACTIONS(30),
    [anon_sym_OUTPUTNAME] = ACTIONS(30),
    [anon_sym_OUTPUTNEW] = ACTIONS(30),
    [anon_sym_OUTPUTOPEN] = ACTIONS(30),
    [anon_sym_OUTPUTSAVE] = ACTIONS(30),
    [anon_sym_OVERALS] = ACTIONS(30),
    [anon_sym_PACF] = ACTIONS(30),
    [anon_sym_PARTIALCORR] = ACTIONS(30),
    [anon_sym_PERMISSIONS] = ACTIONS(30),
    [anon_sym_PLANCARDS] = ACTIONS(30),
    [anon_sym_PLS] = ACTIONS(30),
    [anon_sym_PLUM] = ACTIONS(30),
    [anon_sym_POINT] = ACTIONS(30),
    [anon_sym_POWERMEANSINDEPENDENT] = ACTIONS(30),
    [anon_sym_POWERMEANSONESAMPLE] = ACTIONS(30),
    [anon_sym_POWERMEANSRELATED] = ACTIONS(30),
    [anon_sym_POWERONEWAYANOVA] = ACTIONS(30),
    [anon_sym_POWERPARTIALCORR] = ACTIONS(30),
    [anon_sym_POWERPEARSONONESAMPLE] = ACTIONS(30),
    [anon_sym_POWERPROPORTIONSINDEPENDENT] = ACTIONS(30),
    [anon_sym_POWERPROPORTIONSONESAMPLE] = ACTIONS(30),
    [anon_sym_POWERPROPORTIONSRELATED] = ACTIONS(30),
    [anon_sym_POWERSPEARMANONESAMPLE] = ACTIONS(30),
    [anon_sym_POWERUNIVARIATELINEAR] = ACTIONS(30),
    [anon_sym_PPLOT] = ACTIONS(30),
    [anon_sym_PREDICT] = ACTIONS(30),
    [anon_sym_PREFSCAL] = ACTIONS(30),
    [anon_sym_PRESERVE] = ACTIONS(30),
    [anon_sym_PRINCALS] = ACTIONS(30),
    [anon_sym_PRINT] = ACTIONS(32),
    [anon_sym_PRINTEJECT] = ACTIONS(30),
    [anon_sym_PRINTFORMATS] = ACTIONS(30),
    [anon_sym_PRINTSPACE] = ACTIONS(30),
    [anon_sym_PROBIT] = ACTIONS(30),
    [anon_sym_PROCEDUREOUTPUT] = ACTIONS(30),
    [anon_sym_PROPORTIONS] = ACTIONS(30),
    [anon_sym_PROXIMITIES] = ACTIONS(30),
    [anon_sym_PROXSCAL] = ACTIONS(30),
    [anon_sym_QUANTILEREGRESSION] = ACTIONS(30),
    [anon_sym_QUICKCLUSTER] = ACTIONS(30),
    [anon_sym_RANK] = ACTIONS(30),
    [anon_sym_RATIOSTATISTICS] = ACTIONS(30),
    [anon_sym_RBF] = ACTIONS(30),
    [anon_sym_READMODEL] = ACTIONS(30),
    [anon_sym_RECODE] = ACTIONS(30),
    [anon_sym_RECORDTYPE] = ACTIONS(30),
    [anon_sym_REGRESSION] = ACTIONS(30),
    [anon_sym_RELIABILITY] = ACTIONS(30),
    [anon_sym_RENAME] = ACTIONS(32),
    [anon_sym_RENAMEVARIABLES] = ACTIONS(30),
    [anon_sym_REPEATINGDATA] = ACTIONS(30),
    [anon_sym_REPORT] = ACTIONS(30),
    [anon_sym_REPOSITORYATTRIBUTES] = ACTIONS(30),
    [anon_sym_REPOSITORYCONNECT] = ACTIONS(30),
    [anon_sym_REPOSITORYCOPY] = ACTIONS(30),
    [anon_sym_REREAD] = ACTIONS(30),
    [anon_sym_RESPONSERATE] = ACTIONS(30),
    [anon_sym_RESTORE] = ACTIONS(30),
    [anon_sym_RMV] = ACTIONS(30),
    [anon_sym_ROC] = ACTIONS(32),
    [anon_sym_ROCANALYSIS] = ACTIONS(30),
    [anon_sym_SAMPLE] = ACTIONS(30),
    [anon_sym_SAVE] = ACTIONS(32),
    [anon_sym_SAVECODEPAGE] = ACTIONS(30),
    [anon_sym_SAVEDATACOLLECTION] = ACTIONS(30),
    [anon_sym_SAVEMODEL] = ACTIONS(30),
    [anon_sym_SAVETRANSLATE] = ACTIONS(30),
    [anon_sym_SCRIPT] = ACTIONS(30),
    [anon_sym_SEASON] = ACTIONS(30),
    [anon_sym_SELECTIF] = ACTIONS(30),
    [anon_sym_SELECTPRED] = ACTIONS(30),
    [anon_sym_SET] = ACTIONS(30),
    [anon_sym_SHIFTVALUES] = ACTIONS(30),
    [anon_sym_SHOW] = ACTIONS(30),
    [anon_sym_SIMPLAN] = ACTIONS(30),
    [anon_sym_SIMPREPBEGIN] = ACTIONS(30),
    [anon_sym_SIMRUN] = ACTIONS(30),
    [anon_sym_SORT] = ACTIONS(32),
    [anon_sym_SORTCASES] = ACTIONS(30),
    [anon_sym_SORTVARIABLES] = ACTIONS(30),
    [anon_sym_SPATIALASSOCIATIONRULES] = ACTIONS(30),
    [anon_sym_SPATIALMAPSPEC] = ACTIONS(30),
    [anon_sym_SPATIALTEMPORALPREDICTION] = ACTIONS(30),
    [anon_sym_SPCHART] = ACTIONS(30),
    [anon_sym_SPECTRA] = ACTIONS(30),
    [anon_sym_SPLITFILE] = ACTIONS(30),
    [anon_sym_STARJOIN] = ACTIONS(30),
    [anon_sym_STRING] = ACTIONS(30),
    [anon_sym_SUBTITLE] = ACTIONS(30),
    [anon_sym_SUMMARIZE] = ACTIONS(30),
    [anon_sym_SURVIVAL] = ACTIONS(30),
    [anon_sym_SYSFILEINFO] = ACTIONS(30),
    [anon_sym_T_DASHTEST] = ACTIONS(30),
    [anon_sym_TCMANALYSIS] = ACTIONS(30),
    [anon_sym_TCMAPPLY] = ACTIONS(30),
    [anon_sym_TCMMODEL] = ACTIONS(30),
    [anon_sym_TDISPLAY] = ACTIONS(30),
    [anon_sym_TEMPORARY] = ACTIONS(30),
    [anon_sym_TIMEPROGRAM] = ACTIONS(30),
    [anon_sym_TITLE] = ACTIONS(30),
    [anon_sym_TMSBEGIN] = ACTIONS(30),
    [anon_sym_TMSEND] = ACTIONS(30),
    [anon_sym_TMSIMPORT] = ACTIONS(30),
    [anon_sym_TMSMERGE] = ACTIONS(30),
    [anon_sym_TREE] = ACTIONS(30),
    [anon_sym_TSAPPLY] = ACTIONS(30),
    [anon_sym_TSET] = ACTIONS(30),
    [anon_sym_TSHOW] = ACTIONS(30),
    [anon_sym_TSMODEL] = ACTIONS(30),
    [anon_sym_TSPLOT] = ACTIONS(30),
    [anon_sym_TWOSTEPCLUSTER] = ACTIONS(30),
    [anon_sym_UNIANOVA] = ACTIONS(30),
    [anon_sym_UPDATE] = ACTIONS(30),
    [anon_sym_USE] = ACTIONS(30),
    [anon_sym_VALIDATEDATA] = ACTIONS(30),
    [anon_sym_VALUELABELS] = ACTIONS(30),
    [anon_sym_VARCOMP] = ACTIONS(30),
    [anon_sym_VARIABLEALIGNMENT] = ACTIONS(30),
    [anon_sym_VARIABLEATTRIBUTE] = ACTIONS(30),
    [anon_sym_VARIABLELABELS] = ACTIONS(30),
    [anon_sym_VARIABLELEVEL] = ACTIONS(30),
    [anon_sym_VARIABLEROLE] = ACTIONS(30),
    [anon_sym_VARIABLEWIDTH] = ACTIONS(30),
    [anon_sym_VARSTOCASES] = ACTIONS(30),
    [anon_sym_VECTOR] = ACTIONS(30),
    [anon_sym_VERIFY] = ACTIONS(30),
    [anon_sym_WEIGHT] = ACTIONS(32),
    [anon_sym_WEIGHTEDKAPPA] = ACTIONS(30),
    [anon_sym_WLS] = ACTIONS(30),
    [anon_sym_WRITE] = ACTIONS(32),
    [anon_sym_WRITEFORMATS] = ACTIONS(30),
    [anon_sym_XGRAPH] = ACTIONS(30),
    [anon_sym_XSAVE] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BEGINPROGRAM] = ACTIONS(30),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_2SLS] = ACTIONS(34),
    [anon_sym_ACF] = ACTIONS(34),
    [anon_sym_ADDDOCUMENT] = ACTIONS(34),
    [anon_sym_ADDFILES] = ACTIONS(34),
    [anon_sym_ADDVALUELABELS] = ACTIONS(34),
    [anon_sym_ADP] = ACTIONS(34),
    [anon_sym_AGGREGATE] = ACTIONS(34),
    [anon_sym_AIM] = ACTIONS(34),
    [anon_sym_ALSCAL] = ACTIONS(34),
    [anon_sym_ALTERTYPE] = ACTIONS(34),
    [anon_sym_ANACOR] = ACTIONS(34),
    [anon_sym_ANOVA] = ACTIONS(34),
    [anon_sym_APPLYDICTIONARY] = ACTIONS(34),
    [anon_sym_AREG] = ACTIONS(34),
    [anon_sym_ARIMA] = ACTIONS(34),
    [anon_sym_AUTORECODE] = ACTIONS(34),
    [anon_sym_BAYESANOVA] = ACTIONS(34),
    [anon_sym_BAYESCORRELATION] = ACTIONS(34),
    [anon_sym_BAYESINDEPENDENT] = ACTIONS(34),
    [anon_sym_BAYESLOGLINEAR] = ACTIONS(34),
    [anon_sym_BAYESONESAMPLE] = ACTIONS(34),
    [anon_sym_BAYESREGRESSION] = ACTIONS(34),
    [anon_sym_BAYESRELATED] = ACTIONS(34),
    [anon_sym_BAYESREPEATED] = ACTIONS(34),
    [anon_sym_BEGINDATA] = ACTIONS(34),
    [anon_sym_BEGINEXPR] = ACTIONS(36),
    [anon_sym_BEGINEXPR_DASHENDEXPR] = ACTIONS(34),
    [anon_sym_BEGINGPL_DASHENDGPL] = ACTIONS(34),
    [anon_sym_BOOTSTRAP] = ACTIONS(34),
    [anon_sym_BREAK] = ACTIONS(34),
    [anon_sym_CACHE] = ACTIONS(34),
    [anon_sym_CASEPLOT] = ACTIONS(34),
    [anon_sym_CASESTOVARS] = ACTIONS(34),
    [anon_sym_CATREG] = ACTIONS(34),
    [anon_sym_CD] = ACTIONS(34),
    [anon_sym_CLABELS] = ACTIONS(34),
    [anon_sym_CLEARTIMEPROGRAM] = ACTIONS(34),
    [anon_sym_CLEARTRANSFORMATIONS] = ACTIONS(34),
    [anon_sym_CLUSTER] = ACTIONS(34),
    [anon_sym_CNLR] = ACTIONS(34),
    [anon_sym_CODEBOOK] = ACTIONS(34),
    [anon_sym_COMMENT] = ACTIONS(36),
    [anon_sym_COMPAREDATASETS] = ACTIONS(34),
    [anon_sym_COMPUTE] = ACTIONS(34),
    [anon_sym_CONJOINT] = ACTIONS(34),
    [anon_sym_CONSTRAINEDFUNCTIONS] = ACTIONS(34),
    [anon_sym_CORRELATIONS] = ACTIONS(34),
    [anon_sym_CORRESPONDENCE] = ACTIONS(34),
    [anon_sym_COUNT] = ACTIONS(34),
    [anon_sym_COXREG] = ACTIONS(34),
    [anon_sym_CREATE] = ACTIONS(34),
    [anon_sym_CROSSTABS] = ACTIONS(34),
    [anon_sym_CSCOXREG] = ACTIONS(34),
    [anon_sym_CSDESCRIPTIVES] = ACTIONS(34),
    [anon_sym_CSGLM] = ACTIONS(34),
    [anon_sym_CSLOGISTIC] = ACTIONS(34),
    [anon_sym_CSORDINAL] = ACTIONS(34),
    [anon_sym_CSPLAN] = ACTIONS(34),
    [anon_sym_CSSELECT] = ACTIONS(34),
    [anon_sym_CSTABULATE] = ACTIONS(34),
    [anon_sym_CTABLES] = ACTIONS(34),
    [anon_sym_CURVEFIT] = ACTIONS(34),
    [anon_sym_DATALIST] = ACTIONS(34),
    [anon_sym_DATAFILEATTRIBUTE] = ACTIONS(34),
    [anon_sym_DATASETACTIVATE] = ACTIONS(34),
    [anon_sym_DATASETCLOSE] = ACTIONS(34),
    [anon_sym_DATASETCOPY] = ACTIONS(34),
    [anon_sym_DATASETDECLARE] = ACTIONS(34),
    [anon_sym_DATASETDISPLAY] = ACTIONS(34),
    [anon_sym_DATASETNAME] = ACTIONS(34),
    [anon_sym_DATE] = ACTIONS(34),
    [anon_sym_DEFINE] = ACTIONS(34),
    [anon_sym_DELETEVARIABLES] = ACTIONS(34),
    [anon_sym_DERIVATIVES] = ACTIONS(34),
    [anon_sym_DESCRIPTIVES] = ACTIONS(34),
    [anon_sym_DETECTANOMALY] = ACTIONS(34),
    [anon_sym_DISCRIMINANT] = ACTIONS(34),
    [anon_sym_DISPLAY] = ACTIONS(34),
    [anon_sym_DOIF] = ACTIONS(34),
    [anon_sym_DOREPEAT] = ACTIONS(34),
    [anon_sym_DOCUMENT] = ACTIONS(34),
    [anon_sym_DROPDOCUMENTS] = ACTIONS(34),
    [anon_sym_ECHO] = ACTIONS(34),
    [anon_sym_ENDCASE] = ACTIONS(34),
    [anon_sym_ENDFILE] = ACTIONS(34),
    [anon_sym_ERASE] = ACTIONS(34),
    [anon_sym_EXAMINE] = ACTIONS(34),
    [anon_sym_EXECUTE] = ACTIONS(34),
    [anon_sym_EXPORT] = ACTIONS(34),
    [anon_sym_EXSMOOTH] = ACTIONS(34),
    [anon_sym_EXTENSION] = ACTIONS(34),
    [anon_sym_FACTOR] = ACTIONS(34),
    [anon_sym_FILEHANDLE] = ACTIONS(34),
    [anon_sym_FILELABEL] = ACTIONS(34),
    [anon_sym_FILETYPE] = ACTIONS(34),
    [anon_sym_FILTER] = ACTIONS(34),
    [anon_sym_FINISH] = ACTIONS(34),
    [anon_sym_FIT] = ACTIONS(34),
    [anon_sym_FLEISSMULTIRATERKAPPA] = ACTIONS(34),
    [anon_sym_FLIP] = ACTIONS(34),
    [anon_sym_FORMATS] = ACTIONS(34),
    [anon_sym_FREQUENCIES] = ACTIONS(34),
    [anon_sym_GENLIN] = ACTIONS(36),
    [anon_sym_GENLINMIXED] = ACTIONS(34),
    [anon_sym_GENLOG] = ACTIONS(34),
    [anon_sym_GET] = ACTIONS(36),
    [anon_sym_GETCAPTURE] = ACTIONS(34),
    [anon_sym_GETDATA] = ACTIONS(34),
    [anon_sym_GETSAS] = ACTIONS(34),
    [anon_sym_GETSTATA] = ACTIONS(34),
    [anon_sym_GETTRANSLATE] = ACTIONS(34),
    [anon_sym_GETCOGNOS] = ACTIONS(34),
    [anon_sym_GETTM1] = ACTIONS(34),
    [anon_sym_GGRAPH] = ACTIONS(34),
    [anon_sym_GLM] = ACTIONS(34),
    [anon_sym_GRAPH] = ACTIONS(34),
    [anon_sym_HILOGLINEAR] = ACTIONS(34),
    [anon_sym_HOMALS] = ACTIONS(34),
    [anon_sym_HOST] = ACTIONS(34),
    [anon_sym_IBREAK] = ACTIONS(34),
    [anon_sym_IDO] = ACTIONS(36),
    [anon_sym_IDOEND] = ACTIONS(34),
    [anon_sym_IGRAPH] = ACTIONS(34),
    [anon_sym_IIF] = ACTIONS(36),
    [anon_sym_IIFEND] = ACTIONS(34),
    [anon_sym_ILET] = ACTIONS(34),
    [anon_sym_IMPORT] = ACTIONS(34),
    [anon_sym_INCLUDE] = ACTIONS(34),
    [anon_sym_INPUTPROGRAM] = ACTIONS(34),
    [anon_sym_INSERT] = ACTIONS(36),
    [anon_sym_INSERTEXEC] = ACTIONS(34),
    [anon_sym_INSERTHIDDDEN] = ACTIONS(34),
    [anon_sym_INSERTHIDDEN] = ACTIONS(34),
    [anon_sym_KEYEDDATALIST] = ACTIONS(34),
    [anon_sym_KM] = ACTIONS(34),
    [anon_sym_KNN] = ACTIONS(34),
    [anon_sym_LINEAR] = ACTIONS(34),
    [anon_sym_LIST] = ACTIONS(34),
    [anon_sym_LOGISTICREGRESSION] = ACTIONS(34),
    [anon_sym_LOGLINEAR] = ACTIONS(34),
    [anon_sym_LOOP] = ACTIONS(34),
    [anon_sym_MANOVA] = ACTIONS(34),
    [anon_sym_MATCHFILES] = ACTIONS(34),
    [anon_sym_MATRIX] = ACTIONS(36),
    [anon_sym_MATRIXDATA] = ACTIONS(34),
    [anon_sym_MCONVERT] = ACTIONS(34),
    [anon_sym_MEANS] = ACTIONS(34),
    [anon_sym_MISSINGVALUES] = ACTIONS(34),
    [anon_sym_MIXED] = ACTIONS(34),
    [anon_sym_MLP] = ACTIONS(34),
    [anon_sym_MODELCLOSE] = ACTIONS(34),
    [anon_sym_MODELHANDLE] = ACTIONS(34),
    [anon_sym_MODELLIST] = ACTIONS(34),
    [anon_sym_MODELNAME] = ACTIONS(34),
    [anon_sym_MODELPROGRAM] = ACTIONS(34),
    [anon_sym_MRSETS] = ACTIONS(34),
    [anon_sym_MULTRESPONSE] = ACTIONS(34),
    [anon_sym_MULTIPLECORRESPONDENCE] = ACTIONS(34),
    [anon_sym_MULTIPLEIMPUTATION] = ACTIONS(34),
    [anon_sym_MVA] = ACTIONS(34),
    [anon_sym_NOFCASES] = ACTIONS(34),
    [anon_sym_NAIVEBAYES] = ACTIONS(34),
    [anon_sym_NEWFILE] = ACTIONS(34),
    [anon_sym_NLR] = ACTIONS(34),
    [anon_sym_NOMREG] = ACTIONS(34),
    [anon_sym_NONPARCORR] = ACTIONS(34),
    [anon_sym_NPARTESTS] = ACTIONS(34),
    [anon_sym_NPTESTS] = ACTIONS(34),
    [anon_sym_NUMERIC] = ACTIONS(34),
    [anon_sym_OLAPCUBES] = ACTIONS(34),
    [anon_sym_OMS] = ACTIONS(36),
    [anon_sym_OMSEND] = ACTIONS(34),
    [anon_sym_OMSINFO] = ACTIONS(34),
    [anon_sym_OMSLOG] = ACTIONS(34),
    [anon_sym_ONEWAY] = ACTIONS(34),
    [anon_sym_OPTIMALBINNING] = ACTIONS(34),
    [anon_sym_ORTHOPLAN] = ACTIONS(34),
    [anon_sym_OUTPUTMODIFY] = ACTIONS(34),
    [anon_sym_OUTPUTNAME] = ACTIONS(34),
    [anon_sym_OUTPUTNEW] = ACTIONS(34),
    [anon_sym_OUTPUTOPEN] = ACTIONS(34),
    [anon_sym_OUTPUTSAVE] = ACTIONS(34),
    [anon_sym_OVERALS] = ACTIONS(34),
    [anon_sym_PACF] = ACTIONS(34),
    [anon_sym_PARTIALCORR] = ACTIONS(34),
    [anon_sym_PERMISSIONS] = ACTIONS(34),
    [anon_sym_PLANCARDS] = ACTIONS(34),
    [anon_sym_PLS] = ACTIONS(34),
    [anon_sym_PLUM] = ACTIONS(34),
    [anon_sym_POINT] = ACTIONS(34),
    [anon_sym_POWERMEANSINDEPENDENT] = ACTIONS(34),
    [anon_sym_POWERMEANSONESAMPLE] = ACTIONS(34),
    [anon_sym_POWERMEANSRELATED] = ACTIONS(34),
    [anon_sym_POWERONEWAYANOVA] = ACTIONS(34),
    [anon_sym_POWERPARTIALCORR] = ACTIONS(34),
    [anon_sym_POWERPEARSONONESAMPLE] = ACTIONS(34),
    [anon_sym_POWERPROPORTIONSINDEPENDENT] = ACTIONS(34),
    [anon_sym_POWERPROPORTIONSONESAMPLE] = ACTIONS(34),
    [anon_sym_POWERPROPORTIONSRELATED] = ACTIONS(34),
    [anon_sym_POWERSPEARMANONESAMPLE] = ACTIONS(34),
    [anon_sym_POWERUNIVARIATELINEAR] = ACTIONS(34),
    [anon_sym_PPLOT] = ACTIONS(34),
    [anon_sym_PREDICT] = ACTIONS(34),
    [anon_sym_PREFSCAL] = ACTIONS(34),
    [anon_sym_PRESERVE] = ACTIONS(34),
    [anon_sym_PRINCALS] = ACTIONS(34),
    [anon_sym_PRINT] = ACTIONS(36),
    [anon_sym_PRINTEJECT] = ACTIONS(34),
    [anon_sym_PRINTFORMATS] = ACTIONS(34),
    [anon_sym_PRINTSPACE] = ACTIONS(34),
    [anon_sym_PROBIT] = ACTIONS(34),
    [anon_sym_PROCEDUREOUTPUT] = ACTIONS(34),
    [anon_sym_PROPORTIONS] = ACTIONS(34),
    [anon_sym_PROXIMITIES] = ACTIONS(34),
    [anon_sym_PROXSCAL] = ACTIONS(34),
    [anon_sym_QUANTILEREGRESSION] = ACTIONS(34),
    [anon_sym_QUICKCLUSTER] = ACTIONS(34),
    [anon_sym_RANK] = ACTIONS(34),
    [anon_sym_RATIOSTATISTICS] = ACTIONS(34),
    [anon_sym_RBF] = ACTIONS(34),
    [anon_sym_READMODEL] = ACTIONS(34),
    [anon_sym_RECODE] = ACTIONS(34),
    [anon_sym_RECORDTYPE] = ACTIONS(34),
    [anon_sym_REGRESSION] = ACTIONS(34),
    [anon_sym_RELIABILITY] = ACTIONS(34),
    [anon_sym_RENAME] = ACTIONS(36),
    [anon_sym_RENAMEVARIABLES] = ACTIONS(34),
    [anon_sym_REPEATINGDATA] = ACTIONS(34),
    [anon_sym_REPORT] = ACTIONS(34),
    [anon_sym_REPOSITORYATTRIBUTES] = ACTIONS(34),
    [anon_sym_REPOSITORYCONNECT] = ACTIONS(34),
    [anon_sym_REPOSITORYCOPY] = ACTIONS(34),
    [anon_sym_REREAD] = ACTIONS(34),
    [anon_sym_RESPONSERATE] = ACTIONS(34),
    [anon_sym_RESTORE] = ACTIONS(34),
    [anon_sym_RMV] = ACTIONS(34),
    [anon_sym_ROC] = ACTIONS(36),
    [anon_sym_ROCANALYSIS] = ACTIONS(34),
    [anon_sym_SAMPLE] = ACTIONS(34),
    [anon_sym_SAVE] = ACTIONS(36),
    [anon_sym_SAVECODEPAGE] = ACTIONS(34),
    [anon_sym_SAVEDATACOLLECTION] = ACTIONS(34),
    [anon_sym_SAVEMODEL] = ACTIONS(34),
    [anon_sym_SAVETRANSLATE] = ACTIONS(34),
    [anon_sym_SCRIPT] = ACTIONS(34),
    [anon_sym_SEASON] = ACTIONS(34),
    [anon_sym_SELECTIF] = ACTIONS(34),
    [anon_sym_SELECTPRED] = ACTIONS(34),
    [anon_sym_SET] = ACTIONS(34),
    [anon_sym_SHIFTVALUES] = ACTIONS(34),
    [anon_sym_SHOW] = ACTIONS(34),
    [anon_sym_SIMPLAN] = ACTIONS(34),
    [anon_sym_SIMPREPBEGIN] = ACTIONS(34),
    [anon_sym_SIMRUN] = ACTIONS(34),
    [anon_sym_SORT] = ACTIONS(36),
    [anon_sym_SORTCASES] = ACTIONS(34),
    [anon_sym_SORTVARIABLES] = ACTIONS(34),
    [anon_sym_SPATIALASSOCIATIONRULES] = ACTIONS(34),
    [anon_sym_SPATIALMAPSPEC] = ACTIONS(34),
    [anon_sym_SPATIALTEMPORALPREDICTION] = ACTIONS(34),
    [anon_sym_SPCHART] = ACTIONS(34),
    [anon_sym_SPECTRA] = ACTIONS(34),
    [anon_sym_SPLITFILE] = ACTIONS(34),
    [anon_sym_STARJOIN] = ACTIONS(34),
    [anon_sym_STRING] = ACTIONS(34),
    [anon_sym_SUBTITLE] = ACTIONS(34),
    [anon_sym_SUMMARIZE] = ACTIONS(34),
    [anon_sym_SURVIVAL] = ACTIONS(34),
    [anon_sym_SYSFILEINFO] = ACTIONS(34),
    [anon_sym_T_DASHTEST] = ACTIONS(34),
    [anon_sym_TCMANALYSIS] = ACTIONS(34),
    [anon_sym_TCMAPPLY] = ACTIONS(34),
    [anon_sym_TCMMODEL] = ACTIONS(34),
    [anon_sym_TDISPLAY] = ACTIONS(34),
    [anon_sym_TEMPORARY] = ACTIONS(34),
    [anon_sym_TIMEPROGRAM] = ACTIONS(34),
    [anon_sym_TITLE] = ACTIONS(34),
    [anon_sym_TMSBEGIN] = ACTIONS(34),
    [anon_sym_TMSEND] = ACTIONS(34),
    [anon_sym_TMSIMPORT] = ACTIONS(34),
    [anon_sym_TMSMERGE] = ACTIONS(34),
    [anon_sym_TREE] = ACTIONS(34),
    [anon_sym_TSAPPLY] = ACTIONS(34),
    [anon_sym_TSET] = ACTIONS(34),
    [anon_sym_TSHOW] = ACTIONS(34),
    [anon_sym_TSMODEL] = ACTIONS(34),
    [anon_sym_TSPLOT] = ACTIONS(34),
    [anon_sym_TWOSTEPCLUSTER] = ACTIONS(34),
    [anon_sym_UNIANOVA] = ACTIONS(34),
    [anon_sym_UPDATE] = ACTIONS(34),
    [anon_sym_USE] = ACTIONS(34),
    [anon_sym_VALIDATEDATA] = ACTIONS(34),
    [anon_sym_VALUELABELS] = ACTIONS(34),
    [anon_sym_VARCOMP] = ACTIONS(34),
    [anon_sym_VARIABLEALIGNMENT] = ACTIONS(34),
    [anon_sym_VARIABLEATTRIBUTE] = ACTIONS(34),
    [anon_sym_VARIABLELABELS] = ACTIONS(34),
    [anon_sym_VARIABLELEVEL] = ACTIONS(34),
    [anon_sym_VARIABLEROLE] = ACTIONS(34),
    [anon_sym_VARIABLEWIDTH] = ACTIONS(34),
    [anon_sym_VARSTOCASES] = ACTIONS(34),
    [anon_sym_VECTOR] = ACTIONS(34),
    [anon_sym_VERIFY] = ACTIONS(34),
    [anon_sym_WEIGHT] = ACTIONS(36),
    [anon_sym_WEIGHTEDKAPPA] = ACTIONS(34),
    [anon_sym_WLS] = ACTIONS(34),
    [anon_sym_WRITE] = ACTIONS(36),
    [anon_sym_WRITEFORMATS] = ACTIONS(34),
    [anon_sym_XGRAPH] = ACTIONS(34),
    [anon_sym_XSAVE] = ACTIONS(34),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BEGINPROGRAM] = ACTIONS(34),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_2SLS] = ACTIONS(38),
    [anon_sym_ACF] = ACTIONS(38),
    [anon_sym_ADDDOCUMENT] = ACTIONS(38),
    [anon_sym_ADDFILES] = ACTIONS(38),
    [anon_sym_ADDVALUELABELS] = ACTIONS(38),
    [anon_sym_ADP] = ACTIONS(38),
    [anon_sym_AGGREGATE] = ACTIONS(38),
    [anon_sym_AIM] = ACTIONS(38),
    [anon_sym_ALSCAL] = ACTIONS(38),
    [anon_sym_ALTERTYPE] = ACTIONS(38),
    [anon_sym_ANACOR] = ACTIONS(38),
    [anon_sym_ANOVA] = ACTIONS(38),
    [anon_sym_APPLYDICTIONARY] = ACTIONS(38),
    [anon_sym_AREG] = ACTIONS(38),
    [anon_sym_ARIMA] = ACTIONS(38),
    [anon_sym_AUTORECODE] = ACTIONS(38),
    [anon_sym_BAYESANOVA] = ACTIONS(38),
    [anon_sym_BAYESCORRELATION] = ACTIONS(38),
    [anon_sym_BAYESINDEPENDENT] = ACTIONS(38),
    [anon_sym_BAYESLOGLINEAR] = ACTIONS(38),
    [anon_sym_BAYESONESAMPLE] = ACTIONS(38),
    [anon_sym_BAYESREGRESSION] = ACTIONS(38),
    [anon_sym_BAYESRELATED] = ACTIONS(38),
    [anon_sym_BAYESREPEATED] = ACTIONS(38),
    [anon_sym_BEGINDATA] = ACTIONS(38),
    [anon_sym_BEGINEXPR] = ACTIONS(40),
    [anon_sym_BEGINEXPR_DASHENDEXPR] = ACTIONS(38),
    [anon_sym_BEGINGPL_DASHENDGPL] = ACTIONS(38),
    [anon_sym_BOOTSTRAP] = ACTIONS(38),
    [anon_sym_BREAK] = ACTIONS(38),
    [anon_sym_CACHE] = ACTIONS(38),
    [anon_sym_CASEPLOT] = ACTIONS(38),
    [anon_sym_CASESTOVARS] = ACTIONS(38),
    [anon_sym_CATREG] = ACTIONS(38),
    [anon_sym_CD] = ACTIONS(38),
    [anon_sym_CLABELS] = ACTIONS(38),
    [anon_sym_CLEARTIMEPROGRAM] = ACTIONS(38),
    [anon_sym_CLEARTRANSFORMATIONS] = ACTIONS(38),
    [anon_sym_CLUSTER] = ACTIONS(38),
    [anon_sym_CNLR] = ACTIONS(38),
    [anon_sym_CODEBOOK] = ACTIONS(38),
    [anon_sym_COMMENT] = ACTIONS(40),
    [anon_sym_COMPAREDATASETS] = ACTIONS(38),
    [anon_sym_COMPUTE] = ACTIONS(38),
    [anon_sym_CONJOINT] = ACTIONS(38),
    [anon_sym_CONSTRAINEDFUNCTIONS] = ACTIONS(38),
    [anon_sym_CORRELATIONS] = ACTIONS(38),
    [anon_sym_CORRESPONDENCE] = ACTIONS(38),
    [anon_sym_COUNT] = ACTIONS(38),
    [anon_sym_COXREG] = ACTIONS(38),
    [anon_sym_CREATE] = ACTIONS(38),
    [anon_sym_CROSSTABS] = ACTIONS(38),
    [anon_sym_CSCOXREG] = ACTIONS(38),
    [anon_sym_CSDESCRIPTIVES] = ACTIONS(38),
    [anon_sym_CSGLM] = ACTIONS(38),
    [anon_sym_CSLOGISTIC] = ACTIONS(38),
    [anon_sym_CSORDINAL] = ACTIONS(38),
    [anon_sym_CSPLAN] = ACTIONS(38),
    [anon_sym_CSSELECT] = ACTIONS(38),
    [anon_sym_CSTABULATE] = ACTIONS(38),
    [anon_sym_CTABLES] = ACTIONS(38),
    [anon_sym_CURVEFIT] = ACTIONS(38),
    [anon_sym_DATALIST] = ACTIONS(38),
    [anon_sym_DATAFILEATTRIBUTE] = ACTIONS(38),
    [anon_sym_DATASETACTIVATE] = ACTIONS(38),
    [anon_sym_DATASETCLOSE] = ACTIONS(38),
    [anon_sym_DATASETCOPY] = ACTIONS(38),
    [anon_sym_DATASETDECLARE] = ACTIONS(38),
    [anon_sym_DATASETDISPLAY] = ACTIONS(38),
    [anon_sym_DATASETNAME] = ACTIONS(38),
    [anon_sym_DATE] = ACTIONS(38),
    [anon_sym_DEFINE] = ACTIONS(38),
    [anon_sym_DELETEVARIABLES] = ACTIONS(38),
    [anon_sym_DERIVATIVES] = ACTIONS(38),
    [anon_sym_DESCRIPTIVES] = ACTIONS(38),
    [anon_sym_DETECTANOMALY] = ACTIONS(38),
    [anon_sym_DISCRIMINANT] = ACTIONS(38),
    [anon_sym_DISPLAY] = ACTIONS(38),
    [anon_sym_DOIF] = ACTIONS(38),
    [anon_sym_DOREPEAT] = ACTIONS(38),
    [anon_sym_DOCUMENT] = ACTIONS(38),
    [anon_sym_DROPDOCUMENTS] = ACTIONS(38),
    [anon_sym_ECHO] = ACTIONS(38),
    [anon_sym_ENDCASE] = ACTIONS(38),
    [anon_sym_ENDFILE] = ACTIONS(38),
    [anon_sym_ERASE] = ACTIONS(38),
    [anon_sym_EXAMINE] = ACTIONS(38),
    [anon_sym_EXECUTE] = ACTIONS(38),
    [anon_sym_EXPORT] = ACTIONS(38),
    [anon_sym_EXSMOOTH] = ACTIONS(38),
    [anon_sym_EXTENSION] = ACTIONS(38),
    [anon_sym_FACTOR] = ACTIONS(38),
    [anon_sym_FILEHANDLE] = ACTIONS(38),
    [anon_sym_FILELABEL] = ACTIONS(38),
    [anon_sym_FILETYPE] = ACTIONS(38),
    [anon_sym_FILTER] = ACTIONS(38),
    [anon_sym_FINISH] = ACTIONS(38),
    [anon_sym_FIT] = ACTIONS(38),
    [anon_sym_FLEISSMULTIRATERKAPPA] = ACTIONS(38),
    [anon_sym_FLIP] = ACTIONS(38),
    [anon_sym_FORMATS] = ACTIONS(38),
    [anon_sym_FREQUENCIES] = ACTIONS(38),
    [anon_sym_GENLIN] = ACTIONS(40),
    [anon_sym_GENLINMIXED] = ACTIONS(38),
    [anon_sym_GENLOG] = ACTIONS(38),
    [anon_sym_GET] = ACTIONS(40),
    [anon_sym_GETCAPTURE] = ACTIONS(38),
    [anon_sym_GETDATA] = ACTIONS(38),
    [anon_sym_GETSAS] = ACTIONS(38),
    [anon_sym_GETSTATA] = ACTIONS(38),
    [anon_sym_GETTRANSLATE] = ACTIONS(38),
    [anon_sym_GETCOGNOS] = ACTIONS(38),
    [anon_sym_GETTM1] = ACTIONS(38),
    [anon_sym_GGRAPH] = ACTIONS(38),
    [anon_sym_GLM] = ACTIONS(38),
    [anon_sym_GRAPH] = ACTIONS(38),
    [anon_sym_HILOGLINEAR] = ACTIONS(38),
    [anon_sym_HOMALS] = ACTIONS(38),
    [anon_sym_HOST] = ACTIONS(38),
    [anon_sym_IBREAK] = ACTIONS(38),
    [anon_sym_IDO] = ACTIONS(40),
    [anon_sym_IDOEND] = ACTIONS(38),
    [anon_sym_IGRAPH] = ACTIONS(38),
    [anon_sym_IIF] = ACTIONS(40),
    [anon_sym_IIFEND] = ACTIONS(38),
    [anon_sym_ILET] = ACTIONS(38),
    [anon_sym_IMPORT] = ACTIONS(38),
    [anon_sym_INCLUDE] = ACTIONS(38),
    [anon_sym_INPUTPROGRAM] = ACTIONS(38),
    [anon_sym_INSERT] = ACTIONS(40),
    [anon_sym_INSERTEXEC] = ACTIONS(38),
    [anon_sym_INSERTHIDDDEN] = ACTIONS(38),
    [anon_sym_INSERTHIDDEN] = ACTIONS(38),
    [anon_sym_KEYEDDATALIST] = ACTIONS(38),
    [anon_sym_KM] = ACTIONS(38),
    [anon_sym_KNN] = ACTIONS(38),
    [anon_sym_LINEAR] = ACTIONS(38),
    [anon_sym_LIST] = ACTIONS(38),
    [anon_sym_LOGISTICREGRESSION] = ACTIONS(38),
    [anon_sym_LOGLINEAR] = ACTIONS(38),
    [anon_sym_LOOP] = ACTIONS(38),
    [anon_sym_MANOVA] = ACTIONS(38),
    [anon_sym_MATCHFILES] = ACTIONS(38),
    [anon_sym_MATRIX] = ACTIONS(40),
    [anon_sym_MATRIXDATA] = ACTIONS(38),
    [anon_sym_MCONVERT] = ACTIONS(38),
    [anon_sym_MEANS] = ACTIONS(38),
    [anon_sym_MISSINGVALUES] = ACTIONS(38),
    [anon_sym_MIXED] = ACTIONS(38),
    [anon_sym_MLP] = ACTIONS(38),
    [anon_sym_MODELCLOSE] = ACTIONS(38),
    [anon_sym_MODELHANDLE] = ACTIONS(38),
    [anon_sym_MODELLIST] = ACTIONS(38),
    [anon_sym_MODELNAME] = ACTIONS(38),
    [anon_sym_MODELPROGRAM] = ACTIONS(38),
    [anon_sym_MRSETS] = ACTIONS(38),
    [anon_sym_MULTRESPONSE] = ACTIONS(38),
    [anon_sym_MULTIPLECORRESPONDENCE] = ACTIONS(38),
    [anon_sym_MULTIPLEIMPUTATION] = ACTIONS(38),
    [anon_sym_MVA] = ACTIONS(38),
    [anon_sym_NOFCASES] = ACTIONS(38),
    [anon_sym_NAIVEBAYES] = ACTIONS(38),
    [anon_sym_NEWFILE] = ACTIONS(38),
    [anon_sym_NLR] = ACTIONS(38),
    [anon_sym_NOMREG] = ACTIONS(38),
    [anon_sym_NONPARCORR] = ACTIONS(38),
    [anon_sym_NPARTESTS] = ACTIONS(38),
    [anon_sym_NPTESTS] = ACTIONS(38),
    [anon_sym_NUMERIC] = ACTIONS(38),
    [anon_sym_OLAPCUBES] = ACTIONS(38),
    [anon_sym_OMS] = ACTIONS(40),
    [anon_sym_OMSEND] = ACTIONS(38),
    [anon_sym_OMSINFO] = ACTIONS(38),
    [anon_sym_OMSLOG] = ACTIONS(38),
    [anon_sym_ONEWAY] = ACTIONS(38),
    [anon_sym_OPTIMALBINNING] = ACTIONS(38),
    [anon_sym_ORTHOPLAN] = ACTIONS(38),
    [anon_sym_OUTPUTMODIFY] = ACTIONS(38),
    [anon_sym_OUTPUTNAME] = ACTIONS(38),
    [anon_sym_OUTPUTNEW] = ACTIONS(38),
    [anon_sym_OUTPUTOPEN] = ACTIONS(38),
    [anon_sym_OUTPUTSAVE] = ACTIONS(38),
    [anon_sym_OVERALS] = ACTIONS(38),
    [anon_sym_PACF] = ACTIONS(38),
    [anon_sym_PARTIALCORR] = ACTIONS(38),
    [anon_sym_PERMISSIONS] = ACTIONS(38),
    [anon_sym_PLANCARDS] = ACTIONS(38),
    [anon_sym_PLS] = ACTIONS(38),
    [anon_sym_PLUM] = ACTIONS(38),
    [anon_sym_POINT] = ACTIONS(38),
    [anon_sym_POWERMEANSINDEPENDENT] = ACTIONS(38),
    [anon_sym_POWERMEANSONESAMPLE] = ACTIONS(38),
    [anon_sym_POWERMEANSRELATED] = ACTIONS(38),
    [anon_sym_POWERONEWAYANOVA] = ACTIONS(38),
    [anon_sym_POWERPARTIALCORR] = ACTIONS(38),
    [anon_sym_POWERPEARSONONESAMPLE] = ACTIONS(38),
    [anon_sym_POWERPROPORTIONSINDEPENDENT] = ACTIONS(38),
    [anon_sym_POWERPROPORTIONSONESAMPLE] = ACTIONS(38),
    [anon_sym_POWERPROPORTIONSRELATED] = ACTIONS(38),
    [anon_sym_POWERSPEARMANONESAMPLE] = ACTIONS(38),
    [anon_sym_POWERUNIVARIATELINEAR] = ACTIONS(38),
    [anon_sym_PPLOT] = ACTIONS(38),
    [anon_sym_PREDICT] = ACTIONS(38),
    [anon_sym_PREFSCAL] = ACTIONS(38),
    [anon_sym_PRESERVE] = ACTIONS(38),
    [anon_sym_PRINCALS] = ACTIONS(38),
    [anon_sym_PRINT] = ACTIONS(40),
    [anon_sym_PRINTEJECT] = ACTIONS(38),
    [anon_sym_PRINTFORMATS] = ACTIONS(38),
    [anon_sym_PRINTSPACE] = ACTIONS(38),
    [anon_sym_PROBIT] = ACTIONS(38),
    [anon_sym_PROCEDUREOUTPUT] = ACTIONS(38),
    [anon_sym_PROPORTIONS] = ACTIONS(38),
    [anon_sym_PROXIMITIES] = ACTIONS(38),
    [anon_sym_PROXSCAL] = ACTIONS(38),
    [anon_sym_QUANTILEREGRESSION] = ACTIONS(38),
    [anon_sym_QUICKCLUSTER] = ACTIONS(38),
    [anon_sym_RANK] = ACTIONS(38),
    [anon_sym_RATIOSTATISTICS] = ACTIONS(38),
    [anon_sym_RBF] = ACTIONS(38),
    [anon_sym_READMODEL] = ACTIONS(38),
    [anon_sym_RECODE] = ACTIONS(38),
    [anon_sym_RECORDTYPE] = ACTIONS(38),
    [anon_sym_REGRESSION] = ACTIONS(38),
    [anon_sym_RELIABILITY] = ACTIONS(38),
    [anon_sym_RENAME] = ACTIONS(40),
    [anon_sym_RENAMEVARIABLES] = ACTIONS(38),
    [anon_sym_REPEATINGDATA] = ACTIONS(38),
    [anon_sym_REPORT] = ACTIONS(38),
    [anon_sym_REPOSITORYATTRIBUTES] = ACTIONS(38),
    [anon_sym_REPOSITORYCONNECT] = ACTIONS(38),
    [anon_sym_REPOSITORYCOPY] = ACTIONS(38),
    [anon_sym_REREAD] = ACTIONS(38),
    [anon_sym_RESPONSERATE] = ACTIONS(38),
    [anon_sym_RESTORE] = ACTIONS(38),
    [anon_sym_RMV] = ACTIONS(38),
    [anon_sym_ROC] = ACTIONS(40),
    [anon_sym_ROCANALYSIS] = ACTIONS(38),
    [anon_sym_SAMPLE] = ACTIONS(38),
    [anon_sym_SAVE] = ACTIONS(40),
    [anon_sym_SAVECODEPAGE] = ACTIONS(38),
    [anon_sym_SAVEDATACOLLECTION] = ACTIONS(38),
    [anon_sym_SAVEMODEL] = ACTIONS(38),
    [anon_sym_SAVETRANSLATE] = ACTIONS(38),
    [anon_sym_SCRIPT] = ACTIONS(38),
    [anon_sym_SEASON] = ACTIONS(38),
    [anon_sym_SELECTIF] = ACTIONS(38),
    [anon_sym_SELECTPRED] = ACTIONS(38),
    [anon_sym_SET] = ACTIONS(38),
    [anon_sym_SHIFTVALUES] = ACTIONS(38),
    [anon_sym_SHOW] = ACTIONS(38),
    [anon_sym_SIMPLAN] = ACTIONS(38),
    [anon_sym_SIMPREPBEGIN] = ACTIONS(38),
    [anon_sym_SIMRUN] = ACTIONS(38),
    [anon_sym_SORT] = ACTIONS(40),
    [anon_sym_SORTCASES] = ACTIONS(38),
    [anon_sym_SORTVARIABLES] = ACTIONS(38),
    [anon_sym_SPATIALASSOCIATIONRULES] = ACTIONS(38),
    [anon_sym_SPATIALMAPSPEC] = ACTIONS(38),
    [anon_sym_SPATIALTEMPORALPREDICTION] = ACTIONS(38),
    [anon_sym_SPCHART] = ACTIONS(38),
    [anon_sym_SPECTRA] = ACTIONS(38),
    [anon_sym_SPLITFILE] = ACTIONS(38),
    [anon_sym_STARJOIN] = ACTIONS(38),
    [anon_sym_STRING] = ACTIONS(38),
    [anon_sym_SUBTITLE] = ACTIONS(38),
    [anon_sym_SUMMARIZE] = ACTIONS(38),
    [anon_sym_SURVIVAL] = ACTIONS(38),
    [anon_sym_SYSFILEINFO] = ACTIONS(38),
    [anon_sym_T_DASHTEST] = ACTIONS(38),
    [anon_sym_TCMANALYSIS] = ACTIONS(38),
    [anon_sym_TCMAPPLY] = ACTIONS(38),
    [anon_sym_TCMMODEL] = ACTIONS(38),
    [anon_sym_TDISPLAY] = ACTIONS(38),
    [anon_sym_TEMPORARY] = ACTIONS(38),
    [anon_sym_TIMEPROGRAM] = ACTIONS(38),
    [anon_sym_TITLE] = ACTIONS(38),
    [anon_sym_TMSBEGIN] = ACTIONS(38),
    [anon_sym_TMSEND] = ACTIONS(38),
    [anon_sym_TMSIMPORT] = ACTIONS(38),
    [anon_sym_TMSMERGE] = ACTIONS(38),
    [anon_sym_TREE] = ACTIONS(38),
    [anon_sym_TSAPPLY] = ACTIONS(38),
    [anon_sym_TSET] = ACTIONS(38),
    [anon_sym_TSHOW] = ACTIONS(38),
    [anon_sym_TSMODEL] = ACTIONS(38),
    [anon_sym_TSPLOT] = ACTIONS(38),
    [anon_sym_TWOSTEPCLUSTER] = ACTIONS(38),
    [anon_sym_UNIANOVA] = ACTIONS(38),
    [anon_sym_UPDATE] = ACTIONS(38),
    [anon_sym_USE] = ACTIONS(38),
    [anon_sym_VALIDATEDATA] = ACTIONS(38),
    [anon_sym_VALUELABELS] = ACTIONS(38),
    [anon_sym_VARCOMP] = ACTIONS(38),
    [anon_sym_VARIABLEALIGNMENT] = ACTIONS(38),
    [anon_sym_VARIABLEATTRIBUTE] = ACTIONS(38),
    [anon_sym_VARIABLELABELS] = ACTIONS(38),
    [anon_sym_VARIABLELEVEL] = ACTIONS(38),
    [anon_sym_VARIABLEROLE] = ACTIONS(38),
    [anon_sym_VARIABLEWIDTH] = ACTIONS(38),
    [anon_sym_VARSTOCASES] = ACTIONS(38),
    [anon_sym_VECTOR] = ACTIONS(38),
    [anon_sym_VERIFY] = ACTIONS(38),
    [anon_sym_WEIGHT] = ACTIONS(40),
    [anon_sym_WEIGHTEDKAPPA] = ACTIONS(38),
    [anon_sym_WLS] = ACTIONS(38),
    [anon_sym_WRITE] = ACTIONS(40),
    [anon_sym_WRITEFORMATS] = ACTIONS(38),
    [anon_sym_XGRAPH] = ACTIONS(38),
    [anon_sym_XSAVE] = ACTIONS(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BEGINPROGRAM] = ACTIONS(38),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_2SLS] = ACTIONS(42),
    [anon_sym_ACF] = ACTIONS(42),
    [anon_sym_ADDDOCUMENT] = ACTIONS(42),
    [anon_sym_ADDFILES] = ACTIONS(42),
    [anon_sym_ADDVALUELABELS] = ACTIONS(42),
    [anon_sym_ADP] = ACTIONS(42),
    [anon_sym_AGGREGATE] = ACTIONS(42),
    [anon_sym_AIM] = ACTIONS(42),
    [anon_sym_ALSCAL] = ACTIONS(42),
    [anon_sym_ALTERTYPE] = ACTIONS(42),
    [anon_sym_ANACOR] = ACTIONS(42),
    [anon_sym_ANOVA] = ACTIONS(42),
    [anon_sym_APPLYDICTIONARY] = ACTIONS(42),
    [anon_sym_AREG] = ACTIONS(42),
    [anon_sym_ARIMA] = ACTIONS(42),
    [anon_sym_AUTORECODE] = ACTIONS(42),
    [anon_sym_BAYESANOVA] = ACTIONS(42),
    [anon_sym_BAYESCORRELATION] = ACTIONS(42),
    [anon_sym_BAYESINDEPENDENT] = ACTIONS(42),
    [anon_sym_BAYESLOGLINEAR] = ACTIONS(42),
    [anon_sym_BAYESONESAMPLE] = ACTIONS(42),
    [anon_sym_BAYESREGRESSION] = ACTIONS(42),
    [anon_sym_BAYESRELATED] = ACTIONS(42),
    [anon_sym_BAYESREPEATED] = ACTIONS(42),
    [anon_sym_BEGINDATA] = ACTIONS(42),
    [anon_sym_BEGINEXPR] = ACTIONS(44),
    [anon_sym_BEGINEXPR_DASHENDEXPR] = ACTIONS(42),
    [anon_sym_BEGINGPL_DASHENDGPL] = ACTIONS(42),
    [anon_sym_BOOTSTRAP] = ACTIONS(42),
    [anon_sym_BREAK] = ACTIONS(42),
    [anon_sym_CACHE] = ACTIONS(42),
    [anon_sym_CASEPLOT] = ACTIONS(42),
    [anon_sym_CASESTOVARS] = ACTIONS(42),
    [anon_sym_CATREG] = ACTIONS(42),
    [anon_sym_CD] = ACTIONS(42),
    [anon_sym_CLABELS] = ACTIONS(42),
    [anon_sym_CLEARTIMEPROGRAM] = ACTIONS(42),
    [anon_sym_CLEARTRANSFORMATIONS] = ACTIONS(42),
    [anon_sym_CLUSTER] = ACTIONS(42),
    [anon_sym_CNLR] = ACTIONS(42),
    [anon_sym_CODEBOOK] = ACTIONS(42),
    [anon_sym_COMMENT] = ACTIONS(44),
    [anon_sym_COMPAREDATASETS] = ACTIONS(42),
    [anon_sym_COMPUTE] = ACTIONS(42),
    [anon_sym_CONJOINT] = ACTIONS(42),
    [anon_sym_CONSTRAINEDFUNCTIONS] = ACTIONS(42),
    [anon_sym_CORRELATIONS] = ACTIONS(42),
    [anon_sym_CORRESPONDENCE] = ACTIONS(42),
    [anon_sym_COUNT] = ACTIONS(42),
    [anon_sym_COXREG] = ACTIONS(42),
    [anon_sym_CREATE] = ACTIONS(42),
    [anon_sym_CROSSTABS] = ACTIONS(42),
    [anon_sym_CSCOXREG] = ACTIONS(42),
    [anon_sym_CSDESCRIPTIVES] = ACTIONS(42),
    [anon_sym_CSGLM] = ACTIONS(42),
    [anon_sym_CSLOGISTIC] = ACTIONS(42),
    [anon_sym_CSORDINAL] = ACTIONS(42),
    [anon_sym_CSPLAN] = ACTIONS(42),
    [anon_sym_CSSELECT] = ACTIONS(42),
    [anon_sym_CSTABULATE] = ACTIONS(42),
    [anon_sym_CTABLES] = ACTIONS(42),
    [anon_sym_CURVEFIT] = ACTIONS(42),
    [anon_sym_DATALIST] = ACTIONS(42),
    [anon_sym_DATAFILEATTRIBUTE] = ACTIONS(42),
    [anon_sym_DATASETACTIVATE] = ACTIONS(42),
    [anon_sym_DATASETCLOSE] = ACTIONS(42),
    [anon_sym_DATASETCOPY] = ACTIONS(42),
    [anon_sym_DATASETDECLARE] = ACTIONS(42),
    [anon_sym_DATASETDISPLAY] = ACTIONS(42),
    [anon_sym_DATASETNAME] = ACTIONS(42),
    [anon_sym_DATE] = ACTIONS(42),
    [anon_sym_DEFINE] = ACTIONS(42),
    [anon_sym_DELETEVARIABLES] = ACTIONS(42),
    [anon_sym_DERIVATIVES] = ACTIONS(42),
    [anon_sym_DESCRIPTIVES] = ACTIONS(42),
    [anon_sym_DETECTANOMALY] = ACTIONS(42),
    [anon_sym_DISCRIMINANT] = ACTIONS(42),
    [anon_sym_DISPLAY] = ACTIONS(42),
    [anon_sym_DOIF] = ACTIONS(42),
    [anon_sym_DOREPEAT] = ACTIONS(42),
    [anon_sym_DOCUMENT] = ACTIONS(42),
    [anon_sym_DROPDOCUMENTS] = ACTIONS(42),
    [anon_sym_ECHO] = ACTIONS(42),
    [anon_sym_ENDCASE] = ACTIONS(42),
    [anon_sym_ENDFILE] = ACTIONS(42),
    [anon_sym_ERASE] = ACTIONS(42),
    [anon_sym_EXAMINE] = ACTIONS(42),
    [anon_sym_EXECUTE] = ACTIONS(42),
    [anon_sym_EXPORT] = ACTIONS(42),
    [anon_sym_EXSMOOTH] = ACTIONS(42),
    [anon_sym_EXTENSION] = ACTIONS(42),
    [anon_sym_FACTOR] = ACTIONS(42),
    [anon_sym_FILEHANDLE] = ACTIONS(42),
    [anon_sym_FILELABEL] = ACTIONS(42),
    [anon_sym_FILETYPE] = ACTIONS(42),
    [anon_sym_FILTER] = ACTIONS(42),
    [anon_sym_FINISH] = ACTIONS(42),
    [anon_sym_FIT] = ACTIONS(42),
    [anon_sym_FLEISSMULTIRATERKAPPA] = ACTIONS(42),
    [anon_sym_FLIP] = ACTIONS(42),
    [anon_sym_FORMATS] = ACTIONS(42),
    [anon_sym_FREQUENCIES] = ACTIONS(42),
    [anon_sym_GENLIN] = ACTIONS(44),
    [anon_sym_GENLINMIXED] = ACTIONS(42),
    [anon_sym_GENLOG] = ACTIONS(42),
    [anon_sym_GET] = ACTIONS(44),
    [anon_sym_GETCAPTURE] = ACTIONS(42),
    [anon_sym_GETDATA] = ACTIONS(42),
    [anon_sym_GETSAS] = ACTIONS(42),
    [anon_sym_GETSTATA] = ACTIONS(42),
    [anon_sym_GETTRANSLATE] = ACTIONS(42),
    [anon_sym_GETCOGNOS] = ACTIONS(42),
    [anon_sym_GETTM1] = ACTIONS(42),
    [anon_sym_GGRAPH] = ACTIONS(42),
    [anon_sym_GLM] = ACTIONS(42),
    [anon_sym_GRAPH] = ACTIONS(42),
    [anon_sym_HILOGLINEAR] = ACTIONS(42),
    [anon_sym_HOMALS] = ACTIONS(42),
    [anon_sym_HOST] = ACTIONS(42),
    [anon_sym_IBREAK] = ACTIONS(42),
    [anon_sym_IDO] = ACTIONS(44),
    [anon_sym_IDOEND] = ACTIONS(42),
    [anon_sym_IGRAPH] = ACTIONS(42),
    [anon_sym_IIF] = ACTIONS(44),
    [anon_sym_IIFEND] = ACTIONS(42),
    [anon_sym_ILET] = ACTIONS(42),
    [anon_sym_IMPORT] = ACTIONS(42),
    [anon_sym_INCLUDE] = ACTIONS(42),
    [anon_sym_INPUTPROGRAM] = ACTIONS(42),
    [anon_sym_INSERT] = ACTIONS(44),
    [anon_sym_INSERTEXEC] = ACTIONS(42),
    [anon_sym_INSERTHIDDDEN] = ACTIONS(42),
    [anon_sym_INSERTHIDDEN] = ACTIONS(42),
    [anon_sym_KEYEDDATALIST] = ACTIONS(42),
    [anon_sym_KM] = ACTIONS(42),
    [anon_sym_KNN] = ACTIONS(42),
    [anon_sym_LINEAR] = ACTIONS(42),
    [anon_sym_LIST] = ACTIONS(42),
    [anon_sym_LOGISTICREGRESSION] = ACTIONS(42),
    [anon_sym_LOGLINEAR] = ACTIONS(42),
    [anon_sym_LOOP] = ACTIONS(42),
    [anon_sym_MANOVA] = ACTIONS(42),
    [anon_sym_MATCHFILES] = ACTIONS(42),
    [anon_sym_MATRIX] = ACTIONS(44),
    [anon_sym_MATRIXDATA] = ACTIONS(42),
    [anon_sym_MCONVERT] = ACTIONS(42),
    [anon_sym_MEANS] = ACTIONS(42),
    [anon_sym_MISSINGVALUES] = ACTIONS(42),
    [anon_sym_MIXED] = ACTIONS(42),
    [anon_sym_MLP] = ACTIONS(42),
    [anon_sym_MODELCLOSE] = ACTIONS(42),
    [anon_sym_MODELHANDLE] = ACTIONS(42),
    [anon_sym_MODELLIST] = ACTIONS(42),
    [anon_sym_MODELNAME] = ACTIONS(42),
    [anon_sym_MODELPROGRAM] = ACTIONS(42),
    [anon_sym_MRSETS] = ACTIONS(42),
    [anon_sym_MULTRESPONSE] = ACTIONS(42),
    [anon_sym_MULTIPLECORRESPONDENCE] = ACTIONS(42),
    [anon_sym_MULTIPLEIMPUTATION] = ACTIONS(42),
    [anon_sym_MVA] = ACTIONS(42),
    [anon_sym_NOFCASES] = ACTIONS(42),
    [anon_sym_NAIVEBAYES] = ACTIONS(42),
    [anon_sym_NEWFILE] = ACTIONS(42),
    [anon_sym_NLR] = ACTIONS(42),
    [anon_sym_NOMREG] = ACTIONS(42),
    [anon_sym_NONPARCORR] = ACTIONS(42),
    [anon_sym_NPARTESTS] = ACTIONS(42),
    [anon_sym_NPTESTS] = ACTIONS(42),
    [anon_sym_NUMERIC] = ACTIONS(42),
    [anon_sym_OLAPCUBES] = ACTIONS(42),
    [anon_sym_OMS] = ACTIONS(44),
    [anon_sym_OMSEND] = ACTIONS(42),
    [anon_sym_OMSINFO] = ACTIONS(42),
    [anon_sym_OMSLOG] = ACTIONS(42),
    [anon_sym_ONEWAY] = ACTIONS(42),
    [anon_sym_OPTIMALBINNING] = ACTIONS(42),
    [anon_sym_ORTHOPLAN] = ACTIONS(42),
    [anon_sym_OUTPUTMODIFY] = ACTIONS(42),
    [anon_sym_OUTPUTNAME] = ACTIONS(42),
    [anon_sym_OUTPUTNEW] = ACTIONS(42),
    [anon_sym_OUTPUTOPEN] = ACTIONS(42),
    [anon_sym_OUTPUTSAVE] = ACTIONS(42),
    [anon_sym_OVERALS] = ACTIONS(42),
    [anon_sym_PACF] = ACTIONS(42),
    [anon_sym_PARTIALCORR] = ACTIONS(42),
    [anon_sym_PERMISSIONS] = ACTIONS(42),
    [anon_sym_PLANCARDS] = ACTIONS(42),
    [anon_sym_PLS] = ACTIONS(42),
    [anon_sym_PLUM] = ACTIONS(42),
    [anon_sym_POINT] = ACTIONS(42),
    [anon_sym_POWERMEANSINDEPENDENT] = ACTIONS(42),
    [anon_sym_POWERMEANSONESAMPLE] = ACTIONS(42),
    [anon_sym_POWERMEANSRELATED] = ACTIONS(42),
    [anon_sym_POWERONEWAYANOVA] = ACTIONS(42),
    [anon_sym_POWERPARTIALCORR] = ACTIONS(42),
    [anon_sym_POWERPEARSONONESAMPLE] = ACTIONS(42),
    [anon_sym_POWERPROPORTIONSINDEPENDENT] = ACTIONS(42),
    [anon_sym_POWERPROPORTIONSONESAMPLE] = ACTIONS(42),
    [anon_sym_POWERPROPORTIONSRELATED] = ACTIONS(42),
    [anon_sym_POWERSPEARMANONESAMPLE] = ACTIONS(42),
    [anon_sym_POWERUNIVARIATELINEAR] = ACTIONS(42),
    [anon_sym_PPLOT] = ACTIONS(42),
    [anon_sym_PREDICT] = ACTIONS(42),
    [anon_sym_PREFSCAL] = ACTIONS(42),
    [anon_sym_PRESERVE] = ACTIONS(42),
    [anon_sym_PRINCALS] = ACTIONS(42),
    [anon_sym_PRINT] = ACTIONS(44),
    [anon_sym_PRINTEJECT] = ACTIONS(42),
    [anon_sym_PRINTFORMATS] = ACTIONS(42),
    [anon_sym_PRINTSPACE] = ACTIONS(42),
    [anon_sym_PROBIT] = ACTIONS(42),
    [anon_sym_PROCEDUREOUTPUT] = ACTIONS(42),
    [anon_sym_PROPORTIONS] = ACTIONS(42),
    [anon_sym_PROXIMITIES] = ACTIONS(42),
    [anon_sym_PROXSCAL] = ACTIONS(42),
    [anon_sym_QUANTILEREGRESSION] = ACTIONS(42),
    [anon_sym_QUICKCLUSTER] = ACTIONS(42),
    [anon_sym_RANK] = ACTIONS(42),
    [anon_sym_RATIOSTATISTICS] = ACTIONS(42),
    [anon_sym_RBF] = ACTIONS(42),
    [anon_sym_READMODEL] = ACTIONS(42),
    [anon_sym_RECODE] = ACTIONS(42),
    [anon_sym_RECORDTYPE] = ACTIONS(42),
    [anon_sym_REGRESSION] = ACTIONS(42),
    [anon_sym_RELIABILITY] = ACTIONS(42),
    [anon_sym_RENAME] = ACTIONS(44),
    [anon_sym_RENAMEVARIABLES] = ACTIONS(42),
    [anon_sym_REPEATINGDATA] = ACTIONS(42),
    [anon_sym_REPORT] = ACTIONS(42),
    [anon_sym_REPOSITORYATTRIBUTES] = ACTIONS(42),
    [anon_sym_REPOSITORYCONNECT] = ACTIONS(42),
    [anon_sym_REPOSITORYCOPY] = ACTIONS(42),
    [anon_sym_REREAD] = ACTIONS(42),
    [anon_sym_RESPONSERATE] = ACTIONS(42),
    [anon_sym_RESTORE] = ACTIONS(42),
    [anon_sym_RMV] = ACTIONS(42),
    [anon_sym_ROC] = ACTIONS(44),
    [anon_sym_ROCANALYSIS] = ACTIONS(42),
    [anon_sym_SAMPLE] = ACTIONS(42),
    [anon_sym_SAVE] = ACTIONS(44),
    [anon_sym_SAVECODEPAGE] = ACTIONS(42),
    [anon_sym_SAVEDATACOLLECTION] = ACTIONS(42),
    [anon_sym_SAVEMODEL] = ACTIONS(42),
    [anon_sym_SAVETRANSLATE] = ACTIONS(42),
    [anon_sym_SCRIPT] = ACTIONS(42),
    [anon_sym_SEASON] = ACTIONS(42),
    [anon_sym_SELECTIF] = ACTIONS(42),
    [anon_sym_SELECTPRED] = ACTIONS(42),
    [anon_sym_SET] = ACTIONS(42),
    [anon_sym_SHIFTVALUES] = ACTIONS(42),
    [anon_sym_SHOW] = ACTIONS(42),
    [anon_sym_SIMPLAN] = ACTIONS(42),
    [anon_sym_SIMPREPBEGIN] = ACTIONS(42),
    [anon_sym_SIMRUN] = ACTIONS(42),
    [anon_sym_SORT] = ACTIONS(44),
    [anon_sym_SORTCASES] = ACTIONS(42),
    [anon_sym_SORTVARIABLES] = ACTIONS(42),
    [anon_sym_SPATIALASSOCIATIONRULES] = ACTIONS(42),
    [anon_sym_SPATIALMAPSPEC] = ACTIONS(42),
    [anon_sym_SPATIALTEMPORALPREDICTION] = ACTIONS(42),
    [anon_sym_SPCHART] = ACTIONS(42),
    [anon_sym_SPECTRA] = ACTIONS(42),
    [anon_sym_SPLITFILE] = ACTIONS(42),
    [anon_sym_STARJOIN] = ACTIONS(42),
    [anon_sym_STRING] = ACTIONS(42),
    [anon_sym_SUBTITLE] = ACTIONS(42),
    [anon_sym_SUMMARIZE] = ACTIONS(42),
    [anon_sym_SURVIVAL] = ACTIONS(42),
    [anon_sym_SYSFILEINFO] = ACTIONS(42),
    [anon_sym_T_DASHTEST] = ACTIONS(42),
    [anon_sym_TCMANALYSIS] = ACTIONS(42),
    [anon_sym_TCMAPPLY] = ACTIONS(42),
    [anon_sym_TCMMODEL] = ACTIONS(42),
    [anon_sym_TDISPLAY] = ACTIONS(42),
    [anon_sym_TEMPORARY] = ACTIONS(42),
    [anon_sym_TIMEPROGRAM] = ACTIONS(42),
    [anon_sym_TITLE] = ACTIONS(42),
    [anon_sym_TMSBEGIN] = ACTIONS(42),
    [anon_sym_TMSEND] = ACTIONS(42),
    [anon_sym_TMSIMPORT] = ACTIONS(42),
    [anon_sym_TMSMERGE] = ACTIONS(42),
    [anon_sym_TREE] = ACTIONS(42),
    [anon_sym_TSAPPLY] = ACTIONS(42),
    [anon_sym_TSET] = ACTIONS(42),
    [anon_sym_TSHOW] = ACTIONS(42),
    [anon_sym_TSMODEL] = ACTIONS(42),
    [anon_sym_TSPLOT] = ACTIONS(42),
    [anon_sym_TWOSTEPCLUSTER] = ACTIONS(42),
    [anon_sym_UNIANOVA] = ACTIONS(42),
    [anon_sym_UPDATE] = ACTIONS(42),
    [anon_sym_USE] = ACTIONS(42),
    [anon_sym_VALIDATEDATA] = ACTIONS(42),
    [anon_sym_VALUELABELS] = ACTIONS(42),
    [anon_sym_VARCOMP] = ACTIONS(42),
    [anon_sym_VARIABLEALIGNMENT] = ACTIONS(42),
    [anon_sym_VARIABLEATTRIBUTE] = ACTIONS(42),
    [anon_sym_VARIABLELABELS] = ACTIONS(42),
    [anon_sym_VARIABLELEVEL] = ACTIONS(42),
    [anon_sym_VARIABLEROLE] = ACTIONS(42),
    [anon_sym_VARIABLEWIDTH] = ACTIONS(42),
    [anon_sym_VARSTOCASES] = ACTIONS(42),
    [anon_sym_VECTOR] = ACTIONS(42),
    [anon_sym_VERIFY] = ACTIONS(42),
    [anon_sym_WEIGHT] = ACTIONS(44),
    [anon_sym_WEIGHTEDKAPPA] = ACTIONS(42),
    [anon_sym_WLS] = ACTIONS(42),
    [anon_sym_WRITE] = ACTIONS(44),
    [anon_sym_WRITEFORMATS] = ACTIONS(42),
    [anon_sym_XGRAPH] = ACTIONS(42),
    [anon_sym_XSAVE] = ACTIONS(42),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BEGINPROGRAM] = ACTIONS(42),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym_end_of_command,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_subidentifier,
    STATE(31), 1,
      sym_arguments,
    ACTIONS(54), 2,
      sym_string,
      sym_comma,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
    ACTIONS(60), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(64), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    STATE(30), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
    ACTIONS(52), 3,
      sym_keyword,
      sym_variable,
      sym_number,
    ACTIONS(58), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(62), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(11), 5,
      sym_parenthetical,
      sym_arithmetic,
      sym_comparison,
      sym_logical,
      aux_sym_arguments_repeat1,
  [59] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_arguments,
    ACTIONS(54), 2,
      sym_string,
      sym_comma,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
    ACTIONS(60), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(64), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(66), 2,
      sym_end_of_command,
      sym_subidentifier,
    ACTIONS(52), 3,
      sym_keyword,
      sym_variable,
      sym_number,
    ACTIONS(58), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(62), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(11), 5,
      sym_parenthetical,
      sym_arithmetic,
      sym_comparison,
      sym_logical,
      aux_sym_arguments_repeat1,
  [112] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
    ACTIONS(60), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(64), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(68), 2,
      sym_end_of_command,
      sym_subidentifier,
    ACTIONS(72), 2,
      sym_string,
      sym_comma,
    ACTIONS(58), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(70), 3,
      sym_keyword,
      sym_variable,
      sym_number,
    ACTIONS(62), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(12), 5,
      sym_parenthetical,
      sym_arithmetic,
      sym_comparison,
      sym_logical,
      aux_sym_arguments_repeat1,
  [162] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 2,
      sym_end_of_command,
      sym_subidentifier,
    ACTIONS(82), 2,
      sym_string,
      sym_comma,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(79), 3,
      sym_keyword,
      sym_variable,
      sym_number,
    ACTIONS(88), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(94), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(12), 5,
      sym_parenthetical,
      sym_arithmetic,
      sym_comparison,
      sym_logical,
      aux_sym_arguments_repeat1,
  [212] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 2,
      sym_string,
      sym_comma,
    ACTIONS(108), 2,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
    ACTIONS(112), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(104), 3,
      sym_keyword,
      sym_variable,
      sym_number,
    ACTIONS(110), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(114), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(14), 5,
      sym_parenthetical,
      sym_arithmetic,
      sym_comparison,
      sym_logical,
      aux_sym_arguments_repeat1,
  [261] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 2,
      sym_string,
      sym_comma,
    ACTIONS(127), 2,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(121), 3,
      sym_keyword,
      sym_variable,
      sym_number,
    ACTIONS(130), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(136), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(14), 5,
      sym_parenthetical,
      sym_arithmetic,
      sym_comparison,
      sym_logical,
      aux_sym_arguments_repeat1,
  [310] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 2,
      sym_string,
      sym_comma,
    ACTIONS(108), 2,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
    ACTIONS(112), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(104), 3,
      sym_keyword,
      sym_variable,
      sym_number,
    ACTIONS(110), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(114), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(14), 5,
      sym_parenthetical,
      sym_arithmetic,
      sym_comparison,
      sym_logical,
      aux_sym_arguments_repeat1,
  [359] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 2,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
    ACTIONS(112), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(146), 2,
      sym_string,
      sym_comma,
    ACTIONS(110), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(144), 3,
      sym_keyword,
      sym_variable,
      sym_number,
    ACTIONS(114), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(13), 5,
      sym_parenthetical,
      sym_arithmetic,
      sym_comparison,
      sym_logical,
      aux_sym_arguments_repeat1,
  [405] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 2,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
    ACTIONS(112), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(150), 2,
      sym_string,
      sym_comma,
    ACTIONS(110), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(148), 3,
      sym_keyword,
      sym_variable,
      sym_number,
    ACTIONS(114), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(15), 5,
      sym_parenthetical,
      sym_arithmetic,
      sym_comparison,
      sym_logical,
      aux_sym_arguments_repeat1,
  [451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(152), 13,
      sym_end_of_command,
      anon_sym_LPAREN,
      sym_subidentifier,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(156), 13,
      sym_end_of_command,
      anon_sym_LPAREN,
      sym_subidentifier,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 13,
      sym_end_of_command,
      anon_sym_LPAREN,
      sym_subidentifier,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(164), 13,
      sym_end_of_command,
      anon_sym_LPAREN,
      sym_subidentifier,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(168), 13,
      sym_end_of_command,
      anon_sym_LPAREN,
      sym_subidentifier,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(168), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(156), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 8,
      sym_keyword,
      sym_variable,
      sym_number,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(164), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_comma,
  [708] = 4,
    ACTIONS(172), 1,
      sym_end_of_command,
    ACTIONS(174), 1,
      sym_subidentifier,
    ACTIONS(177), 1,
      sym_comment,
    STATE(27), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [722] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_ENDPROGRAM_DOT,
    ACTIONS(181), 1,
      aux_sym_injection_source_token1,
    STATE(33), 1,
      aux_sym_injection_source_repeat1,
    STATE(37), 1,
      sym_injection_source,
  [738] = 4,
    ACTIONS(50), 1,
      sym_subidentifier,
    ACTIONS(177), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_end_of_command,
    STATE(27), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [752] = 4,
    ACTIONS(50), 1,
      sym_subidentifier,
    ACTIONS(177), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_end_of_command,
    STATE(27), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [766] = 4,
    ACTIONS(50), 1,
      sym_subidentifier,
    ACTIONS(177), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_end_of_command,
    STATE(29), 2,
      sym_subcommand,
      aux_sym_command_repeat1,
  [780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_ENDPROGRAM_DOT,
    ACTIONS(189), 1,
      aux_sym_injection_source_token1,
    STATE(32), 1,
      aux_sym_injection_source_repeat1,
  [793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_ENDPROGRAM_DOT,
    ACTIONS(194), 1,
      aux_sym_injection_source_token1,
    STATE(32), 1,
      aux_sym_injection_source_repeat1,
  [806] = 3,
    ACTIONS(177), 1,
      sym_comment,
    STATE(28), 1,
      sym_language,
    ACTIONS(196), 2,
      sym_python,
      sym_r,
  [817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_ENDPROGRAM_DOT,
      aux_sym_injection_source_token1,
  [825] = 2,
    ACTIONS(177), 1,
      sym_comment,
    ACTIONS(200), 2,
      sym_end_of_command,
      sym_subidentifier,
  [833] = 2,
    ACTIONS(177), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_ENDPROGRAM_DOT,
  [840] = 2,
    ACTIONS(177), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 59,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 212,
  [SMALL_STATE(14)] = 261,
  [SMALL_STATE(15)] = 310,
  [SMALL_STATE(16)] = 359,
  [SMALL_STATE(17)] = 405,
  [SMALL_STATE(18)] = 451,
  [SMALL_STATE(19)] = 480,
  [SMALL_STATE(20)] = 509,
  [SMALL_STATE(21)] = 538,
  [SMALL_STATE(22)] = 567,
  [SMALL_STATE(23)] = 596,
  [SMALL_STATE(24)] = 624,
  [SMALL_STATE(25)] = 652,
  [SMALL_STATE(26)] = 680,
  [SMALL_STATE(27)] = 708,
  [SMALL_STATE(28)] = 722,
  [SMALL_STATE(29)] = 738,
  [SMALL_STATE(30)] = 752,
  [SMALL_STATE(31)] = 766,
  [SMALL_STATE(32)] = 780,
  [SMALL_STATE(33)] = 793,
  [SMALL_STATE(34)] = 806,
  [SMALL_STATE(35)] = 817,
  [SMALL_STATE(36)] = 825,
  [SMALL_STATE(37)] = 833,
  [SMALL_STATE(38)] = 840,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injection, 4, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injection, 4, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_injection, 3, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injection, 3, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, 0, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4, 0, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, 0, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcommand, 1, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_injection_source_repeat1, 2, 0, 0),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_injection_source_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_injection_source, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subcommand, 2, 0, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_spss(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
