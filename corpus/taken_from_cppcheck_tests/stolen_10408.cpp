struct A {
  void foo() const;
  bool bar() const;
};
void A::foo() const {
    if (bar() && bar()) {}
}