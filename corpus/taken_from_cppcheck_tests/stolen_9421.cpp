void foo(FILE *p) {
  if (x < 3) fclose(p);
  else { if (x > 9) fclose(p); }
}