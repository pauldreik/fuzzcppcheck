int f(int i, X x) {
    if (i)
        return g(std::move(x));
    g(x);
    return 0;
}