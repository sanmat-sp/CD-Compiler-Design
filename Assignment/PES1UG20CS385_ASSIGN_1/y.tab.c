/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

	#include "sym_tab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define YYSTYPE char*
	int type=-1;	//initial declaration of type for symbol table
	char* vval="~";	//initial declaration of value for symbol table
	int vtype=-1;	//initial declaration for type checking for symbol table
	int scope=0;	//initial declaration for scope
	int err=0;	//Initial declaration for error
	void yyerror(char* s); // error handling function
	int yylex(); // declare the function performing lexical analysis
	int arraysize=1; //initial size of array
	extern int yylineno; // track the line number
	extern char* yytext; // track the token 


#line 90 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_INT = 258,                   /* T_INT  */
    T_CHAR = 259,                  /* T_CHAR  */
    T_DOUBLE = 260,                /* T_DOUBLE  */
    T_WHILE = 261,                 /* T_WHILE  */
    T_INC = 262,                   /* T_INC  */
    T_DEC = 263,                   /* T_DEC  */
    T_OROR = 264,                  /* T_OROR  */
    T_ANDAND = 265,                /* T_ANDAND  */
    T_EQCOMP = 266,                /* T_EQCOMP  */
    T_NOTEQUAL = 267,              /* T_NOTEQUAL  */
    T_GREATEREQ = 268,             /* T_GREATEREQ  */
    T_LESSEREQ = 269,              /* T_LESSEREQ  */
    T_LEFTSHIFT = 270,             /* T_LEFTSHIFT  */
    T_RIGHTSHIFT = 271,            /* T_RIGHTSHIFT  */
    T_PRINTLN = 272,               /* T_PRINTLN  */
    T_STRING = 273,                /* T_STRING  */
    T_FLOAT = 274,                 /* T_FLOAT  */
    T_BOOLEAN = 275,               /* T_BOOLEAN  */
    T_IF = 276,                    /* T_IF  */
    T_ELSE = 277,                  /* T_ELSE  */
    T_STRLITERAL = 278,            /* T_STRLITERAL  */
    T_DO = 279,                    /* T_DO  */
    T_INCLUDE = 280,               /* T_INCLUDE  */
    T_HEADER = 281,                /* T_HEADER  */
    T_MAIN = 282,                  /* T_MAIN  */
    T_ID = 283,                    /* T_ID  */
    T_NUM = 284,                   /* T_NUM  */
    T_FOR = 285,                   /* T_FOR  */
    T_OR = 286,                    /* T_OR  */
    T_AND = 287,                   /* T_AND  */
    T_INCR = 288,                  /* T_INCR  */
    T_DECR = 289,                  /* T_DECR  */
    T_IFX = 290                    /* T_IFX  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_INT 258
#define T_CHAR 259
#define T_DOUBLE 260
#define T_WHILE 261
#define T_INC 262
#define T_DEC 263
#define T_OROR 264
#define T_ANDAND 265
#define T_EQCOMP 266
#define T_NOTEQUAL 267
#define T_GREATEREQ 268
#define T_LESSEREQ 269
#define T_LEFTSHIFT 270
#define T_RIGHTSHIFT 271
#define T_PRINTLN 272
#define T_STRING 273
#define T_FLOAT 274
#define T_BOOLEAN 275
#define T_IF 276
#define T_ELSE 277
#define T_STRLITERAL 278
#define T_DO 279
#define T_INCLUDE 280
#define T_HEADER 281
#define T_MAIN 282
#define T_ID 283
#define T_NUM 284
#define T_FOR 285
#define T_OR 286
#define T_AND 287
#define T_INCR 288
#define T_DECR 289
#define T_IFX 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INT = 3,                      /* T_INT  */
  YYSYMBOL_T_CHAR = 4,                     /* T_CHAR  */
  YYSYMBOL_T_DOUBLE = 5,                   /* T_DOUBLE  */
  YYSYMBOL_T_WHILE = 6,                    /* T_WHILE  */
  YYSYMBOL_T_INC = 7,                      /* T_INC  */
  YYSYMBOL_T_DEC = 8,                      /* T_DEC  */
  YYSYMBOL_T_OROR = 9,                     /* T_OROR  */
  YYSYMBOL_T_ANDAND = 10,                  /* T_ANDAND  */
  YYSYMBOL_T_EQCOMP = 11,                  /* T_EQCOMP  */
  YYSYMBOL_T_NOTEQUAL = 12,                /* T_NOTEQUAL  */
  YYSYMBOL_T_GREATEREQ = 13,               /* T_GREATEREQ  */
  YYSYMBOL_T_LESSEREQ = 14,                /* T_LESSEREQ  */
  YYSYMBOL_T_LEFTSHIFT = 15,               /* T_LEFTSHIFT  */
  YYSYMBOL_T_RIGHTSHIFT = 16,              /* T_RIGHTSHIFT  */
  YYSYMBOL_T_PRINTLN = 17,                 /* T_PRINTLN  */
  YYSYMBOL_T_STRING = 18,                  /* T_STRING  */
  YYSYMBOL_T_FLOAT = 19,                   /* T_FLOAT  */
  YYSYMBOL_T_BOOLEAN = 20,                 /* T_BOOLEAN  */
  YYSYMBOL_T_IF = 21,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 22,                    /* T_ELSE  */
  YYSYMBOL_T_STRLITERAL = 23,              /* T_STRLITERAL  */
  YYSYMBOL_T_DO = 24,                      /* T_DO  */
  YYSYMBOL_T_INCLUDE = 25,                 /* T_INCLUDE  */
  YYSYMBOL_T_HEADER = 26,                  /* T_HEADER  */
  YYSYMBOL_T_MAIN = 27,                    /* T_MAIN  */
  YYSYMBOL_T_ID = 28,                      /* T_ID  */
  YYSYMBOL_T_NUM = 29,                     /* T_NUM  */
  YYSYMBOL_T_FOR = 30,                     /* T_FOR  */
  YYSYMBOL_T_OR = 31,                      /* T_OR  */
  YYSYMBOL_T_AND = 32,                     /* T_AND  */
  YYSYMBOL_T_INCR = 33,                    /* T_INCR  */
  YYSYMBOL_T_DECR = 34,                    /* T_DECR  */
  YYSYMBOL_35_ = 35,                       /* '<'  */
  YYSYMBOL_36_ = 36,                       /* '>'  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* '('  */
  YYSYMBOL_39_ = 39,                       /* ')'  */
  YYSYMBOL_40_ = 40,                       /* '{'  */
  YYSYMBOL_41_ = 41,                       /* '}'  */
  YYSYMBOL_42_ = 42,                       /* '['  */
  YYSYMBOL_43_ = 43,                       /* ']'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* '='  */
  YYSYMBOL_46_ = 46,                       /* '+'  */
  YYSYMBOL_47_ = 47,                       /* '-'  */
  YYSYMBOL_48_ = 48,                       /* '*'  */
  YYSYMBOL_49_ = 49,                       /* '/'  */
  YYSYMBOL_50_ = 50,                       /* '!'  */
  YYSYMBOL_T_IFX = 51,                     /* T_IFX  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_START = 53,                     /* START  */
  YYSYMBOL_PROG = 54,                      /* PROG  */
  YYSYMBOL_55_1 = 55,                      /* $@1  */
  YYSYMBOL_FOR = 56,                       /* FOR  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_DEC_ASGN = 58,                  /* DEC_ASGN  */
  YYSYMBOL_59_3 = 59,                      /* $@3  */
  YYSYMBOL_DECLR = 60,                     /* DECLR  */
  YYSYMBOL_ARRAY = 61,                     /* ARRAY  */
  YYSYMBOL_BRACKET = 62,                   /* BRACKET  */
  YYSYMBOL_BRACK_VAR = 63,                 /* BRACK_VAR  */
  YYSYMBOL_LISTVAR = 64,                   /* LISTVAR  */
  YYSYMBOL_VAR = 65,                       /* VAR  */
  YYSYMBOL_TYPE = 66,                      /* TYPE  */
  YYSYMBOL_ASSGN = 67,                     /* ASSGN  */
  YYSYMBOL_68_4 = 68,                      /* $@4  */
  YYSYMBOL_EXPR = 69,                      /* EXPR  */
  YYSYMBOL_E = 70,                         /* E  */
  YYSYMBOL_T = 71,                         /* T  */
  YYSYMBOL_F = 72,                         /* F  */
  YYSYMBOL_REL_OP = 73,                    /* REL_OP  */
  YYSYMBOL_LOGICAL_OP = 74,                /* LOGICAL_OP  */
  YYSYMBOL_UNARY_OP = 75,                  /* UNARY_OP  */
  YYSYMBOL_UN_OP = 76,                     /* UN_OP  */
  YYSYMBOL_MAIN = 77,                      /* MAIN  */
  YYSYMBOL_78_5 = 78,                      /* $@5  */
  YYSYMBOL_EMPTY_LISTVAR = 79,             /* EMPTY_LISTVAR  */
  YYSYMBOL_STMT = 80,                      /* STMT  */
  YYSYMBOL_81_6 = 81,                      /* $@6  */
  YYSYMBOL_STMT_NO_BLOCK = 82,             /* STMT_NO_BLOCK  */
  YYSYMBOL_83_7 = 83,                      /* $@7  */
  YYSYMBOL_84_8 = 84,                      /* $@8  */
  YYSYMBOL_85_9 = 85,                      /* $@9  */
  YYSYMBOL_DO = 86,                        /* DO  */
  YYSYMBOL_BLOCK = 87,                     /* BLOCK  */
  YYSYMBOL_88_10 = 88,                     /* $@10  */
  YYSYMBOL_COND = 89,                      /* COND  */
  YYSYMBOL_WHILE = 90,                     /* WHILE  */
  YYSYMBOL_WHILE_2 = 91,                   /* WHILE_2  */
  YYSYMBOL_92_11 = 92                      /* $@11  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   468

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,     2,     2,     2,     2,     2,
      38,    39,    48,    46,    44,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
      35,    45,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    27,    27,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    40,    42,    45,    45,    46,    46,    48,    49,
      51,    65,    66,    70,    71,    74,    75,    78,    92,   104,
     105,   106,   107,   111,   111,   121,   125,   126,   127,   128,
     129,   133,   145,   157,   161,   173,   185,   188,   189,   215,
     224,   235,   236,   237,   238,   239,   240,   243,   244,   245,
     248,   249,   252,   253,   254,   255,   256,   259,   259,   263,
     264,   270,   271,   271,   272,   273,   274,   275,   276,   282,
     283,   284,   284,   285,   285,   285,   286,   289,   291,   291,
     295,   296,   300,   304,   305,   309,   309,   310
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_INT", "T_CHAR",
  "T_DOUBLE", "T_WHILE", "T_INC", "T_DEC", "T_OROR", "T_ANDAND",
  "T_EQCOMP", "T_NOTEQUAL", "T_GREATEREQ", "T_LESSEREQ", "T_LEFTSHIFT",
  "T_RIGHTSHIFT", "T_PRINTLN", "T_STRING", "T_FLOAT", "T_BOOLEAN", "T_IF",
  "T_ELSE", "T_STRLITERAL", "T_DO", "T_INCLUDE", "T_HEADER", "T_MAIN",
  "T_ID", "T_NUM", "T_FOR", "T_OR", "T_AND", "T_INCR", "T_DECR", "'<'",
  "'>'", "';'", "'('", "')'", "'{'", "'}'", "'['", "']'", "','", "'='",
  "'+'", "'-'", "'*'", "'/'", "'!'", "T_IFX", "$accept", "START", "PROG",
  "$@1", "FOR", "$@2", "DEC_ASGN", "$@3", "DECLR", "ARRAY", "BRACKET",
  "BRACK_VAR", "LISTVAR", "VAR", "TYPE", "ASSGN", "$@4", "EXPR", "E", "T",
  "F", "REL_OP", "LOGICAL_OP", "UNARY_OP", "UN_OP", "MAIN", "$@5",
  "EMPTY_LISTVAR", "STMT", "$@6", "STMT_NO_BLOCK", "$@7", "$@8", "$@9",
  "DO", "BLOCK", "$@10", "COND", "WHILE", "WHILE_2", "$@11", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-105)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-34)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     239,  -105,  -105,  -105,  -105,  -105,  -105,   -31,   -15,    20,
    -105,     4,  -105,  -105,   237,  -105,  -105,  -105,    24,  -105,
     191,    11,     8,    13,    -9,    17,   344,   -12,   -11,  -105,
     -22,   191,   191,    19,  -105,    38,    34,    18,    16,    22,
    -105,  -105,   354,  -105,  -105,   191,    42,   191,    39,   -19,
    -105,    35,  -105,   191,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,   191,  -105,   -22,   -22,  -105,  -105,   -22,   -22,
    -105,   -22,   -22,    27,  -105,  -105,   191,   314,    45,  -105,
      49,    50,   237,   237,    57,  -105,  -105,    51,    35,  -105,
      42,    66,   237,  -105,    42,  -105,  -105,    27,    27,   -11,
     -11,  -105,  -105,  -105,   418,   275,    62,    64,    75,    67,
     360,    65,   314,  -105,  -105,  -105,   418,   191,    63,   400,
     400,    80,    35,    70,    68,   400,  -105,  -105,   400,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,   314,    71,  -105,
    -105,   152,    72,    74,   314,   314,  -105,    -8,   237,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,   387,   314,    91,   314,
     237,    78,   314,    79,   394,  -105,  -105,  -105,    81,  -105,
     314,    87,  -105
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    11,    29,    32,    31,    30,    50,     0,     0,    48,
      49,     0,    62,    63,     0,    65,    64,    66,     0,     2,
       0,     0,     0,     0,     0,     0,     0,    37,    43,    46,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
      16,    48,     0,     1,     8,     0,     0,     0,     0,    22,
      19,    18,    26,     0,    55,    56,    52,    51,    58,    57,
      53,    54,     0,    59,     0,     0,    60,    61,     0,     0,
      39,     0,     0,    40,     4,     9,     0,    78,     0,    87,
       0,     0,     0,     0,     0,    47,     7,    28,    17,     5,
      70,     0,     0,    20,     0,     6,    10,    36,    38,    41,
      42,    44,    45,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    75,    72,    86,     0,     0,    24,    35,
      34,     0,    69,     0,     0,    27,    25,    91,    90,    81,
      74,    77,    79,    80,    76,    89,    71,    78,     0,     3,
      23,     0,     0,    22,    78,    78,    73,     0,     0,    67,
      21,    82,    84,    97,    95,    92,     0,    78,     0,    78,
       0,     0,    78,     0,     0,    68,    85,    96,     0,    14,
      78,     0,    15
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,   -17,  -105,    10,  -105,   -30,  -105,    14,  -105,
     -10,    23,   -41,    44,   -20,   -73,  -105,   -14,   -13,     7,
       9,    -6,  -105,  -105,  -105,  -105,  -105,  -105,  -104,  -105,
    -105,  -105,  -105,  -105,    41,   129,  -105,    28,   114,  -105,
    -105
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    18,    19,    33,    20,   170,    21,    22,    23,    50,
      93,    38,    51,    52,    24,    25,    39,    26,    27,    28,
      29,    64,    65,    70,    30,    31,   157,   123,   111,   137,
     112,   144,   145,   158,    32,   114,    77,   129,   115,   155,
     159
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,     6,    46,    44,   109,    88,    41,    10,   136,    34,
      84,     2,     3,     4,    74,    75,    14,    73,    48,    49,
      36,    66,    67,    91,    43,   -28,    92,     5,    86,   153,
      89,   127,   154,   146,    68,    69,    95,    71,    72,   109,
     151,   152,    40,   127,    78,    96,    81,   106,    45,   122,
      47,    97,    98,   161,    53,   163,    76,   108,   166,   103,
      80,    82,    37,   110,   109,   -33,   171,    83,   119,   120,
      87,   109,   109,    68,    69,    99,   100,    90,   125,    94,
     101,   102,   106,   116,   109,   117,   109,   105,   130,   109,
     128,   107,   108,   118,   121,   124,    92,   109,   110,   131,
     139,   132,   128,    49,   133,    37,   135,   106,   141,   142,
     147,   143,   149,   162,   106,   106,    91,   108,   113,   165,
     167,   169,   105,   110,   108,   108,   107,   106,   172,   106,
     110,   110,   106,   150,   156,   148,    35,   108,   126,   108,
     106,   140,   108,   110,   138,   110,   164,   105,   110,    79,
     108,   107,     0,   113,   105,   105,   110,     0,   107,   107,
       0,     0,     0,    54,    55,    56,    57,   105,     0,   105,
       0,   107,   105,   107,     0,     0,   107,     0,   113,     0,
     105,     0,     0,     0,   107,   113,   113,    60,    61,     0,
       0,   -13,     1,     0,     2,     3,     4,   -13,   113,     0,
     113,     0,     0,   113,     0,     0,     0,     0,     0,     0,
       5,   113,   -13,   -13,     6,     7,     8,     0,     0,     9,
      10,    11,     0,     0,    12,    13,     0,     0,     0,    14,
       0,   -13,   -13,     0,     0,     0,     0,    15,    16,   -13,
       1,    17,     2,     3,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     0,
       6,     0,     6,     7,     8,    41,    10,     9,    10,    11,
      12,    13,    12,    13,     0,    14,     1,    14,     2,     3,
       4,   -13,     0,    15,    16,    15,    16,    17,     0,    17,
       0,     0,     0,     0,     5,     0,   -13,   -13,     6,     7,
       8,     0,     0,     9,    10,    11,     0,     0,    12,    13,
       0,     0,     0,    14,     0,   -13,   -13,     2,     3,     4,
      78,    15,    16,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     5,     0,   104,     0,     6,     7,     0,
       0,     0,     9,    10,    11,     0,     0,    12,    13,     0,
       0,     0,    14,     0,    34,    54,    55,    56,    57,     0,
      15,    16,     0,     0,    17,    54,    55,    56,    57,     0,
       0,    54,    55,    56,    57,    58,    59,     0,     0,    60,
      61,    62,     0,     0,     0,    58,    59,     0,     0,    60,
      61,    58,    59,    85,    63,    60,    61,   134,    54,    55,
      56,    57,     0,     0,    63,    54,    55,    56,    57,     0,
      63,    54,    55,    56,    57,     0,     0,     0,    58,    59,
       0,     0,    60,    61,   160,    58,    59,     0,     0,    60,
      61,    58,    59,   168,     0,    60,    61,    63,     0,     0,
       0,     6,     0,     0,    63,     0,     9,    10,     0,     0,
      63,    12,    13,     0,     0,     0,    14,     0,     0,     0,
       0,     0,     0,     0,    15,    16,     0,     0,    17
};

static const yytype_int16 yycheck[] =
{
      14,    23,    22,    20,    77,    46,    28,    29,   112,    40,
      40,     3,     4,     5,    31,    32,    38,    30,    27,    28,
      35,    33,    34,    42,     0,    44,    45,    19,    45,    37,
      47,   104,    40,   137,    46,    47,    53,    48,    49,   112,
     144,   145,    38,   116,     6,    62,    28,    77,    37,    90,
      37,    64,    65,   157,    37,   159,    37,    77,   162,    76,
      26,    45,    42,    77,   137,    45,   170,    45,    82,    83,
      28,   144,   145,    46,    47,    68,    69,    38,    92,    44,
      71,    72,   112,    38,   157,    36,   159,    77,   105,   162,
     104,    77,   112,    43,    37,    29,    45,   170,   112,    37,
     117,    37,   116,    28,    37,    42,    41,   137,    28,    39,
      39,    43,    40,    22,   144,   145,    42,   137,    77,    41,
      41,    40,   112,   137,   144,   145,   112,   157,    41,   159,
     144,   145,   162,   143,   148,   141,     7,   157,    94,   159,
     170,   118,   162,   157,   116,   159,   160,   137,   162,    35,
     170,   137,    -1,   112,   144,   145,   170,    -1,   144,   145,
      -1,    -1,    -1,    11,    12,    13,    14,   157,    -1,   159,
      -1,   157,   162,   159,    -1,    -1,   162,    -1,   137,    -1,
     170,    -1,    -1,    -1,   170,   144,   145,    35,    36,    -1,
      -1,     0,     1,    -1,     3,     4,     5,     6,   157,    -1,
     159,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      19,   170,    21,    22,    23,    24,    25,    -1,    -1,    28,
      29,    30,    -1,    -1,    33,    34,    -1,    -1,    -1,    38,
      -1,    40,    41,    -1,    -1,    -1,    -1,    46,    47,     0,
       1,    50,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      23,    -1,    23,    24,    25,    28,    29,    28,    29,    30,
      33,    34,    33,    34,    -1,    38,     1,    38,     3,     4,
       5,     6,    -1,    46,    47,    46,    47,    50,    -1,    50,
      -1,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    29,    30,    -1,    -1,    33,    34,
      -1,    -1,    -1,    38,    -1,    40,    41,     3,     4,     5,
       6,    46,    47,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    21,    -1,    23,    24,    -1,
      -1,    -1,    28,    29,    30,    -1,    -1,    33,    34,    -1,
      -1,    -1,    38,    -1,    40,    11,    12,    13,    14,    -1,
      46,    47,    -1,    -1,    50,    11,    12,    13,    14,    -1,
      -1,    11,    12,    13,    14,    31,    32,    -1,    -1,    35,
      36,    37,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    31,    32,    39,    50,    35,    36,    37,    11,    12,
      13,    14,    -1,    -1,    50,    11,    12,    13,    14,    -1,
      50,    11,    12,    13,    14,    -1,    -1,    -1,    31,    32,
      -1,    -1,    35,    36,    37,    31,    32,    -1,    -1,    35,
      36,    31,    32,    39,    -1,    35,    36,    50,    -1,    -1,
      -1,    23,    -1,    -1,    50,    -1,    28,    29,    -1,    -1,
      50,    33,    34,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,    19,    23,    24,    25,    28,
      29,    30,    33,    34,    38,    46,    47,    50,    53,    54,
      56,    58,    59,    60,    66,    67,    69,    70,    71,    72,
      76,    77,    86,    55,    40,    87,    35,    42,    63,    68,
      38,    28,    69,     0,    54,    37,    66,    37,    27,    28,
      61,    64,    65,    37,    11,    12,    13,    14,    31,    32,
      35,    36,    37,    50,    73,    74,    33,    34,    46,    47,
      75,    48,    49,    70,    54,    54,    37,    88,     6,    90,
      26,    28,    45,    45,    58,    39,    54,    28,    64,    54,
      38,    42,    45,    62,    44,    54,    54,    70,    70,    71,
      71,    72,    72,    54,    21,    56,    58,    60,    66,    67,
      69,    80,    82,    86,    87,    90,    38,    36,    43,    69,
      69,    37,    64,    79,    29,    69,    65,    67,    69,    89,
      54,    37,    37,    37,    37,    41,    80,    81,    89,    54,
      63,    28,    39,    43,    83,    84,    80,    39,    73,    40,
      62,    80,    80,    37,    40,    91,    69,    78,    85,    92,
      37,    80,    22,    80,    69,    41,    80,    41,    39,    40,
      57,    80,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    54,    54,    57,    56,    59,    58,    60,    60,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    66,    66,    68,    67,    67,    69,    69,    69,    69,
      69,    70,    70,    70,    71,    71,    71,    72,    72,    72,
      72,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      75,    75,    76,    76,    76,    76,    76,    78,    77,    79,
      79,    80,    81,    80,    80,    80,    80,    80,    80,    82,
      82,    83,    82,    84,    85,    82,    82,    86,    88,    87,
      89,    89,    90,    89,    89,    92,    91,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     5,     2,     3,     3,     3,     2,     2,
       3,     0,     4,     0,     0,    14,     0,     3,     2,     2,
       2,     4,     0,     4,     3,     3,     1,     3,     1,     1,
       1,     1,     1,     0,     4,     4,     3,     1,     3,     2,
       2,     3,     3,     1,     3,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     9,     1,
       0,     2,     0,     3,     2,     1,     2,     2,     0,     2,
       2,     0,     4,     0,     0,     7,     1,     3,     0,     4,
       1,     1,     5,     1,     1,     0,     4,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* START: PROG  */
