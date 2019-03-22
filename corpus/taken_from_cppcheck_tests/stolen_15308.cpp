int f(short y) {
  int x = (y & 0xFFFFFF) >> 32;
  return x;
}