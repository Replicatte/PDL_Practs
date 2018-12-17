// Ejemplo del uso de operadores logicos
{ int x; int y; bool z=true; 

  for (; z ;) 
{
    read(x); 
    read(y);
    if ((x != y) || (x != 0)) {         
      if (!(x == 0))                      
        if ((x == y) && (x > 0)) {
	  print(1); z = false;
	}
        else print(0);
      else {}
    } 
    else {}
  }
}
