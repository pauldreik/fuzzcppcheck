template<int A> void f() {}
void foo() {
  const int x = 0;
  f<x>();
}