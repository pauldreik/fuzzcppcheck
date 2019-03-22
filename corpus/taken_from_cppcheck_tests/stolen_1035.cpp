class Fred {
    std::string s;
    void foo(std::string & a);
};
void Fred::foo(std::string & a) { a = s; }