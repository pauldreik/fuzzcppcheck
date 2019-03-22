void f(char *p) {
  if (!p) delete [] p;
  return p;
}