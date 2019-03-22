struct S {
  double (* f)(double);
};

void foo(struct S x) {
  printf("%f", x.f(4.0));
}