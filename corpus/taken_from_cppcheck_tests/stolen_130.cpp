void f(const void* ptr, bool* result) {
  int dummy;
  *result = (&dummy < ptr);
}