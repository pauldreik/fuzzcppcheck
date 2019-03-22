struct S {
    bool *p;
};
void f() {
    S s = {0};
    s.p = true;
}
