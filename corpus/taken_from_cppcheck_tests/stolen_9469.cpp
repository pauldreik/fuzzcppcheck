void f() {
  char *p = malloc(100);
  if (x) {
    free(p);
    ::exit(0);
  }  free(p);
}