/*****************************************************************************/
/**  Analizador Sintactico - Bison          2018-2019 <angalga2@inf.es> **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
%}

%token ID_ CTE_
%token MAS_ MENOS_ POR_ DIV_ ASIG_
%token MENOR_ MAYOR_ MOD_ NOT_ AND_ OR_
%token MASIGUAL_ MENOSIGUAL_ PORIGUAL_ DIVIGUAL_ IGUAL_ MENORIGUAL_ MAYORIGUAL_ DIFERENTE_
%token INCREMENTO_ DECREMENTO_
%token PARA_ PARC_ LLAVEA_ LLAVEC_ CORCHETEA_ CORCHETEC_ PUNTOCOMA_
%token INT_ BOOL_ READ_ PRINT_ IF_ FOR_ TRUE_ FALSE_ ELSE_

%%


programa
    : LLAVEA_ secuenciaSentencias LLAVEC_ { printf("\nValor del programa?= %d\n",$2); }
    ;

secuenciaSentencias
    : sentencia
    | secuenciaSentencias sentencia
    ;

sentencia
    : declaracion
    | instruccion
    ;

declaracion
    : tipoSimple ID_ PUNTOCOMA_
    | tipoSimple ID_ ASIG_ constante PUNTOCOMA_
    | tipoSimple ID_ CORCHETEA_ CTE_ CORCHETEC_ PUNTOCOMA_
    ;

tipoSimple
    : INT_ 
    | BOOL_
    ;

instruccion
    : LLAVEA_ listaInstrucciones LLAVEC_
    | instruccionEntradaSalida
    | instruccionAsignacion
    | instruccionSeleccion
    | instruccionIteracion
    ;

listaInstrucciones
    : listaInstrucciones instruccion
    |
    ;


instruccionAsignacion
    : ID_ operadorAsignacion expresion PUNTOCOMA_
    | ID_ CORCHETEA_ expresion CORCHETEC_ operadorAsignacion expresion PUNTOCOMA_
    ;

instruccionEntradaSalida
    : READ_ PARA_ ID_ PARC_ PUNTOCOMA_
    | PRINT_ PARA_ expresion PARC_ PUNTOCOMA_
    ;

instruccionSeleccion
    : IF_ PARA_ expresion PARC_ instruccion ELSE_ instruccion
    ;

instruccionIteracion
    : FOR_ PARA_ expresionOpcional PUNTOCOMA_ expresion PUNTOCOMA_ expresionOpcional PARC_ instruccion
    ;

expresionOpcional
    : expresion
    | ID_ ASIG_ expresion
    |
    ;

expresion
    : expresionIgualdad
    | expresion operadorLogico expresionIgualdad
    ;

expresionIgualdad
    : expresionRelacional
    | expresionIgualdad operadorIgualdad expresionRelacional
    ;

expresionRelacional
    : expresionAditiva
    | expresionRelacional operadorRelacional expresionAditiva
    ;

expresionAditiva
    : expresionMultiplicativa
    | expresionAditiva operadorAditivo expresionMultiplicativa
    ;

expresionMultiplicativa
    : expresionUnaria
    | expresionMultiplicativa operadorMultiplicativo expresionUnaria
    ;

expresionUnaria
    : expresionSufija
    | operadorUnario expresionUnaria
    | operadorIncremento ID_
    ;

expresionSufija
    : PARA_ expresion PARC_
    | ID_ operadorIncremento
    | ID_ CORCHETEA_ expresion CORCHETEC_
    | ID_
    | constante
    ;

constante
    : CTE_      { $$.val = $<cent>1; $$.type = T_ENTERO;}
    | TRUE_     { $$.val = $<cent>1; $$.type = T_LOGICO;}
    | FALSE_    { $$.val = $<cent>1; $$.type = T_LOGICO;}
    ;

operadorAsignacion
    : ASIG_         { $$ = OP_ASIG}
    | MASIGUAL_     { $$ = OP_MASIGUAL}
    | MENOSIGUAL_   { $$ = OP_MENOSIGUAL}
    | PORIGUAL_     { $$ = OP_PORIGUAL}
    | DIVIGUAL_     { $$ = OP_DIVIGUAL}
    ;

operadorLogico
    : AND_      { $$ = OP_AND}
    | OR_       { $$ = OP_OR}
    ;

operadorIguald $$.valor = $1.valor * $3.valor;ad
    : IGUAL_        { $$ = OP_IGUAL}
    | DIFERENTE_    { $$ = OP_NOT}
    ;

operadorRelacional
    : MAYOR_        { $$ = OP_MAYOR}
    | MENOR_        { $$ = OP_MENOR}
    | MAYORIGUAL_   { $$ = OP_MAYORIG}
    | MENORIGUAL_   { $$ = OP_MENORIG}
    ;

operadorAditivo
    : MAS_      { $$ = OP_SUMAR}
    | MENOS_    { $$ = OP_RESTAR}
    ;

operadorMultiplicativo
    : POR_      { $$ = OP_MULTIPLICAR}
    | DIV_      { $$ = OP_DIVIDIR}
    | MOD_      { $$ = OP_MODULO}
    ;

operadorUnario
    : MAS_      { $$ = OP_MAS}
    | MENOS_    { $$ = OP_MENOS}
    | NOT_      { $$ = OP_NOT}
    ;

operadorIncremento
    : INCREMENTO_ { $$ = OP_INCREMENENTO}
    | DECREMENTO_ { $$ = OP_DECREMENTO}
    ;

%%
