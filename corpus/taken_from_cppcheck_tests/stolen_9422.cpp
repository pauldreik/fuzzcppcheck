void foo(FILE *p) {
  fclose(p);
  gethandle(&p);
  fclose(p);
}