void foo(int i, std::string s);
void bar() {
  foo(0, "");
  foo(0, 0);
  foo(var, 0);
  foo(var, NULL);
  foo(var, nullptr);
  foo(0, var);
}