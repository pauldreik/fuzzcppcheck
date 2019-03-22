void f() {
    static int* p = foo;
    delete p;
    if (foo)
        throw 1;
    p = 0;
}