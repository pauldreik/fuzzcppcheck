class A : B<C,D> {
  A() : B<C,D>(), x(0) {}
  int x;
};