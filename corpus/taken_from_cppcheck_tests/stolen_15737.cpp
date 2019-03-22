void f() {
  int x = 0;
  dostuff(unknown ? ptr : &x);
  if (x < 0) {}
}
