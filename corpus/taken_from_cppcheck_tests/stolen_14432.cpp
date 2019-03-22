char * f()
{
    static char ret[200];
    memset(ret, 0, 200);
    switch (x)
    {
        case 1: return ret;
        case 2: return ret;
    }
    return 0;
}