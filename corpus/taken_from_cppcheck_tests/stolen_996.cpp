class C { C(int z, Foo bar) { bar(); } };
void foo(C*& p) {
    p = malloc(sizeof(C));
}