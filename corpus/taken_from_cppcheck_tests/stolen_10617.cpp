void foo() {
  int (*t)(void *a, void *b);
  if (0 > t(a, b)) {}
}