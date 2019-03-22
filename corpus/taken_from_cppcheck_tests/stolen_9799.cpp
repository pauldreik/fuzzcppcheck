void f(int a) {
    const char *p = 0;
    if (a) {
        p = "abcd";
    }
    for (int i = 0; i < 3; i++) {
        if (a && (p[i] == '1'));
    }
}