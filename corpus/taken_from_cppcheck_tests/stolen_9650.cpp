void x() {
    f(g(), unique_ptr<int>(new int(42)));
}