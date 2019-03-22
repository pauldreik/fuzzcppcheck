void foo(char *p) {
  char *a; a = new char;
  char *b; b = new char;
  bar(a);
  delete a + 10;
  delete b + 10;
}