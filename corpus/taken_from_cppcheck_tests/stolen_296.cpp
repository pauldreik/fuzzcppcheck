auto f() {
    int a;
    return std::make_tuple(std::ref(a));
}
