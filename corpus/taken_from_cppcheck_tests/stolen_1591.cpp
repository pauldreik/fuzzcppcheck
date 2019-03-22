class Foo {
    char a[10];
public:
    Foo() { ::ZeroMemory(a); }
}