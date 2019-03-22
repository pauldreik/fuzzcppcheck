void f() {
    static int x = 0;
    if (x==0) x = getX();
    return x;
}