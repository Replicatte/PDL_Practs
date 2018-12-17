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
#line 8 "src/asin.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include "libtds.h"
#include "header.h"

#line 73 "asin.c" /* yacc.c:339  */

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
   by #include "asin.h".  */
#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID_ = 258,
    CTE_ = 259,
    MAS_ = 260,
    MENOS_ = 261,
    POR_ = 262,
    DIV_ = 263,
    ASIG_ = 264,
    MENOR_ = 265,
    MAYOR_ = 266,
    MOD_ = 267,
    NOT_ = 268,
    AND_ = 269,
    OR_ = 270,
    MASIGUAL_ = 271,
    MENOSIGUAL_ = 272,
    PORIGUAL_ = 273,
    DIVIGUAL_ = 274,
    IGUAL_ = 275,
    MENORIGUAL_ = 276,
    MAYORIGUAL_ = 277,
    DIFERENTE_ = 278,
    INCREMENTO_ = 279,
    DECREMENTO_ = 280,
    PARA_ = 281,
    PARC_ = 282,
    LLAVEA_ = 283,
    LLAVEC_ = 284,
    CORCHETEA_ = 285,
    CORCHETEC_ = 286,
    PUNTOCOMA_ = 287,
    INT_ = 288,
    BOOL_ = 289,
    READ_ = 290,
    PRINT_ = 291,
    IF_ = 292,
    FOR_ = 293,
    TRUE_ = 294,
    FALSE_ = 295,
    ELSE_ = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "src/asin.y" /* yacc.c:355  */

    EXP exp;
    char* ident;
    int cent;

#line 161 "asin.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 178 "asin.c" /* yacc.c:358  */

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   155

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  126

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    46,    47,    51,    52,    56,    62,    74,
      88,    89,    93,    94,    95,    96,    97,   101,   102,   107,
     115,   129,   136,   145,   144,   150,   159,   160,   170,   174,
     175,   197,   198,   222,   223,   251,   252,   279,   280,   318,
     319,   351,   369,   370,   384,   401,   411,   422,   423,   424,
     428,   429,   430,   431,   432,   436,   437,   441,   442,   446,
     447,   448,   449,   453,   454,   458,   459,   460,   464,   465,
     466,   470,   471
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID_", "CTE_", "MAS_", "MENOS_", "POR_",
  "DIV_", "ASIG_", "MENOR_", "MAYOR_", "MOD_", "NOT_", "AND_", "OR_",
  "MASIGUAL_", "MENOSIGUAL_", "PORIGUAL_", "DIVIGUAL_", "IGUAL_",
  "MENORIGUAL_", "MAYORIGUAL_", "DIFERENTE_", "INCREMENTO_", "DECREMENTO_",
  "PARA_", "PARC_", "LLAVEA_", "LLAVEC_", "CORCHETEA_", "CORCHETEC_",
  "PUNTOCOMA_", "INT_", "BOOL_", "READ_", "PRINT_", "IF_", "FOR_", "TRUE_",
  "FALSE_", "ELSE_", "$accept", "programa", "secuenciaSentencias",
  "sentencia", "declaracion", "tipoSimple", "instruccion",
  "listaInstrucciones", "instruccionAsignacion",
  "instruccionEntradaSalida", "instruccionSeleccion", "$@1",
  "instruccionIteracion", "expresionOpcional", "expresion",
  "expresionIgualdad", "expresionRelacional", "expresionAditiva",
  "expresionMultiplicativa", "expresionUnaria", "expresionSufija",
  "constante", "operadorAsignacion", "operadorLogico", "operadorIgualdad",
  "operadorRelacional", "operadorAditivo", "operadorMultiplicativo",
  "operadorUnario", "operadorIncremento", YY_NULLPTR
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
     295,   296
};
# endif

