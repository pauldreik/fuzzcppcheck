void foo(size_t xx) {
  char *ptr; ptr = malloc(42);
  std::cout << ptr;
  ptr = otherPtr;
  free(otherPtr - xx - 1);
}