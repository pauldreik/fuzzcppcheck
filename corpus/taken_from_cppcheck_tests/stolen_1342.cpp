class A
 {
    virtual void pure()=0; 
    void nonpure()
    {pure();}
    virtual ~A();
    int m;
};
A::~A()
{nonpure();}
