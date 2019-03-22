int f(void) {
  int x = 2;
  int *px = &x;
  for (int i = 0; i < 1; i++) {
    *px = 1;
  }
  return x;
}