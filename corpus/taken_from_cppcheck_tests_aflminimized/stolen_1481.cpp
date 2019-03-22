class Foo {
public:
    explicit Foo(const Bar bar);
    Foo(const std::string& id);
    virtual ~RtpSession() { }
protected:
    bool a;
    uint16_t b;
};

Foo::Foo(const Bar var)
    : Foo(bar->getId())
{
}

Foo::Foo(const std::string& id)
    : a(true)
    , b(0)
{
}