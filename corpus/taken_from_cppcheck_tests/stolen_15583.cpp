void f() {
  ENTRY *x = 0;
  while (x = get()) {
    set(x->value);
  }
}
