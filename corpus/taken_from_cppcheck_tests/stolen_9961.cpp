void f(int *p = 0) {
    std::cout << p ? *p : 0;
}