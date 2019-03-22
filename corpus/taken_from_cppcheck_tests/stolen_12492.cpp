void foo_FP1(char *p) {
  p[1] = 'B';
}
void foo_FP2(void) {
  char s[10] = "Y";
  foo_FP1(s);
}