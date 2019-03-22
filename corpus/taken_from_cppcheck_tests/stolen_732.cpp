struct Foo {
  char a[LEN];
  void f();
};void Foo::f() {
  mysprintf(a, "abcd");
}