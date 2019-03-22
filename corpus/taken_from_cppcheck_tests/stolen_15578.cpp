int f(void) {
  int x = 5;
  int &rx = x;
  for (int i = 0; i < 1; i++) {
    rx = 1;
  }
  return x;
}