void f() {
  int *p = p1;
  if (cond) {
    int x;
    p = &x;
  }
  *p = 0;
}