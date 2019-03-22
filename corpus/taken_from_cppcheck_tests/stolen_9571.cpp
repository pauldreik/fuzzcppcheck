class A
{
public:
    void a()
    {
        int* c = new int(1);
        delete c;
        doNothing(c);
    }
    void doNothing() { }
};