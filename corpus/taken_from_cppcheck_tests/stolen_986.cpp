struct A {
  A() {}
  virtual ~A() {}
};
struct B {
  A* arr[4];
};
void func() {
  B b[4];
  memset(b, 0, sizeof(b));
}