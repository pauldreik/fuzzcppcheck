int f(void) {
    int a;
    int i;
    if (x) { noreturn(); }
    else { i = 0; }
    if (i==1) { a = 0; }
    else { a = 1; }
    return a;
}