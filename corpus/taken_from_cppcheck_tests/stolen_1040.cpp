class Fred {
    std::string s;
    void foo(std::string & a, std::string & b);
};
void Fred::foo(std::string & a, std::string & b) { a = s; s = b; }