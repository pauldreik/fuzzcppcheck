int foo(int x) {
    extern int func1();
    extern int func2(int);
    int func3();
    int func4(int);
    return func4(x);
}
