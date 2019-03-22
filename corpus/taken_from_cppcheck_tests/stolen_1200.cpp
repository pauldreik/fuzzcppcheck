struct C {
    C() : n(0) {}
    void f(int v) { g((char *) &v); }
    void g(char *) { n++; }
    int n;
};
