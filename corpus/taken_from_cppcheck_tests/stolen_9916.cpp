void f() {
  K *k = getK();
  if (k)
     k[0] = ptr;
  delete [] k;
  k = new K[10];
}
