struct S {
  std::string test;
  S(S&& s) : test(std::move(s.test)) { }
  S& operator = (S &&s) {
    test = std::move(s.test);
    return *this;
  }
};
