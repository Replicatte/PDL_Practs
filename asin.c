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
    #include "libgci.h"

#line 74 "asin.c" /* yacc.c:339  */

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
#line 16 "src/asin.y" /* yacc.c:355  */

    EXP exp;
    char* ident;
    int cent;

#line 162 "asin.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 179 "asin.c" /* yacc.c:358  */

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
#define YYLAST   156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  130

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
       0,    43,    43,    49,    50,    54,    55,    59,    65,    77,
      91,    92,    96,    97,    98,    99,   100,   104,   105,   110,
     128,   142,   155,   168,   175,   167,   188,   194,   206,   187,
     226,   227,   242,   246,   247,   273,   274,   299,   300,   331,
     332,   356,   357,   392,   393,   432,   454,   455,   471,   492,
     503,   513,   517,   521,   528,   529,   530,   531,   532,   536,
     537,   541,   542,   546,   547,   548,   549,   553,   554,   558,
     559,   560,   564,   565,   566,   570,   571
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
  "instruccionEntradaSalida", "instruccionSeleccion", "@1", "@2",
  "instruccionIteracion", "@3", "@4", "$@5", "expresionOpcional",
  "expresion", "expresionIgualdad", "expresionRelacional",
  "expresionAditiva", "expresionMultiplicativa", "expresionUnaria",
  "expresionSufija", "constante", "operadorAsignacion", "operadorLogico",
  "operadorIgualdad", "operadorRelacional", "operadorAditivo",
  "operadorMultiplicativo", "operadorUnario", "operadorIncremento", YY_NULLPTR
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
     -24,    30,     8,    92,   -48,   -48,   -48,    -5,    -2,    11,
      52,    19,   -48,   -48,    37,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     6,     6,    56,    77,
       6,     6,    10,   -48,   -48,    51,   102,   -48,   -48,   -48,
     -48,   -48,   -48,     6,   -48,   -48,    55,    -3,   113,   112,
     133,   -48,   -48,   -48,     6,    86,    12,   -48,   -48,    72,
      14,    61,    89,    64,   116,    -1,   108,   -48,     6,   -48,
     101,   -48,   -48,   120,     6,   -48,   -48,     6,   -48,   -48,
     -48,   -48,     6,   -48,   -48,     6,   -48,   -48,   -48,     6,
     -48,   -48,   -48,    93,   110,   -48,     6,   -48,   111,    90,
      59,   -48,     6,    -3,   113,   112,   133,   -48,   -48,   -48,
      69,   116,     6,   -48,   114,   -48,    47,   103,    88,   -48,
     -48,   -48,   -48,    69,    10,   -48,   106,   -48,    69,   -48
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    18,    10,    11,     0,     0,     0,
       0,     0,     3,     5,     0,     6,    14,    13,    15,    16,
       1,    54,    55,    56,    57,    58,     0,     0,     0,     0,
       0,     0,    32,     2,     4,     0,    49,    51,    72,    73,
      74,    75,    76,     0,    52,    53,     0,    33,    35,    37,
      39,    41,    43,    50,     0,     0,     0,    12,    17,     0,
       0,     0,    49,     0,    30,     0,     0,     7,     0,    47,
       0,    59,    60,     0,     0,    61,    62,     0,    64,    63,
      66,    65,     0,    67,    68,     0,    69,    70,    71,     0,
      44,    45,    19,     0,     0,    23,     0,    26,     0,     0,
       0,    46,     0,    34,    36,    38,    40,    42,    21,    22,
       0,    31,     0,     8,     0,    48,     0,     0,     0,     9,
      20,    24,    27,     0,    32,    25,     0,    28,     0,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   -48,   -48,   136,   -48,   -48,   -28,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,    24,   -25,    75,
      73,    70,    66,   -47,   -48,    91,    80,   -48,   -48,   -48,
     -48,   -48,   -48,   -11
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    11,    12,    13,    14,    15,    28,    16,    17,
      18,   110,   123,    19,   112,   124,   128,    63,    64,    47,
      48,    49,    50,    51,    52,    53,    27,    74,    77,    82,
      85,    89,    54,    55
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      58,    46,    56,    37,     1,    60,    61,    90,    20,    36,
      37,    38,    39,    62,    37,    38,    39,    75,    70,    40,
      76,    29,     3,    40,    30,    69,    71,    72,    71,    72,
      41,    42,    43,     3,    41,    42,    43,    31,    44,    45,
      35,    94,   107,   100,    92,    44,    45,     4,    33,    44,
      45,    69,     5,     6,     7,     8,     9,    10,     4,     3,
      65,    71,    72,     5,     6,     7,     8,     9,    10,    71,
      72,   111,     3,    71,    72,    71,    72,   116,    32,   120,
      59,    66,   117,    67,     4,    57,    73,   118,    95,    91,
     115,     7,     8,     9,    10,   125,    97,     4,    96,    93,
     129,    21,    71,    72,     7,     8,     9,    10,    22,    23,
      24,    25,    99,    41,    42,    71,    72,    83,    84,    68,
     122,   114,    26,    78,    79,   108,    41,    42,   101,    21,
      71,    72,    68,   127,    80,    81,    22,    23,    24,    25,
      86,    87,   109,   113,   121,    88,   119,    34,   126,   103,
     104,   106,   105,   102,     0,     0,    98
};

