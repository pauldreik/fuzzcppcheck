void f(struct ABC *abc) {
  WARN_ON(!abc || abc->x == 0);
  if (!abc) { }
}