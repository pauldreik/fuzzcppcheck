static void foo(int x)
{
    Foo *p;
    if (x)
        p = new Foo;
    if (x)
        p->abcd();
}