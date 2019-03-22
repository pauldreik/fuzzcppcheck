void f()
{
    char buf[10];
    for (int i = 0; i < 100; i++)
    {
        if (i < 10)
            int x = buf[i];
    }
}