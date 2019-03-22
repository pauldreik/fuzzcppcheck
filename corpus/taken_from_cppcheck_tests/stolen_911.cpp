class A
{
public:
    class B
    {
    public:
        char *s;
        B & operator=(const B &b)
        {
            if (&b != this)
            {
            }
            return *this;
        }
    };
};