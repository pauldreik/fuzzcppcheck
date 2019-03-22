void f() {
  const std::string s = g();
  ASSERT_MESSAGE("Error on s", 0 == s.compare("Some text"));
}