void f() {
  int x = 1;
  int *data = &x;
  if (!x) {
    calc(data);
    a = x;
  }
}