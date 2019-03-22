class C;
void f() {
  C* c = new C{};
  std::shared_ptr<C> a{c, [](C* x) { delete x; }};
}