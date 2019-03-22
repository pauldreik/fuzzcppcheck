void f() {
    int x = 0;
    dostuff([&]() {
        if (x > 0) {}
        x++;
    });
    dosomething(q);
}
