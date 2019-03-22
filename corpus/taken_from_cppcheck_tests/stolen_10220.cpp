void foo(int a)
{
    int y = 1;
    switch (a)
    {
    case 2:
        y |= 3;
    case 3:
        y |= 3;
        break;
    }
}