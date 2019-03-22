void f() {
  char *buf = new char[1000];
  clist.push_back(new (std::nothrow) C(buf));
}