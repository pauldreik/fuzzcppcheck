int f(long y) {
  int x = (y & 0xFFFFFF) >> 63;
  return x;
}