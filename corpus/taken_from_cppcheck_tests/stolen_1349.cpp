class A
{
    virtual void pureWithBody()=0;
    A();
};
A::A()
{pureWithBody();}
void A::pureWithBody()
{}
