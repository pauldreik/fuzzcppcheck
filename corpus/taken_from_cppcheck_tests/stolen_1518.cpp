class Foo
{
public:
    Foo() { bar.x = 0; }
private:
    struct Bar {
        int x;
    };
    struct Bar bar;
};