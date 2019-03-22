void f() {
  int i = 1;
  const int * const constPtrToConst = &i;
  std::cout << *constPtrToConst << std::endl;
  std::cout << constPtrToConst << std::endl;
}