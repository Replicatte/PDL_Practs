/*****************************************************************************/
/**  Ejemplo de FLEX: S E M - 1             2018-2019 <jbenedi@dsic.upv.es> **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "asin.h"

%}
/*----------------------------------------------------------------------
  Dado que las funciones "input()" y "unput(c)" son costosas y no las
  utilizaremos, evitaremos que se generen automaticamente sus rutinas
  correspondientes desactivandolas mediante las siguientes opciones:
----------------------------------------------------------------------*/
%option noinput
%option nounput
/*----------------------------------------------------------------------
  Para mantener el numero de linea actual en la variable global yylineno
----------------------------------------------------------------------*/
%option yylineno

delimitador     	[ \t\n]+
digito          	[0-9]
mayuscula		[A-Z]	
minuscula		[a-z]
identificador		{minuscula}({minuscula}|{mayuscula}|_|{digito})*
constante       	({digito}+(\.{digito}*)?)|({digito}*\.{digito}+)
comentario		\/\/.*

%%

{delimitador}   {ECHO; }
{comentario}	{ECHO; }


"read"		{ ECHO; return(READ_);}
"print"		{ ECHO; return(PRINT_);}
"if"		{ ECHO; return(IF_);}
"else"		{ ECHO; return(ELSE_);}
"for"		{ ECHO; return(FOR_);}
"id"		{ ECHO; return(ENTERO_);}
"int"		{ ECHO; return(ENTERO_);}
"bool"		{ ECHO; return(BOOL_);}
"true"		{ ECHO; return(TRUE_);}
"false"		{ ECHO; return(FALSE_);}
"="		{ ECHO; return(IGUAL_);}
"+="		{ ECHO; return(MASIGUAL_);}
"-="		{ ECHO; return(MENOSIGUAL_);}
"*="		{ ECHO; return(PRODIGUAL_);}
"/="		{ ECHO; return(DIVIGUAL_);}	
"&&"		{ ECHO; return(AND_);}
"||"		{ ECHO; return(OR_);}
"=="		{ ECHO; return(EQUALS_);}
"!="		{ ECHO; return(NOTEQUALS_);}
">"		{ ECHO; return(MAYOR_);}
"<"		{ ECHO; return(MENOR_);}
">="		{ ECHO; return(MAYORIGUAL_);}
"<="		{ ECHO; return(MENORIGUAL_);}
"%"		{ ECHO; return(PORCENT_);}
"!"		{ ECHO; return(NOT_);}
"++"		{ ECHO; return(INCRE_);}
"--"		{ ECHO; return(DECRE_);}
"+"             { ECHO; return(MAS_);}
"-"             { ECHO; return(MENOS_);}
"*"             { ECHO; return(POR_);}
"/"             { ECHO; return(DIV_);}
"("             { ECHO; return(PARENI_);}
")"             { ECHO; return(PAREND_);}
"["		{ ECHO; return(CORXETEI_);}
"]"		{ ECHO; return(CORXETED_);}
"{"		{ ECHO; return(CURLYI_);}
"}"		{ ECHO; return(CURLYD_);}
";"		{ ECHO; return(SEMICOLON_);}


{identificador}	{ ECHO; return(ID_); }
{constante}	{ ECHO; return(CTE_); }


.               {yyerror("Caracter desconocido");}
%%
