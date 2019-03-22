int f(int x) {
    int y;
    if (x) y = do_something();
    if (!x) return 0;
    return y;
}