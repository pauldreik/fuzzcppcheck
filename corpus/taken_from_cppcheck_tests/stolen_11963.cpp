class A;
using duplicate = A;
class A
{
public:
using duplicate = wchar_t;
duplicate foo() { wchar_t b; return b; }
};