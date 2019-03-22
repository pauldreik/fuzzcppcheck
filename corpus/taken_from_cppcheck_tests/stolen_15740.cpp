void dostuff(int & x);
void f() {
  int x = 0;
  dostuff(x);
  if (x < 0) {}
}
