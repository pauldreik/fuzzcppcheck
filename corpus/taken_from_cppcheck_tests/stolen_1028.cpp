class Fred {
    std::string s;
    void foo(std::string * a, std::string * b) { s = *a; *b = s; }
};