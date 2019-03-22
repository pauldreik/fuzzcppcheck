void f(const s *x) {
  x->a = 0;
  if (x ? x->a : 0) {}
}