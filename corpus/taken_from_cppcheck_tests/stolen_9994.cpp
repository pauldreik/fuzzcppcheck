void dostuff(int *x, int *y) {
  if (!var)
    return -1;
  *x = *y;
}

void f() {
  dostuff(a, 0);
}