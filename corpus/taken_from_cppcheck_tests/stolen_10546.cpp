void foo(bool b) {
  for(unsigned int i = 10; b || i >= 0; i--) {}
}