void f(int x = 0) {
  bool zero(x==0);
  if (zero) a = x;
  else b = x;
}