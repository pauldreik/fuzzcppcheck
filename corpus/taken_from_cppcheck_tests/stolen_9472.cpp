static void f() {
    int err = -ENOMEM;
    char *reg = malloc(100);
    if (err) {
        free(reg);
    }
}