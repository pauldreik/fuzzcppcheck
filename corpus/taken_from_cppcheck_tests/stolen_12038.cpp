int fun(const char *buf1) {
  return strncmp(buf1, foo(buf2), sizeof(buf1)) == 0;
}