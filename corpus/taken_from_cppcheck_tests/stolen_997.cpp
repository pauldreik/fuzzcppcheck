struct C { C() {} };
void foo(C*& p) {
    p = realloc(p, sizeof(C));
}