#line 27 "parser.y"
             { if(err==0) printf("Valid syntax\n");
	 YYACCEPT; }
#line 1459 "y.tab.c"
    break;

  case 11: /* $@1: %empty  */
#line 40 "parser.y"
               {yyerrok;yyclearin;}
#line 1465 "y.tab.c"
    break;

  case 14: /* $@2: %empty  */
#line 45 "parser.y"
                                                            {scope++;}
#line 1471 "y.tab.c"
    break;

  case 15: /* FOR: T_FOR '(' DEC_ASGN ';' T_ID REL_OP EXPR ';' EXPR ')' '{' $@2 STMT '}'  */
#line 45 "parser.y"
                                                                               {scope--;}
#line 1477 "y.tab.c"
    break;

  case 16: /* $@3: %empty  */
#line 46 "parser.y"
           {printf(" ");}
#line 1483 "y.tab.c"
    break;

  case 20: /* ARRAY: T_ID BRACKET  */
#line 51 "parser.y"
                     {
		if(check_sym_tab(yyvsp[-1]))	//if variable is in table then variable is being re-declared
				{
					printf("Variable %s already declared\n",yyvsp[-1]);
					yyerror(yyvsp[-1]);
				}
				else
				{
				insert_symbol(yyvsp[-1],size(type)*arraysize,type,yylineno,scope);
				arraysize=1;	//revert to default for checking
				type=-1;
				}
		}
