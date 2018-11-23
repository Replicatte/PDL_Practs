# PDL_Practs
Desarollo del entregable de PDL

REQUISITOS MINIMOS:

- Quitar todos los comentarios

✔[DONE]
- La talla de los tipos simples, entero y logico, debe definirse, por medio de la constante 
  talla tipo simple = 1,  en el fichero header.h del directorio include.(DECLARADO) 

✔[DONE]
- El tipo lógico, bol, se representa numéricamente como un entero: con el valor 0, para
  el caso falso, y 1, para el caso verdad.



- El compilador solo trabaja con constantes enteras. Si el analizador lexico encuentra
  una constante real en el programa debe devolver su valor entero truncado. (CASO PARTICULAR -> condicionar @constante?)
  
- No existe conversion de tipos entre int y bol. (COMPROBACIÓN DE TIPOS)

- Todas las variables deben declararse antes de ser utilizadas.(EMPLEAR TABLA DE SIMBOLOS?)

- ?[¿DONE?(Mirar ExpresionOpcional)] Las variables de tipo simple se pueden inicializar en su declaración. En ese caso, el
  tipo de la declaración debe ser identico al tipo de la expresión constante.

- Los  ́ındices de los vectores van de 0 a cte-1, siendo cte el numero de elementos definido en su declaracion. 
  El numero de elementos de un vector debe ser un entero positivo.
  ( MODIFICAR -> @declaracion + @expresionSufija + @instruccionAsignacion)

- No es necesario comprobar los ́ındices de los vectores en tiempo de ejecución.

- ✔[DONE] El operador "%" calcula el resto de una division entera, por tanto los dos argumentos deben ser enteros.(COMPROBACIÓN DE TIPOS)

- ✔[DONE] La instruccion for es similar a la del C, excepto que las expresiones opcionales deben ser asignaciones o expresiones, 
  pudiendo no aparecer explıcitamente. La expresion, como en C, debe ser de tipo lógico y debe aparecer explícitamente.

- ✔[DONE]La expresión de la instrucción if-else, debe ser de tipo lógico.

- En cualquier otro caso, las restricciones semánticas por defecto serán las propias del lenguaje ANSI C.


