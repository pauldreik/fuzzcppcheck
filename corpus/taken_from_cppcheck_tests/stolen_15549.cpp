void f() {
  X *x = getx();
  if(0) { x = 0; }
  else { x->y = 1; }
}