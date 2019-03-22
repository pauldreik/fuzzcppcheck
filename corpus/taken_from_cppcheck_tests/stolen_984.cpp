class A {
  std::string &s;
};
void f() {
  A a;
  memset(&a, 0, sizeof(a)); 
}