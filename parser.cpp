/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.2"

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

/* Line 189 of yacc.c  */
#line 1 "parser.y"

#include <iostream>
#include <vector>
#include <string>
#include "grammartree.h"
#include <cstdio>

extern char* yytext;
extern int col;
extern FILE* yyin;
extern FILE* yyout;
GrammarTreeNode* root = NULL;
extern int yylineno;
extern void yyerror(const char* msg);
extern int yylex(void);

string int2string(int a);
GrammarTreeNode *treeCreate(std::string name, int arg_cnt, ...);
void treeNodeFree(GrammarTreeNode *node);
void treePrint(GrammarTreeNode *node, int level);



/* Line 189 of yacc.c  */
#line 96 "parser.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
     AUTO = 258,
     SIZEOF = 259,
     GOTO = 260,
     RETURN = 261,
     DO = 262,
     WHILE = 263,
     FOR = 264,
     CONTINUE = 265,
     BREAK = 266,
     SWITCH = 267,
     DEFAULT = 268,
     CASE = 269,
     IF = 270,
     ELSE = 271,
     FLOAT = 272,
     DOUBLE = 273,
     CHAR = 274,
     VOID = 275,
     INT = 276,
     LONG = 277,
     BOOL = 278,
     SHORT = 279,
     VOLATILE = 280,
     CONST = 281,
     SIGNED = 282,
     UNSIGNED = 283,
     STATIC = 284,
     EXTERN = 285,
     INLINE = 286,
     TYPEDEF = 287,
     STRUCT = 288,
     ENUM = 289,
     UNION = 290,
     CONSTANT = 291,
     CONSTANT_INT = 292,
     CONSTANT_DOUBLE = 293,
     ELLIPSIS = 294,
     STRING_LITERAL = 295,
     ASSIGN_RIGHTSHIFT = 296,
     ASSIGN_LEFTSHIFT = 297,
     ASSIGN_ADD = 298,
     ASSIGN_SUB = 299,
     ASSIGN_MUL = 300,
     ASSIGN_DIV = 301,
     ASSIGN_MOD = 302,
     ASSIGN_AND = 303,
     ASSIGN_OR = 304,
     TYPE_NAME = 305,
     ASSIGN_XOR = 306,
     IDENTIFIER = 307,
     OP_RIGHTSHIFT = 308,
     OP_LEFTSHIFT = 309,
     OP_INC = 310,
     OP_DEC = 311,
     OP_PTR = 312,
     OP_AND = 313,
     OP_OR = 314,
     OP_LE = 315,
     OP_GE = 316,
     OP_EQ = 317,
     OP_NE = 318
   };
#endif
/* Tokens.  */
#define AUTO 258
#define SIZEOF 259
#define GOTO 260
#define RETURN 261
#define DO 262
#define WHILE 263
#define FOR 264
#define CONTINUE 265
#define BREAK 266
#define SWITCH 267
#define DEFAULT 268
#define CASE 269
#define IF 270
#define ELSE 271
#define FLOAT 272
#define DOUBLE 273
#define CHAR 274
#define VOID 275
#define INT 276
#define LONG 277
#define BOOL 278
#define SHORT 279
#define VOLATILE 280
#define CONST 281
#define SIGNED 282
#define UNSIGNED 283
#define STATIC 284
#define EXTERN 285
#define INLINE 286
#define TYPEDEF 287
#define STRUCT 288
#define ENUM 289
#define UNION 290
#define CONSTANT 291
#define CONSTANT_INT 292
#define CONSTANT_DOUBLE 293
#define ELLIPSIS 294
#define STRING_LITERAL 295
#define ASSIGN_RIGHTSHIFT 296
#define ASSIGN_LEFTSHIFT 297
#define ASSIGN_ADD 298
#define ASSIGN_SUB 299
#define ASSIGN_MUL 300
#define ASSIGN_DIV 301
#define ASSIGN_MOD 302
#define ASSIGN_AND 303
#define ASSIGN_OR 304
#define TYPE_NAME 305
#define ASSIGN_XOR 306
#define IDENTIFIER 307
#define OP_RIGHTSHIFT 308
#define OP_LEFTSHIFT 309
#define OP_INC 310
#define OP_DEC 311
#define OP_PTR 312
#define OP_AND 313
#define OP_OR 314
#define OP_LE 315
#define OP_GE 316
#define OP_EQ 317
#define OP_NE 318




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 67 "parser.y"

    class GrammarTreeNode* gtn;



