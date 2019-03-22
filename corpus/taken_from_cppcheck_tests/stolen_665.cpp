extern char a[10];
void f() {
    char b[25] = {0};
    std::memcpy(b, a, 10);
}