void f(int v) {
    int a = v;
    int * p = &a;
    auto x = [=]() { return p + 1; };
    auto b = x;
}
