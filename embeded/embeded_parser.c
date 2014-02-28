/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */


/* Line 268 of yacc.c  */
#line 71 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAME = 258,
     STRING = 259,
     INTNUM = 260,
     APPROXNUM = 261,
     OR = 262,
     AND = 263,
     NOT = 264,
     COMPARISON = 265,
     UMINUS = 266,
     ALL = 267,
     AMMSC = 268,
     ANY = 269,
     AS = 270,
     ASC = 271,
     AUTHORIZATION = 272,
     BETWEEN = 273,
     BY = 274,
     CHARACTER = 275,
     CHECK = 276,
     CLOSE = 277,
     COMMIT = 278,
     CONTINUE = 279,
     CREATE = 280,
     CURRENT = 281,
     CURSOR = 282,
     DECIMAL = 283,
     DECLARE = 284,
     DEFAULT = 285,
     DELETE = 286,
     DESC = 287,
     DISTINCT = 288,
     DOUBLE = 289,
     ESCAPE = 290,
     EXISTS = 291,
     FETCH = 292,
     FLOAT = 293,
     FOR = 294,
     FOREIGN = 295,
     FOUND = 296,
     FROM = 297,
     GOTO = 298,
     GRANT = 299,
     GROUP = 300,
     HAVING = 301,
     IN = 302,
     INDICATOR = 303,
     INSERT = 304,
     INTEGER = 305,
     INTO = 306,
     IS = 307,
     KEY = 308,
     LANGUAGE = 309,
     LIKE = 310,
     NULLX = 311,
     NUMERIC = 312,
     OF = 313,
     ON = 314,
     OPEN = 315,
     OPTION = 316,
     ORDER = 317,
     PARAMETER = 318,
     PRECISION = 319,
     PRIMARY = 320,
     PRIVILEGES = 321,
     PROCEDURE = 322,
     PUBLIC = 323,
     REAL = 324,
     REFERENCES = 325,
     ROLLBACK = 326,
     SCHEMA = 327,
     SELECT = 328,
     SET = 329,
     SMALLINT = 330,
     SOME = 331,
     SQLCODE = 332,
     SQLERROR = 333,
     TABLE = 334,
     TO = 335,
     UNION = 336,
     UNIQUE = 337,
     UPDATE = 338,
     USER = 339,
     VALUES = 340,
     VIEW = 341,
     WHENEVER = 342,
     WHERE = 343,
     WITH = 344,
     WORK = 345
   };
#endif
/* Tokens.  */
#define NAME 258
#define STRING 259
#define INTNUM 260
#define APPROXNUM 261
#define OR 262
#define AND 263
#define NOT 264
#define COMPARISON 265
#define UMINUS 266
#define ALL 267
#define AMMSC 268
#define ANY 269
#define AS 270
#define ASC 271
#define AUTHORIZATION 272
#define BETWEEN 273
#define BY 274
#define CHARACTER 275
#define CHECK 276
#define CLOSE 277
#define COMMIT 278
#define CONTINUE 279
#define CREATE 280
#define CURRENT 281
#define CURSOR 282
#define DECIMAL 283
#define DECLARE 284
#define DEFAULT 285
#define DELETE 286
#define DESC 287
#define DISTINCT 288
#define DOUBLE 289
#define ESCAPE 290
#define EXISTS 291
#define FETCH 292
#define FLOAT 293
#define FOR 294
#define FOREIGN 295
#define FOUND 296
#define FROM 297
#define GOTO 298
#define GRANT 299
#define GROUP 300
#define HAVING 301
#define IN 302
#define INDICATOR 303
#define INSERT 304
#define INTEGER 305
#define INTO 306
#define IS 307
#define KEY 308
#define LANGUAGE 309
#define LIKE 310
#define NULLX 311
#define NUMERIC 312
#define OF 313
#define ON 314
#define OPEN 315
#define OPTION 316
#define ORDER 317
#define PARAMETER 318
#define PRECISION 319
#define PRIMARY 320
#define PRIVILEGES 321
#define PROCEDURE 322
#define PUBLIC 323
#define REAL 324
#define REFERENCES 325
#define ROLLBACK 326
#define SCHEMA 327
#define SELECT 328
#define SET 329
#define SMALLINT 330
#define SOME 331
#define SQLCODE 332
#define SQLERROR 333
#define TABLE 334
#define TO 335
#define UNION 336
#define UNIQUE 337
#define UPDATE 338
#define USER 339
#define VALUES 340
#define VIEW 341
#define WHENEVER 342
#define WHERE 343
#define WITH 344
#define WORK 345




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 4 "embeded_sql.y"

    int intval;
    double floatval;
    char *strval;
    int subtok;



