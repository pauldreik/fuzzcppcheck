void foo(int a) {
    std::function<void()> f;
    if (a > 0) {
        int b = a + 1;
        f = [&]{ return b; };
    }
    f();
}
