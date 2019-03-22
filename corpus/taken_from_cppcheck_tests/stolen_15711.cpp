static void f() {
  int x;
  int ctls[10];
  for (x = 0; x <= 10; x++) {
    if (cond)
      break;
  }
  assert(x <= 10);
  ctls[x] = 123;
}
