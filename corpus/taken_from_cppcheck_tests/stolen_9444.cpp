void foo(int y)
{
    char * x; x = NULL;
    while (isRunning()) {
        x = malloc(100);
        free(x);
    }
    free(x);
}