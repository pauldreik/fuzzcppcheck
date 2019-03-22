class A
{
    virtual void pure()=0;
    A(const A & a);
};
A::A(const A & a)
{a.pure();}
