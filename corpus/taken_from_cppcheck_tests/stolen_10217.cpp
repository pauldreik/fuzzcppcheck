void foo()
{
    int y = 1;
    switch (x)
    {
    case 2:
        y++;
        printf("%d", y);
    case 3:
        y = 3;
    }
    bar(y);
}