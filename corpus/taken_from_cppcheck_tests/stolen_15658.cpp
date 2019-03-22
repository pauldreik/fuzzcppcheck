int f(int *p) {
  if (p) return;
  x = *p ? : 1;
}