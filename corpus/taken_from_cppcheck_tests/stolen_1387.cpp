class A {
public:
  void f1();
  void f2(int x);
}
void A::f1() {}
void A::f2(int x) { int a = 1000 / x; }