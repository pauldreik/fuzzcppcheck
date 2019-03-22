void a(char *p) { char *x = p; free(x); }
void b() {
  struct ABC abc;
  abc.a = (char *) malloc(10);
  a(abc.a);
}