void foo()
{
    int x = a;
    int y = 1;
    switch (x)
    {
    case 2:
        x++;
    case 3:
        y++;
    }
    bar(y);
}