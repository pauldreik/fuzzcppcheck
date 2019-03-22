void foo()
{
    int a[10];
    int b[10];
    int *c = a;
    c = b;
    *c = 0;
}