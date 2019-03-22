struct TEST
{
    char a[10][5];
};
void foo()
{
    TEST test;
    test.a[9][5] = 4;
    test.a[0][50] = 4;
    TEST *ptest;
    ptest = &test;
    ptest->a[9][5] = 4;
    ptest->a[0][50] = 4;
}