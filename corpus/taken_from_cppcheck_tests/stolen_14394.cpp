int foo()
{
    int i;
    if (x)
        i = 22;
    else
    {
        char *y = {0};
        i = 33;
    }
    return i;
}