void foo(int *p)
{
    int var1 = p ? *p : 0;
    if (!p)
        ;
}