int f() {
  char *p = (char *)malloc(256);
  while(*p && *p == '_')
    p++;
}