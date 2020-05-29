/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <iostream>
#include <vector>
#include <string>
#include "grammartree.h"
#include <cstdio>
#include "func.h"

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


#line 90 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 68 "parser.y" /* yacc.c:355  */

    class GrammarTreeNode* gtn;

#line 260 "parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 277 "parser.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1663

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  398

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    79,    80,    81,    82,    83,    84,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   101,
     102,   106,   107,   108,   109,   110,   111,   115,   116,   117,
     118,   119,   120,   124,   125,   129,   130,   131,   132,   136,
     137,   138,   142,   143,   144,   148,   149,   150,   151,   152,
     156,   157,   158,   162,   163,   167,   168,   172,   173,   177,
     178,   182,   183,   187,   188,   192,   193,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   211,   212,
     216,   220,   221,   225,   226,   227,   228,   229,   230,   231,
     232,   236,   237,   241,   242,   246,   247,   248,   249,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   266,
     267,   272,   273,   274,   278,   279,   283,   284,   288,   292,
     293,   294,   295,   299,   300,   304,   305,   306,   310,   311,
     312,   313,   314,   318,   319,   323,   324,   328,   330,   334,
     338,   339,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   359,   360,   361,   362,   366,
     367,   372,   373,   377,   378,   382,   383,   384,   388,   389,
     393,   394,   398,   399,   400,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   418,   419,   420,   424,
     425,   426,   427,   431,   435,   436,   440,   441,   445,   446,
     447,   448,   449,   450,   454,   455,   456,   460,   461,   465,
     466,   470,   471,   475,   476,   480,   481,   482,   486,   487,
     488,   489,   490,   491,   495,   496,   497,   498,   499,   503,
     504,   508,   509,   513,   514,   518,   519
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -261

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-261)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1609,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,
    -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,   -24,
    -261,    33,  -261,   -17,  1609,  1609,  -261,   -16,  -261,  1609,
    1609,  1609,  -261,  -261,   -45,    61,  -261,  -261,  -261,     1,
      58,   150,  -261,   329,    80,    24,  -261,  -261,   -40,  1628,
    -261,  -261,  -261,    61,    62,    -9,  -261,  -261,  -261,     1,
      63,  -261,    58,   765,   422,  -261,   -17,  -261,   579,  1113,
     929,    80,  1628,  1628,   351,  -261,    48,  1628,    66,  1422,
     -38,  -261,  -261,  -261,  -261,  -261,    87,  1461,  -261,  -261,
    -261,  -261,  -261,  1472,  1472,  -261,  -261,  -261,  -261,  -261,
    -261,  1322,   726,  -261,    81,    38,  1422,  -261,   -15,   172,
     206,   106,   199,   109,   121,   125,   139,    18,  -261,  -261,
    -261,   149,  1372,   703,   127,   169,   193,   211,   181,   213,
    1422,   195,   215,  -261,  -261,  -261,   201,  -261,  -261,  -261,
    -261,   507,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,
    -261,    44,   205,   219,  -261,    76,   246,   217,  -261,   221,
     979,  1538,  -261,  -261,  -261,  1422,   230,  -261,   241,  -261,
     -32,  -261,  -261,  -261,  -261,  -261,  -261,  1322,  -261,  1322,
    -261,  -261,    86,   128,   225,   257,  1422,  -261,    70,   765,
     123,  -261,  -261,  -261,   258,   259,  1193,  1422,  -261,  -261,
    -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  1422,
    -261,  1422,  1422,  1422,  1422,  1422,  1422,  1422,  1422,  1422,
    1422,  1422,  1422,  1422,  1422,  1422,  1422,  1422,  1422,  1422,
     248,  -261,   232,   305,  1422,  1182,  -261,  -261,  1422,   703,
     249,  1422,   703,  -261,  1422,  -261,  -261,   860,  1002,  -261,
      21,  -261,   124,  -261,  1564,   267,  -261,  1361,  -261,  -261,
    1422,   235,  -261,   237,  -261,  -261,  -261,    48,  1422,  -261,
     243,   245,  -261,   896,   166,  -261,   788,  -261,   239,   580,
    -261,  -261,  -261,  -261,  -261,  -261,  -261,    93,  -261,    89,
    -261,  -261,  -261,  -261,   -15,   -15,   172,   172,   206,   206,
     206,   206,   106,   106,   199,   109,   121,   125,   139,   261,
    -261,  -261,   251,   105,  1411,  1411,   -11,  -261,   703,    98,
    -261,  -261,  -261,   247,   252,   253,  -261,   254,   124,  1149,
    1041,  -261,  -261,  -261,   255,   256,  -261,  -261,  -261,  -261,
     250,   250,   726,  -261,  -261,  -261,  -261,   765,  1422,  -261,
    -261,  1422,  1422,   703,  1232,  1255,   703,  -261,   703,  -261,
    -261,  -261,  -261,  -261,   260,   281,  -261,   282,  -261,  -261,
      85,  -261,  -261,  -261,   110,  -261,   703,   113,   703,   120,
    -261,   315,  -261,  -261,  -261,   619,  -261,   270,  -261,   703,
    -261,   703,   703,  -261,  -261,  -261,  -261,  -261
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -261,  -261,  -261,  -261,  -261,    14,  -261,   -96,    84,    88,
       3,    78,   -25,   112,   116,   117,   152,  -261,   -77,   -62,
    -261,   -85,  -123,   -30,     0,  -261,   319,  -261,    -6,  -261,
    -261,   310,   -59,   -56,  -261,   122,  -261,   330,   -71,   244,
    -261,   -18,   -39,   -27,   -52,   -65,  -261,   133,  -261,    10,
    -129,  -200,   -60,    46,  -260,  -261,   200,  -100,  -261,    -4,
    -261,   262,  -224,  -261,  -261,  -261,  -261,   360,  -261,  -261
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      23,   119,   173,   120,   152,    43,    71,   240,   159,   176,
     210,   315,    58,    65,    54,   164,   182,   162,   160,   347,
      54,   169,   251,   233,    46,    47,    10,    11,    34,    50,
      51,    23,    83,    36,   137,    37,    48,   232,   147,    67,
     119,    53,   265,    73,    86,   183,    72,    38,    86,   175,
     328,   222,   223,   173,   275,   269,    80,    39,   168,   211,
     212,   213,    35,   278,   148,    40,    73,    73,    73,   151,
      49,    73,   356,    37,   328,    39,    37,   228,    81,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   173,   207,
     354,   355,   182,   172,   182,    73,    37,   229,   263,   176,
      37,   178,   164,   247,   257,   248,    40,   180,   181,   173,
      37,   137,   289,    54,   165,   291,   292,   293,    39,   208,
     172,   183,    39,   183,   250,   347,   247,   119,   248,   281,
      40,   170,    39,   249,   288,   279,   192,   193,   194,   317,
      40,   255,   320,    79,   172,   339,    84,   290,   195,   313,
     385,   244,   309,   171,   244,    73,   274,   280,   348,   256,
     222,   223,    69,   196,    70,   197,   218,   219,    63,   272,
     244,    73,   386,    73,   350,   244,   349,   224,   244,   172,
     343,   358,   321,   220,   221,   244,   327,   270,   353,   271,
     185,   173,   225,   387,   226,   334,   389,   227,   335,   304,
     172,   230,    39,   391,   282,   314,   329,   186,   330,   234,
     273,    71,   248,   316,    61,    62,   319,   119,   357,   346,
     250,   298,   299,   300,   301,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   214,   215,   274,   151,   273,   168,
     248,   235,   172,   375,   151,   172,   380,   236,   381,   216,
     217,   222,   223,   238,   364,   243,   244,   374,   367,   377,
     379,    10,    11,   151,   373,   237,   388,   241,   390,   239,
     119,   242,   172,    57,   254,   119,   372,   371,   253,   395,
     172,   396,   397,    77,   266,   267,   311,   244,   294,   295,
     302,   303,   258,    82,   296,   297,   259,   268,   276,   277,
     284,   285,   310,   312,    57,   318,    77,    77,    77,   333,
     336,    77,   337,   119,   344,   346,   340,   351,   341,   151,
     359,   392,     1,   352,   394,   360,   342,   305,   361,   362,
     368,   369,   306,   382,   307,    77,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   172,   383,   384,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     308,    85,   161,    78,    18,    19,    20,   332,   370,   338,
     283,    52,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,     0,   246,    82,    77,     0,     0,     0,     0,
      63,     0,     0,     0,     0,    64,     0,     0,     0,     0,
       0,    77,     0,    77,     0,     1,    87,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   163,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    88,    89,
      90,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,     0,     0,    93,    94,     0,
       0,     0,     0,     0,     0,     0,   133,     0,     0,     0,
      95,     0,    96,     0,    97,    98,    99,     0,     0,     0,
       0,    82,   100,     0,   101,     0,     0,     0,    64,   134,
       1,    87,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    88,    89,    90,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
       0,     0,    93,    94,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,     0,    95,     0,    96,     0,    97,
      98,    99,     1,     0,    87,     0,     0,   100,     0,   101,
       0,     0,     0,    64,   245,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,    88,    89,    90,     0,
      91,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    92,     0,     0,    93,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   185,    95,     0,
      96,     0,    97,    98,    99,    88,    89,    90,     0,    91,
     100,     0,   101,     0,   186,    64,   102,   345,     0,     0,
       0,    92,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,    95,     0,    96,
       0,    97,    98,    99,     0,     0,     0,     0,     0,   100,
       0,   101,     0,   186,     0,   102,   393,    87,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,     0,     0,    93,    94,
       0,     0,    88,    89,    90,     0,    91,   133,     0,    87,
       0,    95,     0,    96,     0,    97,    98,    99,    92,     0,
       0,    93,    94,   100,     0,   101,     0,     0,     0,    64,
       0,     0,    87,   185,    95,     0,    96,     0,    97,    98,
      99,    88,    89,    90,     0,    91,   100,     0,   101,     0,
     186,     0,   102,     0,     0,     0,     0,    92,     0,     0,
      93,    94,     0,     0,    88,    89,    90,     0,    91,     0,
       0,     0,     0,    95,     0,    96,     0,    97,    98,    99,
      92,     0,     0,    93,    94,   100,     0,   101,     0,     0,
       0,   102,     0,     0,     0,     0,    95,     0,    96,     0,
      97,    98,    99,     1,     0,     0,     0,     0,   100,     0,
     101,     0,     0,     0,   342,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,    87,    39,     0,     0,     0,     0,     0,
       0,     0,   247,   322,   248,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,   156,     0,
       0,     0,     0,     0,     0,    88,    89,    90,     0,    91,
      39,     0,     0,     0,     0,     0,     0,     0,   273,   322,
     248,    92,     0,    87,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,     0,    96,
       0,    97,    98,   157,    10,    11,    87,     0,   260,   100,
       0,   101,     0,     0,   158,    88,    89,    90,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,     0,    93,    94,     0,     0,    88,    89,
      90,     0,    91,     0,     0,    87,     0,    95,     0,    96,
       0,    97,    98,   261,    92,     0,     0,    93,    94,   100,
       0,   101,     0,     0,   262,     0,     0,     0,     0,     0,
      95,     0,    96,     0,    97,    98,   325,    88,    89,    90,
       0,    91,   100,     0,   101,     0,     0,   326,     0,     0,
       0,     0,     0,    92,     0,     0,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
       0,    96,     0,    97,    98,   365,     1,     0,     0,     0,
       0,   100,     0,   101,     0,     0,   366,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   149,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     1,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   150,    87,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    88,    89,
      90,     0,    91,     0,     0,     0,     0,     0,     0,    88,
      89,    90,   363,    91,    92,     0,    87,    93,    94,     0,
       0,     0,     0,     0,     0,    92,   133,     0,    93,    94,
      95,     0,    96,     0,    97,    98,    99,     0,     0,    87,
       0,    95,   100,    96,   101,    97,    98,    99,    88,    89,
      90,     0,    91,   100,     0,   101,   286,     0,     0,     0,
       0,     0,     0,     0,    92,     0,     0,    93,    94,     0,
       0,    88,    89,    90,     0,    91,     0,     0,     0,     0,
      95,     0,    96,     0,    97,    98,    99,    92,     0,     0,
      93,    94,   100,     0,   101,   376,     0,     0,     0,     0,
       0,     0,     0,    95,     0,    96,    87,    97,    98,    99,
       0,     0,     0,     0,     0,   100,     0,   101,   378,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,    18,    19,    20,    88,    89,
      90,     0,    91,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     0,    87,    93,    94,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
      95,     0,    96,     0,    97,    98,    99,    88,    89,    90,
       0,    91,   100,     0,   101,     0,     0,     0,    88,    89,
      90,     0,    91,    92,     0,    87,    93,    94,     0,     0,
       0,     0,     0,     0,    92,     0,    87,    93,    94,    95,
       0,    96,     0,    97,    98,    99,   231,     0,     0,     0,
      95,   100,    96,   101,    97,    98,    99,    88,    89,    90,
       0,    91,   100,     0,   101,     0,     0,     0,    88,    89,
      90,     0,    91,    92,     0,    87,    93,    94,     0,     0,
       0,     0,     0,     0,    92,   133,    87,    93,    94,    95,
       0,    96,     0,    97,    98,    99,     0,     0,     0,     0,
      95,   100,    96,   101,    97,    98,    99,    88,    89,    90,
       0,    91,   100,     0,   101,     0,     0,     0,    88,    89,
      90,     0,    91,    92,     0,     0,    93,    94,     0,     0,
       0,     0,     0,     0,    92,     0,     0,    93,    94,    95,
       0,    96,     0,    97,    98,    99,     0,     0,     0,     0,
      95,   100,    96,   177,    97,    98,    99,     0,     0,     0,
       0,     0,   100,     0,   179,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     1,     0,     0,
       0,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,   331,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   264,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    63,    79,    63,    69,    23,    45,   130,    70,    80,
     106,   235,    39,    43,    52,    74,   101,    73,    70,   279,
      52,    77,   151,   123,    24,    25,    25,    26,    52,    29,
      30,    31,    59,     0,    64,    52,    52,   122,    68,    43,
     102,    86,   165,    49,    62,   101,    86,    64,    66,    87,
     250,    62,    63,   130,   183,    87,    65,    74,    76,    74,
      75,    76,    86,   186,    68,    82,    72,    73,    74,    69,
      86,    77,    83,    52,   274,    74,    52,    59,    87,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   165,    51,
     314,   315,   177,    79,   179,   101,    52,    79,   160,   170,
      52,    87,   161,    82,   156,    84,    82,    93,    94,   186,
      52,   141,   197,    52,    66,   211,   212,   213,    74,    81,
     106,   177,    74,   179,   151,   385,    82,   189,    84,   189,
      82,    65,    74,   151,   196,    65,    55,    56,    57,   239,
      82,    65,   242,    81,   130,   268,    83,   209,    67,   234,
      65,    65,   229,    87,    65,   161,   183,    87,    65,    83,
      62,    63,    82,    82,    84,    84,    60,    61,    81,    83,
      65,   177,    87,   179,    85,    65,    83,    68,    65,   165,
     276,    83,   244,    77,    78,    65,   248,   177,    83,   179,
      67,   268,    71,    83,    69,   257,    83,    58,   260,   224,
     186,    52,    74,    83,    81,   235,    82,    84,    84,    82,
      82,   250,    84,   238,    64,    65,   241,   279,   318,   279,
     247,   218,   219,   220,   221,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    72,    73,   273,   247,    82,   267,
      84,    82,   238,   353,   254,   241,   356,    64,   358,    53,
      54,    62,    63,    82,   329,    64,    65,   352,   330,   354,
     355,    25,    26,   273,   351,    64,   376,    82,   378,    66,
     342,    66,   268,    39,    65,   347,   348,   347,    83,   389,
     276,   391,   392,    49,    64,    65,    64,    65,   214,   215,
     222,   223,    85,    59,   216,   217,    85,    66,    83,    52,
      52,    52,    64,     8,    70,    66,    72,    73,    74,    52,
      85,    77,    85,   385,    85,   385,    83,    66,    83,   329,
      83,    16,     3,    82,    64,    83,    86,   225,    85,    85,
      85,    85,   226,    83,   227,   101,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   351,    85,    85,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
     228,    62,    72,    53,    33,    34,    35,   254,   342,   267,
     190,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    -1,    -1,   141,   160,   161,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,   177,    -1,   179,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    87,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      68,    -1,    70,    -1,    72,    73,    74,    -1,    -1,    -1,
      -1,   257,    80,    -1,    82,    -1,    -1,    -1,    86,    87,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    -1,    70,    -1,    72,
      73,    74,     3,    -1,     4,    -1,    -1,    80,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    36,    37,    38,    -1,
      40,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,
      70,    -1,    72,    73,    74,    36,    37,    38,    -1,    40,
      80,    -1,    82,    -1,    84,    86,    86,    87,    -1,    -1,
      -1,    52,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,
      -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    82,    -1,    84,    -1,    86,    87,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,
      -1,    -1,    36,    37,    38,    -1,    40,    64,    -1,     4,
      -1,    68,    -1,    70,    -1,    72,    73,    74,    52,    -1,
      -1,    55,    56,    80,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,     4,    67,    68,    -1,    70,    -1,    72,    73,
      74,    36,    37,    38,    -1,    40,    80,    -1,    82,    -1,
      84,    -1,    86,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    56,    -1,    -1,    36,    37,    38,    -1,    40,    -1,
      -1,    -1,    -1,    68,    -1,    70,    -1,    72,    73,    74,
      52,    -1,    -1,    55,    56,    80,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
      72,    73,    74,     3,    -1,    -1,    -1,    -1,    80,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,     4,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    -1,    40,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    52,    -1,     4,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,
      -1,    72,    73,    74,    25,    26,     4,    -1,    29,    80,
      -1,    82,    -1,    -1,    85,    36,    37,    38,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    56,    -1,    -1,    36,    37,
      38,    -1,    40,    -1,    -1,     4,    -1,    68,    -1,    70,
      -1,    72,    73,    74,    52,    -1,    -1,    55,    56,    80,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    70,    -1,    72,    73,    74,    36,    37,    38,
      -1,    40,    80,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    70,    -1,    72,    73,    74,     3,    -1,    -1,    -1,
      -1,    80,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,     4,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    83,    40,    52,    -1,     4,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    64,    -1,    55,    56,
      68,    -1,    70,    -1,    72,    73,    74,    -1,    -1,     4,
      -1,    68,    80,    70,    82,    72,    73,    74,    36,    37,
      38,    -1,    40,    80,    -1,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    -1,
      -1,    36,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,
      68,    -1,    70,    -1,    72,    73,    74,    52,    -1,    -1,
      55,    56,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,     4,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    -1,    40,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,     4,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      68,    -1,    70,    -1,    72,    73,    74,    36,    37,    38,
      -1,    40,    80,    -1,    82,    -1,    -1,    -1,    36,    37,
      38,    -1,    40,    52,    -1,     4,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,     4,    55,    56,    68,
      -1,    70,    -1,    72,    73,    74,    64,    -1,    -1,    -1,
      68,    80,    70,    82,    72,    73,    74,    36,    37,    38,
      -1,    40,    80,    -1,    82,    -1,    -1,    -1,    36,    37,
      38,    -1,    40,    52,    -1,     4,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    64,     4,    55,    56,    68,
      -1,    70,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
      68,    80,    70,    82,    72,    73,    74,    36,    37,    38,
      -1,    40,    80,    -1,    82,    -1,    -1,    -1,    36,    37,
      38,    -1,    40,    52,    -1,    -1,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    68,
      -1,    70,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
      68,    80,    70,    82,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    82,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     3,    -1,    -1,
      -1,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    33,    34,    35
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
      98,    98,    99,    99,   100,   101,   102,   103,   104,   106,
      64,    64,     8,   109,   111,   150,   100,   145,    66,   100,
     145,   107,    83,   133,   138,    74,    85,   107,   139,    82,
      84,    39,   135,    52,   107,   107,    85,    85,   123,   110,
      83,    83,    86,    95,    85,    87,   140,   142,    65,    83,
      85,    66,    82,    83,   150,   150,    83,   145,    83,    83,
      83,    85,    85,    83,   133,    74,    85,   107,    85,    85,
     141,   140,   107,   106,   109,   145,    83,   109,    83,   109,
     145,   145,    83,    85,    85,    65,    87,    83,   145,    83,
     145,    83,    16,    87,    64,   145,   145,   145
};

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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 75 "parser.y" /* yacc.c:1646  */
    { (yyval.gtn) = treeCreate("program",1,(yyvsp[0].gtn));root = (yyval.gtn);}
