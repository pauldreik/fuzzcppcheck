template <int ui, typename T> T * foo()
{ return new T[ui]; }

void f ( )
{
    foo<3,int>();
}
