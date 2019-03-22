struct AB
{
    int a;
    int b;
};

void foo(char *buf)
{
    struct AB *ab = (struct AB *)&buf[10];
}