class A {
public:
  void operator/(int x);
}
void A::operator/(int x) { int a = 1000 / x; }