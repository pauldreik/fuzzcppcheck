class A : public B::C {
  A() : B::C(), x(0) {}
  int x;
};