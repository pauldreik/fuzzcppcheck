void do_wordexp(FILE *f) {
  free(getword(f));
  fclose(f);
}