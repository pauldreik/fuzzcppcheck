char *a;
void f(const char *s) {
    a = NULL;
    x();
    memcpy(a, s, 10);
}
