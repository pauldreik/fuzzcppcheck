void f() {
  K *k = getK();
  if (!k)
     exit(1);
  k->f();
}
