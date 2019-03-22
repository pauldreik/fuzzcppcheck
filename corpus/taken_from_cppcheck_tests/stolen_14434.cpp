int a()
{
    int x;
    switch (foo(&x))
    {
        case 1:
            return x;
    }
}