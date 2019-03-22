class Foo
{
public:
    Foo();
    static const char STR[];
};
const char Foo::STR[] = "abc";
Foo::Foo() { }