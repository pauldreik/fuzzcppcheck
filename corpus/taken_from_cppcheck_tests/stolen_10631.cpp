void foo(char *p) {
  char *a; a = malloc(1024);
  free(10 + a);
}