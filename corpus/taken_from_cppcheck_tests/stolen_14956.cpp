void foo(int c) {
  char buf1[10], buf2[10];
  char *p = c ? buf1 : buf2;
  dostuff(p);
}