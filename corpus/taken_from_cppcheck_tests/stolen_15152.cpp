struct ARG {
  void *a;
  void *b;
};

void fun() {
  ARG aatt;
  int *p = &aatt.b;
  aatt.a = 123;
  dostuff(p);
}