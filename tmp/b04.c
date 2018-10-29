// Ejemplo (absurdo) sintactico-semantico sin errores.
// Comprobad el resultado con la funcion "mostraTDS" 
{
  int a;
  read(a);
  bool b[7];
  int i;

  for (i = 0; i < 7; i++) {  
    b[i] = a > 0 ; 
    read (a);
  }

  int c[27];
  int j;
  for (j = 0; j < 27; j++) {  
    c[j] = j;
  }

  int d;
  bool e;
  d = c[4];
  e = b[4] && ( d > 0 );
}
