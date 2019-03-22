void f()
{
    int i[2];
    int *ip = i + 1;
    ip[-10] = 1;
}