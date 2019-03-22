struct C {
    std::string s;
};
int foo() {
    C* c1[10][10];
    C* c2[10];
    C c3[10][10];
    C** c4 = new C*[10];
    memset(**c1, 0, 10);
    memset(*c1, 0, 10);
    memset(*c2, 0, 10);
    memset(*c3, 0, 10);
    memset(*c4, 0, 10);
    memset(c2, 0, 10);
    memset(c3, 0, 10);
}