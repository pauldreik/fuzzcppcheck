int * foo()
{
    int a = 5;
    const int * b[a];
    b[0] = &c;
    return b[0];
}