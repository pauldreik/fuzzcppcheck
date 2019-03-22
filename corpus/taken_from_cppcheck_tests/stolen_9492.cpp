void f() {
    char *p = 0;
    switch (x) {
    case 123: p = malloc(100); break;
    default: return;
    }
    free(p);
}