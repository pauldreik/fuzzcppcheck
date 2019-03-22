long int f1(const char *exp) {
  return strtol(++exp, (char **)&exp, 10);
}