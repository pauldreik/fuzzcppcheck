struct AB
{
    int a;
    int b;
};

void foo(char *buf)
{
    struct AB *ab = (AB *)&buf[10];
}