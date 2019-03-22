struct B * foo()
{
    int a = 5;
    struct B * b[a];
    b[0] = &c;
    return b[0];
}