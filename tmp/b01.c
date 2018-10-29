// Ejemplo (sin sentido) con vectores: 6 errores
{
  int  a[20];
  int  b = 0;
  bool c = true;
  bool d[0];         // Talla inapropiada

  e = 27;            // Objeto no declarado
  b = c;             // Error de tipos en la "asignacion"
  c = a[2];          // Error de tipos en la "asignacion"

  a[c] = 1 ;         // El indice del "array" debe ser entero
  b[14] = 27;        // El identificador debe ser de tipo "array"
}

