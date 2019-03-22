void foo(std::string str) {
  char *p = &str[0];
  *p = 0;
}