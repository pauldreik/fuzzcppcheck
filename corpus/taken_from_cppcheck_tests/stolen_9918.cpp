void f(std::string s1) {
    void* p = 0;
    s1 = 0;
    s1 = '\0';
    std::string s2 = 0;
    std::string s2 = '\0';
    std::string s3(0);
    foo(std::string(0));
    s1 = p;
    std::string s4 = p;
    std::string s5(p);
    foo(std::string(p));
}