int f(int a) {
  int x = a & 0x80 ? 1 : 2;
  return x;
}