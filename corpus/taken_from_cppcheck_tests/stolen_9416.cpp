void foo(char *p) {
  free(p);
  getNext(&p);
  free(p);
}