/* Line 293 of yacc.c  */
#line 296 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 308 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   522

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  220
/* YYNRULES -- Number of states.  */
#define YYNSTATES  414

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      96,    97,    13,    11,    98,    12,   100,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    95,
       2,    99,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    18,    19,    21,    23,
      26,    28,    30,    32,    39,    41,    45,    47,    49,    53,
      54,    57,    60,    64,    69,    72,    75,    78,    83,    86,
      92,    97,   103,   111,   122,   127,   129,   133,   141,   142,
     146,   147,   151,   159,   160,   164,   167,   169,   171,   173,
     177,   179,   181,   183,   186,   189,   191,   195,   197,   199,
     201,   208,   209,   213,   215,   219,   222,   225,   226,   228,
     230,   232,   234,   236,   238,   240,   242,   244,   246,   248,
     250,   252,   254,   257,   260,   268,   273,   278,   284,   289,
     291,   293,   297,   299,   301,   304,   307,   314,   315,   317,
     319,   328,   329,   331,   335,   339,   343,   349,   351,   355,
     357,   358,   360,   362,   366,   371,   373,   377,   382,   384,
     386,   391,   394,   396,   400,   402,   405,   408,   409,   413,
     415,   419,   420,   423,   424,   428,   432,   435,   439,   441,
     443,   445,   447,   449,   451,   453,   455,   459,   463,   470,
     476,   482,   487,   488,   491,   496,   500,   507,   513,   520,
     526,   528,   532,   537,   539,   541,   543,   546,   553,   557,
     561,   565,   569,   572,   575,   577,   579,   581,   585,   587,
     591,   593,   595,   597,   599,   602,   606,   611,   617,   623,
     628,   630,   632,   634,   636,   640,   642,   646,   652,   654,
     659,   661,   666,   673,   675,   680,   687,   689,   691,   693,
     698,   700,   703,   705,   707,   709,   711,   713,   718,   722,
     725
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     102,     0,    -1,   103,    95,    -1,   102,   103,    95,    -1,
     104,    -1,    29,    76,    21,   190,   105,    -1,    -1,   106,
      -1,   107,    -1,   106,   107,    -1,   108,    -1,   116,    -1,
     119,    -1,    29,    83,   183,    96,   109,    97,    -1,   110,
      -1,   109,    98,   110,    -1,   111,    -1,   114,    -1,   186,
     185,   112,    -1,    -1,   112,   113,    -1,     9,    60,    -1,
       9,    60,    86,    -1,     9,    60,    69,    57,    -1,    34,
     182,    -1,    34,    60,    -1,    34,    88,    -1,    25,    96,
     164,    97,    -1,    74,   183,    -1,    74,   183,    96,   115,
      97,    -1,    86,    96,   115,    97,    -1,    69,    57,    96,
     115,    97,    -1,    44,    57,    96,   115,    97,    74,   183,
      -1,    44,    57,    96,   115,    97,    74,   183,    96,   115,
      97,    -1,    25,    96,   164,    97,    -1,   186,    -1,   115,
      98,   186,    -1,    29,    90,   183,   118,    19,   154,   117,
      -1,    -1,    93,    25,    65,    -1,    -1,    96,   115,    97,
      -1,    48,   121,    63,   183,    84,   124,   120,    -1,    -1,
      93,    48,    65,    -1,    16,    70,    -1,    16,    -1,   122,
      -1,   123,    -1,   122,    98,   123,    -1,    77,    -1,    53,
      -1,    35,    -1,    87,   118,    -1,    74,   118,    -1,   125,
      -1,   124,    98,   125,    -1,    72,    -1,   190,    -1,   126,
      -1,    33,   187,    31,    43,   152,   127,    -1,    -1,    66,
      23,   128,    -1,   129,    -1,   128,    98,   129,    -1,     5,
     130,    -1,   184,   130,    -1,    -1,    20,    -1,    36,    -1,
     131,    -1,   132,    -1,   133,    -1,   134,    -1,   135,    -1,
     136,    -1,   137,    -1,   141,    -1,   142,    -1,   143,    -1,
     145,    -1,   148,    -1,    26,   187,    -1,    27,    94,    -1,
      35,    46,   183,    92,    30,    62,   187,    -1,    35,    46,
     183,   151,    -1,    41,   187,    55,   149,    -1,    53,    55,
     183,   118,   138,    -1,    89,    96,   139,    97,    -1,   154,
      -1,   140,    -1,   139,    98,   140,    -1,   179,    -1,    60,
      -1,    64,   187,    -1,    75,    94,    -1,    77,   144,   155,
      55,   149,   156,    -1,    -1,    16,    -1,    37,    -1,    87,
     183,    78,   146,    92,    30,    62,   187,    -1,    -1,   147,
      -1,   146,    98,   147,    -1,   186,    99,   177,    -1,   186,
      99,    60,    -1,    87,   183,    78,   146,   151,    -1,   150,
      -1,   149,    98,   150,    -1,   180,    -1,    -1,   160,    -1,
     153,    -1,   152,    85,   153,    -1,   152,    85,    16,   153,
      -1,   154,    -1,    96,   152,    97,    -1,    77,   144,   155,
     156,    -1,   178,    -1,    13,    -1,   157,   151,   161,   163,
      -1,    46,   158,    -1,   159,    -1,   158,    98,   159,    -1,
     183,    -1,   183,   189,    -1,    92,   164,    -1,    -1,    49,
      23,   162,    -1,   184,    -1,   162,    98,   184,    -1,    -1,
      50,   164,    -1,    -1,   164,     7,   164,    -1,   164,     8,
     164,    -1,     9,   164,    -1,    96,   164,    97,    -1,   165,
      -1,   166,    -1,   167,    -1,   168,    -1,   170,    -1,   171,
      -1,   173,    -1,   175,    -1,   177,    10,   177,    -1,   177,
      10,   176,    -1,   177,     9,    22,   177,     8,   177,    -1,
     177,    22,   177,     8,   177,    -1,   177,     9,    59,   179,
     169,    -1,   177,    59,   179,   169,    -1,    -1,    39,   179,
      -1,   184,    56,     9,    60,    -1,   184,    56,    60,    -1,
     177,     9,    51,    96,   176,    97,    -1,   177,    51,    96,
     176,    97,    -1,   177,     9,    51,    96,   172,    97,    -1,
     177,    51,    96,   172,    97,    -1,   179,    -1,   172,    98,
     179,    -1,   177,    10,   174,   176,    -1,    18,    -1,    16,
      -1,    80,    -1,    40,   176,    -1,    96,    77,   144,   155,
     156,    97,    -1,   177,    11,   177,    -1,   177,    12,   177,
      -1,   177,    13,   177,    -1,   177,    14,   177,    -1,    11,
     177,    -1,    12,   177,    -1,   179,    -1,   184,    -1,   181,
      -1,    96,   177,    97,    -1,   177,    -1,   178,    98,   177,
      -1,   180,    -1,   182,    -1,    88,    -1,   188,    -1,   188,
     188,    -1,   188,    52,   188,    -1,    17,    96,    13,    97,
      -1,    17,    96,    37,   184,    97,    -1,    17,    96,    16,
     177,    97,    -1,    17,    96,   177,    97,    -1,     4,    -1,
       5,    -1,     6,    -1,     3,    -1,     3,   100,     3,    -1,
       3,    -1,     3,   100,     3,    -1,     3,   100,     3,   100,
       3,    -1,    24,    -1,    24,    96,     5,    97,    -1,    61,
      -1,    61,    96,     5,    97,    -1,    61,    96,     5,    98,
       5,    97,    -1,    32,    -1,    32,    96,     5,    97,    -1,
      32,    96,     5,    98,     5,    97,    -1,    54,    -1,    79,
      -1,    42,    -1,    42,    96,     5,    97,    -1,    73,    -1,
      38,    68,    -1,     3,    -1,     3,    -1,    67,    -1,     3,
      -1,     3,    -1,    91,     9,    45,   191,    -1,    91,    82,
     191,    -1,    47,     3,    -1,    28,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    42,    47,    51,    54,    56,    60,    61,
      65,    66,    67,    71,    75,    76,    80,    81,    85,    88,
      90,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     106,   107,   108,   110,   112,   116,   117,   121,   125,   127,
     130,   132,   136,   140,   142,   146,   147,   148,   152,   153,
     157,   158,   159,   160,   161,   166,   167,   171,   172,   177,
     182,   185,   187,   191,   192,   196,   197,   200,   202,   203,
     208,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   226,   230,   234,   238,   242,   246,   250,   251,
     255,   256,   260,   261,   265,   269,   273,   278,   280,   281,
     285,   289,   290,   291,   295,   296,   300,   304,   305,   309,
     312,   314,   320,   321,   322,   326,   327,   331,   335,   336,
     340,   347,   351,   352,   356,   357,   361,   364,   366,   370,
     371,   374,   376,   381,   382,   383,   384,   385,   386,   390,
     391,   392,   393,   394,   395,   396,   400,   401,   405,   406,
     410,   411,   414,   416,   420,   421,   425,   426,   427,   428,
     432,   433,   437,   441,   442,   443,   447,   451,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   470,   471,
     475,   476,   477,   481,   482,   483,   487,   488,   489,   490,
     494,   495,   496,   502,   503,   507,   508,   509,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   533,   536,   540,   543,   546,   550,   551,   554,
     555
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "APPROXNUM",
  "OR", "AND", "NOT", "COMPARISON", "'+'", "'-'", "'*'", "'/'", "UMINUS",
  "ALL", "AMMSC", "ANY", "AS", "ASC", "AUTHORIZATION", "BETWEEN", "BY",
  "CHARACTER", "CHECK", "CLOSE", "COMMIT", "CONTINUE", "CREATE", "CURRENT",
  "CURSOR", "DECIMAL", "DECLARE", "DEFAULT", "DELETE", "DESC", "DISTINCT",
  "DOUBLE", "ESCAPE", "EXISTS", "FETCH", "FLOAT", "FOR", "FOREIGN",
  "FOUND", "FROM", "GOTO", "GRANT", "GROUP", "HAVING", "IN", "INDICATOR",
  "INSERT", "INTEGER", "INTO", "IS", "KEY", "LANGUAGE", "LIKE", "NULLX",
  "NUMERIC", "OF", "ON", "OPEN", "OPTION", "ORDER", "PARAMETER",
  "PRECISION", "PRIMARY", "PRIVILEGES", "PROCEDURE", "PUBLIC", "REAL",
  "REFERENCES", "ROLLBACK", "SCHEMA", "SELECT", "SET", "SMALLINT", "SOME",
  "SQLCODE", "SQLERROR", "TABLE", "TO", "UNION", "UNIQUE", "UPDATE",
  "USER", "VALUES", "VIEW", "WHENEVER", "WHERE", "WITH", "WORK", "';'",
  "'('", "')'", "','", "'='", "'.'", "$accept", "sql_list", "sql",
  "schema", "opt_schema_element_list", "schema_element_list",
  "schema_element", "base_table_def", "base_table_element_commalist",
  "base_table_element", "column_def", "column_def_opt_list",
  "column_def_opt", "table_constraint_def", "column_commalist", "view_def",
  "opt_with_check_option", "opt_column_commalist", "privilege_def",
  "opt_with_grant_option", "privileges", "operation_commalist",
  "operation", "grantee_commalist", "grantee", "cursor_def",
  "opt_order_by_clause", "ordering_spec_commalist", "ordering_spec",
  "opt_asc_desc", "manipulative_statement", "close_statement",
  "commit_statement", "delete_statement_positioned",
  "delete_statement_searched", "fetch_statement", "insert_statement",
  "values_or_query_spec", "insert_atom_commalist", "insert_atom",
  "open_statement", "rollback_statement", "select_statement",
  "opt_all_distinct", "update_statement_positioned",
  "assignment_commalist", "assignment", "update_statement_searched",
  "target_commalist", "target", "opt_where_clause", "query_exp",
  "query_term", "query_spec", "selection", "table_exp", "from_clause",
  "table_ref_commalist", "table_ref", "where_clause",
  "opt_group_by_clause", "column_ref_commalist", "opt_having_clause",
  "search_condition", "predicate", "comparison_predicate",
  "between_predicate", "like_predicate", "opt_escape", "test_for_null",
  "in_predicate", "atom_commalist", "all_or_any_predicate", "any_all_some",
  "existence_test", "subquery", "scalar_exp", "scalar_exp_commalist",
  "atom", "parameter_ref", "function_ref", "literal", "table",
  "column_ref", "data_type", "column", "cursor", "parameter",
  "range_variable", "user", "when_action", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,    43,    45,    42,    47,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,    59,    40,    41,    44,    61,
      46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   102,   103,   104,   105,   105,   106,   106,
     107,   107,   107,   108,   109,   109,   110,   110,   111,   112,
     112,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     114,   114,   114,   114,   114,   115,   115,   116,   117,   117,
     118,   118,   119,   120,   120,   121,   121,   121,   122,   122,
     123,   123,   123,   123,   123,   124,   124,   125,   125,   103,
     126,   127,   127,   128,   128,   129,   129,   130,   130,   130,
     103,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   132,   133,   134,   135,   136,   137,   138,   138,
     139,   139,   140,   140,   141,   142,   143,   144,   144,   144,
     145,   146,   146,   146,   147,   147,   148,   149,   149,   150,
     151,   151,   152,   152,   152,   153,   153,   154,   155,   155,
     156,   157,   158,   158,   159,   159,   160,   161,   161,   162,
     162,   163,   163,   164,   164,   164,   164,   164,   164,   165,
     165,   165,   165,   165,   165,   165,   166,   166,   167,   167,
     168,   168,   169,   169,   170,   170,   171,   171,   171,   171,
     172,   172,   173,   174,   174,   174,   175,   176,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   178,   178,
     179,   179,   179,   180,   180,   180,   181,   181,   181,   181,
     182,   182,   182,   183,   183,   184,   184,   184,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   186,   187,   188,   189,   190,   103,   103,   191,
     191
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     5,     0,     1,     1,     2,
       1,     1,     1,     6,     1,     3,     1,     1,     3,     0,
       2,     2,     3,     4,     2,     2,     2,     4,     2,     5,
       4,     5,     7,    10,     4,     1,     3,     7,     0,     3,
       0,     3,     7,     0,     3,     2,     1,     1,     1,     3,
       1,     1,     1,     2,     2,     1,     3,     1,     1,     1,
       6,     0,     3,     1,     3,     2,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     7,     4,     4,     5,     4,     1,
       1,     3,     1,     1,     2,     2,     6,     0,     1,     1,
       8,     0,     1,     3,     3,     3,     5,     1,     3,     1,
       0,     1,     1,     3,     4,     1,     3,     4,     1,     1,
       4,     2,     1,     3,     1,     2,     2,     0,     3,     1,
       3,     0,     2,     0,     3,     3,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     6,     5,
       5,     4,     0,     2,     4,     3,     6,     5,     6,     5,
       1,     3,     4,     1,     1,     1,     2,     6,     3,     3,
       3,     3,     2,     2,     1,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     2,     3,     4,     5,     5,     4,
       1,     1,     1,     1,     3,     1,     3,     5,     1,     4,
       1,     4,     6,     1,     4,     6,     1,     1,     1,     4,
       1,     2,     1,     1,     1,     1,     1,     4,     3,     2,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     4,    59,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,   213,
      82,    83,     0,     0,     0,     0,     0,    94,    95,    98,
      99,     0,   193,     0,     0,     0,     1,     0,     2,     0,
       0,   110,     0,    40,   195,   190,   191,   192,     0,     0,
     119,     0,   214,   182,     0,     0,   178,   118,   174,   180,
     176,   181,   175,   183,     0,   101,     0,   220,     0,   218,
       3,   216,     6,     0,   133,    85,   111,    86,   107,   109,
       0,     0,     0,   172,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   184,   194,   212,   110,   102,     0,
     217,   219,     0,     0,     5,     7,     8,    10,    11,    12,
      97,     0,    61,   112,   115,   133,     0,     0,   133,   126,
     138,   139,   140,   141,   142,   143,   144,   145,     0,   175,
       0,     0,    35,     0,    87,    89,   196,     0,     0,     0,
       0,   177,     0,   168,   169,   170,   171,   179,   185,   133,
       0,   106,     0,     0,     0,    46,    52,    51,    40,    50,
      40,     0,    47,    48,     9,     0,     0,     0,     0,    60,
     136,     0,     0,   166,     0,     0,   133,   133,     0,     0,
       0,     0,     0,     0,   108,    41,     0,     0,     0,   186,
       0,     0,   189,     0,    96,   110,     0,   103,   105,   104,
       0,    40,    45,    54,    53,     0,     0,     0,   116,     0,
       0,   113,    84,    97,   137,   134,   135,     0,     0,     0,
     164,   163,   165,     0,     0,   147,   146,     0,     0,   152,
       0,   155,    36,    93,     0,    90,    92,   197,   188,   187,
     121,   122,   124,   133,   127,     0,     0,     0,     0,    49,
     117,    67,    62,    63,    67,   114,     0,     0,     0,   152,
     162,     0,     0,     0,   160,     0,   151,   154,    88,     0,
       0,   215,   125,     0,   131,   100,     0,     0,     0,     0,
       0,    14,    16,    17,     0,     0,     0,    68,    69,    65,
       0,    66,     0,     0,     0,     0,   150,   149,   159,     0,
     157,   153,    91,   123,     0,   133,   120,   133,     0,     0,
       0,    13,     0,   198,   203,     0,   208,   206,   200,   210,
     207,    19,    38,    57,    43,    55,    58,    64,     0,   148,
     158,   156,   161,   128,   129,   132,     0,     0,     0,     0,
      15,     0,     0,   211,     0,     0,    18,     0,    37,     0,
       0,    42,   167,     0,    34,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,    56,
     130,     0,    31,   199,   204,     0,   209,   201,     0,    21,
     133,    25,    26,    24,    28,    39,    44,     0,     0,     0,
       0,    22,     0,     0,    32,   205,   202,    23,    27,     0,
       0,    29,     0,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,   114,   115,   116,   117,   290,   291,
     292,   356,   376,   293,   141,   118,   358,    91,   119,   361,
     171,   172,   173,   334,   335,    16,   179,   262,   263,   299,
      17,    18,    19,    20,    21,    22,    23,   144,   244,   245,
      24,    25,    26,    41,    27,   107,   108,    28,    87,    88,
      85,   122,   123,   124,    65,   204,   205,   250,   251,    86,
     284,   343,   316,   129,   130,   131,   132,   133,   276,   134,
     135,   272,   136,   234,   137,   183,   138,    67,    68,    69,
      70,    71,   252,    72,   331,   142,    30,    73,   282,   336,
      79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -299
