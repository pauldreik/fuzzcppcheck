struct B { };
struct C
{
    B * b;
    C(B * x) : b(x) { }
};
class A
{
    B *b;
    C *c;
public:
    A()
    {
       b = new B();
       c = new C(b);
    }
}