static const yytype_int16 yycheck[] =
{
      28,    26,    27,     4,    28,    30,    31,    54,     0,     3,
       4,     5,     6,     3,     4,     5,     6,    20,    43,    13,
      23,    26,     3,    13,    26,    36,    14,    15,    14,    15,
      24,    25,    26,     3,    24,    25,    26,    26,    39,    40,
       3,    27,    89,    68,    32,    39,    40,    28,    29,    39,
      40,    62,    33,    34,    35,    36,    37,    38,    28,     3,
       9,    14,    15,    33,    34,    35,    36,    37,    38,    14,
      15,    96,     3,    14,    15,    14,    15,   102,    26,    32,
       3,    30,   110,    32,    28,    29,    31,   112,    27,     3,
      31,    35,    36,    37,    38,   123,    32,    28,     9,    27,
     128,     9,    14,    15,    35,    36,    37,    38,    16,    17,
      18,    19,     4,    24,    25,    14,    15,     5,     6,    30,
      32,    31,    30,    10,    11,    32,    24,    25,    27,     9,
      14,    15,    30,    27,    21,    22,    16,    17,    18,    19,
       7,     8,    32,    32,    41,    12,    32,    11,   124,    74,
      77,    85,    82,    73,    -1,    -1,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    43,     3,    28,    33,    34,    35,    36,    37,
      38,    44,    45,    46,    47,    48,    50,    51,    52,    55,
       0,     9,    16,    17,    18,    19,    30,    68,    49,    26,
      26,    26,    26,    29,    45,     3,     3,     4,     5,     6,
      13,    24,    25,    26,    39,    40,    60,    61,    62,    63,
      64,    65,    66,    67,    74,    75,    60,    29,    48,     3,
      60,    60,     3,    59,    60,     9,    30,    32,    30,    75,
      60,    14,    15,    31,    69,    20,    23,    70,    10,    11,
      21,    22,    71,     5,     6,    72,     7,     8,    12,    73,
      65,     3,    32,    27,    27,    27,     9,    32,    67,     4,
      60,    27,    68,    61,    62,    63,    64,    65,    32,    32,
      53,    60,    56,    32,    31,    31,    60,    48,    60,    32,
      32,    41,    32,    54,    57,    48,    59,    27,    58,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    46,    46,
      47,    47,    48,    48,    48,    48,    48,    49,    49,    50,
      50,    51,    51,    53,    54,    52,    56,    57,    58,    55,
      59,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    65,    66,    66,    66,    66,
      66,    67,    67,    67,    68,    68,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    71,    71,    72,    72,    73,
      73,    73,    74,    74,    74,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     1,     3,     5,     6,
       1,     1,     3,     1,     1,     1,     1,     2,     0,     4,
       7,     5,     5,     0,     0,     9,     0,     0,     0,    12,
       1,     3,     0,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     2,     2,     3,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
#line 44 "src/asin.y" /* yacc.c:1646  */
    {   //GCI 
        emite(FIN,crArgNul(),crArgNul(),crArgNul());}
#line 1360 "asin.c" /* yacc.c:1646  */
    break;

  case 7:
#line 60 "src/asin.y" /* yacc.c:1646  */
    {
        if ( !insTSimpleTDS((yyvsp[-1].ident),(yyvsp[-2].cent),dvar) )
            yyerror ("Identificador repetido");
        else dvar += TALLA_TIPO_SIMPLE; 
    }
#line 1370 "asin.c" /* yacc.c:1646  */
    break;

  case 8:
#line 66 "src/asin.y" /* yacc.c:1646  */
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
#line 1386 "asin.c" /* yacc.c:1646  */
    break;

  case 9:
#line 78 "src/asin.y" /* yacc.c:1646  */
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
#line 1401 "asin.c" /* yacc.c:1646  */
    break;

  case 10:
#line 91 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = T_ENTERO; }
#line 1407 "asin.c" /* yacc.c:1646  */
    break;

  case 11:
#line 92 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = T_LOGICO; }
#line 1413 "asin.c" /* yacc.c:1646  */
    break;

  case 19:
#line 111 "src/asin.y" /* yacc.c:1646  */
    { 	
        SIMB s = obtenerTDS((yyvsp[-3].ident));
		if (s.tipo == T_ERROR) 
			yyerror("Objeto no declarado");
		else if ( !((s.tipo != T_ERROR) && (s.tipo == (yyvsp[-1].exp).tipo)) )
			yyerror("Error de tipos en la 'instruccionAsignacion'");
		else (yyval.exp).tipo = s.tipo;

        (yyval.exp).pos = s.desp;
        if((yyvsp[-2].cent) == EASIG){
            emite(EASIG, crArgPos(s.desp), crArgNul(), crArgPos((yyval.exp).pos));
        }else{
            emite((yyvsp[-2].cent), crArgPos(s.desp), crArgPos((yyval.exp).pos), crArgPos((yyval.exp).pos));
        }
        emite(EASIG, crArgPos((yyval.exp).pos), crArgNul(), crArgPos(s.desp));
	}
#line 1434 "asin.c" /* yacc.c:1646  */
    break;

  case 20:
#line 129 "src/asin.y" /* yacc.c:1646  */
    {
		SIMB s = obtenerTDS((yyvsp[-6].ident));
		if (s.tipo == T_ERROR) 
			yyerror("Objeto no declarado");
		else if ( !((s.telem == (yyvsp[-1].exp).tipo) && ((yyvsp[-4].exp).tipo == T_ENTERO) && (s.tipo == T_ARRAY) ) )
			yyerror("Error del array en la 'instruccionAsignacion'");
		else {
            (yyval.exp).tipo = s.telem;
        }
	}
#line 1449 "asin.c" /* yacc.c:1646  */
    break;

  case 21:
#line 143 "src/asin.y" /* yacc.c:1646  */
    { SIMB s = obtenerTDS((yyvsp[-2].ident));
        if (s.tipo == T_ERROR)
            yyerror("Tipo no declarado");
        else if (s.tipo != T_ENTERO)
            yyerror("READ es para Tipo Entero");

            //GCI
            emite(EREAD,crArgNul(),crArgNul(),crArgPos(s.desp));

        }
#line 1464 "asin.c" /* yacc.c:1646  */
    break;

  case 22:
#line 156 "src/asin.y" /* yacc.c:1646  */
    {
            if ((yyvsp[-2].exp).tipo != T_ENTERO){
               // yyerror("PRINT es para Tipo Entero");
            }
            //GCI
            emite(EWRITE, crArgNul(), crArgNul(), crArgPos((yyvsp[-2].exp).pos));
        }
#line 1476 "asin.c" /* yacc.c:1646  */
    break;

  case 23:
#line 168 "src/asin.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].exp).tipo != T_ERROR && (yyvsp[-1].exp).tipo != T_LOGICO) 
            yyerror("La expresion del if debe ser de tipo logica");
          
          (yyval.cent) = creaLans(si);
          emite(EIGUAL, crArgPos((yyvsp[-1].exp).pos), crArgEnt(FALSE), crArgEtq((yyval.cent)));
        }
