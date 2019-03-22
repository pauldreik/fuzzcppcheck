struct Altren
{
    explicit Altren(int _a = 0) : value(0) { }
    int value;
};
class A
{
public:
    A() { }
private:
    Altren value;
};