void x() {
    f(g(), shared_ptr<int>(new int(42)));
}