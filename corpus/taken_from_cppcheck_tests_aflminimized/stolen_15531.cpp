int f() {
    int x = 1;
    dostuff([&]() {
        x = y;
    });
    return x;
}
