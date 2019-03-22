void f() {
    static int* p = 0;
    delete p;
    throw 1;
}