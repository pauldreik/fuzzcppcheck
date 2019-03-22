void f() {
  int x = 0;
  switch (a) {
  case 1:
    x = 1;
  case 2:
    if (!x) {}
  }
}