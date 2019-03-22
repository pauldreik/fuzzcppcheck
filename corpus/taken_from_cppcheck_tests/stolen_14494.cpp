int f() {
    int ret;
    if (a) { ret = 1; }
    else { s=foo(1,{2,3},4); ret = 2; }
    return ret;
}