int foo(int x)
{
    int i;
    if (one())
        i = 1;
    else
        return 3;
    return i;
}