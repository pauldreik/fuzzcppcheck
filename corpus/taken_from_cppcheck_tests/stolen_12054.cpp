void f() {
    unsigned int a = { 2 };
    unsigned int b[] = { 0 };
    int c[a[b[0]]];
    std::cout << sizeof(c) / sizeof(int) << std::endl;
}