#define YYPACT_NINF -48

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-48)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -20,    30,    24,    81,   -48,   -48,   -48,    -9,    36,    47,
      53,    19,   -48,   -48,    78,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     6,     6,    66,    86,
       6,     6,    10,   -48,   -48,    -5,    -4,   -48,   -48,   -48,
     -48,   -48,   -48,     6,   -48,   -48,    92,    17,   110,   119,
     130,   -48,   -48,   -48,     6,   105,    46,   -48,   -48,    83,
      14,   100,    50,    84,   125,    -1,   115,   -48,     6,   -48,
     103,   -48,   -48,   117,     6,   -48,   -48,     6,   -48,   -48,
     -48,   -48,     6,   -48,   -48,     6,   -48,   -48,   -48,     6,
     -48,   -48,   -48,    90,    96,   -48,     6,     6,   109,   112,
      98,   -48,     6,    17,   110,   119,   130,   -48,   -48,   -48,
      48,   125,    73,   -48,   113,   -48,    77,   106,    10,   -48,
     -48,    48,   121,   -48,    48,   -48
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    18,    10,    11,     0,     0,     0,
       0,     0,     3,     5,     0,     6,    14,    13,    15,    16,
       1,    50,    51,    52,    53,    54,     0,     0,     0,     0,
       0,     0,    28,     2,     4,     0,    45,    47,    68,    69,
      70,    71,    72,     0,    48,    49,     0,    29,    31,    33,
      35,    37,    39,    46,     0,     0,     0,    12,    17,     0,
       0,     0,    45,     0,    26,     0,     0,     7,     0,    43,
       0,    55,    56,     0,     0,    57,    58,     0,    60,    59,
      62,    61,     0,    63,    64,     0,    65,    66,    67,     0,
      40,    41,    19,     0,     0,    23,     0,     0,     0,     0,
       0,    42,     0,    30,    32,    34,    36,    38,    21,    22,
       0,    27,     0,     8,     0,    44,     0,     0,    28,     9,
      20,     0,     0,    24,     0,    25
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   -48,   -48,   133,   -48,   -48,   -28,   -48,   -48,   -48,
     -48,   -48,   -48,    28,   -25,    75,    74,    68,    67,   -47,
     -48,    88,    82,   -48,   -48,   -48,   -48,   -48,   -48,     8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    11,    12,    13,    14,    15,    28,    16,    17,
      18,   110,    19,    63,    64,    47,    48,    49,    50,    51,
      52,    53,    27,    74,    77,    82,    85,    89,    54,    55
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      58,    46,    56,    37,    65,    60,    61,    90,     1,    36,
      37,    38,    39,    62,    37,    38,    39,    29,    70,    40,
      41,    42,     3,    40,    20,    66,    68,    67,    71,    72,
      41,    42,    43,     3,    41,    42,    43,    75,    44,    45,
      76,    94,   107,   100,    69,    44,    45,     4,    33,    44,
      45,     3,     5,     6,     7,     8,     9,    10,     4,    96,
      71,    72,    30,     5,     6,     7,     8,     9,    10,     3,
      69,   111,   112,    31,    41,    42,     4,   116,    92,    32,
      68,    35,   117,     7,     8,     9,    10,    71,    72,    59,
      21,    71,    72,   123,     4,    57,   125,    22,    23,    24,
      25,     7,     8,     9,    10,   118,    71,    72,    91,   120,
      93,    26,    71,    72,    71,    72,    97,    71,    72,    99,
      78,    79,   108,    73,    83,    84,    21,    95,   109,   115,
     101,    80,    81,    22,    23,    24,    25,    86,    87,    71,
      72,   113,    88,   114,    34,   119,   122,   121,   124,   103,
     105,   104,   106,    98,     0,   102
};

