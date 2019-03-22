class Fred {
    int* func1();
}
int* Fred::func1()
{
    int num=2;    return &num;}