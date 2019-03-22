int foo() {
    int x,y=0;
again:
    if (y) return x;
    x = a;
    y = 1;
    goto again;
}