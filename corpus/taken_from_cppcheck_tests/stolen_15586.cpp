void f(const int *buf) {
  int x = 0;
  while (++i < 10) {
    if (buf[i] == 123) {
      x = i;
      break;
    }
  }
  a = x;
}
