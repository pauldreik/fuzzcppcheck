struct AB
{
    int a;
    int b;
};

void foo(char *ab)
{
    ((AB *)ab)->b = 0;
}