class Foo {
public:
  Foo(char x) {
    Foo(x, 0);
    do_something();
  }
  Foo(char x, int y) { }
};
