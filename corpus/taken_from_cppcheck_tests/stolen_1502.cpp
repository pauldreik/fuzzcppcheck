struct Foo {
  Foo(int m) { this->setMember(m); }
  void setMember(int m) { member = m; }
  int member;
};