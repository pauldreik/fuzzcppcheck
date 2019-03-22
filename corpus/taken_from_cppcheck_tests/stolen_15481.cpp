void f(int *x) {
  int a = (x && *x == '1');
  int b = a ? atoi(x) : 0;
  if (x==0) {}
}