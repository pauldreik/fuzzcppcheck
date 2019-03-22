void f(char *p) {
  if (x) {
    free(p);
    exit(1);
  }
  free(p);
}