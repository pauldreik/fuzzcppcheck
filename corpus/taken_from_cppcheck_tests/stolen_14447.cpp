void setvalue(int &x) {
  x = 0;
  return 123;
}
int f() {
  int x;
  return setvalue(x);
}