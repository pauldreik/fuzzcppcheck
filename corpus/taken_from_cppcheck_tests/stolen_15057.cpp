void foo(Foo &foo)
{
    Foo &ref = foo;
    int *x = &ref.x;
    *x = 0;
}