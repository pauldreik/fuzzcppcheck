void f(int i) {
    X x;
    x = g(std::move(x));
    y = x;
}