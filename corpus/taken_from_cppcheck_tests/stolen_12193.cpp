void f() {
  std::vector<int> ints;
  std::vector<int>::const_iterator iter {ints.cbegin()};
  std::cout << (*iter) << std::endl;
}