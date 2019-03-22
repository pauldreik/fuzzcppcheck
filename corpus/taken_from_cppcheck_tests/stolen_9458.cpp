void f(char *p, int x) {
    delete[] p;
    if (x && (p = new char[10]))
        delete[] p;
}