#line 1501 "y.tab.c"
    break;

  case 21: /* BRACKET: '[' T_NUM ']' BRACKET  */
#line 65 "parser.y"
                                { arraysize*=atoi(yyvsp[-2]);}
#line 1507 "y.tab.c"
    break;

  case 27: /* VAR: T_ID '=' EXPR  */
#line 78 "parser.y"
                        {
				if(check_sym_tab(yyvsp[-2]))	//if variable is in table then variable is being re-declared
				{
					printf("Variable %s already declared\n",yyvsp[-2]);
					yyerror(yyvsp[-2]);
				}
				else
				{
				insert_symbol(yyvsp[-2],size(type),type,yylineno,scope);
				insert_val(yyvsp[-2],vval,yylineno);
				vval="~";	//revert to default for checking
				type=-1;
				}
			}
#line 1526 "y.tab.c"
    break;

  case 28: /* VAR: T_ID  */
#line 92 "parser.y"
                        {
				if(check_sym_tab(yyvsp[0]))	//if variable is in table then variable is being re-declared
				{
					printf("Variable %s already declared\n",yyvsp[0]);
					yyerror(yyvsp[0]);
				}
				else{
				insert_symbol(yyvsp[0],size(type),type,yylineno,scope);
				type=-1;	//revert to default for checking
				}
			}
