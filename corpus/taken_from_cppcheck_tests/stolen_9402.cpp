void f(char *p) {
  if (!p) free(p);
  return p;
}