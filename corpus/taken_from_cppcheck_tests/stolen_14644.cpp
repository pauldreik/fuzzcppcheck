int f() {
    int i;
    for (i=0;i<9;++i)
        if (foo()) return i;
    return 9;
}