#line 1542 "y.tab.c"
    break;

  case 29: /* TYPE: T_INT  */
#line 104 "parser.y"
             {type = INT;}
#line 1548 "y.tab.c"
    break;

  case 30: /* TYPE: T_FLOAT  */
#line 105 "parser.y"
                 {type = FLOAT;}
#line 1554 "y.tab.c"
    break;

  case 31: /* TYPE: T_DOUBLE  */
#line 106 "parser.y"
                  {type = DOUBLE;}
#line 1560 "y.tab.c"
    break;

  case 32: /* TYPE: T_CHAR  */
#line 107 "parser.y"
                {type = CHAR;}
#line 1566 "y.tab.c"
    break;

  case 33: /* $@4: %empty  */
#line 111 "parser.y"
             {type=retrieve_type(yyvsp[0]);}
#line 1572 "y.tab.c"
    break;

  case 34: /* ASSGN: T_ID $@4 '=' EXPR  */
#line 111 "parser.y"
                                                {
				if(!check_sym_tab(yyvsp[-3]))	//if variable not declared then value cannot be assigned
				{
					printf("Variable %s not declared\n",yyvsp[-3]);
					yyerror(yyvsp[-3]);
				}
				insert_val(yyvsp[-3],vval,yylineno);
				vval="~";		//to make sure previous values aren't inserted into other identifiers
				type=-1;		//revert to default for checking
			}
