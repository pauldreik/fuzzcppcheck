class A
{
public:
    A();
    int* f(int*);
};

A::A()
{
}

int* A::f(int* p)
{
    return p;
}