auto f() {
    int a = 1;
    return [&](){ return a; };
}