#line 1487 "asin.c" /* yacc.c:1646  */
    break;

  case 24:
#line 175 "src/asin.y" /* yacc.c:1646  */
    {
                (yyval.cent) = creaLans(si);
                emite(GOTOS, crArgNul(), crArgNul(), crArgEtq((yyval.cent)));
                completaLans((yyvsp[-2].cent), crArgEtq(si));
            }
#line 1497 "asin.c" /* yacc.c:1646  */
    break;

  case 25:
#line 181 "src/asin.y" /* yacc.c:1646  */
    {
                completaLans((yyvsp[-1].cent), crArgEtq(si));
            }
#line 1505 "asin.c" /* yacc.c:1646  */
    break;

  case 26:
#line 188 "src/asin.y" /* yacc.c:1646  */
    {
            //5
            (yyval.cent) = si;
        }
#line 1514 "asin.c" /* yacc.c:1646  */
    break;

  case 27:
#line 194 "src/asin.y" /* yacc.c:1646  */
    {
            //Final del for
            (yyval.cent) = creaLans(si); 
            emite(EIGUAL, crArgPos((yyvsp[-1].exp).pos), crArgEnt(FALSE), crArgEtq((yyval.cent)));
            //Entrar en el bloque
            (yyval.cent) = creaLans(si); 
            emite(GOTOS, crArgNul(), crArgNul(), crArgEtq((yyval.cent)));
           
            (yyval.cent) = si;
        }
