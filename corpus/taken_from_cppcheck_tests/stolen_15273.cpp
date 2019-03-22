void f() {
  int *x;
  if (cond) { int i; x = &i; }
  *x = 0;
}