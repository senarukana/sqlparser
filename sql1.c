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
     MODULE = 311,
     NULLX = 312,
     NUMERIC = 313,
     OF = 314,
     ON = 315,
     OPEN = 316,
     OPTION = 317,
     ORDER = 318,
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
     WORK = 345,
     COBOL = 346,
     FORTRAN = 347,
     PASCAL = 348,
     PLI = 349,
     C = 350,
     ADA = 351
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
#define MODULE 311
#define NULLX 312
#define NUMERIC 313
#define OF 314
#define ON 315
#define OPEN 316
#define OPTION 317
#define ORDER 318
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
#define COBOL 346
#define FORTRAN 347
#define PASCAL 348
#define PLI 349
#define C 350
#define ADA 351




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 3 "sql1.y"

    int intval;
    double floatval;
    char *strval;
    int subtok;



/* Line 293 of yacc.c  */
#line 308 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 320 "y.tab.c"

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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   560

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  245
/* YYNRULES -- Number of states.  */
#define YYNSTATES  450

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     102,   103,    13,    11,   104,    12,   106,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   107,   101,
       2,   105,     2,     2,     2,     2,     2,     2,     2,     2,
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
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100
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
     201,   210,   211,   213,   215,   217,   219,   221,   223,   225,
     226,   228,   230,   233,   240,   241,   245,   247,   251,   254,
     257,   258,   260,   262,   264,   267,   273,   275,   278,   280,
     283,   286,   288,   290,   292,   294,   296,   298,   300,   302,
     304,   306,   308,   310,   312,   315,   318,   326,   331,   336,
     342,   347,   349,   351,   355,   357,   359,   362,   365,   372,
     377,   378,   380,   382,   391,   392,   394,   398,   402,   406,
     412,   414,   418,   420,   421,   423,   425,   429,   434,   436,
     440,   445,   447,   449,   454,   457,   459,   463,   465,   468,
     471,   472,   476,   478,   482,   483,   486,   487,   491,   495,
     498,   502,   504,   506,   508,   510,   512,   514,   516,   518,
     522,   526,   533,   539,   545,   550,   551,   554,   559,   563,
     570,   576,   583,   589,   591,   595,   600,   602,   604,   606,
     609,   616,   620,   624,   628,   632,   635,   638,   640,   642,
     644,   648,   650,   654,   656,   658,   660,   662,   665,   669,
     674,   680,   686,   691,   693,   695,   697,   699,   703,   705,
     709,   715,   717,   722,   724,   729,   736,   738,   743,   750,
     752,   754,   756,   761,   763,   766,   768,   770,   772,   775,
     777,   779,   781,   786,   790,   793
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     109,     0,    -1,   110,   101,    -1,   109,   110,   101,    -1,
     111,    -1,    29,    76,    21,   209,   112,    -1,    -1,   113,
      -1,   114,    -1,   113,   114,    -1,   115,    -1,   123,    -1,
     126,    -1,    29,    83,   200,   102,   116,   103,    -1,   117,
      -1,   116,   104,   117,    -1,   118,    -1,   121,    -1,   203,
     202,   119,    -1,    -1,   119,   120,    -1,     9,    61,    -1,
       9,    61,    86,    -1,     9,    61,    69,    57,    -1,    34,
     199,    -1,    34,    61,    -1,    34,    88,    -1,    25,   102,
     181,   103,    -1,    74,   200,    -1,    74,   200,   102,   122,
     103,    -1,    86,   102,   122,   103,    -1,    69,    57,   102,
     122,   103,    -1,    44,    57,   102,   122,   103,    74,   200,
      -1,    44,    57,   102,   122,   103,    74,   200,   102,   122,
     103,    -1,    25,   102,   181,   103,    -1,   203,    -1,   122,
     104,   203,    -1,    29,    90,   200,   125,    19,   171,   124,
      -1,    -1,    93,    25,    66,    -1,    -1,   102,   122,   103,
      -1,    48,   128,    64,   200,    84,   131,   127,    -1,    -1,
      93,    48,    66,    -1,    16,    70,    -1,    16,    -1,   129,
      -1,   130,    -1,   129,   104,   130,    -1,    77,    -1,    53,
      -1,    35,    -1,    87,   125,    -1,    74,   125,    -1,   132,
      -1,   131,   104,   132,    -1,    72,    -1,   209,    -1,   133,
      -1,    60,   134,    58,   135,    21,   209,   136,   143,    -1,
      -1,   205,    -1,    95,    -1,    96,    -1,    97,    -1,    98,
      -1,    99,    -1,   100,    -1,    -1,   137,    -1,   138,    -1,
     137,   138,    -1,    33,   204,    31,    43,   169,   139,    -1,
      -1,    67,    23,   140,    -1,   141,    -1,   140,   104,   141,
      -1,     5,   142,    -1,   201,   142,    -1,    -1,    20,    -1,
      36,    -1,   144,    -1,   143,   144,    -1,    71,   207,   146,
     101,   145,    -1,   148,    -1,   145,   148,    -1,   147,    -1,
     146,   147,    -1,   206,   202,    -1,    81,    -1,   148,    -1,
     149,    -1,   150,    -1,   151,    -1,   152,    -1,   153,    -1,
     154,    -1,   158,    -1,   159,    -1,   160,    -1,   162,    -1,
     165,    -1,    26,   204,    -1,    27,    94,    -1,    35,    46,
     200,    92,    30,    63,   204,    -1,    35,    46,   200,   168,
      -1,    41,   204,    55,   166,    -1,    53,    55,   200,   125,
     155,    -1,    89,   102,   156,   103,    -1,   171,    -1,   157,
      -1,   156,   104,   157,    -1,   196,    -1,    61,    -1,    65,
     204,    -1,    75,    94,    -1,    77,   161,   172,    55,   166,
     173,    -1,    77,   161,   172,   173,    -1,    -1,    16,    -1,
      37,    -1,    87,   200,    78,   163,    92,    30,    63,   204,
      -1,    -1,   164,    -1,   163,   104,   164,    -1,   203,   105,
     194,    -1,   203,   105,    61,    -1,    87,   200,    78,   163,
     168,    -1,   167,    -1,   166,   104,   167,    -1,   197,    -1,
      -1,   177,    -1,   170,    -1,   169,    85,   170,    -1,   169,
      85,    16,   170,    -1,   171,    -1,   102,   169,   103,    -1,
      77,   161,   172,   173,    -1,   195,    -1,    13,    -1,   174,
     168,   178,   180,    -1,    46,   175,    -1,   176,    -1,   175,
     104,   176,    -1,   200,    -1,   200,   208,    -1,    92,   181,
      -1,    -1,    49,    23,   179,    -1,   201,    -1,   179,   104,
     201,    -1,    -1,    50,   181,    -1,    -1,   181,     7,   181,
      -1,   181,     8,   181,    -1,     9,   181,    -1,   102,   181,
     103,    -1,   182,    -1,   183,    -1,   184,    -1,   185,    -1,
     187,    -1,   188,    -1,   190,    -1,   192,    -1,   194,    10,
     194,    -1,   194,    10,   193,    -1,   194,     9,    22,   194,
       8,   194,    -1,   194,    22,   194,     8,   194,    -1,   194,
       9,    59,   196,   186,    -1,   194,    59,   196,   186,    -1,
      -1,    39,   196,    -1,   201,    56,     9,    61,    -1,   201,
      56,    61,    -1,   194,     9,    51,   102,   193,   103,    -1,
     194,    51,   102,   193,   103,    -1,   194,     9,    51,   102,
     189,   103,    -1,   194,    51,   102,   189,   103,    -1,   196,
      -1,   189,   104,   196,    -1,   194,    10,   191,   193,    -1,
      18,    -1,    16,    -1,    80,    -1,    40,   193,    -1,   102,
      77,   161,   172,   173,   103,    -1,   194,    11,   194,    -1,
     194,    12,   194,    -1,   194,    13,   194,    -1,   194,    14,
     194,    -1,    11,   194,    -1,    12,   194,    -1,   196,    -1,
     201,    -1,   198,    -1,   102,   194,   103,    -1,   194,    -1,
     195,   104,   194,    -1,   197,    -1,   199,    -1,    88,    -1,
     206,    -1,   206,   206,    -1,   206,    52,   206,    -1,    17,
     102,    13,   103,    -1,    17,   102,    37,   201,   103,    -1,
      17,   102,    16,   194,   103,    -1,    17,   102,   194,   103,
      -1,     4,    -1,     5,    -1,     6,    -1,     3,    -1,     3,
     106,     3,    -1,     3,    -1,     3,   106,     3,    -1,     3,
     106,     3,   106,     3,    -1,    24,    -1,    24,   102,     5,
     103,    -1,    62,    -1,    62,   102,     5,   103,    -1,    62,
     102,     5,   104,     5,   103,    -1,    32,    -1,    32,   102,
       5,   103,    -1,    32,   102,     5,   104,     5,   103,    -1,
      54,    -1,    79,    -1,    42,    -1,    42,   102,     5,   103,
      -1,    73,    -1,    38,    68,    -1,     3,    -1,     3,    -1,
       3,    -1,   107,     3,    -1,     3,    -1,     3,    -1,     3,
      -1,    91,     9,    45,   210,    -1,    91,    82,   210,    -1,
      47,     3,    -1,    28,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    42,    48,    52,    55,    57,    61,    62,
      66,    67,    68,    72,    76,    77,    81,    82,    86,    89,
      91,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     107,   108,   109,   111,   113,   117,   118,   122,   126,   128,
     131,   133,   137,   141,   143,   147,   148,   149,   153,   154,
     158,   159,   160,   161,   162,   167,   168,   172,   173,   177,
     181,   188,   190,   194,   195,   196,   197,   198,   199,   202,
     204,   208,   209,   213,   216,   218,   222,   223,   227,   228,
     231,   233,   234,   238,   239,   243,   248,   249,   253,   254,
     258,   259,   264,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   282,   286,   290,   294,   298,   302,
     306,   307,   311,   312,   316,   317,   321,   325,   329,   332,
     336,   338,   339,   343,   347,   348,   349,   353,   354,   358,
     362,   363,   367,   370,   372,   378,   379,   380,   384,   385,
     389,   393,   394,   398,   405,   409,   410,   414,   415,   419,
     422,   424,   428,   429,   432,   434,   439,   440,   441,   442,
     443,   444,   448,   449,   450,   451,   452,   453,   454,   458,
     459,   463,   464,   468,   469,   472,   474,   478,   479,   483,
     484,   485,   486,   490,   491,   495,   499,   500,   501,   505,
     509,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   528,   529,   533,   534,   535,   539,   540,   541,   545,
     546,   547,   548,   552,   553,   554,   560,   561,   565,   566,
     567,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,   591,   594,   597,   601,   604,
     607,   610,   614,   615,   618,   619
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
  "INSERT", "INTEGER", "INTO", "IS", "KEY", "LANGUAGE", "LIKE", "MODULE",
  "NULLX", "NUMERIC", "OF", "ON", "OPEN", "OPTION", "ORDER", "PRECISION",
  "PRIMARY", "PRIVILEGES", "PROCEDURE", "PUBLIC", "REAL", "REFERENCES",
  "ROLLBACK", "SCHEMA", "SELECT", "SET", "SMALLINT", "SOME", "SQLCODE",
  "SQLERROR", "TABLE", "TO", "UNION", "UNIQUE", "UPDATE", "USER", "VALUES",
  "VIEW", "WHENEVER", "WHERE", "WITH", "WORK", "COBOL", "FORTRAN",
  "PASCAL", "PLI", "C", "ADA", "';'", "'('", "')'", "','", "'='", "'.'",
  "':'", "$accept", "sql_list", "sql", "schema", "opt_schema_element_list",
  "schema_element_list", "schema_element", "base_table_def",
  "base_table_element_commalist", "base_table_element", "column_def",
  "column_def_opt_list", "column_def_opt", "table_constraint_def",
  "column_commalist", "view_def", "opt_with_check_option",
  "opt_column_commalist", "privilege_def", "opt_with_grant_option",
  "privileges", "operation_commalist", "operation", "grantee_commalist",
  "grantee", "module_def", "opt_module", "lang", "opt_cursor_def_list",
  "cursor_def_list", "cursor_def", "opt_order_by_clause",
  "ordering_spec_commalist", "ordering_spec", "opt_asc_desc",
  "procedure_def_list", "procedure_def", "manipulative_statement_list",
  "parameter_def_list", "parameter_def", "manipulative_statement",
  "close_statement", "commit_statement", "delete_statement_positioned",
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
  "column_ref", "data_type", "column", "cursor", "module", "parameter",
  "procedure", "range_variable", "user", "when_action", 0
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
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,    59,    40,    41,    44,    61,    46,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   111,   112,   112,   113,   113,
     114,   114,   114,   115,   116,   116,   117,   117,   118,   119,
     119,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     121,   121,   121,   121,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   127,   127,   128,   128,   128,   129,   129,
     130,   130,   130,   130,   130,   131,   131,   132,   132,   110,
     133,   134,   134,   135,   135,   135,   135,   135,   135,   136,
     136,   137,   137,   138,   139,   139,   140,   140,   141,   141,
     142,   142,   142,   143,   143,   144,   145,   145,   146,   146,
     147,   147,   110,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   149,   150,   151,   152,   153,   154,
     155,   155,   156,   156,   157,   157,   158,   159,   160,   160,
     161,   161,   161,   162,   163,   163,   163,   164,   164,   165,
     166,   166,   167,   168,   168,   169,   169,   169,   170,   170,
     171,   172,   172,   173,   174,   175,   175,   176,   176,   177,
     178,   178,   179,   179,   180,   180,   181,   181,   181,   181,
     181,   181,   182,   182,   182,   182,   182,   182,   182,   183,
     183,   184,   184,   185,   185,   186,   186,   187,   187,   188,
     188,   188,   188,   189,   189,   190,   191,   191,   191,   192,
     193,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   195,   195,   196,   196,   196,   197,   197,   197,   198,
     198,   198,   198,   199,   199,   199,   200,   200,   201,   201,
     201,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   203,   204,   205,   206,   207,
     208,   209,   110,   110,   210,   210
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
       8,     0,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     2,     6,     0,     3,     1,     3,     2,     2,
       0,     1,     1,     1,     2,     5,     1,     2,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     7,     4,     4,     5,
       4,     1,     1,     3,     1,     1,     2,     2,     6,     4,
       0,     1,     1,     8,     0,     1,     3,     3,     3,     5,
       1,     3,     1,     0,     1,     1,     3,     4,     1,     3,
       4,     1,     1,     4,     2,     1,     3,     1,     2,     2,
       0,     3,     1,     3,     0,     2,     0,     3,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     6,     5,     5,     4,     0,     2,     4,     3,     6,
       5,     6,     5,     1,     3,     4,     1,     1,     1,     2,
       6,     3,     3,     3,     3,     2,     2,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     2,     3,     4,
       5,     5,     4,     1,     1,     1,     1,     3,     1,     3,
       5,     1,     4,     1,     4,     6,     1,     4,     6,     1,
       1,     1,     4,     1,     2,     1,     1,     1,     2,     1,
       1,     1,     4,     3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    61,     0,     0,
     120,     0,     0,     0,     0,     4,    59,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   236,
     104,   105,     0,     0,     0,     0,   237,     0,    62,   116,
     117,   121,   122,     0,   216,     0,     0,     0,     1,     0,
       2,     0,   133,     0,    40,     0,   218,   213,   214,   215,
       0,     0,   142,     0,   205,     0,     0,     0,   201,   141,
     197,   203,   199,   204,   198,   206,     0,   124,     0,   245,
       0,   243,     3,   241,     6,   156,   107,   134,   108,   130,
     132,     0,     0,    63,    64,    65,    66,    67,    68,     0,
       0,   195,   196,     0,     0,   238,     0,     0,   119,   133,
       0,     0,     0,     0,     0,     0,   207,   217,   235,   133,
     125,     0,   242,   244,     0,     0,     5,     7,     8,    10,
      11,    12,   156,     0,     0,   156,   149,   161,   162,   163,
     164,   165,   166,   167,   168,     0,   198,     0,     0,    35,
     120,     0,   109,   111,     0,   219,     0,     0,     0,     0,
     200,   144,   145,   147,     0,   156,   150,   191,   192,   193,
     194,   202,   208,   156,     0,   129,     0,     0,     0,    46,
      52,    51,    40,    50,    40,     0,    47,    48,     9,   159,
       0,     0,   189,     0,     0,   156,   156,     0,     0,     0,
       0,     0,     0,   131,    41,     0,     0,     0,    69,     0,
     209,     0,     0,   212,     0,   240,   148,   118,     0,   154,
       0,   126,   128,   127,     0,    40,    45,    54,    53,     0,
       0,   106,   120,   160,   157,   158,     0,     0,     0,   187,
     186,   188,     0,     0,   170,   169,     0,     0,   175,     0,
     178,    36,     0,   115,     0,   112,   114,     0,     0,    70,
      71,   220,   211,   210,   146,     0,   156,   143,     0,     0,
       0,     0,    49,     0,     0,     0,   175,   185,     0,     0,
       0,   183,     0,   174,   177,   140,   110,     0,     0,     0,
      60,    83,    72,   151,   152,   155,   123,     0,     0,     0,
       0,     0,    14,    16,    17,     0,     0,     0,     0,     0,
       0,     0,   173,   172,   182,     0,   180,   176,   113,     0,
     239,     0,    84,     0,   156,     0,     0,     0,    13,     0,
     221,   226,     0,   231,   229,   223,   233,   230,    19,    38,
      57,    43,    55,    58,     0,   171,   181,   179,   184,     0,
      91,     0,    88,     0,   153,     0,     0,     0,     0,    15,
       0,     0,   234,     0,     0,    18,     0,    37,     0,     0,
      42,   190,     0,    74,   135,   138,     0,    89,    90,    34,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,    56,     0,     0,     0,    73,    85,
      86,     0,    31,   222,   227,     0,   232,   224,     0,    21,
     156,    25,    26,    24,    28,    39,    44,   139,     0,     0,
     136,    87,     0,     0,     0,     0,    22,     0,     0,    80,
      75,    76,    80,   137,    32,   228,   225,    23,    27,     0,
      81,    82,    78,     0,    79,     0,    29,    77,     0,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,   126,   127,   128,   129,   301,   302,
     303,   365,   391,   304,   148,   130,   367,    92,   131,   370,
     185,   186,   187,   341,   342,    16,    37,    99,   258,   259,
     260,   398,   430,   431,   442,   290,   291,   399,   351,   352,
      17,    18,    19,    20,    21,    22,    23,   152,   254,   255,
      24,    25,    26,    43,    27,   119,   120,    28,    88,    89,
      86,   373,   374,   375,    67,   108,   109,   161,   162,    87,
     219,   293,   267,   136,   137,   138,   139,   140,   283,   141,
     142,   279,   143,   243,   144,   192,   145,    69,    70,    71,
      72,    73,   163,    74,   338,   149,    30,    38,    75,   321,
     216,   343,    81
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -354
static const yytype_int16 yypact[] =
{
     391,    46,    76,   128,   162,    46,   167,   241,    46,   153,
     135,   247,     8,   371,   -47,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,   236,   247,   204,   247,  -354,   210,  -354,  -354,
    -354,  -354,  -354,   282,   169,   195,   251,    39,  -354,   218,
    -354,   299,   244,   221,   231,   393,   233,  -354,  -354,  -354,
     303,   303,  -354,   248,  -354,   303,   349,   157,   416,   254,
    -354,  -354,  -354,  -354,  -354,   -23,   359,   364,    39,  -354,
     366,  -354,  -354,  -354,   111,   112,  -354,  -354,   274,  -354,
    -354,   364,   106,  -354,  -354,  -354,  -354,  -354,  -354,   362,
     382,  -354,  -354,   174,    59,  -354,   247,   221,  -354,   300,
     303,   303,   303,   303,   303,   221,  -354,  -354,  -354,   105,
    -354,   289,  -354,  -354,   158,   322,  -354,   111,  -354,  -354,
    -354,  -354,   225,   339,   302,   225,   168,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,   461,   363,   221,   160,  -354,
     135,   314,  -354,  -354,   299,   327,   335,   303,   436,    93,
    -354,   336,  -354,   438,    -8,   225,   394,   287,   287,  -354,
    -354,   416,  -354,   144,   364,  -354,   249,   247,   247,   379,
    -354,  -354,   231,  -354,   231,   386,   348,  -354,  -354,  -354,
      46,   376,  -354,     7,   331,   225,   225,    86,   266,   303,
     352,    51,    36,  -354,  -354,   364,   282,    31,   424,   456,
    -354,   213,   357,  -354,   247,  -354,  -354,  -354,   440,   411,
     401,  -354,  -354,   416,   365,   231,  -354,  -354,  -354,   247,
     368,  -354,   135,  -354,   457,  -354,   303,   367,    51,  -354,
    -354,  -354,   286,   302,  -354,   416,   310,    58,   437,   418,
    -354,  -354,   431,  -354,   201,  -354,  -354,    46,   409,   424,
    -354,  -354,  -354,  -354,  -354,   436,   225,  -354,    46,    57,
     475,   412,  -354,   282,   473,    58,   437,  -354,   303,   208,
     392,  -354,    51,  -354,  -354,  -354,  -354,    31,   466,   495,
     409,  -354,  -354,   395,  -354,   168,  -354,   398,   444,   445,
     402,   226,  -354,  -354,  -354,   293,   426,    85,   431,   303,
     245,   403,  -354,   416,  -354,    51,  -354,  -354,  -354,   462,
    -354,   -60,  -354,   436,   225,   405,   406,   364,  -354,    57,
     407,   408,   443,   413,  -354,   414,  -354,  -354,  -354,   420,
    -354,    -2,  -354,  -354,   415,   416,  -354,  -354,  -354,    67,
    -354,    92,  -354,   293,  -354,    25,   364,   364,   257,  -354,
     509,   512,  -354,   514,   516,    19,   497,  -354,   476,    85,
    -354,  -354,    67,   125,  -354,  -354,   360,  -354,  -354,  -354,
     261,   273,  -354,   422,   277,   423,   304,   467,   421,   127,
     247,  -354,   463,   464,  -354,   117,   504,    18,  -354,   360,
    -354,   458,  -354,  -354,  -354,   526,  -354,  -354,   528,   -17,
     225,  -354,  -354,  -354,   432,  -354,  -354,  -354,   230,    67,
    -354,  -354,   247,   433,   434,   478,  -354,    32,   364,   185,
     435,  -354,   185,  -354,   439,  -354,  -354,  -354,  -354,   311,
    -354,  -354,  -354,   230,  -354,   364,  -354,  -354,   319,  -354
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -354,  -354,   525,  -354,  -354,  -354,   417,  -354,  -354,   211,
    -354,  -354,  -354,  -354,  -315,  -354,  -354,  -164,  -354,  -354,
    -354,  -354,   312,  -354,   176,  -354,  -354,  -354,  -354,  -354,
     284,  -354,  -354,   103,   115,  -354,   258,  -354,  -354,   198,
    -353,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,   263,
    -354,  -354,  -354,  -123,  -354,  -354,   377,  -354,   446,   410,
      97,   180,  -339,   -83,  -190,  -154,  -354,  -354,   340,  -354,
    -354,  -354,  -354,  -130,  -354,  -354,  -354,  -354,   279,  -354,
    -354,   281,  -354,  -354,  -354,   -30,   -35,  -354,  -188,   -22,
    -354,   170,   -11,   -84,   205,   -71,    -1,  -354,   -72,  -354,
    -354,   -40,   482
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      45,   146,   189,   116,    34,   193,   121,    39,    68,   153,
     217,    84,   358,   248,   195,   196,   252,    46,   227,   256,
     228,   350,    52,   400,    54,   101,   102,   206,   387,   115,
     104,    90,   195,   196,   419,    57,    58,    59,   106,   195,
     196,   380,   381,   172,   388,   249,   421,    66,   146,    29,
     276,   146,   425,   389,    50,    57,    58,    59,   420,   281,
     118,   270,    57,    58,    59,   234,   235,    79,   159,   426,
     110,   111,   112,   113,   212,   167,   168,   169,   170,   171,
     433,   146,   297,   308,    66,    90,    80,   281,    83,   146,
      47,   368,   253,   390,   317,   150,   147,   250,   285,   256,
     194,   298,   369,   121,   110,   111,   112,   113,   236,   273,
     233,   146,   146,   439,   208,    56,    57,    58,    59,    64,
     372,   132,   211,    60,    61,    90,   299,   348,   379,    63,
     448,    57,    58,    59,   251,   438,   295,   237,    66,    64,
     124,   223,   133,   300,   150,   238,    64,    56,    57,    58,
      59,    41,   134,   132,   344,    60,    61,   340,    66,   125,
     191,    63,   160,   245,   246,    66,   224,   225,   244,   372,
      31,    68,    42,   350,   220,   195,   196,    56,    57,    58,
      59,   294,   146,   150,   134,    60,    61,   156,   411,   231,
     157,    63,   396,   376,   355,   151,   213,   173,   305,    66,
      64,   274,   397,   106,    32,   440,   166,   104,    33,   174,
     397,   158,   107,   277,   135,   412,   175,   280,   271,    66,
     417,   441,    35,   339,   110,   111,   112,   113,    56,    57,
      58,    59,    64,    56,   132,   429,    60,    61,    68,   354,
     146,   177,    63,   313,    36,   311,   135,    40,   178,   353,
      44,    66,    56,    57,    58,    59,   288,    51,   305,    53,
      60,    61,    64,   204,   205,   134,    63,   296,    55,    56,
      57,    58,    59,    77,   345,    76,    65,    60,    61,   353,
     427,    66,   239,    63,   240,    56,    57,    58,    59,    56,
      57,    58,    59,    60,    61,    62,    78,    60,    61,    63,
     112,   113,    83,    63,   286,   287,    56,    57,    58,    59,
     222,   314,   315,    64,    60,    61,   262,   330,   278,    82,
      63,   110,   111,   112,   113,   331,   146,   135,    66,   328,
     329,   332,    66,    91,   432,   333,    85,    64,   179,   100,
     197,   198,   110,   111,   112,   113,   241,   334,   346,   315,
     103,    65,   105,   199,    64,   335,    66,   180,   114,   432,
     382,   205,   117,   232,   401,   205,   336,   118,   242,   123,
      64,    48,   337,    66,    64,   181,   402,   205,   147,   414,
     404,   405,   200,   154,    65,   155,     1,     2,    65,    66,
     201,    64,   165,    66,   176,     4,   182,     1,     2,   183,
       3,     5,   190,   180,   191,    65,     4,   407,   408,   184,
      66,   434,     5,     6,   446,   205,   207,     1,     2,   202,
       3,   181,   449,   205,     6,     8,     4,   110,   111,   112,
     113,     7,     5,   209,   160,     9,     8,    10,   210,    56,
     214,   215,   182,   218,     6,   183,     9,    11,    10,   226,
     229,     7,   230,   232,   247,   184,     8,   257,    11,   261,
     263,   266,    12,   265,   268,   196,     9,   269,    10,   275,
     197,   198,   110,   111,   112,   113,   282,   106,    11,   284,
     289,   309,    12,   199,   110,   111,   112,   113,    93,    94,
      95,    96,    97,    98,   306,   316,   307,   319,   320,   323,
     324,   325,   326,   150,   327,   349,   347,   356,   357,   360,
     361,   362,   200,   366,   383,   363,   364,   384,   371,   385,
     201,   386,   392,   410,   393,   403,   406,   418,   409,   415,
     416,   423,   422,   424,   428,   437,   435,   436,    49,   443,
     359,   445,   272,   292,   188,   394,   447,   444,   322,   377,
     318,   221,   395,   164,   264,   312,   310,   203,   378,   413,
     122
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-354))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_uint16 yycheck[] =
{
      11,    85,   132,    75,     5,   135,    77,     8,    43,    92,
     164,    51,   327,   201,     7,     8,   206,     9,   182,   207,
     184,    81,    33,   376,    35,    60,    61,   150,     9,    52,
      65,    53,     7,     8,    16,     4,     5,     6,    46,     7,
       8,   356,   357,   115,    25,     9,   399,   107,   132,     3,
     238,   135,    69,    34,   101,     4,     5,     6,   397,   247,
       3,   225,     4,     5,     6,   195,   196,    28,   103,    86,
      11,    12,    13,    14,   158,   110,   111,   112,   113,   114,
     419,   165,    25,   273,   107,   107,    47,   275,     3,   173,
      82,    93,    61,    74,   282,    77,   104,    61,   252,   287,
     135,    44,   104,   174,    11,    12,    13,    14,    22,   232,
     103,   195,   196,   428,   154,     3,     4,     5,     6,    88,
     102,     9,   157,    11,    12,   147,    69,   315,   103,    17,
     445,     4,     5,     6,   205,   103,   266,    51,   107,    88,
      29,   176,    30,    86,    77,    59,    88,     3,     4,     5,
       6,    16,    40,     9,   308,    11,    12,    72,   107,    48,
     102,    17,   103,   198,   199,   107,   177,   178,   198,   102,
      94,   206,    37,    81,    30,     7,     8,     3,     4,     5,
       6,   265,   266,    77,    40,    11,    12,    13,    61,   190,
      16,    17,    67,   101,   324,    89,   103,    92,   269,   107,
      88,   236,    85,    46,    76,    20,   109,   242,    46,   104,
      85,    37,    55,   243,   102,    88,   119,   247,   229,   107,
     103,    36,    55,   306,    11,    12,    13,    14,     3,     4,
       5,     6,    88,     3,     9,     5,    11,    12,   273,   323,
     324,    83,    17,   278,     3,   275,   102,    94,    90,   321,
       3,   107,     3,     4,     5,     6,   257,    21,   329,    55,
      11,    12,    88,   103,   104,    40,    17,   268,    58,     3,
       4,     5,     6,    78,   309,   106,   102,    11,    12,   351,
     410,   107,    16,    17,    18,     3,     4,     5,     6,     3,
       4,     5,     6,    11,    12,    13,    45,    11,    12,    17,
      13,    14,     3,    17,   103,   104,     3,     4,     5,     6,
      61,   103,   104,    88,    11,    12,   103,    24,     8,   101,
      17,    11,    12,    13,    14,    32,   410,   102,   107,   103,
     104,    38,   107,   102,   418,    42,    92,    88,    16,   106,
       9,    10,    11,    12,    13,    14,    80,    54,   103,   104,
     102,   102,     3,    22,    88,    62,   107,    35,   104,   443,
     103,   104,     3,    77,   103,   104,    73,     3,   102,     3,
      88,     0,    79,   107,    88,    53,   103,   104,   104,   390,
     103,   104,    51,    21,   102,     3,    26,    27,   102,   107,
      59,    88,    92,   107,   105,    35,    74,    26,    27,    77,
      29,    41,    63,    35,   102,   102,    35,   103,   104,    87,
     107,   422,    41,    53,   103,   104,   102,    26,    27,    56,
      29,    53,   103,   104,    53,    65,    35,    11,    12,    13,
      14,    60,    41,   106,   103,    75,    65,    77,   103,     3,
     104,     3,    74,    49,    53,    77,    75,    87,    77,    70,
      64,    60,   104,    77,   102,    87,    65,    33,    87,     3,
     103,    50,    91,    23,    63,     8,    75,   102,    77,   102,
       9,    10,    11,    12,    13,    14,    39,    46,    87,    61,
      71,     8,    91,    22,    11,    12,    13,    14,    95,    96,
      97,    98,    99,   100,    19,   103,    84,    31,     3,   104,
     102,    57,    57,    77,   102,    43,   103,   102,   102,   102,
     102,    68,    51,    93,     5,   102,   102,     5,   103,     5,
      59,     5,    25,   102,    48,   103,   103,    23,    61,    66,
      66,     5,    74,     5,   102,    57,   103,   103,    13,   104,
     329,   102,   230,   259,   127,   369,   443,   432,   290,   351,
     287,   174,   372,   107,   214,   276,   275,   147,   353,   389,
      78
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    27,    29,    35,    41,    53,    60,    65,    75,
      77,    87,    91,   109,   110,   111,   133,   148,   149,   150,
     151,   152,   153,   154,   158,   159,   160,   162,   165,     3,
     204,    94,    76,    46,   204,    55,     3,   134,   205,   204,
      94,    16,    37,   161,     3,   200,     9,    82,     0,   110,
     101,    21,   200,    55,   200,    58,     3,     4,     5,     6,
      11,    12,    13,    17,    88,   102,   107,   172,   194,   195,
     196,   197,   198,   199,   201,   206,   106,    78,    45,    28,
      47,   210,   101,     3,   209,    92,   168,   177,   166,   167,
     197,   102,   125,    95,    96,    97,    98,    99,   100,   135,
     106,   194,   194,   102,   194,     3,    46,    55,   173,   174,
      11,    12,    13,    14,   104,    52,   206,     3,     3,   163,
     164,   203,   210,     3,    29,    48,   112,   113,   114,   115,
     123,   126,     9,    30,    40,   102,   181,   182,   183,   184,
     185,   187,   188,   190,   192,   194,   201,   104,   122,   203,
      77,    89,   155,   171,    21,     3,    13,    16,    37,   194,
     103,   175,   176,   200,   166,    92,   168,   194,   194,   194,
     194,   194,   206,    92,   104,   168,   105,    83,    90,    16,
      35,    53,    74,    77,    87,   128,   129,   130,   114,   181,
      63,   102,   193,   181,   194,     7,     8,     9,    10,    22,
      51,    59,    56,   167,   103,   104,   161,   102,   209,   106,
     103,   194,   201,   103,   104,     3,   208,   173,    49,   178,
      30,   164,    61,   194,   200,   200,    70,   125,   125,    64,
     104,   204,    77,   103,   181,   181,    22,    51,    59,    16,
      18,    80,   102,   191,   193,   194,   194,   102,   196,     9,
      61,   203,   172,    61,   156,   157,   196,    33,   136,   137,
     138,     3,   103,   103,   176,    23,    50,   180,    63,   102,
     125,   200,   130,   161,   194,   102,   196,   193,     8,   189,
     193,   196,    39,   186,    61,   173,   103,   104,   204,    71,
     143,   144,   138,   179,   201,   181,   204,    25,    44,    69,
      86,   116,   117,   118,   121,   203,    19,    84,   172,     8,
     189,   193,   186,   194,   103,   104,   103,   196,   157,    31,
       3,   207,   144,   104,   102,    57,    57,   102,   103,   104,
      24,    32,    38,    42,    54,    62,    73,    79,   202,   171,
      72,   131,   132,   209,   173,   194,   103,   103,   196,    43,
      81,   146,   147,   206,   201,   181,   102,   102,   122,   117,
     102,   102,    68,   102,   102,   119,    93,   124,    93,   104,
     127,   103,   102,   169,   170,   171,   101,   147,   202,   103,
     122,   122,   103,     5,     5,     5,     5,     9,    25,    34,
      74,   120,    25,    48,   132,   169,    67,    85,   139,   145,
     148,   103,   103,   103,   103,   104,   103,   103,   104,    61,
     102,    61,    88,   199,   200,    66,    66,   103,    23,    16,
     170,   148,    74,     5,     5,    69,    86,   181,   102,     5,
     140,   141,   201,   170,   200,   103,   103,    57,   103,   122,
      20,    36,   142,   104,   142,   102,   103,   141,   122,   103
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
      

/* Line 1806 of yacc.c  */
#line 2029 "y.tab.c"
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
#line 621 "sql1.y"


