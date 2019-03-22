void foo()
{
    int a[10];
    const char *b = static_cast<const char *>(a);
    *b = 0;
}