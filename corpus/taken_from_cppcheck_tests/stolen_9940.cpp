void foo(int *p);

void f(int *p) {
    *p = 0;
    foo(p);
    if (p) { }
}