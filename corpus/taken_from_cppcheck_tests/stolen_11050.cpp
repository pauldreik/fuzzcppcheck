template <class, int = 3> class A;
template <class T, int n>
class A
{ T ar[n]; };

void f()
{
    A<int,2> a1;
    A<int> a2;
}
