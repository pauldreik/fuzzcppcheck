void foo(const std::string& a, const std::string& b) {
  return a.find(b+"&") || a.find("&"+b);
}