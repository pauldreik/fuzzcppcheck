void f(struct X *x) {
  do {
    if (!x)
      break;
  } while (x->a);
  if (x) {}
}
