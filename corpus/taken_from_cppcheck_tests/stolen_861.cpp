class A
{
public:
    A & operator=(const A &a);
};
A & A::operator=(const A &a) { return *this; }