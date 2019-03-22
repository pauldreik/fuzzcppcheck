void f() {
  int x = 0;
  dostuff(0 ? ptr : &x);
  if (x < 0) {}
}
