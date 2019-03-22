void f(char **out) {
  struct S *p = glob;
  *out = &p->data;
}