static const yytype_int8 yycheck[] =
{
      28,    26,    27,     4,     9,    30,    31,    54,    28,     3,
       4,     5,     6,     3,     4,     5,     6,    26,    43,    13,
      24,    25,     3,    13,     0,    30,    30,    32,    14,    15,
      24,    25,    26,     3,    24,    25,    26,    20,    39,    40,
      23,    27,    89,    68,    36,    39,    40,    28,    29,    39,
      40,     3,    33,    34,    35,    36,    37,    38,    28,     9,
      14,    15,    26,    33,    34,    35,    36,    37,    38,     3,
      62,    96,    97,    26,    24,    25,    28,   102,    32,    26,
      30,     3,   110,    35,    36,    37,    38,    14,    15,     3,
       9,    14,    15,   121,    28,    29,   124,    16,    17,    18,
      19,    35,    36,    37,    38,    32,    14,    15,     3,    32,
      27,    30,    14,    15,    14,    15,    32,    14,    15,     4,
      10,    11,    32,    31,     5,     6,     9,    27,    32,    31,
      27,    21,    22,    16,    17,    18,    19,     7,     8,    14,
      15,    32,    12,    31,    11,    32,   118,    41,    27,    74,
      82,    77,    85,    65,    -1,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    43,     3,    28,    33,    34,    35,    36,    37,
      38,    44,    45,    46,    47,    48,    50,    51,    52,    54,
       0,     9,    16,    17,    18,    19,    30,    64,    49,    26,
      26,    26,    26,    29,    45,     3,     3,     4,     5,     6,
      13,    24,    25,    26,    39,    40,    56,    57,    58,    59,
      60,    61,    62,    63,    70,    71,    56,    29,    48,     3,
      56,    56,     3,    55,    56,     9,    30,    32,    30,    71,
      56,    14,    15,    31,    65,    20,    23,    66,    10,    11,
      21,    22,    67,     5,     6,    68,     7,     8,    12,    69,
      61,     3,    32,    27,    27,    27,     9,    32,    63,     4,
      56,    27,    64,    57,    58,    59,    60,    61,    32,    32,
      53,    56,    56,    32,    31,    31,    56,    48,    32,    32,
      32,    41,    55,    48,    27,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    46,    46,
      47,    47,    48,    48,    48,    48,    48,    49,    49,    50,
      50,    51,    51,    53,    52,    54,    55,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    60,    60,    61,
      61,    61,    62,    62,    62,    62,    62,    63,    63,    63,
      64,    64,    64,    64,    64,    65,    65,    66,    66,    67,
      67,    67,    67,    68,    68,    69,    69,    69,    70,    70,
      70,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     1,     3,     5,     6,
       1,     1,     3,     1,     1,     1,     1,     2,     0,     4,
       7,     5,     5,     0,     8,     9,     1,     3,     0,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       2,     2,     3,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
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
        case 7:
#line 57 "src/asin.y" /* yacc.c:1646  */
    {
        if ( !insTSimpleTDS((yyvsp[-1].ident),(yyvsp[-2].cent),dvar) )
            yyerror ("Identificador repetido");
        else dvar += TALLA_TIPO_SIMPLE; 
    }
#line 1360 "asin.c" /* yacc.c:1646  */
    break;

  case 8:
#line 63 "src/asin.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-4].cent) != (yyvsp[-1].exp).tipo)
           yyerror ("Error de Tipos");
        else
        {
            if ( !insTSimpleTDS((yyvsp[-3].ident),(yyvsp[-4].cent),dvar) )
                yyerror ("Identificador repetido");
            else dvar += TALLA_TIPO_SIMPLE;
         
        } 
    }
#line 1376 "asin.c" /* yacc.c:1646  */
    break;

  case 9:
#line 75 "src/asin.y" /* yacc.c:1646  */
    {
        int numelem = (yyvsp[-2].cent);
        if (numelem <= 0)
            {
                yyerror("Talla inapropiada del array");
                numelem = 0;
            }
        if ( !insTVectorTDS((yyvsp[-4].ident), T_ARRAY, dvar, (yyvsp[-5].cent), numelem) )
            yyerror ("Identificador repetido");
        else dvar += numelem * TALLA_TIPO_SIMPLE;}
#line 1391 "asin.c" /* yacc.c:1646  */
    break;

  case 10:
#line 88 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = T_ENTERO; }
#line 1397 "asin.c" /* yacc.c:1646  */
    break;

  case 11:
#line 89 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = T_LOGICO; }
#line 1403 "asin.c" /* yacc.c:1646  */
    break;

  case 19:
#line 108 "src/asin.y" /* yacc.c:1646  */
    { 	SIMB s = obtenerTDS((yyvsp[-3].ident));
		if (s.tipo == T_ERROR) 
			yyerror("Objeto no declarado");
		else if ( !((s.tipo != T_ERROR) && (s.tipo == (yyvsp[-1].exp).tipo)) )
			yyerror("Error de tipos en la 'instruccionAsignacion'");
		else (yyval.cent) = s.tipo;
	}
