struct Foo {
  Foo();
  Foo(int foo);
  int foo_;
};
Foo::Foo() : Foo(0) {}
Foo::Foo(int foo) : foo_(foo) {}
