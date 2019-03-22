class A {
  std::string s;
  struct B { int x; };
};
void f(A::B *b) {
  memset(b,0,4);
}