#line 1415 "asin.c" /* yacc.c:1646  */
    break;

  case 20:
#line 116 "src/asin.y" /* yacc.c:1646  */
    {
		SIMB s = obtenerTDS((yyvsp[-6].ident));
		if (s.tipo == T_ERROR) 
			yyerror("Objeto no declarado");
		else if ( !((s.telem == (yyvsp[-1].exp).tipo) && ((yyvsp[-4].exp).tipo == T_ENTERO) && (s.tipo == T_ARRAY) ) )
			yyerror("Error del array en la 'instruccionAsignacion'");
		else {
            (yyval.cent) = s.telem;
        }
	}
#line 1430 "asin.c" /* yacc.c:1646  */
    break;

  case 21:
#line 130 "src/asin.y" /* yacc.c:1646  */
    { SIMB s = obtenerTDS((yyvsp[-2].ident));
        if (s.tipo == T_ERROR)
            yyerror("Tipo no declarado");
        else if (s.tipo != T_ENTERO)
            yyerror("READ es para Tipo Entero");
        }
#line 1441 "asin.c" /* yacc.c:1646  */
    break;

  case 22:
#line 137 "src/asin.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].exp).tipo != T_ENTERO)
            yyerror("PRINT necesita Tipo Entero");
        }
#line 1450 "asin.c" /* yacc.c:1646  */
    break;

  case 23:
#line 145 "src/asin.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].exp).tipo != T_ERROR && (yyvsp[-1].exp).tipo != T_LOGICO) yyerror("La expresion del if debe ser de tipo logica"); }
#line 1456 "asin.c" /* yacc.c:1646  */
    break;

  case 25:
#line 151 "src/asin.y" /* yacc.c:1646  */
    {
		if ((yyvsp[-4].exp).tipo != T_LOGICO){
			yyerror("La Guarda del bucle for tiene que ser logica");
			}
	}
#line 1466 "asin.c" /* yacc.c:1646  */
    break;

  case 26:
#line 159 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor; (yyval.exp).valid = (yyvsp[0].exp).valid; }
#line 1472 "asin.c" /* yacc.c:1646  */
    break;

  case 27:
#line 161 "src/asin.y" /* yacc.c:1646  */
    { 	
        SIMB s = obtenerTDS((yyvsp[-2].ident));
		if (s.tipo == T_ERROR) 
			yyerror("Objeto no declarado");
		else if (!( (s.tipo == (yyvsp[0].exp).tipo && s.tipo == T_ENTERO)||(s.tipo == (yyvsp[0].exp).tipo && s.tipo == T_LOGICO) ))
			yyerror("Error de tipos en la 'instruccionAsignacion'");
		else (yyval.exp).tipo = s.tipo;
	}
#line 1485 "asin.c" /* yacc.c:1646  */
    break;

  case 28:
#line 170 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = T_LOGICO; }
#line 1491 "asin.c" /* yacc.c:1646  */
    break;

  case 29:
#line 174 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor; (yyval.exp).valid = (yyvsp[0].exp).valid; }
#line 1497 "asin.c" /* yacc.c:1646  */
    break;

  case 30:
#line 176 "src/asin.y" /* yacc.c:1646  */
    {
            (yyval.exp).tipo = T_ERROR;
            if ( (yyvsp[-2].exp).tipo != T_ERROR && (yyvsp[0].exp).tipo != T_ERROR )
            {
                if ( (yyvsp[-2].exp).tipo != (yyvsp[0].exp).tipo ) {
                    yyerror( "Los tipos no coinciden en la expresion" );                
                } else {
                    (yyval.exp).tipo = T_LOGICO;
                    if ((yyvsp[-2].exp).valid == TRUE && (yyvsp[0].exp).valid == TRUE) {
                        if ((yyvsp[-1].cent) == OP_OR)
                            (yyval.exp).valor = (yyvsp[-2].exp).valor || (yyvsp[0].exp).valor ? TRUE : FALSE;
                        else if ((yyvsp[-1].cent) == OP_AND)
                            (yyval.exp).valor = (yyvsp[-2].exp).valor && (yyvsp[0].exp).valor ? TRUE : FALSE;
                        (yyval.exp).valid = TRUE;
                    } else (yyval.exp).valid = FALSE;
                }
            }
        }
