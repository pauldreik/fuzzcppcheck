int foo()
{
    int a = 5;
    int * b[a];
    b[0] = &c;
    return *b[0];
}