/* Line 214 of yacc.c  */
#line 264 "parser.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 276 "parser.cpp"

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1618

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNRULES -- Number of states.  */
#define YYNSTATES  398

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,     2,     2,     2,    76,    68,     2,
      82,    83,    74,    72,    65,    73,    67,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    64,
      78,    81,    77,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,    71,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    69,    87,    70,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    19,
      21,    26,    30,    35,    39,    43,    46,    49,    56,    64,
      66,    70,    72,    75,    78,    81,    84,    89,    91,    93,
      95,    97,    99,   101,   103,   108,   110,   114,   118,   122,
     124,   128,   132,   134,   138,   142,   144,   148,   152,   156,
     160,   162,   166,   170,   172,   176,   178,   182,   184,   188,
     190,   194,   196,   200,   202,   208,   210,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   234,   236,   238,
     242,   244,   247,   251,   253,   256,   258,   261,   263,   266,
     268,   271,   273,   277,   279,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   321,   326,   329,   331,   333,   335,   338,   342,
     345,   347,   350,   352,   354,   358,   360,   363,   367,   372,
     378,   384,   391,   394,   396,   400,   402,   406,   408,   410,
     412,   415,   417,   419,   423,   429,   434,   439,   446,   453,
     459,   464,   468,   473,   478,   482,   484,   487,   490,   494,
     496,   499,   501,   505,   507,   511,   514,   517,   519,   521,
     525,   527,   530,   532,   534,   537,   541,   544,   548,   552,
     557,   561,   566,   569,   573,   577,   582,   584,   588,   593,
     595,   598,   602,   607,   610,   612,   615,   619,   622,   624,
     626,   628,   630,   632,   634,   638,   643,   647,   650,   654,
     656,   659,   661,   663,   665,   668,   674,   682,   688,   694,
     702,   709,   717,   724,   732,   736,   739,   742,   745,   749,
     751,   754,   756,   758,   763,   767,   769
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      89,     0,    -1,   154,    -1,    52,    -1,    36,    -1,    37,
      -1,    38,    -1,    40,    -1,    82,   109,    83,    -1,    90,
      -1,    91,    84,   109,    85,    -1,    91,    82,    83,    -1,
      91,    82,    92,    83,    -1,    91,    67,    52,    -1,    91,
      57,    52,    -1,    91,    55,    -1,    91,    56,    -1,    82,
     137,    83,    86,   141,    87,    -1,    82,   137,    83,    86,
     141,    65,    87,    -1,   107,    -1,    92,    65,   107,    -1,
      91,    -1,    55,    93,    -1,    56,    93,    -1,    94,    95,
      -1,     4,    93,    -1,     4,    82,   137,    83,    -1,    68,
      -1,    74,    -1,    72,    -1,    73,    -1,    70,    -1,    80,
      -1,    93,    -1,    82,   137,    83,    95,    -1,    95,    -1,
      96,    74,    95,    -1,    96,    75,    95,    -1,    96,    76,
      95,    -1,    96,    -1,    97,    72,    96,    -1,    97,    73,
      96,    -1,    97,    -1,    98,    54,    97,    -1,    98,    53,
      97,    -1,    98,    -1,    99,    78,    98,    -1,    99,    77,
      98,    -1,    99,    60,    98,    -1,    99,    61,    98,    -1,
      99,    -1,   100,    62,    99,    -1,   100,    63,    99,    -1,
     100,    -1,   101,    68,   100,    -1,   101,    -1,   102,    71,
     101,    -1,   102,    -1,   103,    69,   102,    -1,   103,    -1,
     104,    58,   103,    -1,   104,    -1,   105,    59,   104,    -1,
     105,    -1,   105,    79,   109,    66,   106,    -1,   106,    -1,
      93,   108,   107,    -1,    81,    -1,    45,    -1,    46,    -1,
      47,    -1,    43,    -1,    44,    -1,    42,    -1,    41,    -1,
      48,    -1,    51,    -1,    49,    -1,   107,    -1,   109,    65,
     107,    -1,   106,    -1,   112,    64,    -1,   112,   113,    64,
      -1,   115,    -1,   115,   112,    -1,   116,    -1,   116,   112,
      -1,   127,    -1,   127,   112,    -1,   128,    -1,   128,   112,
      -1,   114,    -1,   113,    65,   114,    -1,   129,    -1,   129,
      81,   140,    -1,    32,    -1,    30,    -1,    29,    -1,     3,
      -1,    20,    -1,    19,    -1,    24,    -1,    21,    -1,    22,
      -1,    17,    -1,    18,    -1,    27,    -1,    28,    -1,    23,
      -1,   117,    -1,   124,    -1,   118,    52,    86,   119,    87,
      -1,   118,    86,   119,    87,    -1,   118,    52,    -1,    33,
      -1,    35,    -1,   120,    -1,   119,   120,    -1,   121,   122,
      64,    -1,   116,   121,    -1,   116,    -1,   127,   121,    -1,
     127,    -1,   123,    -1,   122,    65,   123,    -1,   129,    -1,
      66,   110,    -1,   129,    66,   110,    -1,    34,    86,   125,
      87,    -1,    34,    52,    86,   125,    87,    -1,    34,    86,
     125,    65,    87,    -1,    34,    52,    86,   125,    65,    87,
      -1,    34,    52,    -1,   126,    -1,   125,    65,   126,    -1,
      52,    -1,    52,    81,   110,    -1,    26,    -1,    25,    -1,
      31,    -1,   131,   130,    -1,   130,    -1,    52,    -1,    82,
     129,    83,    -1,   130,    84,   132,   107,    85,    -1,   130,
      84,   132,    85,    -1,   130,    84,   107,    85,    -1,   130,
      84,    29,   132,   107,    85,    -1,   130,    84,   132,    29,
     107,    85,    -1,   130,    84,   132,    74,    85,    -1,   130,
      84,    74,    85,    -1,   130,    84,    85,    -1,   130,    82,
     133,    83,    -1,   130,    82,   136,    83,    -1,   130,    82,
      83,    -1,    74,    -1,    74,   132,    -1,    74,   131,    -1,
      74,   132,   131,    -1,   127,    -1,   132,   127,    -1,   134,
      -1,   134,    65,    39,    -1,   135,    -1,   134,    65,   135,
      -1,   112,   129,    -1,   112,   138,    -1,   112,    -1,    52,
      -1,   136,    65,    52,    -1,   121,    -1,   121,   138,    -1,
     131,    -1,   139,    -1,   131,   139,    -1,    82,   138,    83,
      -1,    84,    85,    -1,    84,   107,    85,    -1,   139,    84,
      85,    -1,   139,    84,   107,    85,    -1,    84,    74,    85,
      -1,   139,    84,    74,    85,    -1,    82,    83,    -1,    82,
     133,    83,    -1,   139,    82,    83,    -1,   139,    82,   133,
      83,    -1,   107,    -1,    86,   141,    87,    -1,    86,   141,
      65,    87,    -1,   140,    -1,   142,   140,    -1,   141,    65,
     140,    -1,   141,    65,   142,   140,    -1,   143,    81,    -1,
     144,    -1,   143,   144,    -1,    84,   110,    85,    -1,    67,
      52,    -1,   146,    -1,   147,    -1,   150,    -1,   151,    -1,
     152,    -1,   153,    -1,    52,    66,   145,    -1,    14,   110,
      66,   145,    -1,    13,    66,   145,    -1,    86,    87,    -1,
      86,   148,    87,    -1,   149,    -1,   148,   149,    -1,   111,
      -1,   145,    -1,    64,    -1,   109,    64,    -1,    15,    82,
     109,    83,   145,    -1,    15,    82,   109,    83,   145,    16,
     145,    -1,    12,    82,   109,    83,   145,    -1,     8,    82,
     109,    83,   145,    -1,     7,   145,     8,    82,   109,    83,
      64,    -1,     9,    82,   150,   150,    83,   145,    -1,     9,
      82,   150,   150,   109,    83,   145,    -1,     9,    82,   111,
     150,    83,   145,    -1,     9,    82,   111,   150,   109,    83,
     145,    -1,     5,    52,    64,    -1,    10,    64,    -1,    11,
      64,    -1,     6,    64,    -1,     6,   109,    64,    -1,   155,
      -1,   154,   155,    -1,   156,    -1,   111,    -1,   112,   129,
     157,   147,    -1,   112,   129,   147,    -1,   111,    -1,   157,
     111,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    78,    79,    80,    81,    82,    83,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,   100,
     101,   105,   106,   107,   108,   109,   110,   114,   115,   116,
     117,   118,   119,   123,   124,   128,   129,   130,   131,   135,
     136,   137,   141,   142,   143,   147,   148,   149,   150,   151,
     155,   156,   157,   161,   162,   166,   167,   171,   172,   176,
     177,   181,   182,   186,   187,   191,   192,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   210,   211,
     215,   219,   220,   224,   225,   226,   227,   228,   229,   230,
     231,   235,   236,   240,   241,   245,   246,   247,   248,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   265,
     266,   271,   272,   273,   277,   278,   282,   283,   287,   291,
     292,   293,   294,   298,   299,   303,   304,   305,   309,   310,
     311,   312,   313,   317,   318,   322,   323,   327,   329,   333,
     337,   338,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   358,   359,   360,   361,   365,
     366,   371,   372,   376,   377,   381,   382,   383,   387,   388,
     392,   393,   397,   398,   399,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   417,   418,   419,   423,
     424,   425,   426,   430,   434,   435,   439,   440,   444,   445,
     446,   447,   448,   449,   453,   454,   455,   459,   460,   464,
     465,   469,   470,   474,   475,   479,   480,   481,   485,   486,
     487,   488,   489,   490,   494,   495,   496,   497,   498,   502,
     503,   507,   508,   512,   513,   517,   518
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "SIZEOF", "GOTO", "RETURN", "DO",
  "WHILE", "FOR", "CONTINUE", "BREAK", "SWITCH", "DEFAULT", "CASE", "IF",
  "ELSE", "FLOAT", "DOUBLE", "CHAR", "VOID", "INT", "LONG", "BOOL",
  "SHORT", "VOLATILE", "CONST", "SIGNED", "UNSIGNED", "STATIC", "EXTERN",
  "INLINE", "TYPEDEF", "STRUCT", "ENUM", "UNION", "CONSTANT",
  "CONSTANT_INT", "CONSTANT_DOUBLE", "ELLIPSIS", "STRING_LITERAL",
  "ASSIGN_RIGHTSHIFT", "ASSIGN_LEFTSHIFT", "ASSIGN_ADD", "ASSIGN_SUB",
  "ASSIGN_MUL", "ASSIGN_DIV", "ASSIGN_MOD", "ASSIGN_AND", "ASSIGN_OR",
  "TYPE_NAME", "ASSIGN_XOR", "IDENTIFIER", "OP_RIGHTSHIFT", "OP_LEFTSHIFT",
  "OP_INC", "OP_DEC", "OP_PTR", "OP_AND", "OP_OR", "OP_LE", "OP_GE",
  "OP_EQ", "OP_NE", "';'", "','", "':'", "'.'", "'&'", "'|'", "'~'", "'^'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'>'", "'<'", "'?'", "'!'", "'='",
  "'('", "')'", "'['", "']'", "'{'", "'}'", "$accept", "program",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    59,    44,    58,    46,    38,   124,
     126,    94,    43,    45,    42,    47,    37,    62,    60,    63,
      33,    61,    40,    41,    91,    93,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    90,    90,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    93,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    96,    96,    96,    96,    97,
      97,    97,    98,    98,    98,    99,    99,    99,    99,    99,
     100,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   113,   113,   114,   114,   115,   115,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   117,   118,   118,   119,   119,   120,   121,
     121,   121,   121,   122,   122,   123,   123,   123,   124,   124,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   128,
     129,   129,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   131,   131,   131,   131,   132,
     132,   133,   133,   134,   134,   135,   135,   135,   136,   136,
     137,   137,   138,   138,   138,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   140,   140,   140,   141,
     141,   141,   141,   142,   143,   143,   144,   144,   145,   145,
     145,   145,   145,   145,   146,   146,   146,   147,   147,   148,
     148,   149,   149,   150,   150,   151,   151,   151,   152,   152,
     152,   152,   152,   152,   153,   153,   153,   153,   153,   154,
     154,   155,   155,   156,   156,   157,   157
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     4,     2,     1,     1,     1,     2,     3,     2,
       1,     2,     1,     1,     3,     1,     2,     3,     4,     5,
       5,     6,     2,     1,     3,     1,     3,     1,     1,     1,
       2,     1,     1,     3,     5,     4,     4,     6,     6,     5,
       4,     3,     4,     4,     3,     1,     2,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     2,     1,     1,     3,
       1,     2,     1,     1,     2,     3,     2,     3,     3,     4,
       3,     4,     2,     3,     3,     4,     1,     3,     4,     1,
       2,     3,     4,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     3,     1,
       2,     1,     1,     1,     2,     5,     7,     5,     5,     7,
       6,     7,     6,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,   104,   105,   100,    99,   102,   103,   108,   101,
     138,   137,   106,   107,    97,    96,   139,    95,   114,     0,
     115,     0,   232,     0,    83,    85,   109,     0,   110,    87,
      89,     2,   229,   231,   132,     0,     1,   142,    81,   155,
       0,     0,    91,    93,   141,     0,    84,    86,   113,     0,
      88,    90,   230,     0,   135,     0,   133,   159,   157,   156,
       0,    82,     0,     0,     0,   235,     0,   234,     0,     0,
       0,   140,     0,   120,     0,   116,     0,   122,     0,     0,
       0,   128,   160,   158,   143,    92,    93,     0,     4,     5,
       6,     7,     3,     0,     0,    27,    31,    29,    30,    28,
      32,     0,     0,     9,    21,    33,     0,    35,    39,    42,
      45,    50,    53,    55,    57,    59,    61,    63,    65,   186,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,   213,   207,    78,     0,   211,   212,   198,
     199,     0,   209,   200,   201,   202,   203,   236,   233,   168,
     154,   167,     0,   161,   163,     0,     0,    28,   151,     0,
       0,     0,   119,   112,   117,     0,     0,   123,   125,   121,
       0,   129,    33,    80,   136,   130,   134,     0,    25,     0,
      22,    23,     0,   170,     0,     0,     0,   189,     0,     0,
       0,   194,    15,    16,     0,     0,     0,     0,    74,    73,
      71,    72,    68,    69,    70,    75,    77,    76,    67,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   227,     0,     0,     0,     0,   225,   226,     0,     0,
       0,     0,     0,   214,     0,   208,   210,     0,     0,   165,
     172,   166,   173,   152,     0,     0,   153,     0,   150,   146,
       0,    28,   145,     0,   111,   126,   118,     0,     0,   131,
       0,     0,     8,     0,   172,   171,     0,   197,     0,     0,
     187,   190,   193,   195,    14,    13,    11,     0,    19,     0,
      66,    36,    37,    38,    40,    41,    44,    43,    48,    49,
      47,    46,    51,    52,    54,    56,    58,    60,    62,     0,
     224,   228,     0,     0,     0,     0,     0,   206,     0,     0,
     204,    79,   182,     0,     0,    28,   176,     0,   174,     0,
       0,   162,   164,   169,     0,     0,   149,   144,   124,   127,
      26,     0,     0,    34,   196,   188,   191,     0,     0,    12,
      10,     0,     0,     0,     0,     0,     0,   205,     0,   183,
     175,   180,   177,   184,     0,    28,   178,     0,   147,   148,
       0,   192,    20,    64,     0,   218,     0,     0,     0,     0,
     217,   215,   185,   181,   179,     0,    17,     0,   222,     0,
     220,     0,     0,    18,   219,   223,   221,   216
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,   103,   104,   287,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   135,
     209,   136,   174,    22,    66,    41,    42,    24,    25,    26,
      27,    74,    75,    76,   166,   167,    28,    55,    56,    29,
      30,    60,    44,    45,    59,   323,   153,   154,   155,   184,
     324,   252,   187,   188,   189,   190,   191,   138,   139,   140,
     141,   142,   143,   144,   145,   146,    31,    32,    33,    68
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -271
static const yytype_int16 yypact[] =
{
    1564,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,   -40,
    -271,    72,  -271,    13,  1564,  1564,  -271,   -38,  -271,  1564,
    1564,  1564,  -271,  -271,    19,    16,  -271,  -271,  -271,    -4,
      34,    20,  -271,   499,   -45,     7,  -271,  -271,    93,  1583,
    -271,  -271,  -271,    16,    12,   -42,  -271,  -271,  -271,    -4,
      67,  -271,    34,   720,   341,  -271,    13,  -271,   532,  1068,
     884,   -45,  1583,  1583,   216,  -271,    62,  1583,    32,  1377,
     -26,  -271,  -271,  -271,  -271,  -271,    18,  1416,  -271,  -271,
    -271,  -271,  -271,  1427,  1427,  -271,  -271,  -271,  -271,  -271,
    -271,  1277,   681,  -271,    82,   343,  1377,  -271,   183,    53,
     140,    80,   134,   116,   119,   158,   171,   -27,  -271,  -271,
    -271,   180,  1327,   658,   173,   185,   189,   206,   190,   224,
    1377,   195,   228,  -271,  -271,  -271,   181,  -271,  -271,  -271,
    -271,   427,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,   -18,   214,   234,  -271,    27,   235,   215,  -271,   223,
     934,  1493,  -271,  -271,  -271,  1377,   198,  -271,   244,  -271,
     -25,  -271,  -271,  -271,  -271,  -271,  -271,  1277,  -271,  1277,
    -271,  -271,    52,   146,   231,   249,  1377,  -271,    36,   720,
     108,  -271,  -271,  -271,   263,   265,  1148,  1377,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  1377,
    -271,  1377,  1377,  1377,  1377,  1377,  1377,  1377,  1377,  1377,
    1377,  1377,  1377,  1377,  1377,  1377,  1377,  1377,  1377,  1377,
     254,  -271,   211,   311,  1377,  1137,  -271,  -271,  1377,   658,
     255,  1377,   658,  -271,  1377,  -271,  -271,   815,   957,  -271,
     -11,  -271,    64,  -271,  1519,   268,  -271,  1316,  -271,  -271,
    1377,   237,  -271,   241,  -271,  -271,  -271,    62,  1377,  -271,
     245,   247,  -271,   851,    96,  -271,   743,  -271,   242,   535,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,    68,  -271,    11,
    -271,  -271,  -271,  -271,   183,   183,    53,    53,   140,   140,
     140,   140,    80,    80,   134,   116,   119,   158,   171,   218,
    -271,  -271,   250,    77,  1366,  1366,    89,  -271,   658,    94,
    -271,  -271,  -271,   248,   251,   252,  -271,   253,    64,  1104,
     996,  -271,  -271,  -271,   256,   257,  -271,  -271,  -271,  -271,
     238,   238,   681,  -271,  -271,  -271,  -271,   720,  1377,  -271,
    -271,  1377,  1377,   658,  1187,  1210,   658,  -271,   658,  -271,
    -271,  -271,  -271,  -271,   260,   272,  -271,   295,  -271,  -271,
      56,  -271,  -271,  -271,    98,  -271,   658,   104,   658,   105,
    -271,   317,  -271,  -271,  -271,   574,  -271,   271,  -271,   658,
    -271,   658,   658,  -271,  -271,  -271,  -271,  -271
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -271,  -271,  -271,  -271,  -271,   -12,  -271,  -100,    78,    79,
       3,    84,   112,   157,   172,   156,   174,  -271,   -77,   -62,
    -271,   -73,  -123,   -10,     0,  -271,   339,  -271,     6,  -271,
    -271,   331,   -59,   -57,  -271,   137,  -271,   353,   -70,   239,
    -271,   -19,   -32,   -21,   -53,   -64,  -271,   153,  -271,    -6,
    -132,  -200,   -60,    66,  -270,  -271,   220,   -87,  -271,    -8,
    -271,   276,  -224,  -271,  -271,  -271,  -271,   381,  -271,  -271
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      23,   119,   173,   120,    43,   152,   210,   240,   159,   347,
     176,   315,    34,    71,    48,   164,   162,   160,    58,   251,
     169,    10,    11,    80,    46,    47,    54,    54,   182,    50,
      51,    23,   228,    65,    37,    67,   233,    69,    83,    70,
     119,    37,   265,    86,   183,    81,    35,    86,    49,   232,
     328,   275,   229,   173,   137,    73,    39,   168,   147,    37,
     148,   175,   269,   278,   247,    37,   248,   172,    54,   151,
      39,   247,    36,   248,   328,   178,   244,    38,    73,    73,
      73,   180,   181,    73,    61,    62,    37,    39,   173,    40,
     354,   355,   255,    79,   172,    40,   350,   170,   263,    63,
     176,   279,   164,   257,   182,    53,   182,    73,    39,   173,
     256,   291,   292,   293,    37,   347,    40,   244,   172,   171,
     183,   385,   183,   280,   289,   214,   215,   119,   165,   281,
     250,   137,   249,   348,   288,   272,    39,   192,   193,   194,
     218,   219,   244,   386,    40,   339,   329,   290,   330,   195,
      84,   349,   317,   172,   244,   320,   309,   220,   221,   244,
     353,   313,   274,   244,   196,   316,   197,    73,   319,   244,
     244,   270,   356,   271,   172,   185,   343,   358,   273,    72,
     248,   387,   321,    73,   224,    73,   327,   389,   391,   282,
     225,   173,   186,   216,   217,   334,   222,   223,   335,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   119,    71,   346,
      39,   298,   299,   300,   301,   314,   250,   226,   273,   227,
     248,   357,   230,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   243,   244,   151,   168,    18,
      19,    20,   274,   236,   151,   234,   172,   211,   212,   213,
      10,    11,   266,   267,   172,   364,   375,   235,   367,   380,
     237,   381,   238,   151,   373,   311,   244,   241,    57,   374,
     119,   377,   379,   244,   351,   119,   372,   371,    77,   388,
     239,   390,   294,   295,   242,   296,   297,   253,    82,   254,
     258,   277,   395,   163,   396,   397,   302,   303,   259,    57,
     268,    77,    77,    77,   276,   284,    77,   285,   310,   312,
     333,   318,   336,   119,   342,   346,   337,   344,   340,   151,
     341,   359,   352,   392,   360,   394,   304,   361,   362,   172,
      77,   368,   369,   382,     1,    87,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   383,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    88,    89,    90,
     384,    91,   305,   307,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   132,   207,    57,    93,    94,   306,    82,
      77,    85,   308,   161,   338,   133,    78,   332,   370,    95,
     283,    96,    52,    97,    98,    99,    77,   246,    77,     0,
       0,   100,     0,   101,   208,     0,     0,    64,   134,     0,
       1,    87,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    88,    89,    90,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
       0,     0,    93,    94,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,     0,    95,    82,    96,     0,    97,
      98,    99,     1,     0,     0,     0,     0,   100,     0,   101,
       0,     0,     0,    64,   245,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     1,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,    88,    89,    90,     0,    91,     0,     0,    87,     0,
      63,     0,     0,     0,     0,    64,     0,    92,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   185,    95,     0,    96,     0,    97,    98,    99,
      88,    89,    90,     0,    91,   100,     0,   101,    64,   186,
       0,   102,   345,     0,     0,     0,    92,     0,     0,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   185,    95,     0,    96,     0,    97,    98,    99,     0,
       0,     0,     0,     0,   100,     0,   101,     0,   186,     0,
     102,   393,    87,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,     0,     0,    93,    94,     0,     0,    88,    89,    90,
       0,    91,   133,     0,    87,     0,    95,     0,    96,     0,
      97,    98,    99,    92,     0,     0,    93,    94,   100,     0,
     101,     0,     0,     0,    64,     0,     0,    87,   185,    95,
       0,    96,     0,    97,    98,    99,    88,    89,    90,     0,
      91,   100,     0,   101,     0,   186,     0,   102,     0,     0,
       0,     0,    92,     0,     0,    93,    94,     0,     0,    88,
      89,    90,     0,    91,     0,     0,     0,     0,    95,     0,
      96,     0,    97,    98,    99,    92,     0,     0,    93,    94,
     100,     0,   101,     0,     0,     0,   102,     0,     0,     0,
       0,    95,     0,    96,     0,    97,    98,    99,     1,     0,
       0,     0,     0,   100,     0,   101,     0,     0,     0,   342,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,    87,    39,
       0,     0,     0,     0,     0,     0,     0,   247,   322,   248,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,   156,     0,     0,     0,     0,     0,     0,
      88,    89,    90,     0,    91,    39,     0,     0,     0,     0,
       0,     0,     0,   273,   322,   248,    92,     0,    87,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,    96,     0,    97,    98,   157,    10,
      11,    87,     0,   260,   100,     0,   101,     0,     0,   158,
      88,    89,    90,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,    93,
      94,     0,     0,    88,    89,    90,     0,    91,     0,     0,
      87,     0,    95,     0,    96,     0,    97,    98,   261,    92,
       0,     0,    93,    94,   100,     0,   101,     0,     0,   262,
       0,     0,     0,     0,     0,    95,     0,    96,     0,    97,
      98,   325,    88,    89,    90,     0,    91,   100,     0,   101,
       0,     0,   326,     0,     0,     0,     0,     0,    92,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,     0,    96,     0,    97,    98,
     365,     1,     0,     0,     0,     0,   100,     0,   101,     0,
       0,   366,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     149,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       1,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   150,    87,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    88,    89,    90,     0,    91,     0,     0,
       0,     0,     0,     0,    88,    89,    90,   363,    91,    92,
       0,    87,    93,    94,     0,     0,     0,     0,     0,     0,
      92,   133,     0,    93,    94,    95,     0,    96,     0,    97,
      98,    99,     0,     0,    87,     0,    95,   100,    96,   101,
      97,    98,    99,    88,    89,    90,     0,    91,   100,     0,
     101,   286,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,    93,    94,     0,     0,    88,    89,    90,     0,
      91,     0,     0,     0,     0,    95,     0,    96,     0,    97,
      98,    99,    92,     0,     0,    93,    94,   100,     0,   101,
     376,     0,     0,     0,     0,     0,     0,     0,    95,     0,
      96,    87,    97,    98,    99,     0,     0,     0,     0,     0,
     100,     0,   101,   378,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,     0,
      18,    19,    20,    88,    89,    90,     0,    91,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       0,    87,    93,    94,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,    95,     0,    96,     0,    97,
      98,    99,    88,    89,    90,     0,    91,   100,     0,   101,
       0,     0,     0,    88,    89,    90,     0,    91,    92,     0,
      87,    93,    94,     0,     0,     0,     0,     0,     0,    92,
       0,    87,    93,    94,    95,     0,    96,     0,    97,    98,
      99,   231,     0,     0,     0,    95,   100,    96,   101,    97,
      98,    99,    88,    89,    90,     0,    91,   100,     0,   101,
       0,     0,     0,    88,    89,    90,     0,    91,    92,     0,
      87,    93,    94,     0,     0,     0,     0,     0,     0,    92,
     133,    87,    93,    94,    95,     0,    96,     0,    97,    98,
      99,     0,     0,     0,     0,    95,   100,    96,   101,    97,
      98,    99,    88,    89,    90,     0,    91,   100,     0,   101,
       0,     0,     0,    88,    89,    90,     0,    91,    92,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,    92,
       0,     0,    93,    94,    95,     0,    96,     0,    97,    98,
      99,     0,     0,     0,     0,    95,   100,    96,   177,    97,
      98,    99,     0,     0,     0,     0,     0,   100,     0,   179,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     1,     0,     0,     0,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,   331,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     264,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    63,    79,    63,    23,    69,   106,   130,    70,   279,
      80,   235,    52,    45,    52,    74,    73,    70,    39,   151,
      77,    25,    26,    65,    24,    25,    52,    52,   101,    29,
      30,    31,    59,    43,    52,    43,   123,    82,    59,    84,
     102,    52,   165,    62,   101,    87,    86,    66,    86,   122,
     250,   183,    79,   130,    64,    49,    74,    76,    68,    52,
      68,    87,    87,   186,    82,    52,    84,    79,    52,    69,
      74,    82,     0,    84,   274,    87,    65,    64,    72,    73,
      74,    93,    94,    77,    64,    65,    52,    74,   165,    82,
     314,   315,    65,    81,   106,    82,    85,    65,   160,    81,
     170,    65,   161,   156,   177,    86,   179,   101,    74,   186,
      83,   211,   212,   213,    52,   385,    82,    65,   130,    87,
     177,    65,   179,    87,   197,    72,    73,   189,    66,   189,
     151,   141,   151,    65,   196,    83,    74,    55,    56,    57,
      60,    61,    65,    87,    82,   268,    82,   209,    84,    67,
      83,    83,   239,   165,    65,   242,   229,    77,    78,    65,
      83,   234,   183,    65,    82,   238,    84,   161,   241,    65,
      65,   177,    83,   179,   186,    67,   276,    83,    82,    86,
      84,    83,   244,   177,    68,   179,   248,    83,    83,    81,
      71,   268,    84,    53,    54,   257,    62,    63,   260,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   279,   250,   279,
      74,   218,   219,   220,   221,   235,   247,    69,    82,    58,
      84,   318,    52,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    64,    65,   247,   267,    33,
      34,    35,   273,    64,   254,    82,   268,    74,    75,    76,
      25,    26,    64,    65,   276,   329,   353,    82,   330,   356,
      64,   358,    82,   273,   351,    64,    65,    82,    39,   352,
     342,   354,   355,    65,    66,   347,   348,   347,    49,   376,
      66,   378,   214,   215,    66,   216,   217,    83,    59,    65,
      85,    52,   389,    87,   391,   392,   222,   223,    85,    70,
      66,    72,    73,    74,    83,    52,    77,    52,    64,     8,
      52,    66,    85,   385,    86,   385,    85,    85,    83,   329,
      83,    83,    82,    16,    83,    64,   224,    85,    85,   351,
     101,    85,    85,    83,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    85,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      85,    40,   225,   227,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    52,    51,   156,    55,    56,   226,   160,
     161,    62,   228,    72,   267,    64,    53,   254,   342,    68,
     190,    70,    31,    72,    73,    74,   177,   141,   179,    -1,
      -1,    80,    -1,    82,    81,    -1,    -1,    86,    87,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,   257,    70,    -1,    72,
      73,    74,     3,    -1,    -1,    -1,    -1,    80,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,     3,    -1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    36,    37,    38,    -1,    40,    -1,    -1,     4,    -1,
      81,    -1,    -1,    -1,    -1,    86,    -1,    52,    -1,    -1,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    70,    -1,    72,    73,    74,
      36,    37,    38,    -1,    40,    80,    -1,    82,    86,    84,
      -1,    86,    87,    -1,    -1,    -1,    52,    -1,    -1,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    -1,    70,    -1,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    82,    -1,    84,    -1,
      86,    87,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    56,    -1,    -1,    36,    37,    38,
      -1,    40,    64,    -1,     4,    -1,    68,    -1,    70,    -1,
      72,    73,    74,    52,    -1,    -1,    55,    56,    80,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,     4,    67,    68,
      -1,    70,    -1,    72,    73,    74,    36,    37,    38,    -1,
      40,    80,    -1,    82,    -1,    84,    -1,    86,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    56,    -1,    -1,    36,
      37,    38,    -1,    40,    -1,    -1,    -1,    -1,    68,    -1,
      70,    -1,    72,    73,    74,    52,    -1,    -1,    55,    56,
      80,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    68,    -1,    70,    -1,    72,    73,    74,     3,    -1,
      -1,    -1,    -1,    80,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,     4,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    -1,    40,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    52,    -1,     4,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    -1,    72,    73,    74,    25,
      26,     4,    -1,    29,    80,    -1,    82,    -1,    -1,    85,
      36,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      56,    -1,    -1,    36,    37,    38,    -1,    40,    -1,    -1,
       4,    -1,    68,    -1,    70,    -1,    72,    73,    74,    52,
      -1,    -1,    55,    56,    80,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,    72,
      73,    74,    36,    37,    38,    -1,    40,    80,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    70,    -1,    72,    73,
      74,     3,    -1,    -1,    -1,    -1,    80,    -1,    82,    -1,
      -1,    85,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,     4,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    83,    40,    52,
      -1,     4,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    64,    -1,    55,    56,    68,    -1,    70,    -1,    72,
      73,    74,    -1,    -1,     4,    -1,    68,    80,    70,    82,
      72,    73,    74,    36,    37,    38,    -1,    40,    80,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    56,    -1,    -1,    36,    37,    38,    -1,
      40,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,    72,
      73,    74,    52,    -1,    -1,    55,    56,    80,    -1,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      70,     4,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    82,    83,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    -1,    40,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,     4,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    68,    -1,    70,    -1,    72,
      73,    74,    36,    37,    38,    -1,    40,    80,    -1,    82,
      -1,    -1,    -1,    36,    37,    38,    -1,    40,    52,    -1,
       4,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,     4,    55,    56,    68,    -1,    70,    -1,    72,    73,
      74,    64,    -1,    -1,    -1,    68,    80,    70,    82,    72,
      73,    74,    36,    37,    38,    -1,    40,    80,    -1,    82,
      -1,    -1,    -1,    36,    37,    38,    -1,    40,    52,    -1,
       4,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      64,     4,    55,    56,    68,    -1,    70,    -1,    72,    73,
      74,    -1,    -1,    -1,    -1,    68,    80,    70,    82,    72,
      73,    74,    36,    37,    38,    -1,    40,    80,    -1,    82,
      -1,    -1,    -1,    36,    37,    38,    -1,    40,    52,    -1,
      -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    56,    68,    -1,    70,    -1,    72,    73,
      74,    -1,    -1,    -1,    -1,    68,    80,    70,    82,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     3,    -1,    -1,    -1,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    89,   111,   112,   115,   116,   117,   118,   124,   127,
     128,   154,   155,   156,    52,    86,     0,    52,    64,    74,
      82,   113,   114,   129,   130,   131,   112,   112,    52,    86,
     112,   112,   155,    86,    52,   125,   126,   127,   131,   132,
     129,    64,    65,    81,    86,   111,   112,   147,   157,    82,
      84,   130,    86,   116,   119,   120,   121,   127,   125,    81,
      65,    87,   127,   131,    83,   114,   129,     4,    36,    37,
      38,    40,    52,    55,    56,    68,    70,    72,    73,    74,
      80,    82,    86,    90,    91,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     140,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    52,    64,    87,   107,   109,   111,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   111,   147,    52,
      83,   112,   133,   134,   135,   136,    29,    74,    85,   107,
     132,   119,   121,    87,   120,    66,   122,   123,   129,   121,
      65,    87,    93,   106,   110,    87,   126,    82,    93,    82,
      93,    93,   109,   121,   137,    67,    84,   140,   141,   142,
     143,   144,    55,    56,    57,    67,    82,    84,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    51,    81,   108,
      95,    74,    75,    76,    72,    73,    53,    54,    60,    61,
      77,    78,    62,    63,    68,    71,    69,    58,    59,    79,
      52,    64,   109,   145,    82,    82,    64,    64,    82,    66,
     110,    82,    66,    64,    65,    87,   149,    82,    84,   129,
     131,   138,   139,    83,    65,    65,    83,   132,    85,    85,
      29,    74,    85,   107,    87,   110,    64,    65,    66,    87,
     137,   137,    83,    82,   131,   138,    83,    52,   110,    65,
      87,   140,    81,   144,    52,    52,    83,    92,   107,   109,
     107,    95,    95,    95,    96,    96,    97,    97,    98,    98,
      98,    98,    99,    99,   100,   101,   102,   103,   104,   109,
      64,    64,     8,   109,   111,   150,   109,   145,    66,   109,
     145,   107,    83,   133,   138,    74,    85,   107,   139,    82,
      84,    39,   135,    52,   107,   107,    85,    85,   123,   110,
      83,    83,    86,    95,    85,    87,   140,   142,    65,    83,
      85,    66,    82,    83,   150,   150,    83,   145,    83,    83,
      83,    85,    85,    83,   133,    74,    85,   107,    85,    85,
     141,   140,   107,   106,   109,   145,    83,   109,    83,   109,
     145,   145,    83,    85,    85,    65,    87,    83,   145,    83,
     145,    83,    16,    87,    64,   145,   145,   145
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
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

/* Line 1464 of yacc.c  */
#line 74 "parser.y"
    { (yyval.gtn) = treeCreate("program",1,(yyvsp[(1) - (1)].gtn));root = (yyval.gtn);}
    break;

  case 3:

/* Line 1464 of yacc.c  */
#line 78 "parser.y"
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 79 "parser.y"
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 80 "parser.y"
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 81 "parser.y"
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 82 "parser.y"
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 83 "parser.y"
    {(yyval.gtn) = treeCreate("primary_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 87 "parser.y"
    {(yyval.gtn) = treeCreate("postfix_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 88 "parser.y"
    {(yyval.gtn) = treeCreate("postfix_expression",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 89 "parser.y"
    {(yyval.gtn) = treeCreate("postfix_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 90 "parser.y"
    {(yyval.gtn) = treeCreate("postfix_expression",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 91 "parser.y"
    {(yyval.gtn) = treeCreate("postfix_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 92 "parser.y"
    {(yyval.gtn) = treeCreate("postfix_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 93 "parser.y"
    {(yyval.gtn) = treeCreate("postfix_expression",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 94 "parser.y"
    {(yyval.gtn) = treeCreate("postfix_expression",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 95 "parser.y"
    {(yyval.gtn) = treeCreate("postfix_expression",6,(yyvsp[(1) - (6)].gtn),(yyvsp[(2) - (6)].gtn),(yyvsp[(3) - (6)].gtn),(yyvsp[(4) - (6)].gtn),(yyvsp[(5) - (6)].gtn),(yyvsp[(6) - (6)].gtn));}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 96 "parser.y"
    {(yyval.gtn) = treeCreate("postfix_expression",7,(yyvsp[(1) - (7)].gtn),(yyvsp[(2) - (7)].gtn),(yyvsp[(3) - (7)].gtn),(yyvsp[(4) - (7)].gtn),(yyvsp[(5) - (7)].gtn),(yyvsp[(6) - (7)].gtn),(yyvsp[(7) - (7)].gtn));}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 100 "parser.y"
    {(yyval.gtn) = treeCreate("argument_expression_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 101 "parser.y"
    {(yyval.gtn) = treeCreate("argument_expression_list",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 105 "parser.y"
    {(yyval.gtn) = treeCreate("unary_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 106 "parser.y"
    {(yyval.gtn) = treeCreate("unary_expression",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 107 "parser.y"
    {(yyval.gtn) = treeCreate("unary_expression",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 108 "parser.y"
    {(yyval.gtn) = treeCreate("unary_expression",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 109 "parser.y"
    {(yyval.gtn) = treeCreate("unary_expression",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 110 "parser.y"
    {(yyval.gtn) = treeCreate("unary_expression",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 114 "parser.y"
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 115 "parser.y"
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 116 "parser.y"
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 117 "parser.y"
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 118 "parser.y"
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 119 "parser.y"
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 123 "parser.y"
    {(yyval.gtn) = treeCreate("cast_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 124 "parser.y"
    {(yyval.gtn) = treeCreate("cast_expression",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 128 "parser.y"
    {(yyval.gtn) = treeCreate("multiplicative_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 129 "parser.y"
    {(yyval.gtn) = treeCreate("multiplicative_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 130 "parser.y"
    {(yyval.gtn) = treeCreate("multiplicative_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 131 "parser.y"
    {(yyval.gtn) = treeCreate("multiplicative_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 135 "parser.y"
    {(yyval.gtn) = treeCreate("additive_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 136 "parser.y"
    {(yyval.gtn) = treeCreate("additive_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 137 "parser.y"
    {(yyval.gtn) = treeCreate("additive_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 141 "parser.y"
    {(yyval.gtn) = treeCreate("shift_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 142 "parser.y"
    {(yyval.gtn) = treeCreate("shift_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 143 "parser.y"
    {(yyval.gtn) = treeCreate("shift_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 147 "parser.y"
    {(yyval.gtn) = treeCreate("relational_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 148 "parser.y"
    {(yyval.gtn) = treeCreate("relational_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 149 "parser.y"
    {(yyval.gtn) = treeCreate("relational_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 150 "parser.y"
    {(yyval.gtn) = treeCreate("relational_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 151 "parser.y"
    {(yyval.gtn) = treeCreate("relational_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 155 "parser.y"
    {(yyval.gtn) = treeCreate("equality_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 156 "parser.y"
    {(yyval.gtn) = treeCreate("equality_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 157 "parser.y"
    {(yyval.gtn) = treeCreate("equality_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 161 "parser.y"
    {(yyval.gtn) = treeCreate("and_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 162 "parser.y"
    {(yyval.gtn) = treeCreate("and_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 166 "parser.y"
    {(yyval.gtn) = treeCreate("exclusive_or_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 167 "parser.y"
    {(yyval.gtn) = treeCreate("exclusive_or_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 171 "parser.y"
    {(yyval.gtn) = treeCreate("inclusive_or_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 172 "parser.y"
    {(yyval.gtn) = treeCreate("inclusive_or_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 176 "parser.y"
    {(yyval.gtn) = treeCreate("logical_and_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 177 "parser.y"
    {(yyval.gtn) = treeCreate("logical_and_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 181 "parser.y"
    {(yyval.gtn) = treeCreate("logical_or_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 182 "parser.y"
    {(yyval.gtn) = treeCreate("logical_or_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 186 "parser.y"
    {(yyval.gtn) = treeCreate("conditional_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 187 "parser.y"
    {(yyval.gtn) = treeCreate("conditional_expression",5,(yyvsp[(1) - (5)].gtn),(yyvsp[(2) - (5)].gtn),(yyvsp[(3) - (5)].gtn),(yyvsp[(4) - (5)].gtn),(yyvsp[(5) - (5)].gtn));}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 191 "parser.y"
    {(yyval.gtn) = treeCreate("assignment_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 192 "parser.y"
    {(yyval.gtn) = treeCreate("assignment_expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 196 "parser.y"
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 197 "parser.y"
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 198 "parser.y"
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 199 "parser.y"
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 71:

/* Line 1464 of yacc.c  */
#line 200 "parser.y"
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 201 "parser.y"
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 202 "parser.y"
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 203 "parser.y"
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 75:

/* Line 1464 of yacc.c  */
#line 204 "parser.y"
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 205 "parser.y"
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 206 "parser.y"
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 210 "parser.y"
    {(yyval.gtn) = treeCreate("expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 211 "parser.y"
    {(yyval.gtn) = treeCreate("expression",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 215 "parser.y"
    {(yyval.gtn) = treeCreate("constant_expression",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 219 "parser.y"
    {(yyval.gtn) = treeCreate("declaration",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 220 "parser.y"
    {(yyval.gtn) = treeCreate("declaration",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 83:

/* Line 1464 of yacc.c  */
#line 224 "parser.y"
    {(yyval.gtn) = treeCreate("declaration_specifiers",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 84:

/* Line 1464 of yacc.c  */
#line 225 "parser.y"
    {(yyval.gtn) = treeCreate("declaration_specifiers",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 226 "parser.y"
    {(yyval.gtn) = treeCreate("declaration_specifiers",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 86:

/* Line 1464 of yacc.c  */
#line 227 "parser.y"
    {(yyval.gtn) = treeCreate("declaration_specifiers",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 87:

/* Line 1464 of yacc.c  */
#line 228 "parser.y"
    {(yyval.gtn) = treeCreate("declaration_specifiers",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 88:

/* Line 1464 of yacc.c  */
#line 229 "parser.y"
    {(yyval.gtn) = treeCreate("declaration_specifiers",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 89:

/* Line 1464 of yacc.c  */
#line 230 "parser.y"
    {(yyval.gtn) = treeCreate("declaration_specifiers",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 90:

/* Line 1464 of yacc.c  */
#line 231 "parser.y"
    {(yyval.gtn) = treeCreate("declaration_specifiers",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 91:

/* Line 1464 of yacc.c  */
#line 235 "parser.y"
    {(yyval.gtn) = treeCreate("init_declarator_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 92:

/* Line 1464 of yacc.c  */
#line 236 "parser.y"
    {(yyval.gtn) = treeCreate("init_declarator_list",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 93:

/* Line 1464 of yacc.c  */
#line 240 "parser.y"
    {(yyval.gtn) = treeCreate("init_declarator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 94:

/* Line 1464 of yacc.c  */
#line 241 "parser.y"
    {(yyval.gtn) = treeCreate("init_declarator",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 95:

/* Line 1464 of yacc.c  */
#line 245 "parser.y"
    {(yyval.gtn) = treeCreate("storage_class_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 96:

/* Line 1464 of yacc.c  */
#line 246 "parser.y"
    {(yyval.gtn) = treeCreate("storage_class_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 97:

/* Line 1464 of yacc.c  */
#line 247 "parser.y"
    {(yyval.gtn) = treeCreate("storage_class_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 98:

/* Line 1464 of yacc.c  */
#line 248 "parser.y"
    {(yyval.gtn) = treeCreate("storage_class_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 99:

/* Line 1464 of yacc.c  */
#line 253 "parser.y"
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 100:

/* Line 1464 of yacc.c  */
#line 254 "parser.y"
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 101:

/* Line 1464 of yacc.c  */
#line 255 "parser.y"
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 102:

/* Line 1464 of yacc.c  */
#line 256 "parser.y"
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 103:

/* Line 1464 of yacc.c  */
#line 257 "parser.y"
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 104:

/* Line 1464 of yacc.c  */
#line 258 "parser.y"
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 105:

/* Line 1464 of yacc.c  */
#line 259 "parser.y"
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 106:

/* Line 1464 of yacc.c  */
#line 260 "parser.y"
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 107:

/* Line 1464 of yacc.c  */
#line 261 "parser.y"
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 108:

/* Line 1464 of yacc.c  */
#line 262 "parser.y"
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 109:

/* Line 1464 of yacc.c  */
#line 265 "parser.y"
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 110:

/* Line 1464 of yacc.c  */
#line 266 "parser.y"
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 111:

/* Line 1464 of yacc.c  */
#line 271 "parser.y"
    {(yyval.gtn) = treeCreate("struct_or_union_specifier",5,(yyvsp[(1) - (5)].gtn),(yyvsp[(2) - (5)].gtn),(yyvsp[(3) - (5)].gtn),(yyvsp[(4) - (5)].gtn),(yyvsp[(5) - (5)].gtn));}
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 272 "parser.y"
    {(yyval.gtn) = treeCreate("struct_or_union_specifier",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 273 "parser.y"
    {(yyval.gtn) = treeCreate("struct_or_union_specifier",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 114:

/* Line 1464 of yacc.c  */
#line 277 "parser.y"
    {(yyval.gtn) = treeCreate("struct_or_union",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 115:

/* Line 1464 of yacc.c  */
#line 278 "parser.y"
    {(yyval.gtn) = treeCreate("struct_or_union",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 116:

/* Line 1464 of yacc.c  */
#line 282 "parser.y"
    {(yyval.gtn) = treeCreate("struct_declarator_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 117:

/* Line 1464 of yacc.c  */
#line 283 "parser.y"
    {(yyval.gtn) = treeCreate("struct_declarator_list",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 287 "parser.y"
    {(yyval.gtn) = treeCreate("struct_declaration",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 291 "parser.y"
    {(yyval.gtn) = treeCreate("specifier_qualifier_list",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 120:

/* Line 1464 of yacc.c  */
#line 292 "parser.y"
    {(yyval.gtn) = treeCreate("specifier_qualifier_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 293 "parser.y"
    {(yyval.gtn) = treeCreate("specifier_qualifier_list",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 122:

/* Line 1464 of yacc.c  */
#line 294 "parser.y"
    {(yyval.gtn) = treeCreate("specifier_qualifier_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 123:

/* Line 1464 of yacc.c  */
#line 298 "parser.y"
    {(yyval.gtn) = treeCreate("struct_declarator_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 299 "parser.y"
    {(yyval.gtn) = treeCreate("struct_declarator_list",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 303 "parser.y"
    {(yyval.gtn) = treeCreate("struct_declarator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 126:

/* Line 1464 of yacc.c  */
#line 304 "parser.y"
    {(yyval.gtn) = treeCreate("struct_declarator",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 305 "parser.y"
    {(yyval.gtn) = treeCreate("struct_declarator",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 309 "parser.y"
    {(yyval.gtn) = treeCreate("enum_specifier",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 129:

/* Line 1464 of yacc.c  */
#line 310 "parser.y"
    {(yyval.gtn) = treeCreate("enum_specifier",5,(yyvsp[(1) - (5)].gtn),(yyvsp[(2) - (5)].gtn),(yyvsp[(3) - (5)].gtn),(yyvsp[(4) - (5)].gtn),(yyvsp[(5) - (5)].gtn));}
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 311 "parser.y"
    {(yyval.gtn) = treeCreate("enum_specifier",5,(yyvsp[(1) - (5)].gtn),(yyvsp[(2) - (5)].gtn),(yyvsp[(3) - (5)].gtn),(yyvsp[(4) - (5)].gtn),(yyvsp[(5) - (5)].gtn));}
    break;

  case 131:

/* Line 1464 of yacc.c  */
#line 312 "parser.y"
    {(yyval.gtn) = treeCreate("enum_specifier",6,(yyvsp[(1) - (6)].gtn),(yyvsp[(2) - (6)].gtn),(yyvsp[(3) - (6)].gtn),(yyvsp[(4) - (6)].gtn),(yyvsp[(5) - (6)].gtn),(yyvsp[(6) - (6)].gtn));}
    break;

  case 132:

/* Line 1464 of yacc.c  */
#line 313 "parser.y"
    {(yyval.gtn) = treeCreate("enum_specifier",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 133:

/* Line 1464 of yacc.c  */
#line 317 "parser.y"
    {(yyval.gtn) = treeCreate("enumerator_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 318 "parser.y"
    {(yyval.gtn) = treeCreate("enumerator_list",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 135:

/* Line 1464 of yacc.c  */
#line 322 "parser.y"
    {(yyval.gtn) = treeCreate("enumerator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 136:

/* Line 1464 of yacc.c  */
#line 323 "parser.y"
    {(yyval.gtn) = treeCreate("enumerator",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 137:

/* Line 1464 of yacc.c  */
#line 327 "parser.y"
    {(yyval.gtn) = treeCreate("type_qualifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 138:

/* Line 1464 of yacc.c  */
#line 329 "parser.y"
    {(yyval.gtn) = treeCreate("type_qualifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 139:

/* Line 1464 of yacc.c  */
#line 333 "parser.y"
    {(yyval.gtn) = treeCreate("function_specifier",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 140:

/* Line 1464 of yacc.c  */
#line 337 "parser.y"
    {(yyval.gtn) = treeCreate("declarator",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 141:

/* Line 1464 of yacc.c  */
#line 338 "parser.y"
    {(yyval.gtn) = treeCreate("declarator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 342 "parser.y"
    {(yyval.gtn) = treeCreate("direct_declarator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 343 "parser.y"
    {(yyval.gtn) = treeCreate("direct_declarator",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 344 "parser.y"
    {(yyval.gtn) = treeCreate("direct_declarator",5,(yyvsp[(1) - (5)].gtn),(yyvsp[(2) - (5)].gtn),(yyvsp[(3) - (5)].gtn),(yyvsp[(4) - (5)].gtn),(yyvsp[(5) - (5)].gtn));}
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 345 "parser.y"
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 346 "parser.y"
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 347 "parser.y"
    {(yyval.gtn) = treeCreate("direct_declarator",6,(yyvsp[(1) - (6)].gtn),(yyvsp[(2) - (6)].gtn),(yyvsp[(3) - (6)].gtn),(yyvsp[(4) - (6)].gtn),(yyvsp[(5) - (6)].gtn),(yyvsp[(6) - (6)].gtn));}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 348 "parser.y"
    {(yyval.gtn) = treeCreate("direct_declarator",6,(yyvsp[(1) - (6)].gtn),(yyvsp[(2) - (6)].gtn),(yyvsp[(3) - (6)].gtn),(yyvsp[(4) - (6)].gtn),(yyvsp[(5) - (6)].gtn),(yyvsp[(6) - (6)].gtn));}
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 349 "parser.y"
    {(yyval.gtn) = treeCreate("direct_declarator",5,(yyvsp[(1) - (5)].gtn),(yyvsp[(2) - (5)].gtn),(yyvsp[(3) - (5)].gtn),(yyvsp[(4) - (5)].gtn),(yyvsp[(5) - (5)].gtn));}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 350 "parser.y"
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 351 "parser.y"
    {(yyval.gtn) = treeCreate("direct_declarator",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 352 "parser.y"
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 353 "parser.y"
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 354 "parser.y"
    {(yyval.gtn) = treeCreate("direct_declarator",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 358 "parser.y"
    {(yyval.gtn) = treeCreate("pointer",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 359 "parser.y"
    {(yyval.gtn) = treeCreate("pointer",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 360 "parser.y"
    {(yyval.gtn) = treeCreate("pointer",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 361 "parser.y"
    {(yyval.gtn) = treeCreate("pointer",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 365 "parser.y"
    {(yyval.gtn) = treeCreate("type_qualifier_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 160:

/* Line 1464 of yacc.c  */
#line 366 "parser.y"
    {(yyval.gtn) = treeCreate("type_qualifier_list",2,(yyvsp[(2) - (2)].gtn));}
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 371 "parser.y"
    {(yyval.gtn) = treeCreate("parameter_type_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 372 "parser.y"
    {(yyval.gtn) = treeCreate("parameter_type_list",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 376 "parser.y"
    {(yyval.gtn) = treeCreate("parameter_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 377 "parser.y"
    {(yyval.gtn) = treeCreate("parameter_list",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 381 "parser.y"
    {(yyval.gtn) = treeCreate("parameter_declaration",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 382 "parser.y"
    {(yyval.gtn) = treeCreate("parameter_declaration",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 383 "parser.y"
    {(yyval.gtn) = treeCreate("parameter_declaration",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 387 "parser.y"
    {(yyval.gtn) = treeCreate("identifier_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 388 "parser.y"
    {(yyval.gtn) = treeCreate("identifier_list",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 170:

/* Line 1464 of yacc.c  */
#line 392 "parser.y"
    {(yyval.gtn) = treeCreate("type_name",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 171:

/* Line 1464 of yacc.c  */
#line 393 "parser.y"
    {(yyval.gtn) = treeCreate("type_name",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 172:

/* Line 1464 of yacc.c  */
#line 397 "parser.y"
    {(yyval.gtn) = treeCreate("abstract_declarator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 398 "parser.y"
    {(yyval.gtn) = treeCreate("abstract_declarator",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 399 "parser.y"
    {(yyval.gtn) = treeCreate("abstract_declarator",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 417 "parser.y"
    {(yyval.gtn) = treeCreate("initializer",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 418 "parser.y"
    {(yyval.gtn) = treeCreate("initializer",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 419 "parser.y"
    {(yyval.gtn) = treeCreate("initializer",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 423 "parser.y"
    {(yyval.gtn) = treeCreate("initializer_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 424 "parser.y"
    {(yyval.gtn) = treeCreate("initializer_list",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 425 "parser.y"
    {(yyval.gtn) = treeCreate("initializer_list",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 426 "parser.y"
    {(yyval.gtn) = treeCreate("initializer_list",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 430 "parser.y"
    {(yyval.gtn) = treeCreate("designation",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 434 "parser.y"
    {(yyval.gtn) = treeCreate("designator_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 435 "parser.y"
    {(yyval.gtn) = treeCreate("designator_list",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 439 "parser.y"
    {(yyval.gtn) = treeCreate("designator",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 440 "parser.y"
    {(yyval.gtn) = treeCreate("designator",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 444 "parser.y"
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 445 "parser.y"
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 446 "parser.y"
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 447 "parser.y"
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 448 "parser.y"
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 449 "parser.y"
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 453 "parser.y"
    {(yyval.gtn) = treeCreate("labeled_statement",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 454 "parser.y"
    {(yyval.gtn) = treeCreate("labeled_statement",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 455 "parser.y"
    {(yyval.gtn) = treeCreate("labeled_statement",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 459 "parser.y"
    {(yyval.gtn) = treeCreate("compound_statement",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 460 "parser.y"
    {(yyval.gtn) = treeCreate("compound_statement",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 209:

/* Line 1464 of yacc.c  */
#line 464 "parser.y"
    {(yyval.gtn) = treeCreate("block_item_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 210:

/* Line 1464 of yacc.c  */
#line 465 "parser.y"
    {(yyval.gtn) = treeCreate("block_item_list",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 211:

/* Line 1464 of yacc.c  */
#line 469 "parser.y"
    {(yyval.gtn) = treeCreate("block_item",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 470 "parser.y"
    {(yyval.gtn) = treeCreate("block_item",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 474 "parser.y"
    {(yyval.gtn) = treeCreate("expression_statement",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 475 "parser.y"
    {(yyval.gtn) = treeCreate("expression_statement",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 215:

/* Line 1464 of yacc.c  */
#line 479 "parser.y"
    {(yyval.gtn) = treeCreate("selection_statement",5,(yyvsp[(1) - (5)].gtn),(yyvsp[(2) - (5)].gtn),(yyvsp[(3) - (5)].gtn),(yyvsp[(4) - (5)].gtn),(yyvsp[(5) - (5)].gtn));}
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 480 "parser.y"
    {(yyval.gtn) = treeCreate("selection_statement",7,(yyvsp[(1) - (7)].gtn),(yyvsp[(2) - (7)].gtn),(yyvsp[(3) - (7)].gtn),(yyvsp[(4) - (7)].gtn),(yyvsp[(5) - (7)].gtn),(yyvsp[(6) - (7)].gtn),(yyvsp[(7) - (7)].gtn));}
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 481 "parser.y"
    {(yyval.gtn) = treeCreate("selection_statement",5,(yyvsp[(1) - (5)].gtn),(yyvsp[(2) - (5)].gtn),(yyvsp[(3) - (5)].gtn),(yyvsp[(4) - (5)].gtn),(yyvsp[(5) - (5)].gtn));}
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 485 "parser.y"
    {(yyval.gtn) = treeCreate("iteration_statement",5,(yyvsp[(1) - (5)].gtn),(yyvsp[(2) - (5)].gtn),(yyvsp[(3) - (5)].gtn),(yyvsp[(4) - (5)].gtn),(yyvsp[(5) - (5)].gtn));}
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 486 "parser.y"
    {(yyval.gtn) = treeCreate("iteration_statement",7,(yyvsp[(1) - (7)].gtn),(yyvsp[(2) - (7)].gtn),(yyvsp[(3) - (7)].gtn),(yyvsp[(4) - (7)].gtn),(yyvsp[(5) - (7)].gtn),(yyvsp[(6) - (7)].gtn),(yyvsp[(7) - (7)].gtn));}
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 487 "parser.y"
    {(yyval.gtn) = treeCreate("iteration_statement",6,(yyvsp[(1) - (6)].gtn),(yyvsp[(2) - (6)].gtn),(yyvsp[(3) - (6)].gtn),(yyvsp[(4) - (6)].gtn),(yyvsp[(5) - (6)].gtn),(yyvsp[(6) - (6)].gtn));}
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 488 "parser.y"
    {(yyval.gtn) = treeCreate("iteration_statement",7,(yyvsp[(1) - (7)].gtn),(yyvsp[(2) - (7)].gtn),(yyvsp[(3) - (7)].gtn),(yyvsp[(4) - (7)].gtn),(yyvsp[(5) - (7)].gtn),(yyvsp[(6) - (7)].gtn),(yyvsp[(7) - (7)].gtn));}
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 489 "parser.y"
    {(yyval.gtn) = treeCreate("iteration_statement",6,(yyvsp[(1) - (6)].gtn),(yyvsp[(2) - (6)].gtn),(yyvsp[(3) - (6)].gtn),(yyvsp[(4) - (6)].gtn),(yyvsp[(5) - (6)].gtn),(yyvsp[(6) - (6)].gtn));}
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 490 "parser.y"
    {(yyval.gtn) = treeCreate("iteration_statement",7,(yyvsp[(1) - (7)].gtn),(yyvsp[(2) - (7)].gtn),(yyvsp[(3) - (7)].gtn),(yyvsp[(4) - (7)].gtn),(yyvsp[(5) - (7)].gtn),(yyvsp[(6) - (7)].gtn),(yyvsp[(7) - (7)].gtn));}
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 494 "parser.y"
    {(yyval.gtn) = treeCreate("jump_statement",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 495 "parser.y"
    {(yyval.gtn) = treeCreate("jump_statement",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 496 "parser.y"
    {(yyval.gtn) = treeCreate("jump_statement",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 497 "parser.y"
    {(yyval.gtn) = treeCreate("jump_statement",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 498 "parser.y"
    {(yyval.gtn) = treeCreate("jump_statement",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 502 "parser.y"
    {(yyval.gtn) = treeCreate("translation_unit",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 503 "parser.y"
    {(yyval.gtn) = treeCreate("translation_unit",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 507 "parser.y"
    {(yyval.gtn) = treeCreate("external_declaration",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 508 "parser.y"
    {(yyval.gtn) = treeCreate("external_declaration",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 512 "parser.y"
    {(yyval.gtn) = treeCreate("function_definition",4,(yyvsp[(1) - (4)].gtn),(yyvsp[(2) - (4)].gtn),(yyvsp[(3) - (4)].gtn),(yyvsp[(4) - (4)].gtn));}
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 513 "parser.y"
    {(yyval.gtn) = treeCreate("function_definition",3,(yyvsp[(1) - (3)].gtn),(yyvsp[(2) - (3)].gtn),(yyvsp[(3) - (3)].gtn));}
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 517 "parser.y"
    {(yyval.gtn) = treeCreate("declaration_list",1,(yyvsp[(1) - (1)].gtn));}
    break;

  case 236:

/* Line 1464 of yacc.c  */
#line 518 "parser.y"
    {(yyval.gtn) = treeCreate("declaration_list",2,(yyvsp[(1) - (2)].gtn),(yyvsp[(2) - (2)].gtn));}
    break;



/* Line 1464 of yacc.c  */
#line 3698 "parser.cpp"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1684 of yacc.c  */
#line 522 "parser.y"


void yyerror(char const *s){
	fflush(stdout);
	printf("\n%*s\n%*s\n", col, "^", col, s);
}
string int2string(int a)
{
    if (a == 0)
        return "0";
    string ret = "";
    while (a)
    {
        int t = a % 10;
        a /= 10;
        char c[] = "0";
        c[0] += t;
        ret = string(c) + ret;
    }
    return ret;
}
GrammarTreeNode *treeCreate(std::string name, int arg_cnt, ...)
{
    va_list valist;
    GrammarTreeNode *head = new GrammarTreeNode();
    if (!head)
    {
        printf("out of space\n");
        exit(0);
    }

    GrammarTreeNode *tmp = NULL;
    head->name = name;
    va_start(valist, arg_cnt);
    if (arg_cnt > 0)
    {
        tmp = va_arg(valist, GrammarTreeNode *);
        head->left = tmp;
        head->line_no = tmp->line_no;
        if (arg_cnt == 1)
        {
            head->content = tmp->content;
        }
        else
        {
            for (int i = 1; i < arg_cnt; i++)
            {
                tmp->right = va_arg(valist, GrammarTreeNode *);
                tmp = tmp->right;
            }
        }
    }
    else if (arg_cnt == 0)
    {
        // the following para is the current line number
        int ln = va_arg(valist, int);
        head->line_no = ln;
        if (head->name == "CONSTANT_INT")
        {
            int int_value;
            if (strlen(yytext) > 1 && yytext[0] == 0 && yytext[1] != 'x')
            {
                sscanf(yytext, "%o", &int_value);
            }
            else if (strlen(yytext) > 1 && yytext[0] == 0 && yytext[1] == 'x')
            {
                sscanf(yytext, "%x", &int_value);
            }
            else
            {
                int_value = atoi(yytext);
            }
            head->content = int2string(int_value);
        }
        else if (head->name == "CONSTANT_DOUBLE")
        {
            head->content = yytext;
        }
        else if (head->name == "TRUE")
        {
            head->content = int2string(1);
        }
        else if (head->name == "FALSE")
        {
            head->content = int2string(0);
        }
        else if (head->name == "STRING_LITERAL")
        {
            head->content = yytext;
        }
        else
        {
            head->content = yytext;
        }
    }
    return head;
};

void treeNodeFree(GrammarTreeNode *node)
{
    if (node == NULL)
    {
        return;
    }
    treeNodeFree(node->left);
    treeNodeFree(node->right);
    delete node;
};
void treePrint(GrammarTreeNode *node, int level)
{
    if (node == NULL)
    {
        return;
    }
    string name = node->name;
    if (node->line_no == -1)
    {
        treePrint(node->left, level + 1);
        treePrint(node->right, level);
        return;
    }
    for (int i = 0; i < level; i++)
    {
        cout << "|  ";
    }
    cout << node->name;
    if (node->name == "IDENTIFIER" || node->name == "BOOL" || node->name == "INT" || node->name == "CHAR" || node->name == "DOUBLE")
    {
        cout << ":" << node->content;
    }
    else if (node->name == "CONSTANT_INT" || node->name == "CONSTANT_DOUBLE")
    {
        cout << ":" << node->content << " ";
    }
    else if (node->name == "TRUE" || node->name == "FALSE")
    {
        cout << ":" << node->content << " ";
    }
    else if (node->name == "STRING_LITERAL")
    {
        cout << ":" << node->content;
    }
    else
    {
        cout << "   <@" << node->line_no << ">";
    }
    cout << endl;
    treePrint(node->left, level + 1);
    treePrint(node->right, level);
};
void printtree(GrammarTreeNode *head){
    static int cnt = 0;
    if(!head)
        return;
    cnt++;
    for (int i = 0;i<cnt-1;i++)
        cout << "|  ";
    cout << head->name << endl;
    printtree(head->left);
    cnt--;
    printtree(head->right);
}
int main(int argc, char* argv[]){
    if(argc>1){
        yyin=fopen(argv[1],"r");
    }else{
        yyin=stdin;
    }
    yyparse();
    printf("\n");
    treePrint(root,0);
	// printtree(root);
    
    treeNodeFree(root);

    fclose(yyin);

    return 0;
}

