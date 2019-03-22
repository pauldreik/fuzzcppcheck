struct Foo { char a[1]; };
void f() {
  struct Foo *x = malloc(sizeof(Foo) + 10);
  mysprintf(x.a, "aa");
}