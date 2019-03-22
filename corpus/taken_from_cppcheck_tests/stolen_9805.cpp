void f(int *p, int *q) {
    if (p == NULL)
        return;
    else if (q == NULL)
        return;
    *q = 0;
}

void g() {
    f(NULL, NULL);
}