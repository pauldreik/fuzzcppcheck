class A
{
public:
    A(int i);
    ~A();
private:
    char* pkt_buffer;
};

A::A(int i)
{
    pkt_buffer = new char[8192];
    if (i != 1) {
        delete pkt_buffer;
        pkt_buffer = 0;
    }
}

A::~A() {
    delete [] pkt_buffer;
}