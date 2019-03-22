struct X {
  char *str;
};

void f(const struct X *x) {
  if (strcmp(x->str, "abc") == 0 || strcmp(x->str, "def")) {}
}