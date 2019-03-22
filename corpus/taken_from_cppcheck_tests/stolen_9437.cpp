void foo(char *p) {
  delete[] p;
  bar();
  delete[] p;
}