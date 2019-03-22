void f()
{
    char *c = 0;
    {
        delete c;
    }
    c[0] = 0;
}