void foo()
{
    int a[10];
    const char *b = (const char *)a;
    *b = 0;
}