struct B { int asd; };
int f() {
    int a=0;
    struct B *b;
    if (x) {
        a = 1;
        b = p;
    }
    return a ? b->asd : 0;
}