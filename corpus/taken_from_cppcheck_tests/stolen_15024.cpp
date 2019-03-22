int a[10];
void foo()
{
    int b[10];
    int c[10];
    int *d;
    d = b; *d = 0;
    d = a; *d = 0;
    d = c; *d = 0;
}