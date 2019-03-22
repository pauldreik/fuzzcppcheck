void foo(char *p, char *r) {
  delete[] p;
  delete[] r;
}