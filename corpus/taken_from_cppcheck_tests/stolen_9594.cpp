class A
{
    int *a;
    int *b;
public:
    A() { a = b = new int[10]; }
    ~A() { delete [] a; }
};