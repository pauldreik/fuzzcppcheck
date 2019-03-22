class C { C() {} };
void foo(C*& p) {
    p = malloc(sizeof(C));
}