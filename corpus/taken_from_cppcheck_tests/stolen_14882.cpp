int a[10];
void foo()
{
    int *p = a;
    for (int i = 0; i < 10; i++)
        p[i] = 0;
}