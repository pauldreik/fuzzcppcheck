int foo()
{
    int i;
    if (x)
    {
        struct abc abc1 = (struct abc) { .a=0, .b=0, .c=0 };
        i = 22;
    }
    else
    {
        i = 33;
    }
    return i;
}