#line 1587 "y.tab.c"
    break;

  case 37: /* EXPR: E  */
#line 126 "parser.y"
           {vval=yyvsp[0];}
#line 1593 "y.tab.c"
    break;

  case 41: /* E: E '+' T  */
#line 133 "parser.y"
                { 
			if(vtype==2)				//integer
				sprintf(yyval,"%d",(atoi(yyvsp[-2])+atoi(yyvsp[0])));
			else if(vtype==3)			//float or double
				sprintf(yyval,"%lf",(atof(yyvsp[-2])+atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1610 "y.tab.c"
    break;

  case 42: /* E: E '-' T  */
#line 145 "parser.y"
                { 
			if(vtype==2)				//integer
				sprintf(yyval,"%d",(atoi(yyvsp[-2])-atoi(yyvsp[0])));
			else if(vtype==3)			//float or double
				sprintf(yyval,"%lf",(atof(yyvsp[-2])-atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1627 "y.tab.c"
    break;

  case 43: /* E: T  */
#line 157 "parser.y"
        {yyval=yyvsp[0];}
#line 1633 "y.tab.c"
    break;

  case 44: /* T: T '*' F  */
#line 161 "parser.y"
                { 
			if(vtype==2)				//integer
				sprintf(yyval,"%d",(atoi(yyvsp[-2])*atoi(yyvsp[0])));
			else if(vtype==3)			//float or double
				sprintf(yyval,"%lf",(atof(yyvsp[-2])*atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1650 "y.tab.c"
    break;

  case 45: /* T: T '/' F  */
#line 173 "parser.y"
                { 
			if(vtype==2)				//integer
				sprintf(yyval,"%d",(atoi(yyvsp[-2])/atoi(yyvsp[0])));
			else if(vtype==3)			//float or double
				sprintf(yyval,"%lf",(atof(yyvsp[-2])/atof(yyvsp[0])));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror(yyval);
				yyval="~";
			}
		}
#line 1667 "y.tab.c"
    break;

  case 46: /* T: F  */
#line 185 "parser.y"
        {yyval=yyvsp[0];}
#line 1673 "y.tab.c"
    break;

  case 48: /* F: T_ID  */
#line 189 "parser.y"
                {
			if(check_sym_tab(yyvsp[0]))		//check if variable is in symbol table
			{
				char* check=retrieve_val(yyvsp[0]);
				if(check=="~")		//if variable has no value then can't be used for assignment
				{
					printf("Variable %s not initialised",yyvsp[0]);
					yyerror(yyvsp[0]);
				}
				else
				{	
					yyval=strdup(check);
					vtype=type_check(check);	
					if(vtype!=type && type!=-1)	//checks for matching type
					{
						printf("Mismatch type\n");
						yyerror(yyvsp[0]);
					}	
				}
			}
			else
			{
					printf("Variable %s not declared\n",yyvsp[0]);
					yyerror(yyvsp[0]);
			}
		}
#line 1704 "y.tab.c"
    break;

  case 49: /* F: T_NUM  */
#line 215 "parser.y"
                {
    			yyval=strdup(yyvsp[0]); 
    			vtype=type_check(yyvsp[0]);
    			if(vtype!=type && type!=-1)	//checks for matching type
			{
				printf("Mismatch type\n");
				yyerror(yyvsp[0]);
			}
		}
#line 1718 "y.tab.c"
    break;

  case 50: /* F: T_STRLITERAL  */
#line 224 "parser.y"
                   {
    			yyval=strdup(yyvsp[0]); 
    			vtype=1;
			if(vtype!=type)		//checks for matching type
			{
				printf("Mismatch type\n");	
				yyerror(yyvsp[0]);
			}
		}
#line 1732 "y.tab.c"
    break;

  case 67: /* $@5: %empty  */
#line 259 "parser.y"
                                             {scope++;}
#line 1738 "y.tab.c"
    break;

  case 68: /* MAIN: TYPE T_MAIN '(' EMPTY_LISTVAR ')' '{' $@5 STMT '}'  */
#line 259 "parser.y"
                                                                 {scope--;}
#line 1744 "y.tab.c"
    break;

  case 72: /* $@6: %empty  */
#line 271 "parser.y"
                {scope++;}
#line 1750 "y.tab.c"
    break;

  case 73: /* STMT: BLOCK $@6 STMT  */
#line 271 "parser.y"
                                {scope--;}
#line 1756 "y.tab.c"
    break;

  case 81: /* $@7: %empty  */
#line 284 "parser.y"
                    {scope++;}
#line 1762 "y.tab.c"
    break;

  case 82: /* STMT_NO_BLOCK: T_IF COND $@7 STMT  */
#line 284 "parser.y"
                                    {scope--;}
#line 1768 "y.tab.c"
    break;

  case 83: /* $@8: %empty  */
#line 285 "parser.y"
                    {scope++;}
#line 1774 "y.tab.c"
    break;

  case 84: /* $@9: %empty  */
#line 285 "parser.y"
                                    {scope--;}
#line 1780 "y.tab.c"
    break;

  case 88: /* $@10: %empty  */
#line 291 "parser.y"
            {scope++;}
#line 1786 "y.tab.c"
    break;

  case 89: /* BLOCK: '{' $@10 STMT '}'  */
#line 291 "parser.y"
                                {scope--;}
#line 1792 "y.tab.c"
    break;

  case 95: /* $@11: %empty  */
#line 309 "parser.y"
             {scope++;}
#line 1798 "y.tab.c"
    break;

  case 96: /* WHILE_2: '{' $@11 STMT '}'  */
#line 309 "parser.y"
                                {scope--;}
#line 1804 "y.tab.c"
    break;


#line 1808 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 313 "parser.y"



/* error handling function */
void yyerror(char* s)
{
	err+=1;
	printf("Error :syntax error,line number:%d,token:%s \n",yylineno,yytext);
}
int yywrap()
{
    return(1);
}

/* main function - calls the yyparse() function which will in turn drive yylex() as well */
int main(int argc, char* argv[])
{
	t=init_table();
	//printf("here \n");
	yyparse();
	printf("\n");
	printf("\n");
	printf("--------------------------------------------\n");
	display_sym_tab();
	printf("--------------------------------------------\n");
	return 0;

}

