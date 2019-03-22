void f(const std::list<int> &ints) {
  if (ints.empty()) {
    ints.front();
  }
}