void f() {
    unsigned int a = 2;
    unsigned int b = 2;
    int c[(a+b)];
    std::cout << sizeof(c) / sizeof(int) << std::endl;
}
