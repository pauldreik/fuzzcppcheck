class Fred {
    void func1(int* arr[2]);
}
void Fred::func1(int* arr[2])
{
    int num=2;    arr[0]=&num;
}