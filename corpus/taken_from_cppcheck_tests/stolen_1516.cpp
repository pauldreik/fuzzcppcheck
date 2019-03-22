class Foo
{
public:
    Foo() { }
private:
    struct Bar {
        Bar();
    };
    Bar bars[2];
};