void f() {
  int x = 0;
  for (int i = 0; i < 10; i++) {
    if (cond) {
      x = 1;
      break;
    }
  }
  if (!x) {}
}