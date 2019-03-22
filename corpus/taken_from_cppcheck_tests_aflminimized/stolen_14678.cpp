void foo() {
    void* x;
    int (*f)(int, int) = x;
    dostuff((*f)(a,b));
}