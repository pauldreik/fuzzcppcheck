class A : public B, public C
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