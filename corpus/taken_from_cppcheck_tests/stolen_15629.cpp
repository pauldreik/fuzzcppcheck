void f(const Token* x) {
  while (0 != (x = x->next)) {}
  if (x->str) {
    x = y;
  }
}
