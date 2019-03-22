void f() {
    int x = 0;
    Q q = [&]() {
        if (x > 0) {}
        x++;
    };
    dosomething(q);
}
