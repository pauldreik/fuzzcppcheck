int f(long long y) {
  int x = (y & 0xFFFFFF) >> 121;
  return x;
}