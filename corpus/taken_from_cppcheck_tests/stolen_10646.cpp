class A{
public:A(int a=0){_a = a;}
A operator+(const A & a){return A(_a+a._a);}
private:int _a;};
const A& getA(){static A a;return a;}
int main()
{
    const A a = getA() + 1;
    return 0;
}