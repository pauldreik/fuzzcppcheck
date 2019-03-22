void f(std::string s1, const std::string& s2) {
    if (x) { return; }
    foo(s1 == '\0');
    foo(s2 == '\0');
    foo('\0' == s1);
    foo('\0' == s2);
}