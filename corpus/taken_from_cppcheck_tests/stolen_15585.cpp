void f(const int *buf) {
  int x = 0;
  for (int i = 0; i < 10; i++) {
    if (buf[i] == 123) {
      x = i;
      ;
    }
  }
  a = x;
}