#line 1520 "asin.c" /* yacc.c:1646  */
    break;

  case 31:
#line 197 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor; (yyval.exp).valid = (yyvsp[0].exp).valid; }
#line 1526 "asin.c" /* yacc.c:1646  */
    break;

  case 32:
#line 199 "src/asin.y" /* yacc.c:1646  */
    {
            (yyval.exp).tipo = T_ERROR;
            if ( (yyvsp[-2].exp).tipo != T_ERROR && (yyvsp[0].exp).tipo != T_ERROR )
            {
                if ( (yyvsp[-2].exp).tipo != (yyvsp[0].exp).tipo ) {
                    yyerror( "Los tipos no coinciden en la igualdad" );
                } else if ( (yyvsp[-2].exp).tipo == T_ARRAY ) {
                    yyerror( "El operador de igualdad no se puede aplicar en los arrays" );                
                } else {
                    (yyval.exp).tipo = T_LOGICO;
                    if ((yyvsp[-2].exp).valid == TRUE && (yyvsp[0].exp).valid == TRUE) {
                        if ((yyvsp[-1].cent) == OP_IGUAL)
                            (yyval.exp).valor = (yyvsp[-2].exp).valor == (yyvsp[0].exp).valor ? TRUE : FALSE;
                        else if ((yyvsp[-1].cent) == OP_NOT)
                            (yyval.exp).valor = (yyvsp[-2].exp).valor != (yyvsp[0].exp).valor ? TRUE : FALSE;
                        (yyval.exp).valid = TRUE;
                    } else (yyval.exp).valid = FALSE;
                }
            }
        }
#line 1551 "asin.c" /* yacc.c:1646  */
    break;

  case 33:
#line 222 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor; (yyval.exp).valid = (yyvsp[0].exp).valid; }
#line 1557 "asin.c" /* yacc.c:1646  */
    break;

  case 34:
#line 224 "src/asin.y" /* yacc.c:1646  */
    {
		(yyval.exp).tipo = T_ERROR;
		if ((yyvsp[-2].exp).tipo != T_ERROR && (yyvsp[0].exp).tipo != T_ERROR){
			if ((yyvsp[-2].exp).tipo != (yyvsp[0].exp).tipo) {
				yyerror("Los tipos de la expresion Relacional son diferentes");
			}
			else if ((yyvsp[-2].exp).tipo == T_LOGICO){
				yyerror("La expresion relacional con expresion logica, las expresiones relacionales solo trabajan con Enteros");
			}else{
				(yyval.exp).tipo = T_LOGICO;
				if (((yyvsp[-2].exp).valid && (yyvsp[0].exp).valid) == TRUE){
					if ((yyvsp[-1].cent) == OP_MAYOR)
						(yyval.exp).valor = (yyvsp[-2].exp).valor > (yyvsp[0].exp).valor ? TRUE : FALSE;
					if ((yyvsp[-1].cent) == OP_MENOR)
						(yyval.exp).valor = (yyvsp[-2].exp).valor < (yyvsp[0].exp).valor ? TRUE : FALSE;
					if ((yyvsp[-1].cent) == OP_MAYORIG)
						(yyval.exp).valor = (yyvsp[-2].exp).valor >= (yyvsp[0].exp).valor ? TRUE : FALSE;
					if ((yyvsp[-1].cent) == OP_MENORIG)
						(yyval.exp).valor = (yyvsp[-2].exp).valor <= (yyvsp[0].exp).valor ? TRUE : FALSE;
					(yyval.exp).valid = TRUE;			
				}else{(yyval.exp).valid = FALSE;}			
			}
		}
	}
#line 1586 "asin.c" /* yacc.c:1646  */
    break;

  case 35:
#line 251 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor; (yyval.exp).valid = (yyvsp[0].exp).valid; }
#line 1592 "asin.c" /* yacc.c:1646  */
    break;

  case 36:
