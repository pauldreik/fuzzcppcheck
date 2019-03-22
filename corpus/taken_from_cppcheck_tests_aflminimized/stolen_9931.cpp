void f(const char* p) {
    if(p == 0) {
        std::cout << p;
        std::cerr << p;
        std::cin >> p;
        std::cout << abc << p;
    }
}