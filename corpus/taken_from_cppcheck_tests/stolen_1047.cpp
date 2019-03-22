class Fred {
    std::string s;
    void foo();
    void foo(std::string & a);
    void foo(const std::string & a);
};
void Fred::foo() { }void Fred::foo(std::string & a) { a = s; }void Fred::foo(const std::string & a) { s = a; }