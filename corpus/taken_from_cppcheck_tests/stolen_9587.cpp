class A
{
    int *p;
public:
    void init()
    { p = malloc(sizeof(int)*10); }
};