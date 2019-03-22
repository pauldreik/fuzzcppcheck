void f() {
  int x=1;
  auto f = [&](){ a=x; }
  x = 2;
  f();
}