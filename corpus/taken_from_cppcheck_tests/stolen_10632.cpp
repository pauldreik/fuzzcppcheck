void foo(char *p) {
  char *a; a = new char[1024];
  delete[] (a + 10);
}