struct ABC
{
    char str[10];
};

static void f()
{
    struct ABC abc;
    abc.str[10] = 0;
}