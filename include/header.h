/*****************************************************************************/
/**   Ejemplo de un posible fichero de cabeceras ("header.h") donde situar  **/
/** las definiciones de constantes, variables y estructuras para MenosC.18  **/
/** Los alumos deberan adaptarlo al desarrollo de su propio compilador.     **/ 
/*****************************************************************************/
#ifndef _HEADER_H
#define _HEADER_H

/****************************************************** Constantes generales */
#define TRUE  1
#define FALSE 0
#define TALLA_TIPO_SIMPLE 1
/***************************************************** Constantes de Operacion*/
#define OP_ASIG 0
#define OP_MASIGUAL 1
#define OP_MENOSIGUAL 2
#define OP_PORIGUAL 3
#define OP_DIVIGUAL 4
/***************************** OP_LOGICAS *******************/
#define OP_AND 0
#define OP_OR 1
/****************************OP_IGUALDAD **************/
#define OP_IGUAL 0
#define OP_NOT 1
/************************ RELACIONAL*************/
#define OP_MAYOR 0
#define OP_MENOR 1
#define OP_MAYORIG 2
#define OP_MENORIG 3
/**************** OP_ARITMETICAS *******/
#define OP_SUMAR 0
#define OP_RESTAR 1
#define OP_MULTIPLICAR 2
#define OP_DIVIDIR 3
#define OP_MODULO 4
/************** OPERADORES UNARIOS ******/
#define OP_MAS 0
#define OP_MENOS 1
#define OP_NOT 2
/***************OP_INCREMENTOS*******/
#define OP_INCREMENTO 1
#define OP_DECREMENTO 0
/************* DEFINICIONES ERRORES *******/
//PARA HACER!!
/******** ESTRUCTURA PARA LAS EXPRESIONES *********/
typedef struct exp {
    int valor;
    int tipo;
    int valid;
} EXP;
/************************************* Variables externas definidas en el AL */
extern int yylex();
extern int yyparse();

extern FILE *yyin;
extern int   yylineno;
extern char *yytext;
/********************* Variables externas definidas en el Programa Principal */
extern void yyerror(const char * msg) ;   /* Tratamiento de errores          */

extern int verbosidad;              /* Flag para saber si se desea una traza */
extern int numErrores;              /* Contador del numero de errores        */

#endif  /* _HEADER_H */
/*****************************************************************************/
