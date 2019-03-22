struct X {
};
struct Data {
  template<typename Fun>
  void foo(Fun f) {}
};
Data g(X value) { return Data(); }
void f() {
   X x;
   g(std::move(x)).foo([=](int value) mutable {;});
   X y=x;
}