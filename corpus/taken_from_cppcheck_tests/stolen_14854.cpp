void foo()
{
    int a = 0;
    int b[10];
    for (int i=0;i<10;++i)
        b[i] = ++a;
}