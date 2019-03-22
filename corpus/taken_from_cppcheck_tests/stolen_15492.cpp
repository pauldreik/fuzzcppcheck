void setx(int &x);void f(int x) {
  a = x;
  setx(x);
  if (x == 1) {}
}