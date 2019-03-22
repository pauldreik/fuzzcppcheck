A f(int i) {
    X x;
    if (i)        return g(std::move(x));
    return h(std::move(x));
}