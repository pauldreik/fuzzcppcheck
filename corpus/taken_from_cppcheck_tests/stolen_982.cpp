class A {
  virtual ~A() { }
  std::string s;
};
int f() {
  const int N = 10;
  A** arr = new A*[N];
  memset(arr, 0, N * sizeof(A*));
}