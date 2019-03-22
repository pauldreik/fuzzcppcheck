void f() {
    int a, *p; p = &a;
    { int a = *p; }
}