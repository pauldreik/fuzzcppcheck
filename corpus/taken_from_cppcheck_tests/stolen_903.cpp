class A
{
public:
    char *s;
    A & operator=(const A &a)
    {
        free(s);
        s = strdup(a.s);
        return *this;
    }
};