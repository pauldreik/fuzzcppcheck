class A {
private:
  void f();
};
class B {
  friend void A::f();
};