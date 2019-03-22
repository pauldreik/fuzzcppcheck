void f(int x) {
label:  if (x>0) {
    x = x >> 1;
    goto label;
  }
}