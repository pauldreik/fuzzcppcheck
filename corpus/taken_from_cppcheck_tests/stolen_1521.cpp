class Foo : public Bar
{
public:
    explicit Foo(int i) : Bar{mi=i} { }
private:
    int mi;
};