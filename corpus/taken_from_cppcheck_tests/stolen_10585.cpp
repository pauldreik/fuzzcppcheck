uint32_t value = 0xFUL;
void f() {
  if (value < 0u)
  {
    value = 0u;
  }
}
