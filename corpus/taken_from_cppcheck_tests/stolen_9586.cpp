class A
{
    int *p;
public:
    void init();
};

void A::init()
{ p = malloc(sizeof(int)*10); }