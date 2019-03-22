struct Foo { char a[1]; };
void f() {
  struct Foo *x = malloc(sizeof(Foo));
  mysprintf(x.a, "aa");
}