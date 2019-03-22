void foo()
{
    int y = 1;
    switch (a)
    {
    case 2:
        (void)y;
    case 3:
        --y;
    }
    bar(y);
}