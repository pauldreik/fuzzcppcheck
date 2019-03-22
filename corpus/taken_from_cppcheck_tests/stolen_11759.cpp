class A;
typedef A duplicate;
class A
{
public:
typedef wchar_t duplicate;
duplicate foo() { wchar_t b; return b; }
};