#line 1529 "asin.c" /* yacc.c:1646  */
    break;

  case 28:
#line 206 "src/asin.y" /* yacc.c:1646  */
    {
            //Entrar a la condición
            emite(GOTOS, crArgNul(), crArgNul(), crArgEtq((yyvsp[-9].cent)));
            //Rellena Entrar en el bloque
            completaLans((yyvsp[-7].cent), crArgEtq(si));
        }
#line 1540 "asin.c" /* yacc.c:1646  */
    break;

  case 29:
#line 213 "src/asin.y" /* yacc.c:1646  */
    {
		if ((yyvsp[-6].exp).tipo != T_LOGICO){
			yyerror("La Guarda del bucle for tiene que ser logica");
			}
        
        emite(GOTOS, crArgNul(), crArgNul(), crArgEtq((yyvsp[-7].cent)));
        //Rellena final de for
        completaLans((yyvsp[-10].cent), crArgEtq(si));
        
	}
#line 1555 "asin.c" /* yacc.c:1646  */
    break;

  case 30:
#line 226 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor;(yyval.exp).pos = (yyvsp[0].exp).pos;}
#line 1561 "asin.c" /* yacc.c:1646  */
    break;

  case 31:
#line 228 "src/asin.y" /* yacc.c:1646  */
    { 	
        (yyval.exp).tipo = T_ERROR;
        SIMB s = obtenerTDS((yyvsp[-2].ident));
		if (s.tipo == T_ERROR) 
			yyerror("Objeto no declarado");
		else if (!( (s.tipo == (yyvsp[0].exp).tipo && s.tipo == T_ENTERO)||(s.tipo == (yyvsp[0].exp).tipo && s.tipo == T_LOGICO) ))
			yyerror("Error de tipos en la 'instruccionAsignacion'");
		else (yyval.exp).tipo = s.tipo;
        
        (yyval.exp).pos = creaVarTemp();
        emite(EASIG, crArgPos((yyvsp[0].exp).pos), crArgNul(), crArgPos((yyval.exp).pos));
        emite(EASIG, crArgPos((yyval.exp).pos), crArgNul(), crArgPos(s.desp)); 
    }
#line 1579 "asin.c" /* yacc.c:1646  */
    break;

  case 32:
#line 242 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = T_ERROR; }
#line 1585 "asin.c" /* yacc.c:1646  */
    break;

  case 33:
#line 246 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor;(yyval.exp).pos = (yyvsp[0].exp).pos;}
#line 1591 "asin.c" /* yacc.c:1646  */
    break;

  case 34:
#line 248 "src/asin.y" /* yacc.c:1646  */
    {
            (yyval.exp).tipo = T_ERROR;
            if ( (yyvsp[-2].exp).tipo != T_ERROR && (yyvsp[0].exp).tipo != T_ERROR )
            {
                if ( (yyvsp[-2].exp).tipo != (yyvsp[0].exp).tipo ) {
                    yyerror( "Los tipos no coinciden en la expresion" );                
                } else {
                    (yyval.exp).tipo = T_LOGICO;
                    if ((yyvsp[-1].cent) == OP_OR)
                        (yyval.exp).valor = (yyvsp[-2].exp).valor || (yyvsp[0].exp).valor ? TRUE : FALSE;
                    else if ((yyvsp[-1].cent) == OP_AND)
                        (yyval.exp).valor = (yyvsp[-2].exp).valor && (yyvsp[0].exp).valor ? TRUE : FALSE;

                   
                }
            }
            (yyval.exp).pos = creaVarTemp();
            int overrideValue = (yyvsp[-1].cent) == OP_AND ? FALSE : TRUE;
            emite(EASIG, crArgPos((yyvsp[0].exp).pos), crArgNul(), crArgPos((yyval.exp).pos));
            emite(EDIST, crArgPos((yyvsp[-2].exp).pos), crArgEnt(overrideValue), crArgEtq(si + 2));
            emite(EASIG, crArgEnt(overrideValue), crArgNul(), crArgPos((yyval.exp).pos));
        }
