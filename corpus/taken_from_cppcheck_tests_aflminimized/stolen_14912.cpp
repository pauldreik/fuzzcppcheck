int foo(int u, int v)
{
    int h, i;
    h = 0 ? u : v;
    i = 1 ? u : v;
    return h + i;
}