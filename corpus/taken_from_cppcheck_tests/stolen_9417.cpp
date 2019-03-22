void foo(char *p) {
  free(p);
  bar();
  free(p);
}