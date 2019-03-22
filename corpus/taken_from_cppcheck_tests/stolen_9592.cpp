class A
{
    int *p;
public:
    A();
    ~A() { free(p); }
};
A::A()
{ p = malloc(sizeof(int)*10); }