void foo(Data* p) {
  free(p->a);
  free(p->b);
}