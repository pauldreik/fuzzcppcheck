void f(char *p) {
  free(p);
  x = (q == p);
  free(p);
}