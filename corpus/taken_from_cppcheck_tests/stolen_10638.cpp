void foo(size_t xx) {
  char *ptr; ptr = malloc(42);
  ptr += xx;
  free(ptr + 1 - xx);
}