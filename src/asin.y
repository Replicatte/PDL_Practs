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
    {
        if ( !insTSimpleTDS($2,$1,dvar) )
            yyerror ("Identificador repetido");
        else dvar += TALLA_TIPO_SIMPLE; 
    }
    | tipoSimple ID_ ASIG_ constante PUNTOCOMA_
    {
        if ($1 != $4.type)
           yyerror ("Error de Tipos");
        else
        {
            if ( !insTSimpleTDS($2,$1,dvar) )
                yyerror ("Identificador repetido");
            else dvar += TALLA_TIPO_SIMPLE;
         
        } 
    }
    | tipoSimple ID_ CORCHETEA_ CTE_ CORCHETEC_ PUNTOCOMA_ 
    {
        int numelem = $4;
        if (numelem <= 0)
            {
                yyerror("Talla inapropiada del array");
                numelem = 0;
            }
        if ( !insTVectorTDS($2, T_ARRAY, dvar, $1, numelem) )
            yyerror ("Identificador repetido");
        else dvar += numelem * TALLA_TIPO_SIMPLE;}
    ;

tipoSimple
    : INT_ { $$ = T_ENTERO; }
    | BOOL_  { $$ = T_LOGICO; }
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
	{ 	SIMB sim = obtenerTDS($1);
		if (sim.tipo == T_ERROR) 
			yyerror("Objeto no declarado");
		else if (!((sim.tipo == $3 == T_ENTERO)||(sim.tipo == $3 == T_LOGICO)))
			yyerror("Error de tipos en la 'instruccionAsignacion'");
		else $$ = sim.tipo;
	}
    | ID_ CORCHETEA_ expresion CORCHETEC_ operadorAsignacion expresion PUNTOCOMA_
	{
		SIMB sim = obtenerTDS($1);
		if (sim.tipo == T_ERROR) 
			yyerror("Objeto no declarado");
		else if if (!((sim.tipo == $6 == T_ENTERO)||(sim.tipo == $6 == T_LOGICO)))
			yyerror("Error de tipos en la 'instruccionAsignacion'");
		else $$ = sim.tipo;
	}
    ;

instruccionEntradaSalida
    : READ_ PARA_ ID_ PARC_ PUNTOCOMA_
        { SIM simb = obtenerTDS($3);
        if (simb.tipo == T_ERROR)
            yyerror("Tipo no declarado");
        else if (simb.tipo != T_ENTERO)
            yyerror("La funcion REhttps://github.com/Replicatte/PDL_PractsAD esperaba una variable entera");
        }
    | PRINT_ PARA_ expresion PARC_ PUNTOCOMA_
        {
        if ($3.tipo != T_ENTERO)
            yyerror("La funcion PRINT esperaba una variable entera");
        }
    ;

instruccionSeleccion
    : IF_ PARA_ expresion PARC_ 
        { if ($3.tipo != T_ERROR && $3.tipo != T_LOGICO) yyerror("La expresion del if debe ser de tipo logica"); }        
        instruccion ELSE_ instruccion
    ;

instruccionIteracion
    : FOR_ PARA_ expresionOpcional PUNTOCOMA_ expresion PUNTOCOMA_ expresionOpcional PARC_ instruccion
	{
		{ if ($3.tipo != T_ERROR && $3.tipo != T_LOGICO)
			yyerror("La Guarda del bucle for tiene que ser logica"); }
	}
    ;

expresionOpcional
    : expresion	{ $$.tipo = $1.tipo; $$.valor = $1.valor; $$.valid = $1.valid; } /* No estoy seguro de este , Adrian*/
    | ID_ ASIG_ expresion /*Pegarle un vistazo ha esta expresion que no se me ocurre como puede ser (A = True && False) una cosa asi*/
    |
    ;

expresion
    : expresionIgualdad { $$.tipo = $1.tipo; $$.valor = $1.valor; $$.valid = $1.valid; } /* No estoy seguro de este , Adrian*/
    | expresion operadorLogico expresionIgualdad 
		{
            $$.tipo = T_ERROR;
            if ( $1.tipo != T_ERROR && $3.tipo != T_ERROR )
            {
                if ( $1.tipo != $3.tipo ) {
                    yyerror( "Los tipos no coinciden en la expresion" );                
                } else {
                    $$.tipo = T_LOGICO;
                    if ($1.valid == TRUE && $3.valid == TRUE) {
                        if ($2 == OP_OR)
                            $$.valor = $1.valor || $3.valor ? TRUE : FALSE;
                        else if ($2 == OP_AND)
                            $$.valor = $1.valor && $3.valor ? TRUE : FALSE;
                        $$.valid = TRUE;
                    } else $$.valid = FALSE;
                }
            }
        }/* No estoy seguro de este , Adrian*/
    ;

expresionIgualdad
    : expresionRelacional { $$.tipo = $1.tipo; $$.valor = $1.valor; $$.valid = $1.valid; }
    | expresionIgualdad operadorIgualdad expresionRelacional
        {
            $$.tipo = T_ERROR;
            if ( $1.tipo != T_ERROR && $3.tipo != T_ERROR )
            {
                if ( $1.tipo != $3.tipo ) {
                    yyerror( "Los tipos no coinciden en la igualdad" );
                } else if ( $1.tipo == T_ARRAY ) {
                    yyerror( "El operador de igualdad no se puede aplicar en los arrays" );                
                } else {
                    $$.tipo = T_LOGICO;
                    if ($1.valid == TRUE && $3.valid == TRUE) {
                        if ($2 == OP_IGUAL)
                            $$.valor = $1.valor == $3.valor ? TRUE : FALSE;
                        else if ($2 == OP_NOT)
                            $$.valor = $1.valor != $3.valor ? TRUE : FALSE;
                        $$.valid = TRUE;
                    } else $$.valid = FALSE;
                }
            }
        }
    ;

