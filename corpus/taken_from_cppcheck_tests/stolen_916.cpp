class A
{
public:
    class B
    {
    public:
        char * s;
        B & operator=(const B &);
    };
};
A::B & A::B::operator=(const A::B &b)
{
    free(s);
    s = strdup(b.s);
    return *this;
 }