void foo()
{
    int x = a;
    int y = 1;
    switch (x)
    {
    case 2:
        x = 2;
    case 3:
        y = 3;
    }
    bar(y);
}