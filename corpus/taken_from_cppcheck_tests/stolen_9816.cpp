void foo() {
    int *p = 0;
    bar(&p);
    *p = 0;
}