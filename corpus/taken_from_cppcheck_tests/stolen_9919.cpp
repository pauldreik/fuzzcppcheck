void f(std::string s1) {
    s1 = nullptr;
    std::string s2 = nullptr;
    std::string s3(nullptr);
    foo(std::string(nullptr));
}