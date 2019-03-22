void f() {
    int a = 1;
    auto x = [&]() { return a + 1; };
    auto b = x;
}
