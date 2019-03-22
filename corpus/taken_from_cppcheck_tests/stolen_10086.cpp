int f(int a) {
  const int x = 234;
  int b = a;
  if (b > 32) b = x;
  return b;
}