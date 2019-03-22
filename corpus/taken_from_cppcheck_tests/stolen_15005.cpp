class A
{
    int a[10];
    void foo()
    {
        int *b = a;
        *b = 0;
    }
}