#line 1618 "asin.c" /* yacc.c:1646  */
    break;

  case 35:
#line 273 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor; (yyval.exp).pos = (yyvsp[0].exp).pos;}
#line 1624 "asin.c" /* yacc.c:1646  */
    break;

  case 36:
#line 275 "src/asin.y" /* yacc.c:1646  */
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
                    if ((yyvsp[-1].cent) == EIGUAL)
                        (yyval.exp).valor = (yyvsp[-2].exp).valor == (yyvsp[0].exp).valor ? TRUE : FALSE;
                    else if ((yyvsp[-1].cent) == EDIST)
                        (yyval.exp).valor = (yyvsp[-2].exp).valor != (yyvsp[0].exp).valor ? TRUE : FALSE;
                }
            }
            (yyval.exp).pos = creaVarTemp();
            emite(EASIG, crArgEnt(TRUE), crArgNul(), crArgPos((yyval.exp).pos));
            emite((yyvsp[-1].cent), crArgPos((yyvsp[-2].exp).pos), crArgPos((yyvsp[0].exp).pos), crArgEtq(si + 2));
            emite(EASIG, crArgEnt(FALSE), crArgNul(), crArgPos((yyval.exp).pos));
        }
#line 1650 "asin.c" /* yacc.c:1646  */
    break;

  case 37:
#line 299 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor; (yyval.exp).pos = (yyvsp[0].exp).pos; }
#line 1656 "asin.c" /* yacc.c:1646  */
    break;

  case 38:
#line 301 "src/asin.y" /* yacc.c:1646  */
    {
		(yyval.exp).tipo = T_ERROR;
		if ((yyvsp[-2].exp).tipo != T_ERROR && (yyvsp[0].exp).tipo != T_ERROR){
			if ((yyvsp[-2].exp).tipo != (yyvsp[0].exp).tipo) {
				yyerror("Los tipos de la expresion Relacional son diferentes");
			}
			else if ((yyvsp[-2].exp).tipo != T_ENTERO){
				yyerror("La expresion relacional con expresion logica, las expresiones relacionales solo trabajan con Enteros");
			}else{
				(yyval.exp).tipo = T_LOGICO;
				if ((yyvsp[-1].cent) == EMAY)
					(yyval.exp).valor = (yyvsp[-2].exp).valor > (yyvsp[0].exp).valor ? TRUE : FALSE;
				if ((yyvsp[-1].cent) == EMEN)
					(yyval.exp).valor = (yyvsp[-2].exp).valor < (yyvsp[0].exp).valor ? TRUE : FALSE;
				if ((yyvsp[-1].cent) == EMAYEQ)
					(yyval.exp).valor = (yyvsp[-2].exp).valor >= (yyvsp[0].exp).valor ? TRUE : FALSE;
				if ((yyvsp[-1].cent) == EMENEQ)
					(yyval.exp).valor = (yyvsp[-2].exp).valor <= (yyvsp[0].exp).valor ? TRUE : FALSE;		
			}
		}

        (yyval.exp).pos = creaVarTemp();
		emite(EASIG, crArgEnt(TRUE), crArgNul(), crArgPos((yyval.exp).pos));
		emite((yyvsp[-1].cent), crArgPos((yyvsp[-2].exp).pos), crArgPos((yyvsp[0].exp).pos), crArgEtq(si + 2));
		emite(EASIG, crArgEnt(FALSE), crArgNul(), crArgPos((yyval.exp).pos)); 

	}
#line 1688 "asin.c" /* yacc.c:1646  */
    break;

  case 39:
#line 331 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor;  (yyval.exp).pos = (yyvsp[0].exp).pos; }
#line 1694 "asin.c" /* yacc.c:1646  */
    break;

  case 40:
