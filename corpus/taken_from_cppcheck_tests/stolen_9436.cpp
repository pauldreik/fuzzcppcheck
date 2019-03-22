void foo(char *p) {
  delete[] p;
  getNext(&p);
  delete[] p;
}