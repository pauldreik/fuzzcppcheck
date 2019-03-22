void f(X x) {
    a = x;
    for (i=1;i<=count;i++) {
        BUGON(x==0)
        x = x.next;
    }
}