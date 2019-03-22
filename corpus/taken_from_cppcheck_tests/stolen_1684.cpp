void f() {
    static int* p = 0;
    delete p;
    reset(p);
    throw 1;
}