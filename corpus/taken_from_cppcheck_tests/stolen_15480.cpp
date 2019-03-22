void f(int *x) {
  ((x=ret())&&
   (*x==0));
  if (x==0) {}
}