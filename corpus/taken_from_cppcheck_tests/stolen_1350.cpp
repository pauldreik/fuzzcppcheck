class A
 {
    virtual void pureWithBody()=0;
    void nonpure()
    {pureWithBody();}
    A(); 
};
A::A()
{nonpure();}
void A::pureWithBody()
{}
