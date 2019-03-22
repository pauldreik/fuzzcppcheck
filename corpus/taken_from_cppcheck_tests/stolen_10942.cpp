template <typename T> T & foo()
{ static T temp; return temp; }

void f ( )
{
    char p = foo<char>();
}
