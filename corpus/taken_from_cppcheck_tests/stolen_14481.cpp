void f() {
    int x;
    *(((char *)&x) + 0) = 0;
}