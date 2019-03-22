auto f() {
  static std::vector<int> x;
  return x.begin();
}
