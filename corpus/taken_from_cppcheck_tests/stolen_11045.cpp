template <class T, int n1=3, int n2=2>
class A
{ T ar[n1+n2]; };

void f()
{
    A<int> a1;
    A<int,3> a2;
}
