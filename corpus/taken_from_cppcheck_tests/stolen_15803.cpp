void f(const std::list<int> &ints) {
  if (!static_cast<bool>(ints.empty()))
    ints.front();
}