auto by_ref(int& x) {
    return [&] { return x; };
}
auto f() {
    int i = 0;
    return by_ref(i);
}
