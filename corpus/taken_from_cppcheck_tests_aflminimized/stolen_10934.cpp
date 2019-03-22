template <int x, int y, int z>
class A : public B<x, y, (x - y) ? ((y < z) ? 1 : -1) : 0>
{ };

void f()
{
    A<12,12,11> a;
}
