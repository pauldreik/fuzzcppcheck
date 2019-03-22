int * p;
void f(int x) {
    delete p;
    if (x)
        throw 123;
    p = 0;
}