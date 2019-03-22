int f(long long y) {
  int x = (y & 0xFFFFFF) >> 64;
  return x;
}