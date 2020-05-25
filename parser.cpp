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
#define YYLAST   1618

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

#define YYPACT_NINF -271

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-271)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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
    -271,  -271,  -271,  -271,  -271,   -12,  -271,  -100,    78,    79,
       3,    84,   112,   157,   172,   156,   174,  -271,   -77,   -62,
    -271,   -73,  -123,   -10,     0,  -271,   339,  -271,     6,  -271,
    -271,   331,   -59,   -57,  -271,   137,  -271,   353,   -70,   239,
    -271,   -19,   -32,   -21,   -53,   -64,  -271,   153,  -271,    -6,
    -132,  -200,   -60,    66,  -270,  -271,   220,   -87,  -271,    -8,
    -271,   276,  -224,  -271,  -271,  -271,  -271,   381,  -271,  -271
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
#line 1910 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 79 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[0].gtn));}
#line 1916 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 80 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[0].gtn));}
#line 1922 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 81 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[0].gtn));}
#line 1928 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 82 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[0].gtn));}
#line 1934 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 83 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("primary_expression",1,(yyvsp[0].gtn));}
#line 1940 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 84 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("primary_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1946 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 88 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",1,(yyvsp[0].gtn));}
#line 1952 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 89 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1958 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 90 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1964 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 91 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1970 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 92 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1976 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 93 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1982 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 94 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1988 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 95 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 1994 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",6,(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2000 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("postfix_expression",7,(yyvsp[-6].gtn),(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2006 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 101 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("argument_expression_list",1,(yyvsp[0].gtn));}
#line 2012 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 102 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("argument_expression_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2018 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 106 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_expression",1,(yyvsp[0].gtn));}
#line 2024 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 107 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_expression",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2030 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 108 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_expression",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2036 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 109 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_expression",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2042 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 110 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_expression",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2048 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 111 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_expression",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2054 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 115 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[0].gtn));}
#line 2060 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 116 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[0].gtn));}
#line 2066 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 117 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[0].gtn));}
#line 2072 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 118 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[0].gtn));}
#line 2078 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 119 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[0].gtn));}
#line 2084 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 120 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("unary_operator",1,(yyvsp[0].gtn));}
#line 2090 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 124 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("cast_expression",1,(yyvsp[0].gtn));}
#line 2096 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 125 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("cast_expression",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2102 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 129 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("multiplicative_expression",1,(yyvsp[0].gtn));}
#line 2108 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 130 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("multiplicative_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2114 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 131 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("multiplicative_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2120 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 132 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("multiplicative_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2126 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 136 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("additive_expression",1,(yyvsp[0].gtn));}
#line 2132 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 137 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("additive_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2138 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 138 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("additive_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2144 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 142 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("shift_expression",1,(yyvsp[0].gtn));}
#line 2150 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 143 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("shift_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2156 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 144 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("shift_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2162 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 148 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("relational_expression",1,(yyvsp[0].gtn));}
#line 2168 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 149 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("relational_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2174 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 150 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("relational_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2180 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 151 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("relational_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2186 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("relational_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2192 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 156 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("equality_expression",1,(yyvsp[0].gtn));}
#line 2198 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 157 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("equality_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2204 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 158 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("equality_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2210 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 162 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("and_expression",1,(yyvsp[0].gtn));}
#line 2216 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 163 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("and_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2222 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("exclusive_or_expression",1,(yyvsp[0].gtn));}
#line 2228 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("exclusive_or_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2234 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("inclusive_or_expression",1,(yyvsp[0].gtn));}
#line 2240 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("inclusive_or_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2246 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("logical_and_expression",1,(yyvsp[0].gtn));}
#line 2252 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("logical_and_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2258 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("logical_or_expression",1,(yyvsp[0].gtn));}
#line 2264 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("logical_or_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2270 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("conditional_expression",1,(yyvsp[0].gtn));}
#line 2276 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 188 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("conditional_expression",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2282 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 192 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_expression",1,(yyvsp[0].gtn));}
#line 2288 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 193 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2294 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2300 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2306 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 199 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2312 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2318 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2324 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 202 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2330 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 203 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2336 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 204 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2342 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 205 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2348 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 206 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2354 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 207 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("assignment_operator",1,(yyvsp[0].gtn));}
#line 2360 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 211 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("expression",1,(yyvsp[0].gtn));}
#line 2366 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 212 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("expression",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2372 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 216 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("constant_expression",1,(yyvsp[0].gtn));}
#line 2378 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 220 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2384 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 221 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2390 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 225 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",1,(yyvsp[0].gtn));}
#line 2396 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 226 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2402 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 227 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",1,(yyvsp[0].gtn));}
#line 2408 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 228 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2414 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 229 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",1,(yyvsp[0].gtn));}
#line 2420 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 230 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2426 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 231 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",1,(yyvsp[0].gtn));}
#line 2432 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 232 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_specifiers",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2438 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 236 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("init_declarator_list",1,(yyvsp[0].gtn));}
#line 2444 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("init_declarator_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2450 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 241 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("init_declarator",1,(yyvsp[0].gtn));}
#line 2456 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 242 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("init_declarator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2462 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 246 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("storage_class_specifier",1,(yyvsp[0].gtn));}
#line 2468 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 247 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("storage_class_specifier",1,(yyvsp[0].gtn));}
#line 2474 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 248 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("storage_class_specifier",1,(yyvsp[0].gtn));}
#line 2480 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 249 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("storage_class_specifier",1,(yyvsp[0].gtn));}
#line 2486 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 254 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2492 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 255 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2498 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 256 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2504 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 257 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2510 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 258 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2516 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 259 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2522 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 260 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2528 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 261 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2534 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 262 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2540 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 263 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2546 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 266 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2552 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 267 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_specifier",1,(yyvsp[0].gtn));}
#line 2558 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 272 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_or_union_specifier",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2564 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 273 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_or_union_specifier",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2570 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 274 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_or_union_specifier",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2576 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 278 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_or_union",1,(yyvsp[0].gtn));}
#line 2582 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 279 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_or_union",1,(yyvsp[0].gtn));}
#line 2588 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 283 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator_list",1,(yyvsp[0].gtn));}
#line 2594 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 284 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2600 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 288 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declaration",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2606 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 292 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("specifier_qualifier_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2612 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 293 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("specifier_qualifier_list",1,(yyvsp[0].gtn));}
#line 2618 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 294 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("specifier_qualifier_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2624 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 295 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("specifier_qualifier_list",1,(yyvsp[0].gtn));}
#line 2630 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 299 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator_list",1,(yyvsp[0].gtn));}
#line 2636 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 300 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2642 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 304 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator",1,(yyvsp[0].gtn));}
#line 2648 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 305 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2654 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 306 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("struct_declarator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2660 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 310 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enum_specifier",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2666 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 311 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enum_specifier",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2672 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 312 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enum_specifier",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2678 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 313 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enum_specifier",6,(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2684 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 314 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enum_specifier",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2690 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 318 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enumerator_list",1,(yyvsp[0].gtn));}
#line 2696 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 319 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enumerator_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2702 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 323 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enumerator",1,(yyvsp[0].gtn));}
#line 2708 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 324 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("enumerator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2714 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 328 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_qualifier",1,(yyvsp[0].gtn));}
#line 2720 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 330 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_qualifier",1,(yyvsp[0].gtn));}
#line 2726 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 334 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("function_specifier",1,(yyvsp[0].gtn));}
#line 2732 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 338 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declarator",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2738 "parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 339 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declarator",1,(yyvsp[0].gtn));}
#line 2744 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 343 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",1,(yyvsp[0].gtn));}
#line 2750 "parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 344 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2756 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 345 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2762 "parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 346 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2768 "parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 347 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2774 "parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 348 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",6,(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2780 "parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 349 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",6,(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2786 "parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 350 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2792 "parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 351 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2798 "parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 352 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2804 "parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 353 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2810 "parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 354 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2816 "parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 355 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("direct_declarator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2822 "parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 359 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("pointer",1,(yyvsp[0].gtn));}
#line 2828 "parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 360 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("pointer",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2834 "parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 361 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("pointer",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2840 "parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 362 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("pointer",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2846 "parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 366 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_qualifier_list",1,(yyvsp[0].gtn));}
#line 2852 "parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 367 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_qualifier_list",2,(yyvsp[0].gtn));}
#line 2858 "parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 372 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_type_list",1,(yyvsp[0].gtn));}
#line 2864 "parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 373 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_type_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2870 "parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 377 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_list",1,(yyvsp[0].gtn));}
#line 2876 "parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 378 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2882 "parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 382 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_declaration",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2888 "parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 383 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_declaration",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2894 "parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 384 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("parameter_declaration",1,(yyvsp[0].gtn));}
#line 2900 "parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 388 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("identifier_list",1,(yyvsp[0].gtn));}
#line 2906 "parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 389 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("identifier_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2912 "parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 393 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_name",1,(yyvsp[0].gtn));}
#line 2918 "parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 394 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("type_name",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2924 "parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 398 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("abstract_declarator",1,(yyvsp[0].gtn));}
#line 2930 "parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 399 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("abstract_declarator",1,(yyvsp[0].gtn));}
#line 2936 "parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 400 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("abstract_declarator",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2942 "parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 418 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer",1,(yyvsp[0].gtn));}
#line 2948 "parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 419 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2954 "parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 420 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2960 "parser.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 424 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer_list",1,(yyvsp[0].gtn));}
#line 2966 "parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 425 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2972 "parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 426 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer_list",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2978 "parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 427 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("initializer_list",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2984 "parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 431 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("designation",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 2990 "parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 435 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("designator_list",1,(yyvsp[0].gtn));}
#line 2996 "parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 436 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("designator_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3002 "parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 440 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("designator",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3008 "parser.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 441 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("designator",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3014 "parser.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 445 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[0].gtn));}
#line 3020 "parser.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 446 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[0].gtn));}
#line 3026 "parser.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 447 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[0].gtn));}
#line 3032 "parser.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 448 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[0].gtn));}
#line 3038 "parser.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 449 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[0].gtn));}
#line 3044 "parser.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 450 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("statement",1,(yyvsp[0].gtn));}
#line 3050 "parser.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 454 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("labeled_statement",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3056 "parser.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 455 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("labeled_statement",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3062 "parser.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 456 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("labeled_statement",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3068 "parser.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 460 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("compound_statement",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3074 "parser.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 461 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("compound_statement",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3080 "parser.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 465 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("block_item_list",1,(yyvsp[0].gtn));}
#line 3086 "parser.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 466 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("block_item_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3092 "parser.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 470 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("block_item",1,(yyvsp[0].gtn));}
#line 3098 "parser.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 471 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("block_item",1,(yyvsp[0].gtn));}
#line 3104 "parser.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 475 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("expression_statement",1,(yyvsp[0].gtn));}
#line 3110 "parser.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 476 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("expression_statement",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3116 "parser.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 480 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("selection_statement",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3122 "parser.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 481 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("selection_statement",7,(yyvsp[-6].gtn),(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3128 "parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 482 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("selection_statement",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3134 "parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 486 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("iteration_statement",5,(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3140 "parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 487 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("iteration_statement",7,(yyvsp[-6].gtn),(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3146 "parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 488 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("iteration_statement",6,(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3152 "parser.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 489 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("iteration_statement",7,(yyvsp[-6].gtn),(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3158 "parser.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 490 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("iteration_statement",6,(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3164 "parser.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 491 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("iteration_statement",7,(yyvsp[-6].gtn),(yyvsp[-5].gtn),(yyvsp[-4].gtn),(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3170 "parser.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 495 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("jump_statement",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3176 "parser.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 496 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("jump_statement",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3182 "parser.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 497 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("jump_statement",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3188 "parser.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 498 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("jump_statement",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3194 "parser.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 499 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("jump_statement",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3200 "parser.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 503 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("translation_unit",1,(yyvsp[0].gtn));}
#line 3206 "parser.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 504 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("translation_unit",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3212 "parser.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 508 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("external_declaration",1,(yyvsp[0].gtn));}
#line 3218 "parser.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 509 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("external_declaration",1,(yyvsp[0].gtn));}
#line 3224 "parser.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 513 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("function_definition",4,(yyvsp[-3].gtn),(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3230 "parser.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 514 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("function_definition",3,(yyvsp[-2].gtn),(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3236 "parser.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 518 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_list",1,(yyvsp[0].gtn));}
#line 3242 "parser.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 519 "parser.y" /* yacc.c:1646  */
    {(yyval.gtn) = treeCreate("declaration_list",2,(yyvsp[-1].gtn),(yyvsp[0].gtn));}
#line 3248 "parser.cpp" /* yacc.c:1646  */
    break;


#line 3252 "parser.cpp" /* yacc.c:1646  */
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
