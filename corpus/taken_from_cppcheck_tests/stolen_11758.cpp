class A
{
public:
 typedef wchar_t duplicate;
 void foo() {}
};
typedef A duplicate;
int main()
{
 duplicate a;
 a.foo();
 A::duplicate c = 0;
}