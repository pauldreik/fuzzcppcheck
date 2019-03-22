class A
{
    int *p;
public:
    A()
    { p = malloc(sizeof(int)*10); }
    ~A() { free(p); }
};