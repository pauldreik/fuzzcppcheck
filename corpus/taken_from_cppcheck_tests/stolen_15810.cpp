void f(const std::list<int> &ints) {
  if (ints.empty()) { continue; }
  ints.front();
}