void f(char *p, int x) {
    if (x==12) {
        delete p;
        throw 1;
    }
    delete p;
}