void foo()
{
    int a[10], * b = a + 10;
    int * c = b - 10;
    int d = c[0];
    f(d);
}