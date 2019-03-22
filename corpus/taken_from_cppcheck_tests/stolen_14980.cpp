void foo()
{
    int a;
    const char *b = static_cast<const char *>(&a);
    *b = 0;
}