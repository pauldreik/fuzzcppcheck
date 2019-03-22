int foo() {
    int p[5][5];
    *((int*)p[0]) = 0;
    return p[0][0];
}