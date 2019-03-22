void f(int a) {
  int x;
  if (a) x=123;
  if (!a) {
    if (!a) {}
    else if (x) {}
  }
}