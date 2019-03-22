void f() {
    char *x = 0;
    int success = getx((char**)&x);
    if (success) x[0] = 0;
}