class Foo : public Bar {
  explicit Foo(int i) : Bar(mi = i) { }
  int mi;
};