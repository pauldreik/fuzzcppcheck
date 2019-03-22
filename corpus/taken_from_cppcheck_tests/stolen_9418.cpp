void foo(char *p) {
  free(p);
  printf("Freed memory at location %x", p);
  free(p);
}