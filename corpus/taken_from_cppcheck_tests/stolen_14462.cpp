void f(const char dev[], char *str) {
    char buf[10];
    strncpy(buf, dev, 10);
    strncpy(str, buf, 10);
}