#line 253 "src/asin.y" /* yacc.c:1646  */
    {
	(yyval.exp).tipo = T_ERROR;
        if ((yyvsp[-2].exp).tipo != T_ERROR && (yyvsp[0].exp).tipo != T_ERROR) {
            if ((yyvsp[-2].exp).tipo != (yyvsp[0].exp).tipo) {
                yyerror("Los tipos de la expresion additiva no son iguales");
            } else if ((yyvsp[-2].exp).tipo != T_ENTERO) {
                yyerror("La Operacion Aditiva solo trabaja con tipo Entero");
            } else {
                (yyval.exp).tipo = T_ENTERO;
                if (((yyvsp[-2].exp).valid && (yyvsp[0].exp).valid) == TRUE) {
                    if ((yyvsp[-1].cent) == OP_SUMAR)
                        (yyval.exp).valor = (yyvsp[-2].exp).valor + (yyvsp[0].exp).valor;
                    else if ((yyvsp[-1].cent) == OP_RESTAR)
                        (yyval.exp).valor = (yyvsp[-2].exp).valor - (yyvsp[0].exp).valor;
                    (yyval.exp).valid = TRUE;
                } else (yyval.exp).valid = FALSE;
            }
		}

        /* inicio GCI (Generacion de codigo intermedio */
        (yyval.exp).pos = creaVarTemp();
        emite((yyvsp[-1].cent), crArgPos((yyvsp[-2].exp).pos), crArgPos((yyvsp[0].exp).pos), crArgPos((yyval.exp).pos));	
	}
#line 1620 "asin.c" /* yacc.c:1646  */
    break;

  case 37:
#line 279 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor; (yyval.exp).valid = (yyvsp[0].exp).valid; }
#line 1626 "asin.c" /* yacc.c:1646  */
    break;

  case 38:
#line 281 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = T_ERROR;
        if ((yyvsp[-2].exp).tipo != T_ERROR && (yyvsp[0].exp).tipo != T_ERROR) {
            if ((yyvsp[-2].exp).tipo != (yyvsp[0].exp).tipo) {
                yyerror("Tipos no coinciden en operacion multiplicativa");
            } else if ((yyvsp[-2].exp).tipo != T_ENTERO) {
                yyerror("Operacion multiplicativa solo acepta argumentos enteros");
            } else {
                (yyval.exp).tipo = T_ENTERO;
                if (((yyvsp[-2].exp).valid && (yyvsp[0].exp).valid) == TRUE) {
                    if ((yyvsp[-1].cent) == OP_MULTIPLICAR)
                        (yyval.exp).valor = (yyvsp[-2].exp).valor * (yyvsp[0].exp).valor;
                    if ((yyvsp[-1].cent) == OP_DIVIDIR) {
                        if ((yyvsp[0].exp).valor == 0) {
                            (yyval.exp).tipo = T_ERROR;
                            yyerror("No se puede dividir entre 0");
                        } else {
                            (yyval.exp).valor = (yyvsp[-2].exp).valor / (yyvsp[0].exp).valor;
                        }
                    }if ((yyvsp[-1].cent) == OP_MODULO) {
                        if ((yyvsp[0].exp).valor == 0) {
                            (yyval.exp).tipo = T_ERROR;
                            yyerror("No se puede dividir entre 0, y por tanto la operacion Modulo tampoco");
                        } else {

                            (yyval.exp).valor = (yyvsp[-2].exp).valor % (yyvsp[0].exp).valor;
                        }
                    }
                if((yyval.exp).tipo != T_ERROR)    
                    (yyval.exp).valid = TRUE;
                else (yyval.exp).valid = FALSE;
                } else (yyval.exp).valid = FALSE;
            }
		} 
	}
#line 1665 "asin.c" /* yacc.c:1646  */
    break;

  case 39:
#line 318 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor; (yyval.exp).valid = (yyvsp[0].exp).valid; }
#line 1671 "asin.c" /* yacc.c:1646  */
    break;

  case 40:
