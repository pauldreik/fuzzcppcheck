class A
{
public:
    class B : public C, public D
    {
    public:
        B & operator=(const B &b) { return *this; }
    };
};