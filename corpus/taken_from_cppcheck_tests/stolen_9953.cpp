void f(int *p = 0) {
    if (p != 0 && bar())
      *p = 0;
}