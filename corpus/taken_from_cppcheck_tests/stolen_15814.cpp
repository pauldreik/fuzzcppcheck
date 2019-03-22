void f(const std::list<int> &ints) {
  if (ints.size() <= 3) {
    ints.front();
  }
}