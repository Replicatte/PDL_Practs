/*****************************************************************************/
/**  Analizador Sintactico - Bison          2018-2019 <angalga2@inf.upv.es> **/
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
    : LLAVEA_ secuenciaSentencias LLAVEC_
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
    : CTE_
    | TRUE_
    | FALSE_
    ;

operadorAsignacion
    : ASIG_
    | MASIGUAL_
    | MENOSIGUAL_
    | PORIGUAL_
    | DIVIGUAL_
    ;

operadorLogico
    : AND_
    | OR_
    ;

operadorIgualdad
    : IGUAL_
    | DIFERENTE_
    ;

operadorRelacional
    : MAYOR_
    | MENOR_
    | MAYORIGUAL_
    | MENORIGUAL_
    ;

operadorAditivo
    : MAS_
    | MENOS_
    ;

operadorMultiplicativo
    : POR_
    | DIV_
    | MOD_
    ;

operadorUnario
    : MAS_
    | MENOS_
    | NOT_
    ;

operadorIncremento
    : INCREMENTO_
    | DECREMENTO_
    ;

%%
