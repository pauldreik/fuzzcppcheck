struct Foo { int f; };
struct Bar { int b; };
struct FooBar {
  FooBar() {
     memset(&foo, 0, sizeof(foo));
  }
  Foo foo;
  Bar bar;
};
int main() {
  FooBar foobar;
  return foobar.foo.f + foobar.bar.b;
}