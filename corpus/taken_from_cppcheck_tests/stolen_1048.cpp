class Fred {
    std::string s;
    void foo1(int, int);
    void foo2(int a, int b);
    void foo3(int, int b);
    void foo4(int a, int);
    void foo5(int a, int b);
};
void Fred::foo1(int a, int b) { }
void Fred::foo2(int c, int d) { }
void Fred::foo3(int a, int b) { }
void Fred::foo4(int a, int b) { }
void Fred::foo5(int, int) { }