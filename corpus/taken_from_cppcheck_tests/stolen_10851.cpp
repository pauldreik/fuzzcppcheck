int f(int i) {
    A a;
    A b;
    g(std::move(a));
    if (i)
        return g(std::move(b));
    return h(std::move(a),std::move(b));
}