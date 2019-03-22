void f(struct ABC *abc) {
  WARN_ON(!abc || abc->x == 7);
  if (!abc) { }
}