class Fred {
    std::string s;
    void foo(std::string & a, std::string & b) { a = s; b = s; }
};