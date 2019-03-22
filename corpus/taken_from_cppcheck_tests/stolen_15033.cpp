char foo()
{
    char buf[8];
    char *p = &buf[0];
    *++p = 0;
    return buf[0];
}