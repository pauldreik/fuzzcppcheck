class A : public ::B {
  int a;
  A();
};
A::A() : ::B(), a(0) {}