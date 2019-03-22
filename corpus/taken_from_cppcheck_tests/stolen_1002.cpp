class C { C() {} };
void foo(D*& p) {
    p = malloc(sizeof(C));
}