void f(std::vector<int> ints) {
  if (ints.empty())
    abort() << 123;
  ints[0] = 0;
}