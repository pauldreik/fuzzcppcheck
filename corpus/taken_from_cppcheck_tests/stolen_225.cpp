Command& foo() {
  return f([]() -> int { return 1; });
}