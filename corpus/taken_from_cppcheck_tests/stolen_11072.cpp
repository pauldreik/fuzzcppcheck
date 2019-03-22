namespace foo {
  template<class T> class A { void dostuff() {} };
  struct S : public A<int> {
    void f() {
      A<int>::dostuff();
    }
  };
}