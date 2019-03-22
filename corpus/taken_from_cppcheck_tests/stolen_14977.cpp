void foo()
{
    int a;
    const char *b = (const char *)&a;
    *b = 0;
}