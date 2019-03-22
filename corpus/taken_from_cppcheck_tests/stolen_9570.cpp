class A
{
public:
    void a();
    void doNothing() { }
};

void A::a()
{
    int* c = new int(1);
    delete c;
    doNothing(c);
}