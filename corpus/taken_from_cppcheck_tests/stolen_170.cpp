char *foo()
{
    static char q[] = "AAAAAAAAAAAA";
    return &q[1];
}