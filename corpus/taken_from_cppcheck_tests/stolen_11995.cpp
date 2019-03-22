class Foo
{
    int bar() { return 1; };
    int bar() const { return 1; };
}
Foo f;int a=sizeof(f.bar());