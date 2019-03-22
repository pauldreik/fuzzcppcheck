int f(unsigned int a) {
  int x = (a % 123) >> 16;
  return x;
}