void dostuff(int mask, int *p) {
  x = (mask & 1) ? *p : 0;
}

void f() {
  dostuff(0, 0);
}