class A
 {
    virtual void pure()=0; 
    virtual ~A(); 
    int m; 
};
A::~A()
{pure();}
