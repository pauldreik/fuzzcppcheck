void f() {
  int x=3;
  auto f = [&](){ a=x; }
  f();
}