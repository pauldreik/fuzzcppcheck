class A
{
    virtual int pure()=0;
    A();
    int m;
};
A::A():m(A::pure())
{}
