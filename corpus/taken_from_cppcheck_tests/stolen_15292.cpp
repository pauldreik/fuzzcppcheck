void f(int i) {
    X x;
    z = g(std::move(x));
    y = x;
}