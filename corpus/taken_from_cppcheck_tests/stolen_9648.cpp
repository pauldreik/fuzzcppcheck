void x() {
    f(unique_ptr<int>(new int(42)), g());
}