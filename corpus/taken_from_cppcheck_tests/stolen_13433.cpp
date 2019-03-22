int f(char *x) {
    char *p;
    char *q;

    switch (x & 0x3)
    {
        case 1:
            p = x;
            x = p;
            break;
        case 2:
            q = x;
            x = q;
            break;
    }
}
