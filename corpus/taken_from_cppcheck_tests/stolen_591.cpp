int foo() {
  const size_t A = 4;
  const size_t B = 2;
  extern int stuff[A][B];
  return stuff[0][1];
}