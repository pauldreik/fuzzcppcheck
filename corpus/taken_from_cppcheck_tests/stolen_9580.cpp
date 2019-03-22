class A
{
private:
    int *p;
public:
    A();
    ~A();
    void foo();};

A::A()
{ }

A::~A()
{ }

void A::foo()
{ p = new int[10]; delete [] p; }