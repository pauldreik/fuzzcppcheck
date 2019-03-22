auto f() {
    int a = 1;
    auto l = [&](){ return a; };
    return l;
}
