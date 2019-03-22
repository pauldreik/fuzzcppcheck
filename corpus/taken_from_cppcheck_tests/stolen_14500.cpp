int f(int x) {
    int ret;
    if (!x) {
        ret = -123;
        goto out1;
    }
    return 0;
out1:
out2:
    return ret;
}