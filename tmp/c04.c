// Calcula el factorial de un mumero > 0 y < 13
{ int n; int fac = 1; int i; bool f = true;

  for (; f ;) {
    read(n);
    if ((n > 0) && (n < 13)) {
      for (i = 2; i <= n; i++) fac = fac * i;
      print(fac);
      f = false;
    }
    else {}
  }
}
