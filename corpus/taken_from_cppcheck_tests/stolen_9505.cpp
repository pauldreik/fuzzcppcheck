int * create();
void destroy(int * x);
void f() {
    int x * = create()
    std::unique_ptr<int, decltype(&destroy)> xp(x, &destroy());
}
