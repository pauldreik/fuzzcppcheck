int f() {
    return g([](int x){(void)x+1; return x;});
}