template <int ui, typename T> T * foo()
{ return new T[ui]; }

void f ( )
{
    char * p = foo<3,char>();
}
