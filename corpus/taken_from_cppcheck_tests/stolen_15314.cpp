int f(long long y) {
  int x = (y & 0xFFFFFF) >> 128;
  return x;
}