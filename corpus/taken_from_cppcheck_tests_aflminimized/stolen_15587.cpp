void f(const int a[]) {
  const int *x = 0;
  for (int i = 0; i < 10; i = *x) {
    x = a[i];
  }
}
