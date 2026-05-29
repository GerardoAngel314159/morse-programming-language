/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     ID = 258,
     INT_LIT = 259,
     FLOAT_LIT = 260,
     STRING_LIT = 261,
     KW_INT = 262,
     KW_FLOAT = 263,
     KW_IF = 264,
     KW_ELSE = 265,
     KW_WHILE = 266,
     KW_FUNC = 267,
     KW_RETURN = 268,
     KW_PRINT = 269,
     KW_INPUT = 270,
     ASSIGN = 271,
     PLUS = 272,
     MINUS = 273,
     STAR = 274,
     SLASH = 275,
     MOD = 276,
     EQ = 277,
     NEQ = 278,
     LT = 279,
     GT = 280,
     LBRACE = 281,
     RBRACE = 282,
     LPAREN = 283,
     RPAREN = 284,
     COMMA = 285,
     SEMI = 286
   };
#endif
/* Tokens.  */
#define ID 258
#define INT_LIT 259
#define FLOAT_LIT 260
#define STRING_LIT 261
#define KW_INT 262
#define KW_FLOAT 263
#define KW_IF 264
#define KW_ELSE 265
#define KW_WHILE 266
#define KW_FUNC 267
#define KW_RETURN 268
#define KW_PRINT 269
#define KW_INPUT 270
#define ASSIGN 271
#define PLUS 272
#define MINUS 273
#define STAR 274
#define SLASH 275
#define MOD 276
#define EQ 277
#define NEQ 278
#define LT 279
#define GT 280
#define LBRACE 281
#define RBRACE 282
#define LPAREN 283
#define RPAREN 284
#define COMMA 285
#define SEMI 286




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "parser.y"
{
    char* sval;
    Node* node;
}
/* Line 1529 of yacc.c.  */
#line 116 "parser.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

