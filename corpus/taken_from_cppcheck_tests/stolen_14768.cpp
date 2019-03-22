struct AB
{
    int a;
    int b;
};

void foo(struct AB _shuge *ab)
{
    ab->a = 0;
}