class A
 {
    virtual void pure()=0;
    void nonpure(bool bCallPure)
    { if (!bCallPure) ; else pure();}
    A(); 
};
A::A()
{nonpure(false);}
