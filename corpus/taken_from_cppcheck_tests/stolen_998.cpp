struct C { virtual void bar(); };
void foo(C*& p) {
    p = malloc(sizeof(C));
}