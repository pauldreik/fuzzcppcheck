template <typename T> struct Foo {};
template <typename T> struct Bar {
  void f1(Bar<T> x) {}
  Foo<Bar<T>> f2() { }
};
Bar<int> c;