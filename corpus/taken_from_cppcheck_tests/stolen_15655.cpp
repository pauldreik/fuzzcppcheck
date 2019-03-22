int f(int *);
int g() {
  const int a = 1;
  int x = 11;
  c = (a && f(&x));
  if (x == 42) {}
}