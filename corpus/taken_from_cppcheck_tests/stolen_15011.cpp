void foo()
{
    int a[10], * b = a + 10;
    b[-10] = 0;
    int * c = b - 10;
}