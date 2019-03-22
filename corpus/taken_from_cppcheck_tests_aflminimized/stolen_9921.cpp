void f(std::string s1, const std::string& s2, const std::string* s3) {
    void* p = 0;
    if (x) { return; }
    foo(s1 == p);
    foo(s2 == p);
    foo(s3 == p);
    foo(p == s1);
    foo(p == s2);
    foo(p == s3);
}