static const yytype_int16 yypact[] =
{
     362,    16,   -57,    14,    16,    54,    16,    56,    16,    23,
      71,   183,    15,   330,    96,  -299,  -299,  -299,  -299,  -299,
    -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,
    -299,  -299,   130,   162,   183,   141,   183,  -299,  -299,  -299,
    -299,   266,    99,   129,   171,   148,  -299,   134,  -299,   219,
     203,   166,   196,   170,   182,  -299,  -299,  -299,   320,   320,
    -299,   172,  -299,  -299,   320,   251,   290,   231,  -299,  -299,
    -299,  -299,  -299,    76,   335,   337,   148,  -299,   340,  -299,
    -299,  -299,   153,   123,    27,  -299,  -299,   247,  -299,  -299,
     337,    98,   344,  -299,  -299,   151,    68,   196,   320,   320,
     320,   320,   320,   196,  -299,  -299,  -299,    91,  -299,   254,
    -299,  -299,    59,   265,  -299,   153,  -299,  -299,  -299,  -299,
      71,   123,   157,  -299,  -299,   248,   289,   259,   248,    66,
    -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,   432,   302,
     196,   140,  -299,   264,  -299,  -299,   268,   269,   320,   375,
     108,  -299,    -3,   235,   235,  -299,  -299,   290,  -299,   168,
     337,  -299,   281,   183,   183,   309,  -299,  -299,   170,  -299,
     170,   318,   286,  -299,  -299,   266,    93,   367,    73,  -299,
    -299,    16,   308,  -299,    19,   400,   248,   248,   107,   209,
     320,   296,    47,    26,  -299,  -299,   337,   142,   393,  -299,
     127,   303,  -299,   183,  -299,   310,   342,  -299,  -299,   290,
     322,   170,  -299,  -299,  -299,   183,   293,   360,  -299,   128,
     123,  -299,  -299,    71,  -299,   411,  -299,   320,   327,    47,
    -299,  -299,  -299,   305,   259,  -299,   290,   419,    11,   385,
     365,  -299,  -299,  -299,   164,  -299,  -299,  -299,  -299,  -299,
     331,  -299,   433,   248,   386,    16,    58,   421,   363,  -299,
    -299,    39,   350,  -299,    39,  -299,   266,   450,    11,   385,
    -299,   320,   177,   355,  -299,    47,  -299,  -299,  -299,   142,
     183,  -299,  -299,   437,   405,  -299,   369,   399,   409,   371,
     193,  -299,  -299,  -299,   396,   391,    53,  -299,  -299,  -299,
     128,  -299,   360,   320,   197,   373,  -299,   290,  -299,    47,
    -299,  -299,  -299,  -299,   375,   248,  -299,   248,   376,   377,
     337,  -299,    58,   378,   380,   403,   381,  -299,   382,  -299,
    -299,  -299,   387,  -299,   135,  -299,  -299,  -299,   384,   290,
    -299,  -299,  -299,   388,  -299,    66,    33,   337,   337,   216,
    -299,   474,   477,  -299,   479,   480,   287,   462,  -299,   440,
      53,  -299,  -299,   375,  -299,   222,   237,  -299,   392,   252,
     395,   276,   430,   397,   239,   183,  -299,   429,   431,  -299,
    -299,   424,  -299,  -299,  -299,   490,  -299,  -299,   494,    -9,
     248,  -299,  -299,  -299,   404,  -299,  -299,   183,   406,   407,
     444,  -299,    40,   337,   410,  -299,  -299,  -299,  -299,   278,
     337,  -299,   301,  -299
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -299,  -299,   489,  -299,  -299,  -299,   390,  -299,  -299,   185,
    -299,  -299,  -299,  -299,  -298,  -299,  -299,   -77,  -299,  -299,
    -299,  -299,   292,  -299,   149,  -299,  -299,  -299,   210,   249,
    -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,   232,
    -299,  -299,  -299,  -110,  -299,  -299,   352,  -299,   417,   379,
     -95,   394,  -158,   -84,  -157,  -196,  -299,  -299,   236,  -299,
    -299,  -299,  -299,  -123,  -299,  -299,  -299,  -299,   253,  -299,
    -299,   250,  -299,  -299,  -299,   -28,   -30,  -299,  -183,   -39,
    -299,   143,   -11,   -83,  -299,   -72,     0,   -19,  -299,   471,
     445
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      43,   139,   180,   109,    33,   184,    35,   145,    37,   239,
     175,    66,   161,    89,   246,    55,    56,    57,   217,    29,
     221,   260,   349,    51,    44,    53,   186,   187,    93,    94,
      54,    55,    56,    57,    96,   240,   125,    31,    58,    59,
     186,   187,   139,   203,    61,   139,   269,   186,   187,   365,
     366,    55,    56,    57,   104,   274,    81,   126,    89,   297,
     400,   106,   265,   225,   226,   150,   201,   127,   153,   154,
     155,   156,   157,   186,   187,   298,   139,   401,    62,    98,
      99,   100,   101,   286,   158,   274,   241,    39,   109,   220,
      32,   213,   311,   214,    62,   140,   246,    45,   185,    63,
      34,    89,   287,   139,   139,   409,   338,   182,    40,   302,
     254,    36,   412,   266,    62,    63,   224,    38,   200,    98,
      99,   100,   101,   128,   242,   333,   342,   288,   103,   227,
     364,    54,   209,   261,   257,    63,   264,   408,    98,    99,
     100,   101,   163,    62,   289,    66,    55,    56,    57,   164,
     120,    49,   210,   211,    54,    55,    56,    57,   228,   236,
     237,   235,    58,    59,   147,   151,   229,   148,    61,   121,
     139,    54,    55,    56,    57,   120,    77,   125,   178,    58,
      59,   222,   112,   159,   294,    61,    42,   143,   149,   160,
     218,    48,   345,    50,   346,    78,    52,   267,   206,    74,
     120,   113,   243,    96,   258,   202,   270,    75,   127,    62,
     273,   332,    54,    55,    56,    57,    76,   264,    62,   121,
      58,    59,    81,   177,   248,   230,    61,   231,   359,    80,
      63,   344,   139,   360,   139,    62,    66,   195,   196,    63,
     305,   307,   178,    55,    56,    57,    83,    64,   100,   101,
     294,    54,    55,    56,    57,   285,    63,   125,    84,    58,
      59,   278,   279,    62,   128,    61,    90,   402,    95,    54,
      55,    56,    57,   339,   308,   309,    62,    58,    59,    60,
     380,   165,    92,    61,    54,    55,    56,    57,   127,   232,
     321,   322,    58,    59,   340,   309,   372,    63,    61,   391,
     166,    98,    99,   100,   101,   233,    97,   139,    54,    55,
      56,    57,   373,   367,   196,    62,    58,    59,   167,   381,
     196,   374,    61,    54,    55,    56,    57,   392,   166,   102,
      46,    58,    59,    62,   382,   196,    63,    61,   105,   168,
     106,   208,   169,   111,   128,   140,   167,   146,    62,   384,
     385,   181,   170,   162,    63,   182,     1,     2,   193,     3,
     197,   375,    64,     4,   394,     5,   199,   168,   198,    63,
     169,     6,    62,   387,   388,   411,   196,    64,    54,   212,
     170,   215,   223,     7,   216,   223,   404,    62,     1,     2,
     219,     3,   238,    63,     8,     4,   247,     5,   413,   196,
     249,    64,   253,     6,   255,     9,   203,    10,    63,   188,
     189,    98,    99,   100,   101,     7,    64,    11,   256,   187,
     323,    12,   190,   268,   275,   277,     8,   271,   324,   280,
      98,    99,   100,   101,   325,   283,   281,     9,   326,    10,
     295,   188,   189,    98,    99,   100,   101,   296,   300,    11,
     327,   191,   310,    12,   190,   315,   318,   328,   303,   192,
     314,    98,    99,   100,   101,   317,   319,   320,   120,   329,
     341,   353,   347,   348,   351,   330,   352,   354,   355,   368,
     357,   362,   369,   191,   370,   371,   363,   377,   378,   383,
     389,   192,   386,   390,   395,   398,   396,   151,   397,   399,
     403,   407,    47,   405,   406,   174,   410,   350,   259,   379,
     337,   312,   207,   301,   152,   176,   313,   393,   304,   194,
      82,   110,   306
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-299))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_uint16 yycheck[] =
{
      11,    84,   125,    75,     4,   128,     6,    91,     8,   192,
     120,    41,   107,    52,   197,     4,     5,     6,   175,     3,
     178,   217,   320,    34,     9,    36,     7,     8,    58,    59,
       3,     4,     5,     6,    64,     9,     9,    94,    11,    12,
       7,     8,   125,    46,    17,   128,   229,     7,     8,   347,
     348,     4,     5,     6,    73,   238,     3,    30,    97,    20,
      69,     3,   220,   186,   187,    95,   149,    40,    98,    99,
     100,   101,   102,     7,     8,    36,   159,    86,    67,    11,
      12,    13,    14,    25,   103,   268,    60,    16,   160,    16,
      76,   168,   275,   170,    67,    98,   279,    82,   128,    88,
      46,   140,    44,   186,   187,   403,   302,    96,    37,   266,
     205,    55,   410,   223,    67,    88,    97,    94,   148,    11,
      12,    13,    14,    96,   196,    72,   309,    69,    52,    22,
      97,     3,   162,     5,   211,    88,   219,    97,    11,    12,
      13,    14,    83,    67,    86,   175,     4,     5,     6,    90,
      77,    21,   163,   164,     3,     4,     5,     6,    51,   189,
     190,   189,    11,    12,    13,    97,    59,    16,    17,    96,
     253,     3,     4,     5,     6,    77,    28,     9,    85,    11,
      12,   181,    29,    92,   256,    17,     3,    89,    37,    98,
      97,    95,   315,    31,   317,    47,    55,   227,    30,   100,
      77,    48,    60,   233,   215,    97,   234,    78,    40,    67,
     238,   295,     3,     4,     5,     6,    45,   300,    67,    96,
      11,    12,     3,    66,    97,    16,    17,    18,    93,    95,
      88,   314,   315,    98,   317,    67,   266,    97,    98,    88,
     268,   271,    85,     4,     5,     6,    43,    96,    13,    14,
     322,     3,     4,     5,     6,   255,    88,     9,    92,    11,
      12,    97,    98,    67,    96,    17,    96,   390,    96,     3,
       4,     5,     6,   303,    97,    98,    67,    11,    12,    13,
     363,    16,   100,    17,     3,     4,     5,     6,    40,    80,
      97,    98,    11,    12,    97,    98,     9,    88,    17,    60,
      35,    11,    12,    13,    14,    96,    55,   390,     3,     4,
       5,     6,    25,    97,    98,    67,    11,    12,    53,    97,
      98,    34,    17,     3,     4,     5,     6,    88,    35,    98,
       0,    11,    12,    67,    97,    98,    88,    17,     3,    74,
       3,    60,    77,     3,    96,    98,    53,     3,    67,    97,
      98,    62,    87,    99,    88,    96,    26,    27,    56,    29,
      96,    74,    96,    33,   375,    35,    97,    74,   100,    88,
      77,    41,    67,    97,    98,    97,    98,    96,     3,    70,
      87,    63,    77,    53,    98,    77,   397,    67,    26,    27,
      23,    29,    96,    88,    64,    33,     3,    35,    97,    98,
      97,    96,    92,    41,    62,    75,    46,    77,    88,     9,
      10,    11,    12,    13,    14,    53,    96,    87,    96,     8,
      24,    91,    22,    96,    39,    60,    64,     8,    32,    98,
      11,    12,    13,    14,    38,    49,     3,    75,    42,    77,
      19,     9,    10,    11,    12,    13,    14,    84,    98,    87,
      54,    51,    97,    91,    22,    50,    57,    61,     8,    59,
      23,    11,    12,    13,    14,    96,    57,    96,    77,    73,
      97,    68,    96,    96,    96,    79,    96,    96,    96,     5,
      93,    97,     5,    51,     5,     5,    98,    25,    48,    97,
      60,    59,    97,    96,    65,     5,    65,    97,    74,     5,
      96,    57,    13,    97,    97,   115,    96,   322,   216,   360,
     300,   279,   160,   264,    97,   121,   280,   374,   268,   140,
      49,    76,   269
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    27,    29,    33,    35,    41,    53,    64,    75,
      77,    87,    91,   102,   103,   104,   126,   131,   132,   133,
     134,   135,   136,   137,   141,   142,   143,   145,   148,     3,
     187,    94,    76,   187,    46,   187,    55,   187,    94,    16,
      37,   144,     3,   183,     9,    82,     0,   103,    95,    21,
      31,   183,    55,   183,     3,     4,     5,     6,    11,    12,
      13,    17,    67,    88,    96,   155,   177,   178,   179,   180,
     181,   182,   184,   188,   100,    78,    45,    28,    47,   191,
      95,     3,   190,    43,    92,   151,   160,   149,   150,   180,
      96,   118,   100,   177,   177,    96,   177,    55,    11,    12,
      13,    14,    98,    52,   188,     3,     3,   146,   147,   186,
     191,     3,    29,    48,   105,   106,   107,   108,   116,   119,
      77,    96,   152,   153,   154,     9,    30,    40,    96,   164,
     165,   166,   167,   168,   170,   171,   173,   175,   177,   184,
      98,   115,   186,    89,   138,   154,     3,    13,    16,    37,
     177,    97,   149,   177,   177,   177,   177,   177,   188,    92,
      98,   151,    99,    83,    90,    16,    35,    53,    74,    77,
      87,   121,   122,   123,   107,   144,   152,    66,    85,   127,
     164,    62,    96,   176,   164,   177,     7,     8,     9,    10,
      22,    51,    59,    56,   150,    97,    98,    96,   100,    97,
     177,   184,    97,    46,   156,   157,    30,   147,    60,   177,
     183,   183,    70,   118,   118,    63,    98,   155,    97,    23,
      16,   153,   187,    77,    97,   164,   164,    22,    51,    59,
      16,    18,    80,    96,   174,   176,   177,   177,    96,   179,
       9,    60,   186,    60,   139,   140,   179,     3,    97,    97,
     158,   159,   183,    92,   151,    62,    96,   118,   183,   123,
     156,     5,   128,   129,   184,   153,   144,   177,    96,   179,
     176,     8,   172,   176,   179,    39,   169,    60,    97,    98,
      98,     3,   189,    49,   161,   187,    25,    44,    69,    86,
     109,   110,   111,   114,   186,    19,    84,    20,    36,   130,
      98,   130,   155,     8,   172,   176,   169,   177,    97,    98,
      97,   179,   140,   159,    23,    50,   163,    96,    57,    57,
      96,    97,    98,    24,    32,    38,    42,    54,    61,    73,
      79,   185,   154,    72,   124,   125,   190,   129,   156,   177,
      97,    97,   179,   162,   184,   164,   164,    96,    96,   115,
     110,    96,    96,    68,    96,    96,   112,    93,   117,    93,
      98,   120,    97,    98,    97,   115,   115,    97,     5,     5,
       5,     5,     9,    25,    34,    74,   113,    25,    48,   125,
     184,    97,    97,    97,    97,    98,    97,    97,    98,    60,
      96,    60,    88,   182,   183,    65,    65,    74,     5,     5,
      69,    86,   164,    96,   183,    97,    97,    57,    97,   115,
      96,    97,   115,    97
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 41 "embeded_sql.y"
    { end_sql(); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 42 "embeded_sql.y"
    { end_sql(); }
    break;



/* Line 1806 of yacc.c  */
#line 1993 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 557 "embeded_sql.y"


