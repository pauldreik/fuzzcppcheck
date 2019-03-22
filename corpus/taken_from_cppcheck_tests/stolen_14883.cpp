int a[10];
void foo()
{
    int *p = &a[0];
    for (int i = 0; i < 10; i++)
        p[i] = 0;
}