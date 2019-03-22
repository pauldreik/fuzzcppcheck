struct ABC
{
    char str[5];
};

static void f(struct ABC &abc)
{
    strcpy( abc.str, "abcdef" );
}