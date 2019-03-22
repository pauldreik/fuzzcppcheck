void foo()
{
    int *b = a;
    int *c = b;
    *c = b[0];
}