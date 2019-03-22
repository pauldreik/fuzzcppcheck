class A
{
protected:
    ~A() { }
};

class B : public A
{
public:
    ~B() { int a; }
};