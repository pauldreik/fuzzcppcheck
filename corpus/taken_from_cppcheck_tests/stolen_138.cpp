void foo() {
  int cond2;
  dostuff([&cond2]() { return &cond2; });
}