void f(std::string s1, const std::string& s2, const std::string* s3) {
    void* p = 0;
    if (x) { return; }
    foo(0 == s1.size());
    foo(0 == s2.size());
    foo(0 == s3->size());
    foo(s1.size() == 0);
    foo(s2.size() == 0);
    foo(s3->size() == 0);
}