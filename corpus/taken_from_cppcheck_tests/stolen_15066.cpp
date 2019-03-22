void f() {
  int x=3;
  int *p = &x;
  int *p2[1] = {p};
  dostuff(p2);
}