void f(char *p = 0) {
    std::cout << p ? *p : 0;
}