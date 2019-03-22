struct A {
    std::vector<std::string> v;
    void f() {
        char s[3];
        v.push_back(s);
    }
};
