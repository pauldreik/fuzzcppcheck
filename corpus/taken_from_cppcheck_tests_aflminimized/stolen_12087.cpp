void f() {
  void* p = malloc(10);
  int* p2 = &p + 4;
  int* p3 = &p - 1;
}