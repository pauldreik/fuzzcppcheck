class A
{
public:
    char *s;
    A & operator=(const A &a);
};
A & A::operator=(const A &a)
{
    if(false==(this==&a))
    {
        free(s);
        s = strdup(a.s);
    }
    return *this;
};