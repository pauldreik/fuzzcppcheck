void mhz_M(int enough) {
  TYPE *x=&x, **p=x, **q = NULL;
  BENCH1(q = _mhz_M(n); n = 1;)
  use_pointer(q);
}