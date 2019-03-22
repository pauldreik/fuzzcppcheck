void dostuff(int *x, int *y) {
  if (cond)
    *y = -1;
  *x = *y;
}

void f() {
  int x;
  dostuff(a, &x);
}