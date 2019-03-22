int a[10];
void foo()
{
    int *b = &a[0];
    a[0] = b[0];
}