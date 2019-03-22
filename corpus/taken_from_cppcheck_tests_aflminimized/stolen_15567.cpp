void f(int mode) {
    struct ABC *x;

    if (mode) { x = &y; }
    else { x = NULL; }

    if (!x) exit(1);

    a = x->a;
}