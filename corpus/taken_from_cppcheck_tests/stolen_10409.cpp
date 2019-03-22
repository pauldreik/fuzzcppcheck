struct A {
  void foo();
  bool bar();
  bool bar() const;
};
void A::foo() {
    if (bar() && bar()) {}
}