void f(const std::list<int> &ints) {
  if (ints.empty()) { ints.push_back(0); }
  ints.front();
}