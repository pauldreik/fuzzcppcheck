int foo(int c)
{
    int a;
    int b[10];
    a = b[c] = 0;
    return a;
}