int f() {
  int x=5;
  a = b ? init1(&x) : init2(&x);
  return 1 + x;
}