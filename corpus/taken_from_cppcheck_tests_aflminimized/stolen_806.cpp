class Base2
{
virtual ~Base2() {}
};
class Base : public Base2
{
};
class A : private Base
{
public:
    ~A() { }
};

class B : public A
{
public:
    ~B() { int a; }
};