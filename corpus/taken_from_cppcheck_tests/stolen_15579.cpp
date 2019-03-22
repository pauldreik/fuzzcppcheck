void f() {
  for (;;) {
    int x = 1;
    if (!abc()) {
      x = 2;
      break;
    }
    a = x;
  }
}
