class A {};
using duplicate = A;
wchar_t foo()
{
using duplicate = wchar_t;
duplicate b;
return b;
}
int main()
{
duplicate b;
}