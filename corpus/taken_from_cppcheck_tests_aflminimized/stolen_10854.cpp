void f() {
    std::string s1 = x;
    std::string s2 = std::move(s1);
    p = &s1;
}