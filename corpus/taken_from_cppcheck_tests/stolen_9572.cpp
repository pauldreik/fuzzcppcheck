class A
{
public:
    int * p;
    A();
    ~A();
};

A::A()
{ p = new int; }

A::~A()
{ delete (p); }