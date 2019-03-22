void foo(int **p)
{
    static int x[100];
    *p = x;
}