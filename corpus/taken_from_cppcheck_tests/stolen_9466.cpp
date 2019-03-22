struct foo {
    int* get(int) { return new int(); }
};
void f(foo* b) {
    std::unique_ptr<int> x(b->get(0));
    std::unique_ptr<int> y(b->get(1));
}
