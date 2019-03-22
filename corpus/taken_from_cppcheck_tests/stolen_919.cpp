class A : public B, public C
{
public:
    A & operator=(const A &);
};
A & A::operator=(const A &a) { return *this; }