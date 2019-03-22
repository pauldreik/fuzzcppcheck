int a[10];
void foo()
{
    int b[10];
    int c[10];
    int *d;
    d = b;
    d = a;
    d = c;
    *d = 0;
}