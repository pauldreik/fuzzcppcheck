void f(int *p = 0) {
    if (p == 0) {
        throw SomeException;
    }
    *p = 0;
}