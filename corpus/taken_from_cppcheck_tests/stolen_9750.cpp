void foo(int *p)
{
    if (x)
        p = 0;
    else
        *p = 0;
    if (!p)
        ;
}