void dostuff(int *x, int *y) {
  if (cond)
    *y = -1;
  *x = *y;
}

void f() {
  dostuff(a, 0);
}