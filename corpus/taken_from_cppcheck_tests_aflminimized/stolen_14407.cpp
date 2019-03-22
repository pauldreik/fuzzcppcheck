int test(int cond1, int cond2) {
  int foo;
  if (cond1 || cond2) {
     if (cond2)
        foo = 0;
  }
  if (cond2) {
    int t = foo*foo;
  }
}