void f() {
    int* p = 0;
    delete p;
    if (foo)
        throw 1;
    p = new int;
}