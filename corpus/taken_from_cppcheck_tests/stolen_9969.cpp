void f(int *p = 0) {
    printf("%p", p);
    *p = 0;
}