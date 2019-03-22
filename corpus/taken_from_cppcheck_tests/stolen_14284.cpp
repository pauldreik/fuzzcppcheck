void a()
{
    char x[10], y[10];
    char *z = x;
    memset(z, 0, sizeof(x));
    memcpy(y, x, sizeof(x));
}