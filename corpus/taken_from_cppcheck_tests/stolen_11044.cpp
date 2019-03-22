template <class T, int n=3>
class A
{ T ar[n]; };

void f()
{
    A<int,2> a1;
    A<int> a2;
}
