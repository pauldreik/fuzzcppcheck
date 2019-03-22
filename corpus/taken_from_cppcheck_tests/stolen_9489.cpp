void f(char **p) {
    if ((*p = malloc(4)) == NULL)
        return;
}