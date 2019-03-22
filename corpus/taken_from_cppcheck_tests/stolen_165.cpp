class Fred {
    char *foo();
};
char *Fred::foo()
{
    char str[100] = {0};
    return str;
}