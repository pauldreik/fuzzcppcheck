class A
{
public:
    int * p;
    A();
};
A::A() : p(new int[10])
{ }