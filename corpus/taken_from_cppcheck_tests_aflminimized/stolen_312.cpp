void f(bool b)  {
  int* x;
  if(b) {
    int y[6] = {0,1,2,3,4,5};
    x = y;
  }
  x[3];
}
