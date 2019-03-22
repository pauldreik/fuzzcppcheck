void foo(int x, int y)
{
    const char *p[2];
    const char *s = y + p[1];
    p[1] = 0;
}