#line 1920 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 79 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[0].gtn));}
#line 1926 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 80 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[0].gtn));}
#line 1932 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 81 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[0].gtn));}
#line 1938 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 82 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[0].gtn));}
#line 1944 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 83 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[0].gtn));}
#line 1950 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 84 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("primary_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1956 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 88 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",1,(yyvsp[0].gtn));}
#line 1962 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 89 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1968 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 90 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1974 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 91 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1980 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 92 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1986 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 93 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1992 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 94 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1998 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 95 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2004 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",6,(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2010 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",7,(yyvsp[-6].gtn),(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2016 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 101 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("argument_expression_list",1,(yyvsp[0].gtn));}
#line 2022 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 102 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("argument_expression_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2028 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 106 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_expression",1,(yyvsp[0].gtn));}
#line 2034 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 107 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_expression",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2040 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 108 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_expression",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2046 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 109 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_expression",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2052 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 110 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_expression",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2058 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 111 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_expression",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2064 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 115 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[0].gtn));}
#line 2070 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 116 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[0].gtn));}
#line 2076 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 117 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[0].gtn));}
#line 2082 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 118 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[0].gtn));}
#line 2088 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 119 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[0].gtn));}
#line 2094 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 120 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[0].gtn));}
#line 2100 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 124 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("cast_expression",1,(yyvsp[0].gtn));}
#line 2106 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 125 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("cast_expression",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2112 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 129 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("multiplicative_expression",1,(yyvsp[0].gtn));}
#line 2118 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 130 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("multiplicative_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2124 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 131 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("multiplicative_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2130 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 132 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("multiplicative_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2136 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 136 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("additive_expression",1,(yyvsp[0].gtn));}
#line 2142 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 137 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("additive_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2148 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 138 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("additive_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2154 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 142 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("shift_expression",1,(yyvsp[0].gtn));}
#line 2160 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 143 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("shift_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2166 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 144 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("shift_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2172 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 148 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("relational_expression",1,(yyvsp[0].gtn));}
#line 2178 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 149 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("relational_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2184 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 150 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("relational_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2190 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 151 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("relational_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2196 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("relational_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2202 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 156 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("equality_expression",1,(yyvsp[0].gtn));}
#line 2208 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 157 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("equality_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2214 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 158 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("equality_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2220 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 162 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("and_expression",1,(yyvsp[0].gtn));}
#line 2226 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 163 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("and_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2232 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("exclusive_or_expression",1,(yyvsp[0].gtn));}
#line 2238 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("exclusive_or_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2244 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("inclusive_or_expression",1,(yyvsp[0].gtn));}
#line 2250 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("inclusive_or_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2256 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("logical_and_expression",1,(yyvsp[0].gtn));}
#line 2262 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("logical_and_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2268 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("logical_or_expression",1,(yyvsp[0].gtn));}
#line 2274 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("logical_or_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2280 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("conditional_expression",1,(yyvsp[0].gtn));}
#line 2286 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 188 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("conditional_expression",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2292 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 192 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_expression",1,(yyvsp[0].gtn));}
#line 2298 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 193 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2304 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2310 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2316 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 199 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2322 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2328 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2334 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 202 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2340 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 203 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2346 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 204 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2352 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 205 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2358 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 206 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2364 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 207 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2370 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 211 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("expression",1,(yyvsp[0].gtn));}
#line 2376 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 212 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2382 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 216 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("constant_expression",1,(yyvsp[0].gtn));}
#line 2388 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 220 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2394 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 221 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2400 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 225 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",1,(yyvsp[0].gtn));}
#line 2406 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 226 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2412 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 227 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",1,(yyvsp[0].gtn));}
#line 2418 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 228 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2424 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 229 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",1,(yyvsp[0].gtn));}
#line 2430 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 230 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2436 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 231 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",1,(yyvsp[0].gtn));}
#line 2442 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 232 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2448 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 236 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("init_declarator_list",1,(yyvsp[0].gtn));}
#line 2454 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("init_declarator_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2460 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 241 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("init_declarator",1,(yyvsp[0].gtn));}
#line 2466 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 242 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("init_declarator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2472 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 246 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("storage_class_specifier",1,(yyvsp[0].gtn));}
#line 2478 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 247 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("storage_class_specifier",1,(yyvsp[0].gtn));}
#line 2484 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 248 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("storage_class_specifier",1,(yyvsp[0].gtn));}
#line 2490 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 249 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("storage_class_specifier",1,(yyvsp[0].gtn));}
#line 2496 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 254 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2502 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 255 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2508 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 256 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2514 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 257 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2520 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 258 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2526 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 259 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2532 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 260 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2538 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 261 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2544 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 262 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2550 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 263 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2556 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 266 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2562 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 267 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2568 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 272 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_or_union_specifier",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2574 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 273 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_or_union_specifier",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2580 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 274 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_or_union_specifier",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2586 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 278 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_or_union",1,(yyvsp[0].gtn));}
#line 2592 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 279 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_or_union",1,(yyvsp[0].gtn));}
#line 2598 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 283 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator_list",1,(yyvsp[0].gtn));}
#line 2604 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 284 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2610 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 288 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declaration",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2616 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 292 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("specifier_qualifier_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2622 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 293 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("specifier_qualifier_list",1,(yyvsp[0].gtn));}
#line 2628 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 294 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("specifier_qualifier_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2634 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 295 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("specifier_qualifier_list",1,(yyvsp[0].gtn));}
#line 2640 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 299 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator_list",1,(yyvsp[0].gtn));}
#line 2646 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 300 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2652 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 304 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator",1,(yyvsp[0].gtn));}
#line 2658 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 305 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2664 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 306 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2670 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 310 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enum_specifier",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2676 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 311 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enum_specifier",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2682 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 312 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enum_specifier",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2688 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 313 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enum_specifier",6,(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2694 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 314 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enum_specifier",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2700 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 318 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enumerator_list",1,(yyvsp[0].gtn));}
#line 2706 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 319 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enumerator_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2712 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 323 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enumerator",1,(yyvsp[0].gtn));}
#line 2718 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 324 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enumerator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2724 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 328 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_qualifier",1,(yyvsp[0].gtn));}
#line 2730 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 330 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_qualifier",1,(yyvsp[0].gtn));}
#line 2736 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 334 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("function_specifier",1,(yyvsp[0].gtn));}
#line 2742 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 338 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declarator",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2748 "parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 339 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declarator",1,(yyvsp[0].gtn));}
#line 2754 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 343 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",1,(yyvsp[0].gtn));}
#line 2760 "parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 344 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2766 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 345 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2772 "parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 346 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2778 "parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 347 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2784 "parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 348 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",6,(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2790 "parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 349 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",6,(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2796 "parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 350 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2802 "parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 351 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2808 "parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 352 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2814 "parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 353 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2820 "parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 354 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2826 "parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 355 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2832 "parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 359 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("pointer",1,(yyvsp[0].gtn));}
#line 2838 "parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 360 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("pointer",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2844 "parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 361 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("pointer",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2850 "parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 362 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("pointer",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2856 "parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 366 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_qualifier_list",1,(yyvsp[0].gtn));}
#line 2862 "parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 367 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_qualifier_list",2,(yyvsp[0].gtn));}
#line 2868 "parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 372 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_type_list",1,(yyvsp[0].gtn));}
#line 2874 "parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 373 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_type_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2880 "parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 377 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_list",1,(yyvsp[0].gtn));}
#line 2886 "parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 378 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2892 "parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 382 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_declaration",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2898 "parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 383 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_declaration",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2904 "parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 384 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_declaration",1,(yyvsp[0].gtn));}
#line 2910 "parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 388 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("identifier_list",1,(yyvsp[0].gtn));}
#line 2916 "parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 389 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("identifier_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2922 "parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 393 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_name",1,(yyvsp[0].gtn));}
#line 2928 "parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 394 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_name",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2934 "parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 398 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("abstract_declarator",1,(yyvsp[0].gtn));}
#line 2940 "parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 399 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("abstract_declarator",1,(yyvsp[0].gtn));}
#line 2946 "parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 400 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("abstract_declarator",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2952 "parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 418 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer",1,(yyvsp[0].gtn));}
#line 2958 "parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 419 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2964 "parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 420 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2970 "parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 424 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer_list",1,(yyvsp[0].gtn));}
#line 2976 "parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 425 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2982 "parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 426 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2988 "parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 427 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer_list",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2994 "parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 431 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("designation",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3000 "parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 435 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("designator_list",1,(yyvsp[0].gtn));}
#line 3006 "parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 436 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("designator_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3012 "parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 440 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("designator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3018 "parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 441 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("designator",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3024 "parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 445 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[0].gtn));}
#line 3030 "parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 446 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[0].gtn));}
#line 3036 "parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 447 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[0].gtn));}
#line 3042 "parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 448 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[0].gtn));}
#line 3048 "parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 449 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[0].gtn));}
#line 3054 "parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 450 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[0].gtn));}
#line 3060 "parser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 454 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("labeled_statement",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3066 "parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 455 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("labeled_statement",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3072 "parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 456 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("labeled_statement",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3078 "parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 460 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("compound_statement",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3084 "parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 461 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("compound_statement",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3090 "parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 465 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("block_item_list",1,(yyvsp[0].gtn));}
#line 3096 "parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 466 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("block_item_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3102 "parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 470 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("block_item",1,(yyvsp[0].gtn));}
#line 3108 "parser.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 471 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("block_item",1,(yyvsp[0].gtn));}
#line 3114 "parser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 475 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("expression_statement",1,(yyvsp[0].gtn));}
#line 3120 "parser.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 476 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("expression_statement",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3126 "parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 480 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("selection_statement",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3132 "parser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 481 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("selection_statement",7,(yyvsp[-6].gtn),(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3138 "parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 482 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("selection_statement",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3144 "parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 486 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("iteration_statement",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3150 "parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 487 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("iteration_statement",7,(yyvsp[-6].gtn),(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3156 "parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 488 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("iteration_statement",6,(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3162 "parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 489 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("iteration_statement",7,(yyvsp[-6].gtn),(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3168 "parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 490 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("iteration_statement",6,(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3174 "parser.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 491 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("iteration_statement",7,(yyvsp[-6].gtn),(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3180 "parser.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 495 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("jump_statement",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3186 "parser.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 496 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("jump_statement",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3192 "parser.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 497 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("jump_statement",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3198 "parser.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 498 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("jump_statement",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3204 "parser.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 499 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("jump_statement",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3210 "parser.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 503 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("translation_unit",1,(yyvsp[0].gtn));}
#line 3216 "parser.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 504 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("translation_unit",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3222 "parser.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 508 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("external_declaration",1,(yyvsp[0].gtn));}
#line 3228 "parser.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 509 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("external_declaration",1,(yyvsp[0].gtn));}
#line 3234 "parser.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 513 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("function_definition",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3240 "parser.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 514 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("function_definition",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3246 "parser.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 518 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_list",1,(yyvsp[0].gtn));}
#line 3252 "parser.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 519 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3258 "parser.cpp" /* yacc.c:1646  */
    break;


#line 3262 "parser.cpp" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 523 "parser.y" /* yacc.c:1906  */


void yyerror(char const *s){
	fflush(stdout);
	printf("\n%*s\n%*s\n", col, "^", col, s);
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
    
	gen(root,argv[1]);


    // treeNodeFree(root);

    fclose(yyin);

    return 0;
}
