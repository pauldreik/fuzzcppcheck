void f() {
  int x;
  switch (ab) {
    case A: x = 12; break;
    case B: x = 34; break;
  }
  switch (ab) {
    case A: v = x; break;
  }
}