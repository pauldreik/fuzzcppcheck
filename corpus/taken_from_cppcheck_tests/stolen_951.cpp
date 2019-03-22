struct A
{
};
void f()
{
    struct A a;
    memset(&a, 0, sizeof(A));
}