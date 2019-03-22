class A{public:A(){}};
const A& getA(){static A a;return a;}
int main()
{
    const A a(getA());
    return 0;
}