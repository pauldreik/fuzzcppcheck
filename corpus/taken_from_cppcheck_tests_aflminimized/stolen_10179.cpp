void foo()
{
    int y = 1;
    switch (a)
    {
    case 2:
      {
        y = 2;
        if (z)
            printf("%d", y);
      }
    case 3:
        y = 3;
    }
    bar(y);
}