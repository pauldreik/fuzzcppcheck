void f() {
  int x = 0;
  MACRO( v, { if (y) { x++; } } );
  if (!x) {}
}
