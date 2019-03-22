class A
{
public:
    A & operator=(const A &a) { if (&a != this) { } return *this; }
};