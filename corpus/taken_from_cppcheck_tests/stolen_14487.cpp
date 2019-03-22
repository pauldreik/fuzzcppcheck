int f(int *ptr) {
    int a;
    int *p = ptr ? ptr : &a;
}