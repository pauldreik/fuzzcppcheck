struct Fred {
    char *p;
    void f1() { free(p); }
};