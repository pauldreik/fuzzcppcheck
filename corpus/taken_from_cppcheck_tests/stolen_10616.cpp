void foo() {
  int (*t)(void *a, void *b);
  if (t(a, b) < 0) {}
}