expresionRelacional
    : expresionAditiva { $$.tipo = $1.tipo; $$.valor = $1.valor; $$.valid = $1.valid; }
    | expresionRelacional operadorRelacional expresionAditiva
	{
		$$.tipo = T_ERROR;
		if ($1.tipo != T_ERROR && $3.tipo != T_ERROR){
			if ($1.tipo != $3.tipo) {
				yyerror("Los tipos de la expresion Relacional son diferentes");
			}
			else if ($1.tipo = T_LOGICO){
				yyerror("La expresion relacional con expresion logica, las expresiones relacionales solo trabajan con Enteros")
			}else{
				$$.tipo = T_LOGICO;
				if (($1.valid && $3.valid) == TRUE){
					if ($2 == OP_MAYOR)
						$$.valor = $1.valor > $3.valor ? TRUE : FALSE;
					if ($2 == OP_MENOR)
						$$.valor = $1.valor < $3.valor ? TRUE : FALSE;
					if ($2 == OP_MAYORIG)
						$$.valor = $1.valor >= $3.valor ? TRUE : FALSE;
					if ($2 == OP_MENORIG)
						$$.valor = $1.valor <= $3.valor ? TRUE : FALSE;
					$$.valid = TRUE;			
				}else{$$.valid = FALSE;}			
			}
		}
	}
    ;

expresionAditiva 
    : expresionMultiplicativa { $$.tipo = $1.tipo; $$.valor = $1.valor; $$.valid = $1.valid; }
    | expresionAditiva operadorAditivo expresionMultiplicativa
	{
		$$.tipo = T_ERROR;
        if ($1.tipo != T_ERROR && $3.tipo != T_ERROR) {
            if ($1.tipo != $3.tipo) {
                yyerror("Los tipos de la expresion additiva no son iguales");
            } else if ($1.tipo != T_ENTERO) {
                yyerror("La Operacion Aditiva solo trabaja con tipo Entero");
            } else {
                $$.tipo = T_ENTERO;
                if (($1.valid && $3.valid) == TRUE) {
                    if ($2 == OP_SUMAR)
                        $$.valor = $1.valor + $3.valor;
                    else if ($2 == OP_RESTAR)
                        $$.valor = $1.valor - $3.valor;
                    $$.valid = TRUE;
                } else $$.valid = FALSE;
            }
		}	
	}
    ;

expresionMultiplicativa
    : expresionUnaria { $$.tipo = $1.tipo; $$.valor = $1.valor; $$.valid = $1.valid; }
    | expresionMultiplicativa operadorMultiplicativo expresionUnaria
	{ $$.tipo = T_ERROR;
        if ($1.tipo != T_ERROR && $3.tipo != T_ERROR) {
            if ($1.tipo != $3.tipo) {
                yyerror("Tipos no coinciden en operacion multiplicativa");
            } else if ($1.tipo != T_ENTERO) {
                yyerror("Operacion multiplicativa solo acepta argumentos enteros");
            } else {
                $$.tipo = T_ENTERO;
                if (($1.valid && $3.valid) == TRUE) {
                    if ($2 == OP_MULTIPLICAR)
                        $$.valor = $1.valor * $3.valor;
                    if ($2 == OP_DIVIDIR) {
                        if ($3.valor == 0) {
                            $$.tipo = T_ERROR;
                            yyerror("No se puede dividir entre 0");
                        } else {
                            $$.valor = $1.valor / $3.valor;
                        }
                    }if ($2 == OP_MOD) {
                        if ($3.valor == 0) {
                            $$.tipo = T_ERROR;
                            yyerror("No se puede dividir entre 0, y por tanto la operacion Modulo tampoco");
                        } else {
                            $$.valor = $1.valor % $3.valor;
                        }
                    }
                    $$.valid = TRUE;
                } else $$.valid = FALSE;
            }
		} 
	}
    ;

expresionUnaria
    : expresionSufija { $$.tipo = $1.tipo; $$.valor = $1.valor; $$.valid = $1.valid; }
    | operadorUnario expresionUnaria
    | operadorIncremento ID_
    ;

expresionSufija
    : PARA_ expresion PARC_ { $$.tipo = $2.tipo; $$.valor = $2.valor; $$.valid = $2.valid; }
    | ID_ operadorIncremento
    | ID_ CORCHETEA_ expresion CORCHETEC_
    | ID_
    | constante
    ;

constante
    : CTE_      { $$.valor = $<cent>1;	$$.tipo = T_ENTERO; $$.valid = TRUE; }
    | TRUE_     { $$.valor = TRUE;	$$.tipo = T_LOGICO; $$.valid = TRUE; }
    | FALSE_    { $$.valor = FALSE;	$$.tipo = T_LOGICO; $$.valid = TRUE; }
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

operadorIgualdad
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
