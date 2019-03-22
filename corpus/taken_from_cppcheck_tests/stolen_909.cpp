class A
{
public:
    class B
    {
    public:
        B & operator=(const B &b) { if (&b != this) { } return *this; }
    };
};