#line 320 "src/asin.y" /* yacc.c:1646  */
    { 
        (yyval.exp).tipo = T_ERROR;
        (yyval.exp).valid = (yyvsp[0].exp).valid;
        if ((yyvsp[0].exp).tipo != T_ERROR){
            if ((yyvsp[0].exp).tipo == T_ENTERO){
                if ((yyvsp[-1].cent) == OP_NOT){
                    yyerror("No se puede usar '!' en enteros");
                }else if ((yyvsp[0].exp).valid == TRUE){
                    (yyval.exp).tipo = T_ENTERO;
                    if ((yyvsp[-1].cent) == OP_MAS) {
                        (yyval.exp).valor = (yyvsp[0].exp).valor;
                    }
                    if ((yyvsp[-1].cent) == OP_MENOS) {
                        (yyval.exp).valor = -(yyvsp[0].exp).valor;
                    }
                }
            }
            if ((yyvsp[0].exp).tipo == T_LOGICO){
                if((yyvsp[-1].cent) == OP_NOT && (yyvsp[0].exp).valid){
                    (yyval.exp).tipo=T_LOGICO;
                    if((yyvsp[0].exp).valor == FALSE){
                        (yyval.exp).valor = TRUE;
                    }else{
                        (yyval.exp).valor = FALSE;
                    }
                }else{
                    yyerror("Expresion Logica con Operacion Entera Invalida");
                }
            }
        }
    }
#line 1707 "asin.c" /* yacc.c:1646  */
    break;

  case 41:
#line 352 "src/asin.y" /* yacc.c:1646  */
    {
        SIMB simb = obtenerTDS((yyvsp[0].ident));
        (yyval.exp).tipo = T_ERROR;
        if (simb.tipo == T_ERROR){
            yyerror("Variable no declarada");
        }
        else if (simb.tipo == T_ARRAY){
            yyerror("La variable es un vector sin indice");
        }
        else{
            (yyval.exp).tipo = simb.tipo;
        }
        (yyval.exp).valid = FALSE;
    }
#line 1726 "asin.c" /* yacc.c:1646  */
    break;

  case 42:
#line 369 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[-1].exp).tipo; (yyval.exp).valor = (yyvsp[-1].exp).valor; (yyval.exp).valid = (yyvsp[-1].exp).valid; }
#line 1732 "asin.c" /* yacc.c:1646  */
    break;

  case 43:
#line 371 "src/asin.y" /* yacc.c:1646  */
    {
            (yyval.exp).tipo = T_ERROR;
            (yyval.exp).valid = FALSE;
            SIMB s = obtenerTDS((yyvsp[-1].ident));
            if(s.tipo == T_ERROR){
                yyerror("Variable no declarada.");
            }else if (s.tipo == T_ARRAY){
                yyerror("El array no tiene indices por los cuales acceder");
            }else{
                (yyval.exp).tipo = s.tipo;
                
            }
        }
#line 1750 "asin.c" /* yacc.c:1646  */
    break;

  case 44:
#line 385 "src/asin.y" /* yacc.c:1646  */
    {
            SIMB simb = obtenerTDS((yyvsp[-3].ident));
            (yyval.exp).tipo = T_ERROR;
            (yyval.exp).valid = FALSE;
            if (simb.tipo == T_ERROR)
                yyerror("Variable no declarada");
            else if ( simb.tipo != T_ARRAY)
                yyerror("La variable no es un array, no se pueden poner indices");
            else {
                if ((yyvsp[-1].exp).valid == TRUE && ((yyvsp[-1].exp).valor < 0 || (yyvsp[-1].exp).valor >= simb.nelem))
                   yyerror("Indice invalido para el array");
                else
                    (yyval.exp).tipo = simb.telem; 
            }

        }
#line 1771 "asin.c" /* yacc.c:1646  */
    break;

  case 45:
#line 402 "src/asin.y" /* yacc.c:1646  */
    {
        SIMB s = obtenerTDS((yyvsp[0].ident));
        (yyval.exp).tipo = T_ERROR;
        (yyval.exp).valid = FALSE;
        if(s.tipo == T_ERROR){
            yyerror("Variable no declarada.");    
        }else{(yyval.exp).tipo = s.tipo;}
        
    }
#line 1785 "asin.c" /* yacc.c:1646  */
    break;

  case 46:
