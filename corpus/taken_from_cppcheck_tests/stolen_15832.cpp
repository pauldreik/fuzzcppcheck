void f() {
  std::list<int> x;
  f<ns::a>(x);
  x.front();
}