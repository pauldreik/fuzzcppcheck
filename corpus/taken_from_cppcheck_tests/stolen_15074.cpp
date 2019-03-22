int * foo(int x)
{
    static int a[] = { 3, 4, 5, 6 };
    static int b[] = { 4, 5, 6, 7 };
    static int c[] = { 5, 6, 7, 8 };
    b[1] = 1;
    return x ? a : c;
}