struct  X {
    X();
    int f() const;
};
void run() {
        X x;
        int a = x.f();
        int b = x.f();
        (void)a;
        (void)b;
}
