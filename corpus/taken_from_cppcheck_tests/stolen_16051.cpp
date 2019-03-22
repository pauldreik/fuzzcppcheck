namespace A {
  namespace B {
    char buf[20];
  }
}
int main() {
  return foo(A::B::buf);
}