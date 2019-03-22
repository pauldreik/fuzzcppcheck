class C { };
void foo(C*& p) {
    p = malloc(sizeof(C));
}