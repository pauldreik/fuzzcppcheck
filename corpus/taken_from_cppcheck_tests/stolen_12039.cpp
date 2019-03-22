int fun(const char *buf2) {
  return strncmp(buf1, buf2, sizeof(char*)) == 0;
}