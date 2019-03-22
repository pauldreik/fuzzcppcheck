void f() {
  void* p1 = malloc(10);
  void* p2 = malloc(5);
  p1--;
  p2++;
}