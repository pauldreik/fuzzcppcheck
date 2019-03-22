struct Foo { char a[1]; };
void f() {
  struct Foo x;
  mysprintf(x.a, "aa");
}