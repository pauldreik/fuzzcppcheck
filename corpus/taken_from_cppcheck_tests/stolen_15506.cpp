void f(menu *x) {
  a = x->parent;
  for (i=0;(i<10) && (x!=0); i++) { x = x->next; }
}