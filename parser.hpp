/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1685 of yacc.c  */
#line 67 "parser.y"

    class GrammarTreeNode* gtn;



/* Line 1685 of yacc.c  */
#line 183 "parser.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


