void f() {
  A a = { 0 };
  a.foo = (char *) malloc(10);
  assign(&a);
}