struct Base
{
virtual ~Base() {}
};
class A : public Base
{
};

class B : public A
{
public:
    ~B() { int a; }
};