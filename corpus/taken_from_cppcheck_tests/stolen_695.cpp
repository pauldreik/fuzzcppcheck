void f() {
  unsigned char **cache = malloc(32);
  cache[i] = malloc(65536);
  cache[i][0xFFFF] = 0;
}