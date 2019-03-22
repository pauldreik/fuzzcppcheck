class A
{
public:
    class B : public C, public D
    {
    public:
        char * s;
        B & operator=(const B &b)
        {
            free(s);
            s = strdup(b.s);
            return *this;
        }
    };
};