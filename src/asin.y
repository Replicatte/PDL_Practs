/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          2018-2019 <jbenedi@dsic.upv.es> **/
/*----------------------FOR EXECUTING:	-------------------------------------*/
/*      					                             */
/*      /ejemplo make						             */
/*      /ejemplo ./cmc ejem1						     */
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
%}

%token IGUAL_ MASIGUAL_ MENOSIGUAL_ PRODIGUAL_ DIVIGUAL_ 
%token MAS_ MENOS_ POR_ DIV_ PORCENT_ INCRE_ DECRE_
%token EQUALS_ NOTEQUALS_ MAYOR_ MENOR_ MAYORIGUAL_ MENORIGUAL_
%token AND_ OR_ NOT_ TRUE_ FALSE_
%token READ_ PRINT_ IF_ FOR_ ELSE_
%token BOOL_ ENTERO_ 
%token CTE_ ID_
%token PARENI_ PAREND_ CORXETEI_ CORXETED_ CURLYI_ CURLYD_ SEMICOLON_

%%

programa    : CURLYI_ secuenciaSentencias CURLYD_
            ;

secuenciaSentencias : sentencia
                    | secuenciaSentencias sentencia
                    ;

sentencia   : declaracion
            | instruccion
            ;

declaracion : tipoSimple ID_ SEMICOLON_
            | tipoSimple ID_ IGUAL_ constante SEMICOLON_
            | tipoSimple ID_ CORXETEI_ CTE_ CORXETED_ SEMICOLON_
            ;

tipoSimple  : ENTERO_ 
            | BOOL_
            ;

instruccion : CURLYI_ listaIntrucciones CURLYD_
            | instruccionEntradaSalida
            | instruccionAsignacion
            | instruccionSeleccion
            | instruccionIteracion
            ;

listaIntrucciones   : listaIntrucciones instruccion
                    | /*Vacio*/
                    ;

instruccionAsignacion   : ID_ operadorAsignacion expresion SEMICOLON_
                        | ID_ CORXETEI_ expresion CORXETED_ operadorAsignacion expresion SEMICOLON_
                        ;

instruccionEntradaSalida    : READ_ PARENI_ ID_ PAREND_ SEMICOLON_
                            | PRINT_ PARENI_ expresion PAREND_ SEMICOLON_
                            ;

instruccionSeleccion    : IF_ PARENI_ expresion PAREND_ instruccion ELSE_ instruccion
                        ;


instruccionIteracion : FOR_ PARENI_ expresionOpcional SEMICOLON_ expresion SEMICOLON_ expresionOpcional PAREND_ instruccion
                     ;

expresionOpcional   : expresion
                    | ID_ IGUAL_ expresion
                    | /*Vacio*/
                    ; 

expresion   : expresionIgualdad
            | expresion operadorLogico expresionIgualdad
            ;    

expresionIgualdad   : expresionRelacional
                    | expresionIgualdad operadorIgualdad expresionRelacional
                    ;

expresionRelacional : expresionAditiva
                    | expresionRelacional operadorRelacional expresionAditiva
                    ;

expresionAditiva    : expresionMultiplicativa
                    | expresionAditiva operadorAditivo expresionMultiplicativa
                    ;

expresionMultiplicativa : expresionUnaria
                        | expresionMultiplicativa operadorMultiplicativo expresionUnaria
                        ;

expresionUnaria : expresionSufija
                | operadorUnario expresionUnaria
                | operadorIncremento ID_
                ;

expresionSufija : PARENI_ expresion PAREND_ 
                | ID_ operadorIncremento
                | ID_ CORXETEI_ expresion CORXETED_
                | ID_
                | constante
                ;

constante   : CTE_
            | TRUE_
            | FALSE_
            ;

operadorAsignacion  : IGUAL_
                    | MASIGUAL_
                    | MENOSIGUAL_
                    | PRODIGUAL_
                    | DIVIGUAL_
                    ;

operadorLogico  : AND_
                | OR_
                ;

operadorIgualdad    : EQUALS_
                    | NOTEQUALS_
                    ;

operadorRelacional  : MAYOR_
                    | MENOR_
                    | MAYORIGUAL_
                    | MENORIGUAL_
                    ;

operadorAditivo : MAS_
                | MENOS_
                ;

operadorMultiplicativo  : POR_
                        | DIV_
                        | PORCENT_
                        ;

operadorUnario  : MAS_
                | MENOS_
                | NOT_
                ;

operadorIncremento  : INCRE_
                    | DECRE_
                    ;



%%

void yyerror(const char *msg)
/*  Tratamiento de errores.                                                  */
{  fprintf(stderr, "\nError en la linea %d: %s\n", yylineno, msg); }


int main (int argc, char **argv) 
/* Gestiona la linea de comandos e invoca al analizador sintactico-semantico.*/
{
  if (argc==2)
  if ((yyin = fopen (argv[1], "r")) == NULL) 
    fprintf (stderr, "Fichero no valido <%s>\n", argv[1]);
    else yyparse();
  else fprintf (stderr, "Uso: %s <fichero>\n",argv[0]);

  return (0);
}

