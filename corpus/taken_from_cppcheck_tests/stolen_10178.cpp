void foo()
{
    int y = 1;
    switch (a)
    {
    case 2:
        y = 2;
    case 3:
        if (x)
        {
            y = 3;
        }
    }
    bar(y);
}