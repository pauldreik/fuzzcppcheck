void f() {
  char dst[4];
  const char* source = "You";
  strncpy(dst, source, sizeof(dst));
  char value = dst[2];
}