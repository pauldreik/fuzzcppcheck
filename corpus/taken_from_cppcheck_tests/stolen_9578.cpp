class A
{
private:
    int *p;
public:
    A();
    ~A();
    void cleanup();};

A::A()
{ p = new int[10]; }

A::~A()
{ }

void A::cleanup()
{ delete [] p; }