#line 333 "src/asin.y" /* yacc.c:1646  */
    {
	(yyval.exp).tipo = T_ERROR;
        if ((yyvsp[-2].exp).tipo != T_ERROR && (yyvsp[0].exp).tipo != T_ERROR) {
            if ((yyvsp[-2].exp).tipo != (yyvsp[0].exp).tipo) {
                yyerror("Los tipos de la expresion additiva no son iguales");
            } else if ((yyvsp[-2].exp).tipo != T_ENTERO) {
                yyerror("La Operacion Aditiva solo trabaja con tipo Entero");
            } else {
                (yyval.exp).tipo = T_ENTERO;

                if ((yyvsp[-1].cent) == ESUM)
                    (yyval.exp).valor = (yyvsp[-2].exp).valor + (yyvsp[0].exp).valor;
                else if ((yyvsp[-1].cent) == EDIF)
                    (yyval.exp).valor = (yyvsp[-2].exp).valor - (yyvsp[0].exp).valor;
            }
		}

        (yyval.exp).pos = creaVarTemp();
		emite((yyvsp[-1].cent), crArgPos((yyvsp[-2].exp).pos), crArgPos((yyvsp[0].exp).pos), crArgPos((yyval.exp).pos));
       }
#line 1719 "asin.c" /* yacc.c:1646  */
    break;

  case 41:
#line 356 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor; (yyval.exp).pos = (yyvsp[0].exp).pos;}
#line 1725 "asin.c" /* yacc.c:1646  */
    break;

  case 42:
#line 358 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = T_ERROR;
        if ((yyvsp[-2].exp).tipo != T_ERROR && (yyvsp[0].exp).tipo != T_ERROR) {
            if ((yyvsp[-2].exp).tipo != (yyvsp[0].exp).tipo) {
                yyerror("Tipos no coinciden en operacion multiplicativa");
            } else if ((yyvsp[-2].exp).tipo != T_ENTERO) {
                yyerror("Operacion multiplicativa solo acepta argumentos enteros");
            } else {
                (yyval.exp).tipo = T_ENTERO;

                if ((yyvsp[-1].cent) == EMULT)
                    (yyval.exp).valor = (yyvsp[-2].exp).valor * (yyvsp[0].exp).valor;
                if ((yyvsp[-1].cent) == EDIVI) {
                    if ((yyvsp[0].exp).valor == 0) {
                        (yyval.exp).tipo = T_ERROR;
                        yyerror("No se puede dividir entre 0");
                    } else {
                        (yyval.exp).valor = (yyvsp[-2].exp).valor / (yyvsp[0].exp).valor;
                    }
                    }if ((yyvsp[-1].cent) == RESTO) {
                        if ((yyvsp[0].exp).valor == 0) {
                            (yyval.exp).tipo = T_ERROR;
                            yyerror("No se puede dividir entre 0, y por tanto la operacion Modulo tampoco");
                        } else {
                            (yyval.exp).valor = (yyvsp[-2].exp).valor % (yyvsp[0].exp).valor;
                        }
                    }
            }
		} 
        (yyval.exp).pos = creaVarTemp();
		emite((yyvsp[-1].cent), crArgPos((yyvsp[-2].exp).pos), crArgPos((yyvsp[0].exp).pos), crArgPos((yyval.exp).pos)); 
	}
#line 1761 "asin.c" /* yacc.c:1646  */
    break;

  case 43:
#line 392 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[0].exp).tipo; (yyval.exp).valor = (yyvsp[0].exp).valor; (yyval.exp).pos = (yyvsp[0].exp).pos; }
#line 1767 "asin.c" /* yacc.c:1646  */
    break;

  case 44:
