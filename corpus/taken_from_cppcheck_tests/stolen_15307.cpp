int f(short y) {
  int x = (y & 0xFFFFFF) >> 31;
  return x;
}