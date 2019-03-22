void f()
{
    char *p; p = 0;
    if (x < 100) {
        p = malloc(10);
        free(p);
    }
    free(p);
}