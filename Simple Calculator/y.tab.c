/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "projectCalculator.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h> 

	
	int symbolMap[52];

	int fetchValue(char id);
	void insertValue(char id, int val);
	int findIndex(char id);
	void yyerror(char *msg);
	extern int yylex();

/* Line 371 of yacc.c  */
#line 83 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     ENDLINE = 259,
     ASSIGN = 260,
     QUIT = 261,
     LETTER = 262
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define ENDLINE 259
#define ASSIGN 260
#define QUIT 261
#define LETTER 262



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 17 "projectCalculator.y"
int num; char id;

/* Line 387 of yacc.c  */
#line 143 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 171 "y.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
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
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   444

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  14
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNRULES -- Number of states.  */
#define YYNSTATES  106

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   262

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      13,    12,     9,    11,     2,     8,     2,    10,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    15,    17,    20,    25,
      30,    37,    42,    47,    51,    53,    56,    61,    66,    73,
      78,    83,    87,    89,    92,    97,   102,   109,   114,   119,
     123,   125,   128,   133,   138,   145,   150,   155,   159,   161,
     164,   169,   174,   181,   186,   191,   195,   197,   200,   203,
     207,   211,   216,   221,   225,   227,   229
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      15,     0,    -1,     6,    -1,    16,    15,    -1,    17,     4,
      -1,     7,     5,    18,    -1,    18,    -1,    18,    18,    -1,
      18,    18,     8,    19,    -1,    18,     8,     8,    19,    -1,
      18,     8,     8,    18,     8,    19,    -1,     8,    18,     8,
      19,    -1,    18,     8,    19,     8,    -1,    18,     8,    19,
      -1,    19,    -1,    19,    19,    -1,    19,    19,     9,    20,
      -1,    19,     9,     9,    20,    -1,    19,     9,     9,    19,
       9,    20,    -1,     9,    19,     9,    20,    -1,    19,     9,
      20,     9,    -1,    19,     9,    20,    -1,    20,    -1,    20,
      20,    -1,    20,    20,    10,    21,    -1,    20,    10,    10,
      21,    -1,    20,    10,    10,    20,    10,    21,    -1,    10,
      20,    10,    21,    -1,    20,    10,    21,    10,    -1,    20,
      10,    21,    -1,    21,    -1,    21,    21,    -1,    21,    21,
      11,    22,    -1,    21,    11,    11,    22,    -1,    21,    11,
      11,    21,    11,    22,    -1,    11,    21,    11,    22,    -1,
      21,    11,    22,    11,    -1,    21,    11,    22,    -1,    22,
      -1,    22,    22,    -1,    22,    22,     8,    23,    -1,    22,
       8,     8,    23,    -1,    22,     8,     8,    22,     8,    23,
      -1,     8,    22,     8,    23,    -1,    22,     8,    23,     8,
      -1,    22,     8,    23,    -1,    23,    -1,    24,    12,    -1,
      13,    24,    -1,    13,    13,    24,    -1,    24,    12,    12,
      -1,    13,    13,    13,    24,    -1,    24,    12,    12,    12,
      -1,    13,    24,    12,    -1,    24,    -1,     7,    -1,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    24,    24,    25,    27,    29,    30,    32,    33,    34,
      35,    36,    37,    38,    39,    41,    42,    43,    44,    45,
      46,    47,    48,    50,    51,    52,    53,    54,    55,    56,
      57,    59,    60,    61,    62,    63,    64,    65,    66,    68,
      69,    70,    71,    72,    73,    74,    75,    77,    78,    79,
      80,    81,    82,    83,    84,    86,    87
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "ENDLINE", "ASSIGN", "QUIT",
  "LETTER", "'-'", "'*'", "'/'", "'+'", "')'", "'('", "$accept", "run",
  "load", "start", "expr", "pow", "mult", "div", "add", "var", "term", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    45,    42,
      47,    43,    41,    40
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    14,    15,    15,    16,    17,    17,    18,    18,    18,
      18,    18,    18,    18,    18,    19,    19,    19,    19,    19,
      19,    19,    19,    20,    20,    20,    20,    20,    20,    20,
      20,    21,    21,    21,    21,    21,    21,    21,    21,    22,
      22,    22,    22,    22,    22,    22,    22,    23,    23,    23,
      23,    23,    23,    23,    23,    24,    24
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     3,     1,     2,     4,     4,
       6,     4,     4,     3,     1,     2,     4,     4,     6,     4,
       4,     3,     1,     2,     4,     4,     6,     4,     4,     3,
       1,     2,     4,     4,     6,     4,     4,     3,     1,     2,
       4,     4,     6,     4,     4,     3,     1,     2,     2,     3,
       3,     4,     4,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    56,     2,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     6,    14,    22,    30,    38,    46,    54,     0,
      55,     0,    38,     0,     0,     0,     0,     0,    48,     1,
       3,     4,     0,     7,     0,    15,     0,    23,     0,    31,
       0,    39,    47,     5,     0,     0,     0,     0,     0,     0,
       0,    49,    53,     0,    13,     0,     0,    21,     0,     0,
      29,     0,     0,    37,     0,     0,    45,     0,    50,    11,
      43,    19,    27,    35,    51,     0,     9,    12,     8,     0,
      17,    20,    16,     0,    25,    28,    24,     0,    33,    36,
      32,     0,    41,    44,    40,    52,     0,     0,     0,     0,
       0,    10,    18,    26,    34,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     9,    10,    11,    21,    13,    14,    15,    16,    17,
      18
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -39
static const yytype_int16 yypact[] =
{
      68,   -39,   -39,    -2,   113,   171,   155,     2,    18,     6,
      68,     7,   196,   205,   331,   385,   140,   -39,     4,   113,
     -39,   222,   189,   250,   234,   340,   392,    41,     5,   -39,
     -39,   -39,   259,   268,   277,   286,   349,   358,   399,   406,
     422,   429,    10,   196,   259,   422,   189,   277,   349,   399,
       1,   -39,   -39,   113,   295,   259,   171,   304,   277,   155,
     367,   349,     2,   413,   399,   250,    15,   422,    20,   295,
      15,   304,   367,   413,   -39,   313,   205,   250,   295,   322,
     331,   -39,   304,   376,   385,   -39,   367,   420,   140,   -39,
     413,   431,   -39,   -39,    15,   -39,   259,   277,   349,   399,
     422,   295,   304,   367,   413,    15
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -39,    28,   -39,   -39,    14,    59,    93,   162,    -4,   -38,
      -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      22,    28,    66,    19,     1,     1,    29,    70,    20,    20,
      23,    31,    41,     7,    12,     8,    42,    52,    41,    46,
      51,     1,    68,    93,    12,    20,    33,    92,    22,    94,
       0,    27,    95,    43,    63,    33,    46,    41,    30,     0,
      22,    46,    41,    74,     1,    73,     0,    33,    20,    22,
       0,    22,     0,     0,    50,     0,     0,    33,    88,    41,
      90,    91,   105,    46,    24,     0,     0,    75,     0,    41,
       0,     1,    35,    46,     2,     3,     4,     5,     6,     7,
       0,     8,     0,    35,    41,     0,    41,    41,     0,    33,
       0,    54,    22,    24,    35,   104,    46,     0,     0,    25,
      41,     0,     0,    69,     0,     0,    24,    37,     0,     0,
       0,     0,    76,    35,    78,    79,     1,    24,    37,     0,
      20,     4,     5,     6,     7,     0,     8,    57,    35,    25,
      37,     0,     0,     0,     0,    35,     0,    35,    35,     0,
      71,    25,     0,     1,     0,     0,     0,    20,    40,    80,
      37,    82,    83,     8,    25,   101,    24,     0,     1,     0,
      35,     0,    20,    23,    37,     6,     7,     0,     8,    26,
       0,     0,     0,    37,     1,    37,    37,    39,    20,    23,
       5,     6,     7,     0,     8,     0,     0,     0,    39,     0,
     102,    25,     1,     0,     0,    37,    20,    45,    60,     1,
      26,    39,     8,    20,    32,     5,     6,     7,     1,     8,
      72,    26,    20,    23,    34,     6,     7,     0,     8,     0,
       0,    84,    39,    86,    87,     1,    26,     0,     0,    20,
      44,     5,     6,     7,    39,     8,     0,     1,     0,     0,
       0,    20,    23,    47,     6,     7,    39,     8,    39,    39,
       0,     0,     0,     1,     0,     0,     0,    20,    23,     0,
     103,    26,     1,     8,     0,    39,    20,    53,     5,     6,
       7,     1,     8,     0,     0,    20,    55,     5,     6,     7,
       1,     8,     0,     0,    20,    23,    56,     6,     7,     1,
       8,     0,     0,    20,    23,    58,     6,     7,     1,     8,
       0,     0,    20,    77,    34,     6,     7,     1,     8,     0,
       0,    20,    23,    81,    36,     7,     1,     8,     0,     0,
      20,    96,     5,     6,     7,     1,     8,     0,     0,    20,
      23,    97,     6,     7,     1,     8,     0,     0,    20,    23,
       0,    36,     7,     1,     8,     0,     0,    20,    23,     0,
      48,     7,     1,     8,     0,     0,    20,    23,     0,    59,
       7,     1,     8,     0,     0,    20,    23,     0,    61,     7,
       1,     8,     0,     0,    20,    23,     0,    85,    38,     1,
       8,     0,     0,    20,    23,     0,    98,     7,     1,     8,
       0,     0,    20,    23,     0,     1,    38,     0,     8,    20,
      23,     0,     1,    49,     0,     8,    20,    23,     0,     1,
      62,     0,     8,    20,    23,     0,     1,    64,     0,     8,
      20,    40,     0,     1,    89,     1,     8,    20,    23,    20,
      65,    99,     1,     8,     1,     8,    20,    67,    20,   100,
       0,     0,     8,     0,     8
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-39)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       4,     8,    40,     5,     3,     3,     0,    45,     7,     7,
       8,     4,    16,    11,     0,    13,    12,    12,    22,    23,
      27,     3,    12,     8,    10,     7,    12,    65,    32,    67,
      -1,    13,    12,    19,    38,    21,    40,    41,    10,    -1,
      44,    45,    46,    50,     3,    49,    -1,    33,     7,    53,
      -1,    55,    -1,    -1,    13,    -1,    -1,    43,    62,    63,
      64,    65,   100,    67,     5,    -1,    -1,    53,    -1,    73,
      -1,     3,    13,    77,     6,     7,     8,     9,    10,    11,
      -1,    13,    -1,    24,    88,    -1,    90,    91,    -1,    75,
      -1,    32,    96,    34,    35,    99,   100,    -1,    -1,     6,
     104,    -1,    -1,    44,    -1,    -1,    47,    14,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,     3,    58,    25,    -1,
       7,     8,     9,    10,    11,    -1,    13,    34,    69,    36,
      37,    -1,    -1,    -1,    -1,    76,    -1,    78,    79,    -1,
      47,    48,    -1,     3,    -1,    -1,    -1,     7,     8,    56,
      57,    58,    59,    13,    61,    96,    97,    -1,     3,    -1,
     101,    -1,     7,     8,    71,    10,    11,    -1,    13,     7,
      -1,    -1,    -1,    80,     3,    82,    83,    15,     7,     8,
       9,    10,    11,    -1,    13,    -1,    -1,    -1,    26,    -1,
      97,    98,     3,    -1,    -1,   102,     7,     8,    36,     3,
      38,    39,    13,     7,     8,     9,    10,    11,     3,    13,
      48,    49,     7,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    59,    60,    61,    62,     3,    64,    -1,    -1,     7,
       8,     9,    10,    11,    72,    13,    -1,     3,    -1,    -1,
      -1,     7,     8,     9,    10,    11,    84,    13,    86,    87,
      -1,    -1,    -1,     3,    -1,    -1,    -1,     7,     8,    -1,
      98,    99,     3,    13,    -1,   103,     7,     8,     9,    10,
      11,     3,    13,    -1,    -1,     7,     8,     9,    10,    11,
       3,    13,    -1,    -1,     7,     8,     9,    10,    11,     3,
      13,    -1,    -1,     7,     8,     9,    10,    11,     3,    13,
      -1,    -1,     7,     8,     9,    10,    11,     3,    13,    -1,
      -1,     7,     8,     9,    10,    11,     3,    13,    -1,    -1,
       7,     8,     9,    10,    11,     3,    13,    -1,    -1,     7,
       8,     9,    10,    11,     3,    13,    -1,    -1,     7,     8,
      -1,    10,    11,     3,    13,    -1,    -1,     7,     8,    -1,
      10,    11,     3,    13,    -1,    -1,     7,     8,    -1,    10,
      11,     3,    13,    -1,    -1,     7,     8,    -1,    10,    11,
       3,    13,    -1,    -1,     7,     8,    -1,    10,    11,     3,
      13,    -1,    -1,     7,     8,    -1,    10,    11,     3,    13,
      -1,    -1,     7,     8,    -1,     3,    11,    -1,    13,     7,
       8,    -1,     3,    11,    -1,    13,     7,     8,    -1,     3,
      11,    -1,    13,     7,     8,    -1,     3,    11,    -1,    13,
       7,     8,    -1,     3,    11,     3,    13,     7,     8,     7,
       8,    11,     3,    13,     3,    13,     7,     8,     7,     8,
      -1,    -1,    13,    -1,    13
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    10,    11,    13,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     5,
       7,    18,    22,     8,    19,    20,    21,    13,    24,     0,
      15,     4,     8,    18,     9,    19,    10,    20,    11,    21,
       8,    22,    12,    18,     8,     8,    22,     9,    10,    11,
      13,    24,    12,     8,    19,     8,     9,    20,     9,    10,
      21,    10,    11,    22,    11,     8,    23,     8,    12,    19,
      23,    20,    21,    22,    24,    18,    19,     8,    19,    19,
      20,     9,    20,    20,    21,    10,    21,    21,    22,    11,
      22,    22,    23,     8,    23,    12,     8,     9,    10,    11,
       8,    19,    20,    21,    22,    23
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

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 24 "projectCalculator.y"
    {return 0;}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 27 "projectCalculator.y"
    {printf("%d\n", (yyvsp[(1) - (2)].num));}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 29 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(3) - (3)].num); insertValue((yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].num));}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 30 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 32 "projectCalculator.y"
    {yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 33 "projectCalculator.y"
    {yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 34 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 35 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 36 "projectCalculator.y"
    {yyerror("STARTING WITH OP, ID OR NUM IS EXPECTED");}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 37 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 38 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) ^ (yyvsp[(3) - (3)].num);}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 39 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 41 "projectCalculator.y"
    {yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 42 "projectCalculator.y"
    {yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 43 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 44 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 45 "projectCalculator.y"
    {yyerror("STARTING WITH OP, ID OR NUM IS EXPECTED");}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 46 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 47 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) * (yyvsp[(3) - (3)].num);}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 48 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 50 "projectCalculator.y"
    {yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 51 "projectCalculator.y"
    {yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 52 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 53 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 54 "projectCalculator.y"
    {yyerror("STARTING WITH OP, ID OR NUM IS EXPECTED");}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 55 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 56 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) / (yyvsp[(3) - (3)].num);}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 57 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 59 "projectCalculator.y"
    {yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 60 "projectCalculator.y"
    {yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 61 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 62 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 63 "projectCalculator.y"
    {yyerror("STARTING WITH OP, ID OR NUM IS EXPECTED");}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 64 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 65 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) + (yyvsp[(3) - (3)].num);}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 66 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 68 "projectCalculator.y"
    {yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 69 "projectCalculator.y"
    {yyerror("ID IS SUCCEEDED BY ID, OP IS EXPECTED");}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 70 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 71 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 72 "projectCalculator.y"
    {yyerror("STARTING WITH OP, ID OR NUM IS EXPECTED");}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 73 "projectCalculator.y"
    {yyerror("OP IS FOLLOWED BY OP, ID OR NUM IS EXPECTED");}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 74 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) - (yyvsp[(3) - (3)].num);}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 75 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 77 "projectCalculator.y"
    {yyerror("UNBALANCED PARENTHESES");}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 78 "projectCalculator.y"
    {yyerror("UNBALANCED PARENTHESES");}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 79 "projectCalculator.y"
    {yyerror("UNBALANCED PARENTHESES");}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 80 "projectCalculator.y"
    {yyerror("UNBALANCED PARENTHESES");}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 81 "projectCalculator.y"
    {yyerror("UNBALANCED PARENTHESES");}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 82 "projectCalculator.y"
    {yyerror("UNBALANCED PARENTHESES");}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 83 "projectCalculator.y"
    {(yyval.num) = ((yyvsp[(2) - (3)].num));}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 84 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 86 "projectCalculator.y"
    {(yyval.num) = fetchValue((yyvsp[(1) - (1)].id));}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 87 "projectCalculator.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);}
    break;


/* Line 1792 of yacc.c  */
#line 1836 "y.tab.c"
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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


/* Line 2055 of yacc.c  */
#line 90 "projectCalculator.y"


int fetchValue(char id){
	int idx = findIndex(id);

	return symbolMap[idx];
}

void insertValue(char id, int val){
	int idx = findIndex(id);

	symbolMap[idx] = val;
}

int findIndex(char id){
	if(islower(id))
		return id - 'a';
	else return id - 'A' + 25;
}


int main(){
	int i;

	
	for(i = 0; i < 52; ++i)
		symbolMap[i] = 0;

	yyparse();

	return 0;
}

void yyerror(char *msg){
	fprintf(stderr, "%s\n", msg);
}
