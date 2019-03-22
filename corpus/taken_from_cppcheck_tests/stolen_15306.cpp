int f(int y) {
  int x = (y & 0xFFFFFFF) >> 32;
  return x;
}