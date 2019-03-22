void f1()
{
    void (*f)() = cond ? f1 : NULL;
}