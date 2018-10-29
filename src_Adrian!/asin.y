/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          2018-2019 <jbenedi@dsic.upv.es> **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
%}

%token MAS_ MENOS_ POR_ DIV_ PARA_ PARC_ IGUAL_ NOIGUAL_ MASIGUAL_ MENOSIGUAL_ PORIGUAL_ DIVIGUAL_ 
%token INCREMENTO_ DECREMENTO_ AND_ OR_ MENOR_ MAYOR_ MENORIG_ MAYORIG_ MODULO_ NO_ ASIG_ 
%token LLAVEA_ LLAVEC_ CORCHETEA_ CORCHETEC_ PUNTCOMA_ INT_ BOOL_ TRUE_ FALSE_ IF_ ELSE_ FOR_ READ_ PRINT_

%token CTE_ ID_

%%
programa
	: LLAVEA_ secuenciaSentencias LLAVEC_
	;

secuenciaSentencias
	: sentencia | secuenciaSentencias sentencia
	;

sentencia
	: declaracion | instruccion
	;
	
declaracion	
	: tipoSimple ID_ PUNTCOMA_ | tipoSimple ID_ ASIG_ constante PUNTCOMA_ | tipoSimple ID_ CORCHETEA_ CTE_ CORCHETEC_ PUNTCOMA_
	;
	
tipoSimple
	: INT_ | BOOL_
	;

instruccion
	: LLAVEA_ listaInstrucciones LLAVEC_ | instruccionEntradaSalida | instruccionAssignacion
	| instruccionSeleccion | instrccionIteraccion
	;

listaInstrucciones
	: listaInstrucciones instruccion | /*INSTRUCCION VACIA */
	;

instruccionAssignacion
	: ID_ operadorAsignacion expresion PUNTCOMA_ 
	| ID_ CORCHETEA_ expresion CORCHETEC_ operadorAsignacion expresion PUNTCOMA_
	;

instruccionEntradaSalida
	: READ_ PARA_ ID_ PARC_ PUNTCOMA_ | PRINT_ PARA_ expresion PARC_ PUNTCOMA_
	;
	
instruccionSeleccion
	: IF_ PARA_ expresion PARC_ instruccion ELSE_ instruccion
	;
	
instrccionIteraccion
	: FOR_ PARA_ expresionOpcional PUNTCOMA_ expresion PUNTCOMA_ expresionOpcional PARC_ instruccion
	;
expresionOpcional
	: expresion | ID_ ASIG_ expresion | /*INSTRUCCION VACIA */
	;
	
expresion
	:expresionIgualdad | expresion operadorLogico expresionIgualdad
	;
	
expresionIgualdad
	: expresionRelacional | expresionIgualdad operadorIgualdad expresionRelacional
	;

expresionRelacional
	: expresionAditiva | expresionRelacional operadorRelacional expresionAditiva
	;
	
expresionAditiva
	: expresionMultiplicativa | expresionAditiva operadorAditivo expresionMultiplicativa
	;

expresionMultiplicativa
	: expresionUnitaria | expresionMultiplicativa operadorMultiplicativo expresionUnitaria
	;
	
expresionUnitaria
	: expresionSufija | operadorUnario expresionUnitaria | operadorIncremento ID_
	;
	
expresionSufija
	: PARA_ expresion PARC_ | ID_ operadorIncremento | ID_ CORCHETEA_ expresion CORCHETEC_ | ID_ | constante 
	;
	
constante
	: CTE_ | TRUE_ | FALSE_
	;

operadorAsignacion
	: ASIG_ | MASIGUAL_ | MENOSIGUAL_ | PORIGUAL_ | DIVIGUAL_
	;
	
operadorLogico
	: AND_ | OR_
	;

operadorIgualdad
	: IGUAL_ | NOIGUAL_
	;

operadorRelacional
	: MENOR_ | MAYOR_ | MAYORIG_ | MENORIG_
	;
	
operadorAditivo
	: MAS_ | MENOS_
	;

operadorMultiplicativo
	: POR_ | DIV_ | MODULO_
	;
	
operadorUnario
	: MAS_ | MENOR_ | NO_
	;
	
operadorIncremento
	: INCREMENTO_ | DECREMENTO_
	;


	
%%
/*****************************************************************************/

