typedef int A;
class S
{
public:
    typedef float A;
    A a;
    virtual void fun(A x);
};
void S::fun(S::A) { };
class S1 : public S
{
public:
    void fun(S::A) { }
};
struct T
{
    typedef A B;
    B b;
};
float fun1(float A) { return A; }
float fun2(float a) { float A = a++; return A; }
float fun3(int a)
{
    typedef struct { int a; } A;
    A s; s.a = a;
    return s.a;
}
int main()
{
    A a = 0;
    S::A s = fun1(a) + fun2(a) - fun3(a);
    return a + s;
}