class A
{ std::vector< std::vector<int> > ints; };

void f()
{
    A a;
    memset(&a, 0, sizeof(A));
}