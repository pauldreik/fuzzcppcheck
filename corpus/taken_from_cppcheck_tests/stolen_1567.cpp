class Foo
{
private:
    int foo;
public:
    explicit Foo(std::istream &in)
    {
        if(!(in >> foo))
            throw 0;
    }
};