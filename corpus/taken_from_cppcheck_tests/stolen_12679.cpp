struct A {
  struct B {
    enum C { };
  };
};
void foo(A::B::C c) { }