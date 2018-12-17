//Ejemplo de secuencias de instrucciones y declaraciones 
{ int  x;
  read(x);

  bool z = true;     
  if ((x <= 9) && (x >= 0)) z = true; else z = false;

  int  i;
  int  a[10]; 
  for (i = 0; i < 10; i++) a[i] = i;

  if (z) i = a[x]; else {}
  print(i);
}
