void f(struct X *x) {
  bool b = TRUE;
  if(x) { }
  else
    b = FALSE;
  if (b)
    abc(x->value);
}
