struct TEST
{
    char a[10];
    char b[10][5];
};
void foo()
{
    TEST test;
    test.a[10] = 3;
    test.b[10][2] = 4;
    test.b[0][19] = 4;
    TEST *ptest;
    ptest = &test;
    ptest->a[10] = 3;
    ptest->b[10][2] = 4;
    ptest->b[0][19] = 4;
}