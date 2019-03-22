void f(struct S *p) {
  p->x = malloc(10);
  free(p->x);
  p->x = 0;
}