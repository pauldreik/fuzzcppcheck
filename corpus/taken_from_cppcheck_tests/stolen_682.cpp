char f() {
  const char *x = s;
  if (cond) x = "abcde";
  return x[20];
}