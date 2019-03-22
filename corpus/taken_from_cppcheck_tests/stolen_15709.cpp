void f() {
  int x;
  for (x = 0; x < 5; x++) {}
  if (x == 5) {
    panic();
  }
  a = x;
}