struct foo
{
    char str[10];
};

void x()
{
    foo f;
    for ( unsigned int i = 0; i < 64; ++i )
        f.str[i] = 0;
}