#line 412 "src/asin.y" /* yacc.c:1646  */
    {
	
         (yyval.exp).valor = (int)(yyvsp[0].exp).valor; //Casting para truncar el valor(da igual el tipo)
         (yyval.exp).tipo  = (yyvsp[0].exp).tipo;
         (yyval.exp).valid = (yyvsp[0].exp).valid;
	
    }
#line 1797 "asin.c" /* yacc.c:1646  */
    break;

  case 47:
#line 422 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).valor = (yyvsp[0].cent);	(yyval.exp).tipo = T_ENTERO; (yyval.exp).valid = TRUE; }
#line 1803 "asin.c" /* yacc.c:1646  */
    break;

  case 48:
#line 423 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).valor = TRUE;	(yyval.exp).tipo = T_LOGICO; (yyval.exp).valid = TRUE; }
#line 1809 "asin.c" /* yacc.c:1646  */
    break;

  case 49:
#line 424 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).valor = FALSE;	(yyval.exp).tipo = T_LOGICO; (yyval.exp).valid = TRUE; }
#line 1815 "asin.c" /* yacc.c:1646  */
    break;

  case 50:
#line 428 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_ASIG;}
#line 1821 "asin.c" /* yacc.c:1646  */
    break;

  case 51:
#line 429 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_MASIGUAL;}
#line 1827 "asin.c" /* yacc.c:1646  */
    break;

  case 52:
#line 430 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_MENOSIGUAL;}
#line 1833 "asin.c" /* yacc.c:1646  */
    break;

  case 53:
#line 431 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_PORIGUAL;}
#line 1839 "asin.c" /* yacc.c:1646  */
    break;

  case 54:
#line 432 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_DIVIGUAL;}
#line 1845 "asin.c" /* yacc.c:1646  */
    break;

  case 55:
#line 436 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_AND;}
#line 1851 "asin.c" /* yacc.c:1646  */
    break;

  case 56:
#line 437 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_OR;}
#line 1857 "asin.c" /* yacc.c:1646  */
    break;

  case 57:
#line 441 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_IGUAL;}
#line 1863 "asin.c" /* yacc.c:1646  */
    break;

  case 58:
#line 442 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_NOTIGUAL;}
#line 1869 "asin.c" /* yacc.c:1646  */
    break;

  case 59:
#line 446 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_MAYOR;}
#line 1875 "asin.c" /* yacc.c:1646  */
    break;

  case 60:
#line 447 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_MENOR;}
#line 1881 "asin.c" /* yacc.c:1646  */
    break;

  case 61:
#line 448 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_MAYORIG;}
#line 1887 "asin.c" /* yacc.c:1646  */
    break;

  case 62:
#line 449 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_MENORIG;}
#line 1893 "asin.c" /* yacc.c:1646  */
    break;

  case 63:
#line 453 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = ESUM;}
#line 1899 "asin.c" /* yacc.c:1646  */
    break;

  case 64:
#line 454 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EDIF;}
#line 1905 "asin.c" /* yacc.c:1646  */
    break;

  case 65:
#line 458 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_MULTIPLICAR;}
#line 1911 "asin.c" /* yacc.c:1646  */
    break;

  case 66:
#line 459 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_DIVIDIR;}
#line 1917 "asin.c" /* yacc.c:1646  */
    break;

  case 67:
#line 460 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_MODULO;}
#line 1923 "asin.c" /* yacc.c:1646  */
    break;

  case 68:
#line 464 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_MAS;}
#line 1929 "asin.c" /* yacc.c:1646  */
    break;

  case 69:
#line 465 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_MENOS;}
#line 1935 "asin.c" /* yacc.c:1646  */
    break;

  case 70:
#line 466 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_NOT;}
#line 1941 "asin.c" /* yacc.c:1646  */
    break;

  case 71:
#line 470 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_INCREMENTO;}
#line 1947 "asin.c" /* yacc.c:1646  */
    break;

  case 72:
#line 471 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_DECREMENTO;}
#line 1953 "asin.c" /* yacc.c:1646  */
    break;


#line 1957 "asin.c" /* yacc.c:1646  */
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
#line 474 "src/asin.y" /* yacc.c:1906  */

