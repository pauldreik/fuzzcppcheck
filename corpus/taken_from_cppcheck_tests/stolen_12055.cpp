void f() {
    unsigned int a[] = { 1 };
    unsigned int b = 2;
    int c[(a[0]+b)];
    std::cout << sizeof(c) / sizeof(int) << std::endl;
}
