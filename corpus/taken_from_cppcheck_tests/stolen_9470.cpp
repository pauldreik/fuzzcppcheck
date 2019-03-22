void f() {
  char *p = malloc(100);
  if (x) {
    free(p);
    std::exit(0);
  }  free(p);
}