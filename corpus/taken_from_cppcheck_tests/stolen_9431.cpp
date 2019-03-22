void foo(char **p) {
  delete p[0];
  delete p[1];
}