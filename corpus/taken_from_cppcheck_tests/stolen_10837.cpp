struct d {
  unsigned n;
};
void f(void) {
  struct d d;
  d.n = 3;

  if (d.n < 0) {
    return;
  }

  if (0 > d.n) {
    return;
  }
}