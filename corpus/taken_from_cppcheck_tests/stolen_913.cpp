class A
{
public:
    class B
    {
    public:
        B & operator=(const B &);
    };
};
A::B & A::B::operator=(const A::B &b) { if (&b != this) { } return *this; }