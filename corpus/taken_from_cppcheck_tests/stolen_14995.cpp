int a[10];
void foo()
{
    int *b = a;
    int *c = b;
    *c = 0;
}