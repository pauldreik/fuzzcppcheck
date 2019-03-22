void f() {
  K *k = getK();
  if (k)
     k->doStuff();
  delete k;
}
