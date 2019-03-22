void f() {
  Hints hints;
  hints.x = 1;
  if (foo)
    hints.x = 2;
  x = 0 + foo.x;
}