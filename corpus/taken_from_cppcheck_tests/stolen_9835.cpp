char *f(int x) {
    char *p = do_something();
    switch (x) {
      case 1:
        p = 0;
      case 2:
        *p = 0;
        break;
    }
    return p;
}