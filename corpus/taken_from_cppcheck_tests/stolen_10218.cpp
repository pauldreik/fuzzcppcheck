void foo()
{
    int y = 1;
    switch (x)
    {
    case 2:
        y++;
        bar();
    case 3:
        y = 3;
    }
    bar(y);
}