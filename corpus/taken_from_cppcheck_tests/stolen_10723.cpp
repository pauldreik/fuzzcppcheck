int foo() {
    int x = 0, y = 0;
    auto f = [&]() { if (x < 5) ++y; };
    x = 2;
    f();
    x = 6;
    f();
    return y;
}