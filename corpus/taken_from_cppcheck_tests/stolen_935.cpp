class A
{
public:
    char *s;
    A & operator=(const A &a);
};
A & A::operator=(const A &a)
{
    if(!(&a==this))
    {
        free(s);
        s = strdup(a.s);
    }
    return *this;
};