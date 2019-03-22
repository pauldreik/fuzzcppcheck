void f() {
  std::list<int*> a;
  std::list<int*> b;
  if (*a.begin() == *b.begin()) {}
}
