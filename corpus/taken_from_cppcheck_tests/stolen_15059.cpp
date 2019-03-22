void f(void) {
    int a[4];
    int *b = (int*)((int*)a+1);
    x(b);
}