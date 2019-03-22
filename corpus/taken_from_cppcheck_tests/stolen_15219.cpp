void f(std::vector<int> ints) {
  int x = 0;
  std::for_each(ints.begin(), ints.end(), [&x](int i){ x += i; });
}