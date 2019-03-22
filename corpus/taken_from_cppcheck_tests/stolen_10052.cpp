void foo()
{
    int i;
    int *p = 0;
    if (abc)
    {
        p = &i;
    }
    *p = 1;
}