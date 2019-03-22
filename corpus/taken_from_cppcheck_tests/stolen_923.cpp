class A
{
public:
    class B : public C, public D
    {
    public:
        B & operator=(const B &);
    };
};
A::B & A::B::operator=(const A::B &b) { return *this; }