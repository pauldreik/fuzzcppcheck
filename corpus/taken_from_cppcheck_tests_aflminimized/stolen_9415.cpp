void foo(char *p) {
  if (x < 3) free(p);
  else { if (x > 9) free(p); }
}