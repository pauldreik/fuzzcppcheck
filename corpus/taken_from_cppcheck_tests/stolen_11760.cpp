class A {};
typedef A duplicate;
wchar_t foo()
{
typedef wchar_t duplicate;
duplicate b;
return b;
}
int main()
{
duplicate b;
}