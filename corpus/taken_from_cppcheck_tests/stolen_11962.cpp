class A
{
public:
 using duplicate = wchar_t;
 void foo() {}
};
using duplicate = A;
int main()
{
 duplicate a;
 a.foo();
 A::duplicate c = 0;
}