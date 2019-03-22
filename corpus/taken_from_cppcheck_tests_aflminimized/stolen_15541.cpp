void f() {
  t *x = 0;
  y = (a ? 1 : !x
       || x->y ? 1 : 2);}