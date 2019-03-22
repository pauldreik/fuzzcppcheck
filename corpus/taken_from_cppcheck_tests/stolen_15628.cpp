void f(const Token *x) {
  while (0 != (x = x->next)) {}
  x->ab = 0;
}
