struct ABC
{
    int a;
    int b;
    int c;
};

void foo()
{
    struct ABC abc;
    int a = abc.a;
    int b = abc.b;
    int c = abc.c;
}