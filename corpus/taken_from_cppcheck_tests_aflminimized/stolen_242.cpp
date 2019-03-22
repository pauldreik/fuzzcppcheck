auto f(int a) {
    auto p = &a;
    return [=](){ return p; };
}
