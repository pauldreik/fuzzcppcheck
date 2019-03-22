void f() {
    char *x = 0;
    getx(reinterpret_cast<void **>(&x));
    *x = 0;
}