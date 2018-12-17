/*****************************************************************************/
/**   Ejemplo de un posible fichero de cabeceras ("header.h") donde situar  **/
/** las definiciones de constantes, variables y estructuras para MenosC.18  **/
/** Los alumos deberan adaptarlo al desarrollo de su propio compilador.     **/ 
/*****************************************************************************/
#ifndef _HEADER_H
#define _HEADER_H

/* General */
#define TRUE  1
#define FALSE 0
#define TALLA_TIPO_SIMPLE 1
/* Constantes Operacionales */
#define OP_ASIG 2
#define OP_MASIGUAL 3
#define OP_MENOSIGUAL 4
#define OP_PORIGUAL 5
#define OP_DIVIGUAL 6
/* ****************************OP_LOGICAS ************** */
#define OP_AND 7
#define OP_OR 8
/****************************OP_IGUALDAD **************/
#define OP_IGUAL 9
#define OP_NOTIGUAL 10
/************************ RELACIONAL*************/
#define OP_MAYOR 11
#define OP_MENOR 12
#define OP_MAYORIG 13
#define OP_MENORIG 14
/**************** OP_ARITMETICAS *******/
#define OP_SUMAR 15
#define OP_RESTAR 16
#define OP_MULTIPLICAR 17
#define OP_DIVIDIR 18
#define OP_MODULO 19
/************** OPERADORES UNARIOS ******/
#define OP_MAS 20
#define OP_MENOS 21
#define OP_NOT 22
/***************OP_INCREMENTOS*******/
#define OP_INCREMENTO 23
#define OP_DECREMENTO 24
/************* DEFINICIONES ERRORES *******/

/* TODO JAG: Necesario? Se pueden escribir directamente sobre la funcion yyerror aunque se reutilizen */

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
extern void yyerror(const char * msg);   /* Tratamiento de errores          */

extern int verbosidad;              /* Flag para saber si se desea una traza */
extern int numErrores;              /* Contador del numero de errores        */

#endif  /* _HEADER_H */
/*****************************************************************************/