#line 394 "src/asin.y" /* yacc.c:1646  */
    { 
        (yyval.exp).tipo = T_ERROR;
        if ((yyvsp[0].exp).tipo != T_ERROR){
            if ((yyvsp[0].exp).tipo == T_ENTERO){
                if ((yyvsp[-1].cent) == OP_NOT){
                    yyerror("No se puede usar '!' en enteros");
                }else{
                    (yyval.exp).tipo = T_ENTERO;
                    if ((yyvsp[-1].cent) == ESUM) {
                        (yyval.exp).valor = (yyvsp[0].exp).valor;
                    }
                    if ((yyvsp[-1].cent) == EDIF) {
                        (yyval.exp).valor = -(yyvsp[0].exp).valor;
                    }
                }
            }
            if ((yyvsp[0].exp).tipo == T_LOGICO){
                if((yyvsp[-1].cent) == OP_NOT){
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

        (yyval.exp).pos = creaVarTemp();
        if ((yyvsp[-1].cent) == OP_NOT) {
            emite(EDIF, crArgEnt(1), crArgPos((yyvsp[0].exp).pos), crArgPos((yyval.exp).pos));
        } else {
            emite((yyvsp[-1].cent), crArgEnt(0), crArgPos((yyvsp[0].exp).pos), crArgPos((yyval.exp).pos));
        }

    }
#line 1810 "asin.c" /* yacc.c:1646  */
    break;

  case 45:
#line 433 "src/asin.y" /* yacc.c:1646  */
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

        (yyval.exp).pos = creaVarTemp();
		/* Primero se incrementa/decrementa y luego se copia a $$.pos */
		emite((yyvsp[-1].cent), crArgPos(simb.desp), crArgEnt(1), crArgPos(simb.desp));
		emite(EASIG, crArgPos(simb.desp), crArgNul(),  crArgPos((yyval.exp).pos));
    }
#line 1833 "asin.c" /* yacc.c:1646  */
    break;

  case 46:
#line 454 "src/asin.y" /* yacc.c:1646  */
    { (yyval.exp).tipo = (yyvsp[-1].exp).tipo; (yyval.exp).valor = (yyvsp[-1].exp).valor; (yyval.exp).pos = (yyvsp[-1].exp).pos;}
#line 1839 "asin.c" /* yacc.c:1646  */
    break;

  case 47:
#line 456 "src/asin.y" /* yacc.c:1646  */
    {
            (yyval.exp).tipo = T_ERROR;
            SIMB s = obtenerTDS((yyvsp[-1].ident));
            if(s.tipo == T_ERROR){
                yyerror("Variable no declarada.");
            }else if (s.tipo == T_ARRAY){
                yyerror("El array no tiene indices por los cuales acceder");
            }else{
                (yyval.exp).tipo = s.tipo;   
            }
            (yyval.exp).pos = creaVarTemp();
            /* Copiamos el valor a $$.pos y luego lo incrementales */
            emite(EASIG, crArgPos(s.desp), crArgNul(), crArgPos((yyval.exp).pos));
            emite((yyvsp[0].cent), crArgPos(s.desp), crArgNul(), crArgPos((yyval.exp).pos));
        }
#line 1859 "asin.c" /* yacc.c:1646  */
    break;

  case 48:
#line 472 "src/asin.y" /* yacc.c:1646  */
    {
            SIMB simb = obtenerTDS((yyvsp[-3].ident));
            (yyval.exp).tipo = T_ERROR;
            if (simb.tipo == T_ERROR){
                yyerror("Variable no declarada");
            }else if ( simb.tipo != T_ARRAY){
                yyerror("La variable no es un array, no se pueden poner indices");}
            else if((yyvsp[-1].exp).tipo != T_ENTERO)
                yyerror("Indice invalido para el array");
            else {
                if((yyvsp[-1].exp).tipo == T_ENTERO && (((yyvsp[-1].exp).valor < 0) || ((yyvsp[-1].exp).valor >= simb.nelem))){
                   yyerror("Indice invalido para el array");
                }else{
                    (yyval.exp).tipo = simb.telem; }
            }

            (yyval.exp).pos = creaVarTemp();
            emite(EAV, crArgPos(simb.desp), crArgPos((yyvsp[-1].exp).pos), crArgPos((yyval.exp).pos));

        }
#line 1884 "asin.c" /* yacc.c:1646  */
    break;

  case 49:
#line 493 "src/asin.y" /* yacc.c:1646  */
    {
        SIMB s = obtenerTDS((yyvsp[0].ident));
        (yyval.exp).tipo = T_ERROR;
        if(s.tipo == T_ERROR){
            yyerror("Variable no declarada.");    
        }else{
            (yyval.exp).tipo = s.tipo;
        }
        (yyval.exp).pos = s.desp;
    }
#line 1899 "asin.c" /* yacc.c:1646  */
    break;

  case 50:
#line 504 "src/asin.y" /* yacc.c:1646  */
    {
	
        (yyval.exp).valor = (int)(yyvsp[0].exp).valor; //Casting para truncar el valor(da igual el tipo)
        (yyval.exp).tipo  = (yyvsp[0].exp).tipo;
        (yyval.exp).pos = (yyvsp[0].exp).pos;
    }
#line 1910 "asin.c" /* yacc.c:1646  */
    break;

  case 51:
#line 513 "src/asin.y" /* yacc.c:1646  */
    {   (yyval.exp).valor = (int)(yyvsp[0].cent); //Casting para truncar el valor(da igual el tipo)
                    (yyval.exp).tipo  = T_ENTERO;
                    (yyval.exp).pos = creaVarTemp();
                    emite(EASIG, crArgEnt((yyval.exp).valor), crArgNul(), crArgPos((yyval.exp).pos));}
#line 1919 "asin.c" /* yacc.c:1646  */
    break;

  case 52:
#line 517 "src/asin.y" /* yacc.c:1646  */
    {   (yyval.exp).valor = TRUE; //Casting para truncar el valor(da igual el tipo)
                    (yyval.exp).tipo  = T_LOGICO;
                    (yyval.exp).pos = creaVarTemp();
                    emite(EASIG, crArgEnt((yyval.exp).valor), crArgNul(), crArgPos((yyval.exp).pos));}
#line 1928 "asin.c" /* yacc.c:1646  */
    break;

  case 53:
#line 521 "src/asin.y" /* yacc.c:1646  */
    {   (yyval.exp).valor = FALSE; //Casting para truncar el valor(da igual el tipo)
                    (yyval.exp).tipo  = T_LOGICO;
                    (yyval.exp).pos = creaVarTemp();
                    emite(EASIG, crArgEnt((yyval.exp).valor), crArgNul(), crArgPos((yyval.exp).pos));}
#line 1937 "asin.c" /* yacc.c:1646  */
    break;

  case 54:
#line 528 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EASIG;}
#line 1943 "asin.c" /* yacc.c:1646  */
    break;

  case 55:
#line 529 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = ESUM;}
#line 1949 "asin.c" /* yacc.c:1646  */
    break;

  case 56:
#line 530 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EDIF;}
#line 1955 "asin.c" /* yacc.c:1646  */
    break;

  case 57:
#line 531 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EMULT;}
#line 1961 "asin.c" /* yacc.c:1646  */
    break;

  case 58:
#line 532 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EDIVI;}
#line 1967 "asin.c" /* yacc.c:1646  */
    break;

  case 59:
#line 536 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_AND;}
#line 1973 "asin.c" /* yacc.c:1646  */
    break;

  case 60:
#line 537 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_OR;}
#line 1979 "asin.c" /* yacc.c:1646  */
    break;

  case 61:
#line 541 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EIGUAL;}
#line 1985 "asin.c" /* yacc.c:1646  */
    break;

  case 62:
#line 542 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EDIST;}
#line 1991 "asin.c" /* yacc.c:1646  */
    break;

  case 63:
#line 546 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EMAY;}
#line 1997 "asin.c" /* yacc.c:1646  */
    break;

  case 64:
#line 547 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EMEN;}
#line 2003 "asin.c" /* yacc.c:1646  */
    break;

  case 65:
#line 548 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EMAYEQ;}
#line 2009 "asin.c" /* yacc.c:1646  */
    break;

  case 66:
#line 549 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EMENEQ;}
#line 2015 "asin.c" /* yacc.c:1646  */
    break;

  case 67:
#line 553 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = ESUM;}
#line 2021 "asin.c" /* yacc.c:1646  */
    break;

  case 68:
#line 554 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EDIF;}
#line 2027 "asin.c" /* yacc.c:1646  */
    break;

  case 69:
#line 558 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EMULT;}
#line 2033 "asin.c" /* yacc.c:1646  */
    break;

  case 70:
#line 559 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EDIVI;}
#line 2039 "asin.c" /* yacc.c:1646  */
    break;

  case 71:
#line 560 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = RESTO;}
#line 2045 "asin.c" /* yacc.c:1646  */
    break;

  case 72:
#line 564 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = ESUM;}
#line 2051 "asin.c" /* yacc.c:1646  */
    break;

  case 73:
#line 565 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EDIF;}
#line 2057 "asin.c" /* yacc.c:1646  */
    break;

  case 74:
#line 566 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = OP_NOT;}
#line 2063 "asin.c" /* yacc.c:1646  */
    break;

  case 75:
#line 570 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = ESUM;}
#line 2069 "asin.c" /* yacc.c:1646  */
    break;

  case 76:
#line 571 "src/asin.y" /* yacc.c:1646  */
    { (yyval.cent) = EDIF;}
#line 2075 "asin.c" /* yacc.c:1646  */
    break;


#line 2079 "asin.c" /* yacc.c:1646  */
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
#line 574 "src/asin.y" /* yacc.c:1906  */

