void f(int *p = 0) {
    int y;
    if (p == 0)
      p = &y;
    *p = 0;
}