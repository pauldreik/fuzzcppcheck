class X { };
typedef X (*foofunc)(const X&);
int main()
{
    foofunc *Foo = new foofunc[2];
}