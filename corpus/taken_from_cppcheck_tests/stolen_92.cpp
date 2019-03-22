class Fred {
    void func1(int **res);
}
void Fred::func1(int **res)
{
    int num = 2;
    res = &num;
}