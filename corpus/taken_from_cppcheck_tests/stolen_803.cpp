class Base
{
public:
virtual ~Base() {}
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