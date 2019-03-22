int f(int y) {
  int x = (y & 0xFFFFFFF) >> 31;
  return x;
}